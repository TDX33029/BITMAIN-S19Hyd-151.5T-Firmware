// FUN_00673dc0 @ 00673dc0 size=216 calls_out=3 calls_in=1
// strings: api_logging::middleware::graphql_extensionopen/utils-rs/api-logging/src/middleware/graphql_extension.rsevent open/utils-rs/api-logging/src/middleware/graphql_extension.rs:245event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:259event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:283 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00673dc0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01aaaecc(DAT_01d4b4dc,param_1);
  iVar1 = DAT_01d4b4dc;
  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
    local_20 = *(undefined4 *)(DAT_01d4b4dc + 0x14);
    local_1c = *(undefined4 *)(DAT_01d4b4dc + 0x18);
    local_24 = 1;
    DataMemoryBarrier(0xb);
    puVar4 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar4 = &DAT_01cfc5e0;
    }
    pcVar3 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar4[3])(pcVar3,&local_24);
    if (iVar2 != 0) {
      FUN_01aaa328(iVar1,pcVar3,puVar4[4],&local_24,param_1);
    }
  }
  return;
}

