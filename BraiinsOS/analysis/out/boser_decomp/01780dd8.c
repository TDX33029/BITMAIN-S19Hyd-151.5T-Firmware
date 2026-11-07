// FUN_01780dd8 @ 01780dd8 size=312 calls_out=5 calls_in=1
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll

undefined8 FUN_01780dd8(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 local_268;
  undefined *local_264;
  undefined4 local_260;
  undefined4 local_18;
  
  if (((param_1 & 1) != 0) && (4 < DAT_01d51b00)) {
    local_260 = 0x19;
    local_268 = 5;
    local_264 = &DAT_0050d78e;
    DataMemoryBarrier(0xb);
    puVar5 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar5 = &DAT_01cfc5e0;
    }
    pcVar1 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar5[3])(pcVar1,&local_268);
    if (iVar2 != 0) {
      uVar3 = FUN_017c1d74();
      FUN_01bed4e2(&local_268,param_2,0x250);
      local_18 = uVar3;
      iVar2 = thunk_FUN_01be5118(600);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,600);
      }
      FUN_01bed4e2(iVar2,&local_268,600);
      puVar4 = &UNK_01d1a4f8;
      goto LAB_01780eec;
    }
  }
  FUN_01bed4e2(&local_268,param_2,0x250);
  iVar2 = thunk_FUN_01be5118(0x250);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x250);
  }
  FUN_01bed4e2(iVar2,param_2,0x250);
  puVar4 = &UNK_01d1a480;
LAB_01780eec:
  return CONCAT44(puVar4,iVar2);
}

