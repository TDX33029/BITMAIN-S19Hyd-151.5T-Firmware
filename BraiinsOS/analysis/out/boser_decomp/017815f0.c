// FUN_017815f0 @ 017815f0 size=312 calls_out=5 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll

undefined8 FUN_017815f0(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 local_148;
  undefined *local_144;
  undefined4 local_140;
  undefined4 local_18;
  
  if (((param_1 & 1) != 0) && (4 < DAT_01d51b00)) {
    local_140 = 0x19;
    local_148 = 5;
    local_144 = &DAT_0050d78e;
    DataMemoryBarrier(0xb);
    puVar5 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar5 = &DAT_01cfc5e0;
    }
    pcVar1 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar5[3])(pcVar1,&local_148);
    if (iVar2 != 0) {
      uVar3 = FUN_017c1d74();
      FUN_01bed4e2(&local_148,param_2,0x130);
      local_18 = uVar3;
      iVar2 = thunk_FUN_01be5118(0x138);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x138);
      }
      FUN_01bed4e2(iVar2,&local_148,0x138);
      puVar4 = &UNK_01d1a5e8;
      goto LAB_01781704;
    }
  }
  FUN_01bed4e2(&local_148,param_2,0x130);
  iVar2 = thunk_FUN_01be5118(0x130);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x130);
  }
  FUN_01bed4e2(iVar2,param_2,0x130);
  puVar4 = &UNK_01d1a570;
LAB_01781704:
  return CONCAT44(puVar4,iVar2);
}

