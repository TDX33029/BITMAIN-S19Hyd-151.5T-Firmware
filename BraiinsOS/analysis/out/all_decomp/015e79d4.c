// FUN_015e79d4 @ 015e79d4 size=180 calls_out=4 calls_in=82
// strings: 

void FUN_015e79d4(undefined1 *param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_4 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  FUN_016dd1aa(iVar1,param_3,param_4);
  piVar2 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *piVar2 = param_4;
  piVar2[1] = iVar1;
  piVar2[2] = param_4;
  piVar3 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar3 + 2) = param_2;
  *(int **)(param_1 + 4) = piVar3;
  *param_1 = 3;
  *piVar3 = (int)piVar2;
  piVar3[1] = (int)&DAT_018ab448;
  return;
}

