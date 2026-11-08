// FUN_01298230 @ 01298230 size=160 calls_out=4 calls_in=0
// strings: 

void FUN_01298230(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  uVar1 = *(uint *)(param_2 + 0x2c);
  if (*(uint *)(param_2 + 0x28) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,*(uint *)(param_2 + 0x28),&DAT_01890988);
  }
  if (uVar1 != 0) {
    iVar3 = *(int *)(param_2 + 0x24);
    iVar2 = uVar1 * 0x50;
    do {
      FUN_01298d30(iVar3);
      iVar3 = iVar3 + 0x50;
      iVar2 = iVar2 + -0x50;
    } while (iVar2 != 0);
  }
  FUN_012980c0(param_2);
  FUN_01297d60(&local_28,param_2,param_3);
  if (local_28 == 4) {
    *param_1 = 4;
    return;
  }
  *param_1 = local_28;
  param_1[1] = iStack_24;
  param_1[2] = iStack_20;
  return;
}

