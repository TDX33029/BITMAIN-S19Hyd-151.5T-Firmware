// FUN_012b12c0 @ 012b12c0 size=128 calls_out=2 calls_in=2
// strings: 

void FUN_012b12c0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = param_1[1];
  iVar5 = param_1[2];
  iVar2 = 0;
  while( true ) {
    if (iVar5 * 8 == iVar2) {
      if (iVar5 == *param_1) {
        FUN_015f5ab8(param_1);
        iVar3 = param_1[1];
      }
      param_1[2] = iVar5 + 1;
      puVar4 = (undefined4 *)(iVar3 + iVar5 * 8);
      *puVar4 = param_2;
      puVar4[1] = param_3;
      return;
    }
    if ((*(int *)(iVar3 + iVar2 + 4) == param_3) &&
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(iVar3 + iVar2),param_2,param_3), iVar1 == 0))
    break;
    iVar2 = iVar2 + 8;
  }
  return;
}

