// FUN_016a11a4 @ 016a11a4 size=188 calls_out=3 calls_in=8
// strings: 

void FUN_016a11a4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piStack_18;
  byte bStack_14;
  
  piVar2 = (int *)(param_1 + 0x14);
  if (*piVar2 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (bVar1) {
      *piVar2 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_016a11d4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_015f5ff4();
LAB_016a11d4:
  bStack_14 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    bStack_14 = FUN_015bf3f8();
    bStack_14 = bStack_14 ^ 1;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    piStack_18 = piVar2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00414ceb,0xe,&piStack_18,&DAT_018ae528);
  }
  return;
}

