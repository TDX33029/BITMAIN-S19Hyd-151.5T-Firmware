// FUN_01298520 @ 01298520 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_01298520(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 0x2c);
  if (*(uint *)(param_2 + 0x28) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,*(uint *)(param_2 + 0x28),&DAT_01890988);
  }
  if (uVar3 != 0) {
    iVar1 = *(int *)(param_2 + 0x24);
    iVar2 = uVar3 * 0x50;
    do {
      FUN_01298d30(iVar1);
      iVar1 = iVar1 + 0x50;
      iVar2 = iVar2 + -0x50;
    } while (iVar2 != 0);
  }
  *param_1 = 4;
  return;
}

