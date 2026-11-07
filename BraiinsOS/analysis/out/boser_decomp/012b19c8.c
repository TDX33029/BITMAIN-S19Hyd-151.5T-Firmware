// FUN_012b19c8 @ 012b19c8 size=132 calls_out=1 calls_in=3
// strings: 

void FUN_012b19c8(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8) << 3;
  iVar3 = 0;
  while( true ) {
    if (iVar2 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      param_1[2] = param_4;
      return;
    }
    if ((*(int *)(iVar4 + iVar3 * 8 + 4) == param_4) &&
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(iVar4 + iVar3 * 8),param_3,param_4), iVar1 == 0))
    break;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -8;
  }
  param_1[2] = iVar3;
  *param_1 = 0;
  param_1[1] = param_2;
  return;
}

