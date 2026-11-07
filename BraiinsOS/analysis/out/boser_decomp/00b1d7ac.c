// FUN_00b1d7ac @ 00b1d7ac size=212 calls_out=3 calls_in=1
// strings: boser::bosminer::initial_configopen/boser/boser/src/bosminer/initial_config.rsevent open/boser/boser/src/bosminer/initial_config.rs:236event open/boser/boser/src/bosminer/initial_config.rs:168event open/boser/boser/src/bosminer/initial_config.rs:200event open/boser/boser/src/bosminer/initial_config.rs:184event open/boser/boser/src/bosminer/initial_config.rs:325event open/boser/boser/src/bosminer/initial_config.rs:312event open/boser/boser/src/bosminer/initial_config.rs:303 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00b1d7ac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01aaaecc(DAT_01d4c228,param_1);
  iVar1 = DAT_01d4c228;
  if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
    local_20 = *(undefined4 *)(DAT_01d4c228 + 0x14);
    local_1c = *(undefined4 *)(DAT_01d4c228 + 0x18);
    local_24 = 3;
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

