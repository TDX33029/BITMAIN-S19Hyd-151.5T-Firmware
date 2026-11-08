// FUN_008b5b9c @ 008b5b9c size=180 calls_out=2 calls_in=4
// strings: 

void FUN_008b5b9c(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iStack_1c;
  
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  puVar2[4] = 0;
  *puVar2 = 0;
  piVar3 = (int *)thunk_FUN_016d4a50(0x24);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *piVar3 = 1;
  piVar3[1] = 1;
  piVar3[2] = (int)puVar2;
  piVar3[3] = (int)puVar2;
  piVar3[4] = -0x80000000;
  piVar3[5] = 1;
  piVar3[6] = 0;
  piVar3[7] = iStack_1c;
  piVar3[8] = 0;
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
    software_udf(0xfdee,0x8b5c34);
    return;
  }
  return;
}

