// FUN_014adb8c @ 014adb8c size=364 calls_out=4 calls_in=0
// strings: 

bool FUN_014adb8c(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  int *local_18;
  undefined1 local_14;
  
  piVar4 = (int *)(param_1 + 8);
  do {
    if (*piVar4 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar4);
      goto LAB_014adbb8;
    }
    bVar5 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar5);
  *piVar4 = 1;
  DataMemoryBarrier(0xb);
LAB_014adbb8:
  uVar2 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  else {
    uVar2 = FUN_015bf3f8();
    uVar2 = uVar2 ^ 1;
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (cVar1 != '\0') {
    local_14 = (undefined1)uVar2;
    local_18 = piVar4;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_018a5c2c,&DAT_018a5adc);
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  bVar5 = true;
  bVar6 = iVar3 == 0;
  if (bVar6) {
    iVar3 = *(int *)(param_1 + 0x24);
  }
  if (bVar6 && iVar3 == 0) {
    bVar5 = 1 < *(uint *)(param_1 + 0x1a8);
  }
  if (((uVar2 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0))
  {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar6 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar6);
  *piVar4 = 0;
  if (iVar3 == 2) {
    FUN_016d6968(0xf0,piVar4,0x81,1);
    return bVar5;
  }
  return bVar5;
}

