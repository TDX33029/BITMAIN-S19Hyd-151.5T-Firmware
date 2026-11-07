// FUN_01ab96a8 @ 01ab96a8 size=172 calls_out=3 calls_in=8
// strings: 

int * FUN_01ab96a8(int param_1)

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
      goto LAB_01ab96d8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(piVar2);
LAB_01ab96d8:
  bStack_14 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    bStack_14 = FUN_0197ac0c();
    bStack_14 = bStack_14 ^ 1;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    piStack_18 = piVar2;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00531687,0xe,&piStack_18,&DAT_01d2ef00);
  }
  return piVar2;
}

