// FUN_016fdc20 @ 016fdc20 size=312 calls_out=5 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll

undefined8 FUN_016fdc20(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 local_300;
  undefined *local_2fc;
  undefined4 local_2f8;
  undefined4 local_18;
  
  if (((param_1 & 1) != 0) && (4 < DAT_01d51b00)) {
    local_2f8 = 0x19;
    local_300 = 5;
    local_2fc = &DAT_0050d78e;
    DataMemoryBarrier(0xb);
    puVar5 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar5 = &DAT_01cfc5e0;
    }
    pcVar1 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar5[3])(pcVar1,&local_300);
    if (iVar2 != 0) {
      uVar3 = FUN_01744790();
      FUN_01bed4e2(&local_300,param_2,0x2e8);
      local_18 = uVar3;
      iVar2 = thunk_FUN_01be5118(0x2f0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x2f0);
      }
      FUN_01bed4e2(iVar2,&local_300,0x2f0);
      puVar4 = &UNK_01d18cf8;
      goto LAB_016fdd34;
    }
  }
  FUN_01bed4e2(&local_300,param_2,0x2e8);
  iVar2 = thunk_FUN_01be5118(0x2e8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x2e8);
  }
  FUN_01bed4e2(iVar2,param_2,0x2e8);
  puVar4 = &UNK_01d18c80;
LAB_016fdd34:
  return CONCAT44(puVar4,iVar2);
}

