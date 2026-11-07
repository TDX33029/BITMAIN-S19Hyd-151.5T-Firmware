// FUN_015e93c8 @ 015e93c8 size=92 calls_out=1 calls_in=1
// strings: 

void FUN_015e93c8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < 4) {
    FUN_006520b4(param_1,iVar1,4,1,1);
    iVar1 = param_1[2];
  }
  *(undefined4 *)(param_1[1] + iVar1) = param_2;
  param_1[2] = iVar1 + 4;
  return;
}

