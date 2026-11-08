// FUN_00651764 @ 00651764 size=212 calls_out=3 calls_in=3
// strings: scheduler::scheduleropen/utils-rs/scheduler/src/scheduler.rsevent open/utils-rs/scheduler/src/scheduler.rs:352event open/utils-rs/scheduler/src/scheduler.rs:535event open/utils-rs/scheduler/src/scheduler.rs:530event open/utils-rs/scheduler/src/scheduler.rs:393event open/utils-rs/scheduler/src/scheduler.rs:575event open/utils-rs/scheduler/src/scheduler.rs:234event open/utils-rs/scheduler/src/scheduler.rs:591event open/utils-rs/scheduler/src/scheduler.rs:184event open/utils-rs/scheduler/src/scheduler.rs:178event open/utils-rs/scheduler/src/scheduler.rs:191event open/utils-rs/scheduler/src/scheduler.rs:159event open/utils-rs/scheduler/src/scheduler.rs:144event open/utils-rs/scheduler/src/scheduler.rs:133event open/utils-rs/scheduler/src/scheduler.rs:148event open/utils-rs/scheduler/src/scheduler.rs:129event open/utils-rs/scheduler/src/scheduler.rs:137event open/utils-rs/scheduler/src/scheduler.rs:153event open/utils-rs/scheduler/src/scheduler.rs:169event open/utils-rs/scheduler/src/scheduler.rs:150event open/utils-rs/scheduler/src/scheduler.rs:125 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00651764(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01aaaecc(DAT_01d4fcc4,param_1);
  iVar1 = DAT_01d4fcc4;
  if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
    local_20 = *(undefined4 *)(DAT_01d4fcc4 + 0x14);
    local_1c = *(undefined4 *)(DAT_01d4fcc4 + 0x18);
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

