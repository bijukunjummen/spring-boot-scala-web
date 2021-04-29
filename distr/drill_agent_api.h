#ifndef KONAN_DRILL_AGENT_H
#define KONAN_DRILL_AGENT_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            drill_agent_KBoolean;
#else
typedef _Bool           drill_agent_KBoolean;
#endif
typedef unsigned short     drill_agent_KChar;
typedef signed char        drill_agent_KByte;
typedef short              drill_agent_KShort;
typedef int                drill_agent_KInt;
typedef long long          drill_agent_KLong;
typedef unsigned char      drill_agent_KUByte;
typedef unsigned short     drill_agent_KUShort;
typedef unsigned int       drill_agent_KUInt;
typedef unsigned long long drill_agent_KULong;
typedef float              drill_agent_KFloat;
typedef double             drill_agent_KDouble;
#ifndef _MSC_VER
typedef float __attribute__ ((__vector_size__ (16))) drill_agent_KVector128;
#else
#include <xmmintrin.h>
typedef __m128 drill_agent_KVector128;
#endif
typedef void*              drill_agent_KNativePtr;
struct drill_agent_KType;
typedef struct drill_agent_KType drill_agent_KType;

typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Byte;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Short;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Int;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Long;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Float;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Double;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Char;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Boolean;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Unit;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_common_AgentType;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_Config;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_State;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_collections_List;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_JavaProcess;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_collections_Map;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Function1;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_collections_Iterable;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_AgentArguments;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlinx_serialization_internal_SerializationConstructorMarker;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Any;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_AgentArguments_$serializer;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlinx_serialization_descriptors_SerialDescriptor;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_Array;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlinx_serialization_encoding_Decoder;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlinx_serialization_encoding_Encoder;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_AgentArguments_Companion;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlinx_serialization_KSerializer;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_DataService;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_ByteArray;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_DataServiceStub;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_Gaps;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_collections_MutableList;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlin_time_TimeMark;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSource;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSourceStub;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformer;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformerStub;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformer;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformerStub;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformer;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformerStub;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_instrument_Transformer;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_instrument_TransformerStub;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_agent_serialization_SimpleMapDecoder;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlinx_serialization_modules_SerializersModule;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_plugin_DrillRequest;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_kotlinx_cinterop_CValuesRef;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_request_RequestHolder;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_core_Agent;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_common_PluginMetadata;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_plugin_api_processing_UnloadReason;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_core_plugin_loader_InstrumentationNativePlugin;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_logger_NativeApiStub;
typedef struct {
  drill_agent_KNativePtr pinned;
} drill_agent_kref_com_epam_drill_request_RequestHolderStub;

