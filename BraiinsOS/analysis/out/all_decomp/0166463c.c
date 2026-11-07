// FUN_0166463c @ 0166463c size=336 calls_out=4 calls_in=3
// strings: 

undefined1 FUN_0166463c(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *local_18;
  undefined1 local_14;
  
  piVar5 = (int *)(param_1 + 0x18);
  do {
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar5);
      goto LAB_01664668;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
LAB_01664668:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      uVar4 = 0;
LAB_01664714:
      local_14 = (undefined1)uVar4;
      local_18 = piVar5;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_018ad534,&DAT_018ad424);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x38);
  }
  else {
    uVar4 = FUN_015bf3f8();
    uVar4 = uVar4 ^ 1;
    if (*(char *)(param_1 + 0x1c) != '\0') goto LAB_01664714;
    uVar2 = *(undefined1 *)(param_1 + 0x38);
    if (uVar4 != 0) goto LAB_016646a0;
  }
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
LAB_016646a0:
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = 0;
  if (iVar3 == 2) {
    FUN_016d6968(0xf0,piVar5,0x81,1);
    return uVar2;
  }
  return uVar2;
}

