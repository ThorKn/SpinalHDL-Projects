
#include <stdint.h>
#include <string>
#include <jni.h>

#include "VUartFsmInOut.h"
#ifdef TRACE
#include "verilated_vcd_c.h"
#endif
#include "VUartFsmInOut__Syms.h"
class ISignalAccess{
public:
  virtual ~ISignalAccess() {}

  virtual void getAU8(JNIEnv *env, jbyteArray value) {}
  virtual void setAU8(JNIEnv *env, jbyteArray value, int length) {}

  virtual uint64_t getU64() = 0;
  virtual void setU64(uint64_t value) = 0;
};

class  CDataSignalAccess : public ISignalAccess{
public:
    CData *raw;
    CDataSignalAccess(CData *raw) : raw(raw){

    }
    uint64_t getU64() {return *raw;}
    void setU64(uint64_t value)  {*raw = value; }
};


class  SDataSignalAccess : public ISignalAccess{
public:
    SData *raw;
    SDataSignalAccess(SData *raw) : raw(raw){

    }
    uint64_t getU64() {return *raw;}
    void setU64(uint64_t value)  {*raw = value; }
};


class  IDataSignalAccess : public ISignalAccess{
public:
    IData *raw;
    IDataSignalAccess(IData *raw) : raw(raw){

    }
    uint64_t getU64() {return *raw;}
    void setU64(uint64_t value)  {*raw = value; }
};


class  QDataSignalAccess : public ISignalAccess{
public:
    QData *raw;
    QDataSignalAccess(QData *raw) : raw(raw){

    }
    uint64_t getU64() {return *raw;}
    void setU64(uint64_t value)  {*raw = value; }
};



class  WDataSignalAccess : public ISignalAccess{
public:
    WData *raw;
    uint32_t width;
    bool sint;

    WDataSignalAccess(WData *raw, uint32_t width, bool sint) : raw(raw), width(width), sint(sint){

    }

    uint64_t getU64() {return raw[0] + (((uint64_t)raw[1]) << 32);}
    void setU64(uint64_t value)  {
      uint32_t wordsCount = (width+31)/32;
      raw[0] = value;
      raw[1] = value >> 32;
      uint32_t padding = ((value & 0x8000000000000000l) && sint) ? 0xFFFFFFFF : 0;
      for(uint32_t idx = 2;idx < wordsCount;idx++){
        raw[idx] = padding;
      }

      if(width%32 != 0) raw[wordsCount-1] &= (1l << width%32)-1;
    }

    void getAU8(JNIEnv *env, jbyteArray value) {
      uint32_t wordsCount = (width+31)/32;
      uint32_t byteCount = wordsCount*4;
      uint32_t shift = 32-(width % 32);
      uint32_t backup = raw[wordsCount-1];
      uint8_t values[byteCount + !sint];
      if(sint && shift != 32) raw[wordsCount-1] = (((int32_t)backup) << shift) >> shift;
      for(uint32_t idx = 0;idx < byteCount;idx++){
        values[idx + !sint] = ((uint8_t*)raw)[byteCount-idx-1];
      }
      (env)->SetByteArrayRegion ( value, 0, byteCount + !sint, reinterpret_cast<jbyte*>(values));
      raw[wordsCount-1] = backup;
    }

    void setAU8(JNIEnv *env, jbyteArray jvalue, int length) {
      jbyte value[length];
      (env)->GetByteArrayRegion( jvalue, 0, length, value);
      uint32_t wordsCount = (width+31)/32;
      uint32_t padding = (value[0] & 0x80 && sint) != 0 ? 0xFFFFFFFF : 0;
      for(uint32_t idx = 0;idx < wordsCount;idx++){
        raw[idx] = padding;
      }
      uint32_t capedLength = length > 4*wordsCount ? 4*wordsCount : length;
      for(uint32_t idx = 0;idx < capedLength;idx++){
        ((uint8_t*)raw)[idx] = value[length-idx-1];
      }
      if(width%32 != 0) raw[wordsCount-1] &= (1l << width%32)-1;
    }
};

class Wrapper_1{
public:
    uint64_t time;
    VUartFsmInOut top;
    ISignalAccess *signalAccess[4];
    #ifdef TRACE
	  VerilatedVcdC tfp;
	  #endif

    Wrapper_1(const char * name){
      time = 0;
      signalAccess[0] = new CDataSignalAccess(&(top.io_uart_txd));
      signalAccess[1] = new CDataSignalAccess(&(top.io_uart_rxd));
      signalAccess[2] = new CDataSignalAccess(&(top.clk));
      signalAccess[3] = new CDataSignalAccess(&(top.reset));

      #ifdef TRACE
      Verilated::traceEverOn(true);
      top.trace(&tfp, 99);
      tfp.open((std::string("/home/moss/Documents/vdfs-in-hardware/implementations/ulx3s_projects/0_uart_fsm_in_out/spinalHDL/./simWorkspace/UartFsmInOut/") + name + ".vcd").c_str());
      #endif
    }

    virtual ~Wrapper_1(){
      for(int idx = 0;idx < 4;idx++){
          delete signalAccess[idx];
      }

      #ifdef TRACE
      tfp.dump((vluint64_t)time);
      tfp.close();
      #endif
    }

};


#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdint.h>

#define API __attribute__((visibility("default")))


JNIEXPORT Wrapper_1 * API JNICALL Java_wrapper_1verilator_VerilatorNative_newHandle_11
  (JNIEnv * env, jobject obj, jstring name, jint seedValue){
    #if defined(_WIN32) && !defined(__CYGWIN__)
    srand(seedValue);
    #else
    srand48(seedValue);
    #endif
    Verilated::randReset(2);
    const char* ch = env->GetStringUTFChars(name, 0);
    Wrapper_1 *handle = new Wrapper_1(ch);
    env->ReleaseStringUTFChars(name, ch);
    return handle;
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_eval_11
  (JNIEnv *, jobject, Wrapper_1 *handle){
   handle->top.eval();
}


JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_sleep_11
  (JNIEnv *, jobject, Wrapper_1 *handle, uint64_t cycles){
  #ifdef TRACE
  handle->tfp.dump((vluint64_t)handle->time);
  #endif
  handle->time += cycles;
}

JNIEXPORT jlong API JNICALL Java_wrapper_1verilator_VerilatorNative_getU64_11
  (JNIEnv *, jobject, Wrapper_1 *handle, int id){
  return handle->signalAccess[id]->getU64();
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setU64_11
  (JNIEnv *, jobject, Wrapper_1 *handle, int id, uint64_t value){
  handle->signalAccess[id]->setU64(value);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_deleteHandle_11
  (JNIEnv *, jobject, Wrapper_1 * handle){
  delete handle;
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_getAU8_11
  (JNIEnv * env, jobject obj, Wrapper_1 * handle, jint id, jbyteArray value){
  handle->signalAccess[id]->getAU8(env, value);
}



JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setAU8_11
  (JNIEnv * env, jobject obj, Wrapper_1 * handle, jint id, jbyteArray value, jint length){
  handle->signalAccess[id]->setAU8(env, value, length);
}



#ifdef __cplusplus
}
#endif
     