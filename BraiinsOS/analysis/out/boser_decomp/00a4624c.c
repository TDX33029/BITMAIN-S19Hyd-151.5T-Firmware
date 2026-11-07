// FUN_00a4624c @ 00a4624c size=216 calls_out=3 calls_in=1
// strings: boser::bosopen/boser/boser/src/bos.rsevent open/boser/boser/src/bos.rs:125event open/boser/boser/src/bos.rs:432event open/boser/boser/src/bos.rs:471event open/boser/boser/src/bos.rs:464event open/boser/boser/src/bos.rs:454event open/boser/boser/src/bos.rs:459event open/boser/boser/src/bos.rs:450event open/boser/boser/src/bos.rs:446event open/boser/boser/src/bos.rs:456uievent open/boser/boser/src/web/graphql/bosminer/license.rs:120 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00a4624c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01aaaecc(DAT_01d4b91c,param_1);
  iVar1 = DAT_01d4b91c;
  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
    local_20 = *(undefined4 *)(DAT_01d4b91c + 0x14);
    local_1c = *(undefined4 *)(DAT_01d4b91c + 0x18);
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

