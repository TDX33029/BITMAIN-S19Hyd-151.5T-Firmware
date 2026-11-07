// FUN_01967b58 @ 01967b58 size=64 calls_out=1 calls_in=1
// strings: 

void FUN_01967b58(undefined1 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_14 [3];
  
  uVar2 = param_2[2];
  if (uVar2 < (uint)param_2[1]) {
    iVar1 = *param_2;
    *param_1 = 0;
    param_1[1] = *(undefined1 *)(iVar1 + uVar2);
    return;
  }
  local_14[0] = 4;
  FUN_01967960(param_1,param_2,local_14);
  return;
}

