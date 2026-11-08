// FUN_01297548 @ 01297548 size=84 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01297548(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x28) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,*(uint *)(param_1 + 0x28),&DAT_01890988);
  }
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = uVar1 * 0x50;
    do {
      FUN_01298d30(iVar2);
      iVar2 = iVar2 + 0x50;
      iVar3 = iVar3 + -0x50;
    } while (iVar3 != 0);
  }
  return 1;
}

