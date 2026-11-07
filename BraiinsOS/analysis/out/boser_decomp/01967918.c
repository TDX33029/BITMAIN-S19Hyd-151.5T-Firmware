// FUN_01967918 @ 01967918 size=72 calls_out=1 calls_in=2
// strings: 

void FUN_01967918(undefined1 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_14 [3];
  
  uVar1 = param_2[2];
  if (uVar1 < (uint)param_2[1]) {
    iVar2 = *param_2;
    param_2[2] = uVar1 + 1;
    *param_1 = 0;
    param_1[1] = *(undefined1 *)(iVar2 + uVar1);
    return;
  }
  local_14[0] = 4;
  FUN_01967960(param_1,param_2,local_14);
  return;
}

