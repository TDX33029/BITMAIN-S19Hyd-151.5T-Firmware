// FUN_006bb674 @ 006bb674 size=188 calls_out=2 calls_in=2
// strings: 

void FUN_006bb674(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iStack_1c;
  
  iVar2 = thunk_FUN_016d4a50(0xe0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xe0);
  }
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  *(undefined1 **)(iVar2 + 8) = &DAT_3b9aca00;
  piVar3 = (int *)thunk_FUN_016d4a50(0x24);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *piVar3 = 1;
  piVar3[1] = 1;
  piVar3[2] = iVar2;
  piVar3[3] = iVar2;
  piVar3[4] = -0x80000000;
  piVar3[5] = 1;
  piVar3[6] = 0;
  piVar3[7] = iStack_1c;
  piVar3[8] = 0;
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + 1;
  if (iVar2 < 0) {
    software_udf(0xfdee,0x6bb714);
    return;
  }
  return;
}