extern void Java_com_epam_drill_agent_classloading_WebContainerSource_webAppStarted(void* env, void* thiz, void* arg1);
extern void* Java_com_epam_drill_agent_instrument_TomcatTransformer_idHeaderConfigKey(void* env, void* thiz);
extern void* Java_com_epam_drill_agent_instrument_TomcatTransformer_idHeaderConfigValue(void* env, void* thiz);
extern void* Java_com_epam_drill_agent_instrument_TomcatTransformer_retrieveAdminAddress(void* env, void* thiz);
extern void* JNIEn();
extern void* JNIFun();
extern void* currentThread();
extern void disableJvmtiEventBreakpoint(void* thread);
extern void disableJvmtiEventClassFileLoadHook(void* thread);
extern void disableJvmtiEventClassLoad(void* thread);
extern void disableJvmtiEventClassPrepare(void* thread);
extern void disableJvmtiEventCompiledMethodLoad(void* thread);
extern void disableJvmtiEventCompiledMethodUnload(void* thread);
extern void disableJvmtiEventDataDumpRequest(void* thread);
extern void disableJvmtiEventDynamicCodeGenerated(void* thread);
extern void disableJvmtiEventException(void* thread);
extern void disableJvmtiEventExceptionCatch(void* thread);
extern void disableJvmtiEventFieldAccess(void* thread);
extern void disableJvmtiEventFieldModification(void* thread);
extern void disableJvmtiEventFramePop(void* thread);
extern void disableJvmtiEventGarbageCollectionFinish(void* thread);
extern void disableJvmtiEventGarbageCollectionStart(void* thread);
extern void disableJvmtiEventMethodEntry(void* thread);
extern void disableJvmtiEventMethodExit(void* thread);
extern void disableJvmtiEventMonitorContendedEnter(void* thread);
extern void disableJvmtiEventMonitorContendedEntered(void* thread);
extern void disableJvmtiEventMonitorWait(void* thread);
extern void disableJvmtiEventMonitorWaited(void* thread);
extern void disableJvmtiEventNativeMethodBind(void* thread);
extern void disableJvmtiEventObjectFree(void* thread);
extern void disableJvmtiEventResourceExhausted(void* thread);
extern void disableJvmtiEventSingleStep(void* thread);
extern void disableJvmtiEventThreadEnd(void* thread);
extern void disableJvmtiEventThreadStart(void* thread);
extern void disableJvmtiEventVmDeath(void* thread);
extern void disableJvmtiEventVmInit(void* thread);
extern void disableJvmtiEventVmObjectAlloc(void* thread);
extern void disableJvmtiEventVmStart(void* thread);
extern drill_agent_kref_com_epam_drill_plugin_DrillRequest drillRequest();
extern void enableJvmtiEventBreakpoint(void* thread);
extern void enableJvmtiEventClassFileLoadHook(void* thread);
extern void enableJvmtiEventClassLoad(void* thread);
extern void enableJvmtiEventClassPrepare(void* thread);
extern void enableJvmtiEventCompiledMethodLoad(void* thread);
extern void enableJvmtiEventCompiledMethodUnload(void* thread);
extern void enableJvmtiEventDataDumpRequest(void* thread);
extern void enableJvmtiEventDynamicCodeGenerated(void* thread);
extern void enableJvmtiEventException(void* thread);
extern void enableJvmtiEventExceptionCatch(void* thread);
extern void enableJvmtiEventFieldAccess(void* thread);
extern void enableJvmtiEventFieldModification(void* thread);
extern void enableJvmtiEventFramePop(void* thread);
extern void enableJvmtiEventGarbageCollectionFinish(void* thread);
extern void enableJvmtiEventGarbageCollectionStart(void* thread);
extern void enableJvmtiEventMethodEntry(void* thread);
extern void enableJvmtiEventMethodExit(void* thread);
extern void enableJvmtiEventMonitorContendedEnter(void* thread);
extern void enableJvmtiEventMonitorContendedEntered(void* thread);
extern void enableJvmtiEventMonitorWait(void* thread);
extern void enableJvmtiEventMonitorWaited(void* thread);
extern void enableJvmtiEventNativeMethodBind(void* thread);
extern void enableJvmtiEventObjectFree(void* thread);
extern void enableJvmtiEventResourceExhausted(void* thread);
extern void enableJvmtiEventSingleStep(void* thread);
extern void enableJvmtiEventThreadEnd(void* thread);
extern void enableJvmtiEventThreadStart(void* thread);
extern void enableJvmtiEventVmDeath(void* thread);
extern void enableJvmtiEventVmInit(void* thread);
extern void enableJvmtiEventVmObjectAlloc(void* thread);
extern void enableJvmtiEventVmStart(void* thread);
extern void* jvmtix();
extern void SetEventCallbacksP(drill_agent_kref_kotlinx_cinterop_CValuesRef callbacks, drill_agent_KInt size_of_callbacks);
extern void sendToSocket(const char* pluginId, const char* message);
extern void* Java_com_epam_drill_plugin_api_Native_GetAllLoadedClasses(void* env, void* thiz);
extern void JNI_CreateJavaVM();
extern void JNI_GetCreatedJavaVMs();
extern void JNI_GetDefaultJavaVMInitArgs();
extern void JNI_OnUnload();
extern drill_agent_KUInt Java_com_epam_drill_plugin_api_Native_RetransformClasses(void* env, void* thiz, drill_agent_KInt count, void* classes);
extern drill_agent_KInt Java_com_epam_drill_plugin_api_Native_RetransformClassesByPackagePrefixes(void* env, void* thiz, void* prefixes);
extern drill_agent_KInt Agent_OnLoad(void* vmPointer, const char* options, drill_agent_KLong reservedPtr);
extern void Agent_OnUnload(void* vmPointer);
extern drill_agent_KUInt checkEx(drill_agent_KUInt errCode, const char* funName);
extern void* currentEnvs();
extern void* getJvm();
extern void* jvmtii();
extern void Java_com_epam_drill_plugin_PluginSender_send(void* envs, void* thiz, void* jpluginId, void* jmessage);
extern drill_agent_KInt Java_com_epam_drill_logger_NativeApi_getLogLevel(void* env, void* thiz);
extern void Java_com_epam_drill_logger_NativeApi_output(void* env, void* thiz, void* arg1);
extern void Java_com_epam_drill_logger_NativeApi_setFilename(void* env, void* thiz, void* arg1);
extern void Java_com_epam_drill_logger_NativeApi_setLogLevel(void* env, void* thiz, drill_agent_KInt arg1);

typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(drill_agent_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  drill_agent_KBoolean (*IsInstance)(drill_agent_KNativePtr ref, const drill_agent_KType* type);
  drill_agent_kref_kotlin_Byte (*createNullableByte)(drill_agent_KByte);
  drill_agent_kref_kotlin_Short (*createNullableShort)(drill_agent_KShort);
  drill_agent_kref_kotlin_Int (*createNullableInt)(drill_agent_KInt);
  drill_agent_kref_kotlin_Long (*createNullableLong)(drill_agent_KLong);
  drill_agent_kref_kotlin_Float (*createNullableFloat)(drill_agent_KFloat);
  drill_agent_kref_kotlin_Double (*createNullableDouble)(drill_agent_KDouble);
  drill_agent_kref_kotlin_Char (*createNullableChar)(drill_agent_KChar);
  drill_agent_kref_kotlin_Boolean (*createNullableBoolean)(drill_agent_KBoolean);
  drill_agent_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            drill_agent_kref_com_epam_drill_common_AgentType (*get_AGENT_TYPE)();
            const char* (*get_DRILL_PACKAGE)();
            const char* (*get_HTTP_HOOK_ENABLED)();
            const char* (*get_SYSTEM_CONFIG_PATH)();
            const char* (*get_SYSTEM_HTTP_HOOK_ENABLED)();
            const char* (*get_SYSTEM_JAVA_APP_JAR)();
            struct {
              drill_agent_kref_com_epam_drill_agent_Config (*get_config)();
              drill_agent_kref_com_epam_drill_agent_State (*get_state)();
              drill_agent_kref_kotlin_collections_List (*getProcessInfo)(drill_agent_KInt bufferSize);
              drill_agent_kref_com_epam_drill_agent_JavaProcess (*javaProcess)();
              void (*performAgentInitialization)(drill_agent_kref_kotlin_collections_Map initialParams);
              drill_agent_kref_com_epam_drill_agent_Config (*updateConfig)(drill_agent_kref_kotlin_Function1 block);
              drill_agent_kref_com_epam_drill_agent_State (*updateState)(drill_agent_kref_kotlin_Function1 block);
              drill_agent_KBoolean (*allWebAppsInitialized)(drill_agent_kref_com_epam_drill_agent_State thiz);
              drill_agent_KBoolean (*matches)(const char* thiz, drill_agent_kref_kotlin_collections_Iterable others, drill_agent_KInt thisOffset);
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_agent_AgentArguments (*AgentArguments)(drill_agent_KInt seen1, const char* agentId, const char* adminAddress, const char* drillInstallationDir, const char* buildVersion, const char* instanceId, const char* groupId, const char* logLevel, const char* logFile, drill_agent_KBoolean isWebApp, drill_agent_KBoolean isTlsApp, drill_agent_KBoolean isAsyncApp, const char* webAppNames, drill_agent_KLong classScanDelay, drill_agent_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                drill_agent_kref_com_epam_drill_agent_AgentArguments (*AgentArguments_)(const char* agentId, const char* adminAddress, const char* drillInstallationDir, const char* buildVersion, const char* instanceId, const char* groupId, const char* logLevel, const char* logFile, drill_agent_KBoolean isWebApp, drill_agent_KBoolean isTlsApp, drill_agent_KBoolean isAsyncApp, const char* webAppNames, drill_agent_KLong classScanDelay);
                const char* (*get_adminAddress)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*get_agentId)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*get_buildVersion)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                drill_agent_KLong (*get_classScanDelay)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*get_drillInstallationDir)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*get_groupId)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*get_instanceId)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                drill_agent_KBoolean (*get_isAsyncApp)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                drill_agent_KBoolean (*get_isTlsApp)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                drill_agent_KBoolean (*get_isWebApp)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*get_logFile)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*get_logLevel)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*get_webAppNames)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                drill_agent_kref_kotlin_collections_List (*get_webApps)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*component1)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                drill_agent_KBoolean (*component10)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                drill_agent_KBoolean (*component11)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*component12)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                drill_agent_KLong (*component13)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*component2)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*component3)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*component4)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*component5)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*component6)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*component7)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*component8)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                drill_agent_KBoolean (*component9)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                drill_agent_kref_com_epam_drill_agent_AgentArguments (*copy)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz, const char* agentId, const char* adminAddress, const char* drillInstallationDir, const char* buildVersion, const char* instanceId, const char* groupId, const char* logLevel, const char* logFile, drill_agent_KBoolean isWebApp, drill_agent_KBoolean isTlsApp, drill_agent_KBoolean isAsyncApp, const char* webAppNames, drill_agent_KLong classScanDelay);
                drill_agent_KBoolean (*equals)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz, drill_agent_kref_kotlin_Any other);
                drill_agent_KInt (*hashCode)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                const char* (*toString)(drill_agent_kref_com_epam_drill_agent_AgentArguments thiz);
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_AgentArguments_$serializer (*_instance)();
                  drill_agent_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(drill_agent_kref_com_epam_drill_agent_AgentArguments_$serializer thiz);
                  drill_agent_kref_kotlin_Array (*childSerializers)(drill_agent_kref_com_epam_drill_agent_AgentArguments_$serializer thiz);
                  drill_agent_kref_com_epam_drill_agent_AgentArguments (*deserialize)(drill_agent_kref_com_epam_drill_agent_AgentArguments_$serializer thiz, drill_agent_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(drill_agent_kref_com_epam_drill_agent_AgentArguments_$serializer thiz, drill_agent_kref_kotlinx_serialization_encoding_Encoder encoder, drill_agent_kref_com_epam_drill_agent_AgentArguments value);
                } $serializer;
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_AgentArguments_Companion (*_instance)();
                  drill_agent_kref_kotlinx_serialization_KSerializer (*serializer)(drill_agent_kref_com_epam_drill_agent_AgentArguments_Companion thiz);
                } Companion;
              } AgentArguments;
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_agent_Config (*Config)(drill_agent_KDouble classScanDelay, drill_agent_KBoolean isAsyncApp, drill_agent_KBoolean isWebApp, drill_agent_KBoolean isTlsApp, drill_agent_KDouble webAppLoadingTimeout, drill_agent_kref_kotlin_collections_List webApps);
                drill_agent_KDouble (*get_classScanDelay)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_KBoolean (*get_isAsyncApp)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_KBoolean (*get_isTlsApp)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_KBoolean (*get_isWebApp)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_KDouble (*get_webAppLoadingTimeout)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_kref_kotlin_collections_List (*get_webApps)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_KDouble (*component1)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_KBoolean (*component2)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_KBoolean (*component3)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_KBoolean (*component4)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_KDouble (*component5)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_kref_kotlin_collections_List (*component6)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                drill_agent_kref_com_epam_drill_agent_Config (*copy)(drill_agent_kref_com_epam_drill_agent_Config thiz, drill_agent_KDouble classScanDelay, drill_agent_KBoolean isAsyncApp, drill_agent_KBoolean isWebApp, drill_agent_KBoolean isTlsApp, drill_agent_KDouble webAppLoadingTimeout, drill_agent_kref_kotlin_collections_List webApps);
                drill_agent_KBoolean (*equals)(drill_agent_kref_com_epam_drill_agent_Config thiz, drill_agent_kref_kotlin_Any other);
                drill_agent_KInt (*hashCode)(drill_agent_kref_com_epam_drill_agent_Config thiz);
                const char* (*toString)(drill_agent_kref_com_epam_drill_agent_Config thiz);
              } Config;
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_agent_DataService (*_instance)();
                drill_agent_kref_kotlin_Any (*createAgentPart)(drill_agent_kref_com_epam_drill_agent_DataService thiz, const char* id, const char* jarPath);
                drill_agent_kref_kotlin_Any (*doRawActionBlocking)(drill_agent_kref_com_epam_drill_agent_DataService thiz, drill_agent_kref_kotlin_Any agentPart, const char* data);
                drill_agent_kref_kotlin_ByteArray (*retrieveClassesData)(drill_agent_kref_com_epam_drill_agent_DataService thiz, const char* config);
              } DataService;
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_agent_DataServiceStub (*_instance)();
                void* (*get_selfMethodId)(drill_agent_kref_com_epam_drill_agent_DataServiceStub thiz);
                void (*set_selfMethodId)(drill_agent_kref_com_epam_drill_agent_DataServiceStub thiz, void* set);
                drill_agent_kref_kotlin_Any (*createAgentPart)(drill_agent_kref_com_epam_drill_agent_DataServiceStub thiz, const char* id, const char* jarPath);
                drill_agent_kref_kotlin_Any (*doRawActionBlocking)(drill_agent_kref_com_epam_drill_agent_DataServiceStub thiz, drill_agent_kref_kotlin_Any agentPart, const char* data);
                drill_agent_kref_com_epam_drill_agent_DataServiceStub (*invoke)(drill_agent_kref_com_epam_drill_agent_DataServiceStub thiz, void* ignored);
                drill_agent_kref_kotlin_ByteArray (*retrieveClassesData)(drill_agent_kref_com_epam_drill_agent_DataServiceStub thiz, const char* config);
                void* (*self)(drill_agent_kref_com_epam_drill_agent_DataServiceStub thiz);
                void* (*self_)(drill_agent_kref_com_epam_drill_agent_DataServiceStub thiz, drill_agent_kref_kotlin_Any thiz1);
              } DataServiceStub;
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_agent_Gaps (*Gaps)(drill_agent_KBoolean interrupted, drill_agent_KBoolean spacedString);
                drill_agent_KBoolean (*get_interrupted)(drill_agent_kref_com_epam_drill_agent_Gaps thiz);
                void (*set_interrupted)(drill_agent_kref_com_epam_drill_agent_Gaps thiz, drill_agent_KBoolean set);
                drill_agent_KBoolean (*get_spacedString)(drill_agent_kref_com_epam_drill_agent_Gaps thiz);
                void (*set_spacedString)(drill_agent_kref_com_epam_drill_agent_Gaps thiz, drill_agent_KBoolean set);
              } Gaps;
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_agent_JavaProcess (*JavaProcess)(drill_agent_kref_kotlin_collections_MutableList javaAgents, drill_agent_kref_kotlin_collections_MutableList nativeAgents, const char* processPath, const char* classpath, const char* jar, drill_agent_kref_kotlin_collections_List javaParams);
                const char* (*get_classpath)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                void (*set_classpath)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz, const char* set);
                const char* (*get_firstAgentPath)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                const char* (*get_jar)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                void (*set_jar)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz, const char* set);
                drill_agent_kref_kotlin_collections_MutableList (*get_javaAgents)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                drill_agent_kref_kotlin_collections_List (*get_javaParams)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                void (*set_javaParams)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz, drill_agent_kref_kotlin_collections_List set);
                drill_agent_kref_kotlin_collections_MutableList (*get_nativeAgents)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                const char* (*get_processPath)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                void (*set_processPath)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz, const char* set);
                drill_agent_kref_kotlin_collections_MutableList (*component1)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                drill_agent_kref_kotlin_collections_MutableList (*component2)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                const char* (*component3)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                const char* (*component4)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                const char* (*component5)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                drill_agent_kref_kotlin_collections_List (*component6)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                drill_agent_kref_com_epam_drill_agent_JavaProcess (*copy)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz, drill_agent_kref_kotlin_collections_MutableList javaAgents, drill_agent_kref_kotlin_collections_MutableList nativeAgents, const char* processPath, const char* classpath, const char* jar, drill_agent_kref_kotlin_collections_List javaParams);
                drill_agent_KBoolean (*equals)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz, drill_agent_kref_kotlin_Any other);
                drill_agent_KInt (*hashCode)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
                const char* (*toString)(drill_agent_kref_com_epam_drill_agent_JavaProcess thiz);
              } JavaProcess;
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_agent_State (*State)(drill_agent_kref_kotlin_time_TimeMark startMark, drill_agent_KBoolean alive, drill_agent_kref_kotlin_collections_Map webApps, drill_agent_kref_kotlin_collections_List packagePrefixes);
                drill_agent_KBoolean (*get_alive)(drill_agent_kref_com_epam_drill_agent_State thiz);
                drill_agent_kref_kotlin_collections_List (*get_packagePrefixes)(drill_agent_kref_com_epam_drill_agent_State thiz);
                drill_agent_kref_kotlin_time_TimeMark (*get_startMark)(drill_agent_kref_com_epam_drill_agent_State thiz);
                drill_agent_kref_kotlin_collections_Map (*get_webApps)(drill_agent_kref_com_epam_drill_agent_State thiz);
                drill_agent_kref_kotlin_time_TimeMark (*component1)(drill_agent_kref_com_epam_drill_agent_State thiz);
                drill_agent_KBoolean (*component2)(drill_agent_kref_com_epam_drill_agent_State thiz);
                drill_agent_kref_kotlin_collections_Map (*component3)(drill_agent_kref_com_epam_drill_agent_State thiz);
                drill_agent_kref_kotlin_collections_List (*component4)(drill_agent_kref_com_epam_drill_agent_State thiz);
                drill_agent_kref_com_epam_drill_agent_State (*copy)(drill_agent_kref_com_epam_drill_agent_State thiz, drill_agent_kref_kotlin_time_TimeMark startMark, drill_agent_KBoolean alive, drill_agent_kref_kotlin_collections_Map webApps, drill_agent_kref_kotlin_collections_List packagePrefixes);
                drill_agent_KBoolean (*equals)(drill_agent_kref_com_epam_drill_agent_State thiz, drill_agent_kref_kotlin_Any other);
                drill_agent_KInt (*hashCode)(drill_agent_kref_com_epam_drill_agent_State thiz);
                const char* (*toString)(drill_agent_kref_com_epam_drill_agent_State thiz);
              } State;
              struct {
                void (*webAppStarted)(void* env, void* thiz, void* arg1);
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSource (*_instance)();
                  void (*webAppStarted)(drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSource thiz, const char* appPath);
                } WebContainerSource;
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSourceStub (*_instance)();
                  void* (*get_selfMethodId)(drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSourceStub thiz);
                  void (*set_selfMethodId)(drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSourceStub thiz, void* set);
                  void (*fillWebAppSource)(drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSourceStub thiz, const char* warPath, drill_agent_kref_kotlin_Any warResource);
                  drill_agent_kref_kotlin_Any (*getAdditionalSources)(drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSourceStub thiz);
                  drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSourceStub (*invoke)(drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSourceStub thiz, void* ignored);
                  void* (*self)(drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSourceStub thiz);
                  void* (*self_)(drill_agent_kref_com_epam_drill_agent_classloading_WebContainerSourceStub thiz, drill_agent_kref_kotlin_Any thiz1);
                } WebContainerSourceStub;
              } classloading;
              struct {
                void* (*idHeaderConfigKey)(void* env, void* thiz);
                void* (*idHeaderConfigValue)(void* env, void* thiz);
                void* (*retrieveAdminAddress)(void* env, void* thiz);
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformer (*_instance)();
                  const char* (*get_SSL_ENGINE_CLASS_NAME)(drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformer thiz);
                  drill_agent_kref_kotlin_ByteArray (*transform)(drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformer thiz, const char* className, drill_agent_kref_kotlin_ByteArray classfileBuffer, drill_agent_kref_kotlin_Any loader);
                } SSLTransformer;
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformerStub (*_instance)();
                  void* (*get_selfMethodId)(drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformerStub thiz);
                  void (*set_selfMethodId)(drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformerStub thiz, void* set);
                  drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformerStub (*invoke)(drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformerStub thiz, void* ignored);
                  void* (*self)(drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformerStub thiz);
                  drill_agent_kref_kotlin_ByteArray (*transform)(drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformerStub thiz, const char* className, drill_agent_kref_kotlin_ByteArray classfileBuffer, drill_agent_kref_kotlin_Any loader);
                  void* (*self_)(drill_agent_kref_com_epam_drill_agent_instrument_SSLTransformerStub thiz, drill_agent_kref_kotlin_Any thiz1);
                } SSLTransformerStub;
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformer (*_instance)();
                  drill_agent_kref_kotlin_collections_List (*get_directTtlClasses)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformer thiz);
                  const char* (*get_poolExecutor)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformer thiz);
                  const char* (*get_runnableInterface)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformer thiz);
                  const char* (*get_timerTaskClass)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformer thiz);
                  drill_agent_kref_kotlin_ByteArray (*transform)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformer thiz, drill_agent_kref_kotlin_Any loader, const char* classFile, drill_agent_kref_kotlin_Any classBeingRedefined, drill_agent_kref_kotlin_ByteArray classFileBuffer);
                } TTLTransformer;
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformerStub (*_instance)();
                  void* (*get_selfMethodId)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformerStub thiz);
                  void (*set_selfMethodId)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformerStub thiz, void* set);
                  drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformerStub (*invoke)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformerStub thiz, void* ignored);
                  void* (*self)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformerStub thiz);
                  drill_agent_kref_kotlin_ByteArray (*transform)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformerStub thiz, drill_agent_kref_kotlin_Any loader, const char* classFile, drill_agent_kref_kotlin_Any classBeingRedefined, drill_agent_kref_kotlin_ByteArray classFileBuffer);
                  void* (*self_)(drill_agent_kref_com_epam_drill_agent_instrument_TTLTransformerStub thiz, drill_agent_kref_kotlin_Any thiz1);
                } TTLTransformerStub;
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformer (*_instance)();
                  drill_agent_kref_kotlin_ByteArray (*idHeaderConfigKey)(drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformer thiz);
                  drill_agent_kref_kotlin_ByteArray (*idHeaderConfigValue)(drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformer thiz);
                  drill_agent_kref_kotlin_ByteArray (*retrieveAdminAddress)(drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformer thiz);
                  drill_agent_kref_kotlin_ByteArray (*transform)(drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformer thiz, const char* className, drill_agent_kref_kotlin_ByteArray classFileBuffer, drill_agent_kref_kotlin_Any loader);
                } TomcatTransformer;
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformerStub (*_instance)();
                  void* (*get_selfMethodId)(drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformerStub thiz);
                  void (*set_selfMethodId)(drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformerStub thiz, void* set);
                  drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformerStub (*invoke)(drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformerStub thiz, void* ignored);
                  void* (*self)(drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformerStub thiz);
                  drill_agent_kref_kotlin_ByteArray (*transform)(drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformerStub thiz, const char* className, drill_agent_kref_kotlin_ByteArray classFileBuffer, drill_agent_kref_kotlin_Any loader);
                  void* (*self_)(drill_agent_kref_com_epam_drill_agent_instrument_TomcatTransformerStub thiz, drill_agent_kref_kotlin_Any thiz1);
                } TomcatTransformerStub;
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_instrument_Transformer (*_instance)();
                  const char* (*get_servletListener)(drill_agent_kref_com_epam_drill_agent_instrument_Transformer thiz);
                  drill_agent_kref_kotlin_ByteArray (*transform)(drill_agent_kref_com_epam_drill_agent_instrument_Transformer thiz, const char* className, drill_agent_kref_kotlin_ByteArray classfileBuffer, drill_agent_kref_kotlin_Any loader);
                } Transformer;
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_instrument_TransformerStub (*_instance)();
                  void* (*get_selfMethodId)(drill_agent_kref_com_epam_drill_agent_instrument_TransformerStub thiz);
                  void (*set_selfMethodId)(drill_agent_kref_com_epam_drill_agent_instrument_TransformerStub thiz, void* set);
                  drill_agent_kref_com_epam_drill_agent_instrument_TransformerStub (*invoke)(drill_agent_kref_com_epam_drill_agent_instrument_TransformerStub thiz, void* ignored);
                  void* (*self)(drill_agent_kref_com_epam_drill_agent_instrument_TransformerStub thiz);
                  drill_agent_kref_kotlin_ByteArray (*transform)(drill_agent_kref_com_epam_drill_agent_instrument_TransformerStub thiz, const char* className, drill_agent_kref_kotlin_ByteArray classfileBuffer, drill_agent_kref_kotlin_Any loader);
                  void* (*self_)(drill_agent_kref_com_epam_drill_agent_instrument_TransformerStub thiz, drill_agent_kref_kotlin_Any thiz1);
                } TransformerStub;
              } instrument;
              struct {
                struct {
                  drill_agent_KType* (*_type)(void);
                  drill_agent_kref_com_epam_drill_agent_serialization_SimpleMapDecoder (*SimpleMapDecoder)(drill_agent_kref_kotlinx_serialization_modules_SerializersModule serializersModule, drill_agent_kref_kotlin_collections_Map map);
                  drill_agent_kref_kotlinx_serialization_modules_SerializersModule (*get_serializersModule)(drill_agent_kref_com_epam_drill_agent_serialization_SimpleMapDecoder thiz);
                  drill_agent_KInt (*decodeElementIndex)(drill_agent_kref_com_epam_drill_agent_serialization_SimpleMapDecoder thiz, drill_agent_kref_kotlinx_serialization_descriptors_SerialDescriptor descriptor);
                  drill_agent_kref_kotlin_Any (*decodeValue)(drill_agent_kref_com_epam_drill_agent_serialization_SimpleMapDecoder thiz);
                } SimpleMapDecoder;
              } serialization;
            } agent;
            struct {
              void* (*JNIEn_)();
              void* (*JNIFun_)();
              void* (*currentThread_)();
              void (*disableJvmtiEventBreakpoint_)(void* thread);
              void (*disableJvmtiEventClassFileLoadHook_)(void* thread);
              void (*disableJvmtiEventClassLoad_)(void* thread);
              void (*disableJvmtiEventClassPrepare_)(void* thread);
              void (*disableJvmtiEventCompiledMethodLoad_)(void* thread);
              void (*disableJvmtiEventCompiledMethodUnload_)(void* thread);
              void (*disableJvmtiEventDataDumpRequest_)(void* thread);
              void (*disableJvmtiEventDynamicCodeGenerated_)(void* thread);
              void (*disableJvmtiEventException_)(void* thread);
              void (*disableJvmtiEventExceptionCatch_)(void* thread);
              void (*disableJvmtiEventFieldAccess_)(void* thread);
              void (*disableJvmtiEventFieldModification_)(void* thread);
              void (*disableJvmtiEventFramePop_)(void* thread);
              void (*disableJvmtiEventGarbageCollectionFinish_)(void* thread);
              void (*disableJvmtiEventGarbageCollectionStart_)(void* thread);
              void (*disableJvmtiEventMethodEntry_)(void* thread);
              void (*disableJvmtiEventMethodExit_)(void* thread);
              void (*disableJvmtiEventMonitorContendedEnter_)(void* thread);
              void (*disableJvmtiEventMonitorContendedEntered_)(void* thread);
              void (*disableJvmtiEventMonitorWait_)(void* thread);
              void (*disableJvmtiEventMonitorWaited_)(void* thread);
              void (*disableJvmtiEventNativeMethodBind_)(void* thread);
              void (*disableJvmtiEventObjectFree_)(void* thread);
              void (*disableJvmtiEventResourceExhausted_)(void* thread);
              void (*disableJvmtiEventSingleStep_)(void* thread);
              void (*disableJvmtiEventThreadEnd_)(void* thread);
              void (*disableJvmtiEventThreadStart_)(void* thread);
              void (*disableJvmtiEventVmDeath_)(void* thread);
              void (*disableJvmtiEventVmInit_)(void* thread);
              void (*disableJvmtiEventVmObjectAlloc_)(void* thread);
              void (*disableJvmtiEventVmStart_)(void* thread);
              void* (*drillCRequest)(void* thread);
              drill_agent_kref_com_epam_drill_plugin_DrillRequest (*drillRequest_)();
              void (*enableJvmtiEventBreakpoint_)(void* thread);
              void (*enableJvmtiEventClassFileLoadHook_)(void* thread);
              void (*enableJvmtiEventClassLoad_)(void* thread);
              void (*enableJvmtiEventClassPrepare_)(void* thread);
              void (*enableJvmtiEventCompiledMethodLoad_)(void* thread);
              void (*enableJvmtiEventCompiledMethodUnload_)(void* thread);
              void (*enableJvmtiEventDataDumpRequest_)(void* thread);
              void (*enableJvmtiEventDynamicCodeGenerated_)(void* thread);
              void (*enableJvmtiEventException_)(void* thread);
              void (*enableJvmtiEventExceptionCatch_)(void* thread);
              void (*enableJvmtiEventFieldAccess_)(void* thread);
              void (*enableJvmtiEventFieldModification_)(void* thread);
              void (*enableJvmtiEventFramePop_)(void* thread);
              void (*enableJvmtiEventGarbageCollectionFinish_)(void* thread);
              void (*enableJvmtiEventGarbageCollectionStart_)(void* thread);
              void (*enableJvmtiEventMethodEntry_)(void* thread);
              void (*enableJvmtiEventMethodExit_)(void* thread);
              void (*enableJvmtiEventMonitorContendedEnter_)(void* thread);
              void (*enableJvmtiEventMonitorContendedEntered_)(void* thread);
              void (*enableJvmtiEventMonitorWait_)(void* thread);
              void (*enableJvmtiEventMonitorWaited_)(void* thread);
              void (*enableJvmtiEventNativeMethodBind_)(void* thread);
              void (*enableJvmtiEventObjectFree_)(void* thread);
              void (*enableJvmtiEventResourceExhausted_)(void* thread);
              void (*enableJvmtiEventSingleStep_)(void* thread);
              void (*enableJvmtiEventThreadEnd_)(void* thread);
              void (*enableJvmtiEventThreadStart_)(void* thread);
              void (*enableJvmtiEventVmDeath_)(void* thread);
              void (*enableJvmtiEventVmInit_)(void* thread);
              void (*enableJvmtiEventVmObjectAlloc_)(void* thread);
              void (*enableJvmtiEventVmStart_)(void* thread);
              void* (*jvmti)();
              void (*jvmti_)(drill_agent_kref_kotlinx_cinterop_CValuesRef callbacks, drill_agent_KInt size_of_callbacks);
              void (*sendToSocket_)(const char* pluginId, const char* message);
            } api;
            struct {
            } common;
            struct {
              void* (*GetAllLoadedClasses)(void* env, void* thiz);
              void (*JNI_CreateJavaVM_)();
              void (*JNI_GetCreatedJavaVMs_)();
              void (*JNI_GetDefaultJavaVMInitArgs_)();
              void (*JNI_OnUnload_)();
              drill_agent_KUInt (*RetransformClasses)(void* env, void* thiz, drill_agent_KInt count, void* classes);
              drill_agent_KInt (*RetransformClassesByPackagePrefixes)(void* env, void* thiz, void* prefixes);
              drill_agent_KInt (*agentOnLoad)(void* vmPointer, const char* options, drill_agent_KLong reservedPtr);
              void (*agentOnUnload)(void* vmPointer);
              drill_agent_KUInt (*checkEx_)(drill_agent_KUInt errCode, const char* funName);
              void* (*currentEnvs_)();
              void* (*getJvm_)();
              void (*globalCallbacks)();
              void* (*jvmtii_)();
              void (*sendFromJava)(void* envs, void* thiz, void* jpluginId, void* jmessage);
              void (*vmDeathEvent)(void* jvmtiEnv, void* jniEnv);
              drill_agent_kref_com_epam_drill_plugin_DrillRequest (*get)(drill_agent_kref_com_epam_drill_request_RequestHolder thiz);
              void (*storeRequestMetadata)(drill_agent_kref_com_epam_drill_request_RequestHolder thiz, drill_agent_kref_com_epam_drill_plugin_DrillRequest request);
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_core_Agent (*_instance)();
                drill_agent_KBoolean (*get_isHttpHookEnabled)(drill_agent_kref_com_epam_drill_core_Agent thiz);
                drill_agent_KInt (*agentOnLoad)(drill_agent_kref_com_epam_drill_core_Agent thiz, const char* options);
                void (*agentOnUnload)(drill_agent_kref_com_epam_drill_core_Agent thiz);
              } Agent;
              struct {
                struct {
                  void (*classLoadEvent)(void* jvmtiEnv, void* jniEnv, void* classBeingRedefined, void* loader, void* clsName, void* protection_domain, drill_agent_KInt classDataLen, void* classData, void* newClassDataLen, void* newData);
                } classloading;
                struct {
                  void (*jvmtiEventVMInitEvent)(void* env, void* jniEnv, void* thread);
                } vminit;
              } callbacks;
              struct {
                struct {
                  void (*loadJvmPlugin)(const char* pluginFilePath, drill_agent_kref_com_epam_drill_common_PluginMetadata pluginConfig);
                  struct {
                    drill_agent_KType* (*_type)(void);
                    drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin (*GenericNativePlugin)(const char* pluginId, void* pluginApiClass, void* userPlugin, drill_agent_kref_com_epam_drill_common_PluginMetadata pluginConfig);
                    void* (*get_pluginApiClass)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz);
                    void* (*get_userPlugin)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz);
                    void (*destroyPlugin)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz, drill_agent_kref_com_epam_drill_plugin_api_processing_UnloadReason unloadReason);
                    void (*initPlugin)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz);
                    drill_agent_KBoolean (*isEnabled)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz);
                    void (*load)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz, drill_agent_KBoolean on);
                    void (*off)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz);
                    void (*on)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz);
                    void (*parseAction)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz, const char* rawAction);
                    void (*setEnabled)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz, drill_agent_KBoolean enabled);
                    void (*unload)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz, drill_agent_kref_com_epam_drill_plugin_api_processing_UnloadReason unloadReason);
                    void (*updateRawConfig)(drill_agent_kref_com_epam_drill_core_plugin_loader_GenericNativePlugin thiz, const char* data);
                  } GenericNativePlugin;
                  struct {
                    drill_agent_KType* (*_type)(void);
                    drill_agent_kref_com_epam_drill_core_plugin_loader_InstrumentationNativePlugin (*InstrumentationNativePlugin)(const char* pluginId, void* pluginApiClass, void* userPlugin, drill_agent_kref_com_epam_drill_common_PluginMetadata pluginConfig, void* qs);
                    drill_agent_kref_kotlin_ByteArray (*instrument)(drill_agent_kref_com_epam_drill_core_plugin_loader_InstrumentationNativePlugin thiz, const char* className, drill_agent_kref_kotlin_ByteArray initialBytes);
                  } InstrumentationNativePlugin;
                } loader;
              } plugin;
            } core;
            struct {
              drill_agent_KInt (*getLogLevel)(void* env, void* thiz);
              void (*output)(void* env, void* thiz, void* arg1);
              void (*setFilename)(void* env, void* thiz, void* arg1);
              void (*setLogLevel)(void* env, void* thiz, drill_agent_KInt arg1);
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_logger_NativeApiStub (*_instance)();
                void* (*get_selfMethodId)(drill_agent_kref_com_epam_drill_logger_NativeApiStub thiz);
                void (*set_selfMethodId)(drill_agent_kref_com_epam_drill_logger_NativeApiStub thiz, void* set);
                drill_agent_kref_com_epam_drill_logger_NativeApiStub (*invoke)(drill_agent_kref_com_epam_drill_logger_NativeApiStub thiz, void* ignored);
                void* (*self)(drill_agent_kref_com_epam_drill_logger_NativeApiStub thiz);
                void* (*self_)(drill_agent_kref_com_epam_drill_logger_NativeApiStub thiz, drill_agent_kref_kotlin_Any thiz1);
              } NativeApiStub;
            } logger;
            struct {
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_request_RequestHolder (*_instance)();
                void (*closeSession)(drill_agent_kref_com_epam_drill_request_RequestHolder thiz);
                drill_agent_kref_kotlin_ByteArray (*dump)(drill_agent_kref_com_epam_drill_request_RequestHolder thiz);
                void (*init)(drill_agent_kref_com_epam_drill_request_RequestHolder thiz, drill_agent_KBoolean isAsync);
                void (*store)(drill_agent_kref_com_epam_drill_request_RequestHolder thiz, drill_agent_kref_kotlin_ByteArray drillRequest);
              } RequestHolder;
              struct {
                drill_agent_KType* (*_type)(void);
                drill_agent_kref_com_epam_drill_request_RequestHolderStub (*_instance)();
                void* (*get_selfMethodId)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz);
                void (*set_selfMethodId)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz, void* set);
                void (*closeSession)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz);
                drill_agent_kref_kotlin_ByteArray (*dump)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz);
                drill_agent_kref_kotlin_Any (*getAgentContext)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz);
                void (*init)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz, drill_agent_KBoolean isAsync);
                drill_agent_kref_com_epam_drill_request_RequestHolderStub (*invoke)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz, void* ignored);
                void* (*self)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz);
                void (*store)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz, drill_agent_kref_kotlin_Any drillRequest);
                void (*store_)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz, drill_agent_kref_kotlin_ByteArray drillRequest);
                void* (*self_)(drill_agent_kref_com_epam_drill_request_RequestHolderStub thiz, drill_agent_kref_kotlin_Any thiz1);
              } RequestHolderStub;
            } request;
          } drill;
        } epam;
      } com;
    } root;
  } kotlin;
} drill_agent_ExportedSymbols;
extern drill_agent_ExportedSymbols* drill_agent_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_DRILL_AGENT_H */
