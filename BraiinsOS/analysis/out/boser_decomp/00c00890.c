// FUN_00c00890 @ 00c00890 size=212 calls_out=3 calls_in=0
// strings: boser::web::graphql::bosminer::configuratoropen/boser/boser/src/web/graphql/bosminer/configurator.rsevent open/boser/boser/src/web/graphql/bosminer/configurator.rs:912 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00c00890(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01aaaecc((int)DAT_01d4c498,param_1);
  iVar1 = (int)DAT_01d4c498;
  if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
    local_20 = *(undefined4 *)((int)DAT_01d4c498 + 0x14);
    local_1c = *(undefined4 *)((int)DAT_01d4c498 + 0x18);
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

