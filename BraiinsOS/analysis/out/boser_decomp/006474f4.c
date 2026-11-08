// FUN_006474f4 @ 006474f4 size=212 calls_out=3 calls_in=2
// strings: scheduler::cronopen/utils-rs/scheduler/src/cron.rsevent open/utils-rs/scheduler/src/cron.rs:4650 event open/utils-rs/scheduler/src/cron.rs:231event open/utils-rs/scheduler/src/cron.rs:226event open/utils-rs/scheduler/src/cron.rs:333 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_006474f4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01aaaecc(DAT_01d4fc4c,param_1);
  iVar1 = DAT_01d4fc4c;
  if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
    local_20 = *(undefined4 *)(DAT_01d4fc4c + 0x14);
    local_1c = *(undefined4 *)(DAT_01d4fc4c + 0x18);
    local_24 = 4;
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

