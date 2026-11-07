// FUN_015e9368 @ 015e9368 size=96 calls_out=1 calls_in=4
// strings: 

void FUN_015e9368(int *param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < 2) {
    FUN_006520b4(param_1,iVar1,2,1,1);
    iVar1 = param_1[2];
  }
  param_1[2] = iVar1 + 2;
  *(undefined2 *)(param_1[1] + iVar1) = param_2;
  return;
}

