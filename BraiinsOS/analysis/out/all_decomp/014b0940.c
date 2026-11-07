// FUN_014b0940 @ 014b0940 size=136 calls_out=2 calls_in=2
// strings: 

void FUN_014b0940(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iStack_2c;
  uint local_28;
  int iStack_20;
  uint local_1c;
  uint local_18;
  
  local_18 = local_18 & 0xffff0000;
  local_1c = local_1c & 0xffffff00;
  local_28 = local_28 & 0xffffff00;
  piVar2 = (int *)thunk_FUN_016d4a50(0x24);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *piVar2 = 1;
  piVar2[1] = 1;
  piVar2[2] = 0;
  piVar2[3] = iStack_2c;
  piVar2[4] = local_28;
  piVar2[5] = 0;
  piVar2[6] = iStack_20;
  piVar2[7] = local_1c;
  piVar2[8] = local_18;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + 1;
  if (iVar3 < 0) {
    software_udf(0xfdee,0x14b09b8);
    return;
  }
  return;
}

