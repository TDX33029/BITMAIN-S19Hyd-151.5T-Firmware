// FUN_0185ebec @ 0185ebec size=116 calls_out=1 calls_in=0
// strings: 

void FUN_0185ebec(undefined4 *param_1,int param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  if (((*(int *)(param_2 + 0x21c) == -0x80000000) || (*(int *)(param_2 + 0x224) != 2)) ||
     (**(short **)(param_2 + 0x220) != 0x3268)) {
    FUN_01863e50(param_1,param_2 + 0x2d0);
    return;
  }
  FUN_01863e50(&local_20,param_2 + 0x2d0);
  local_14 = local_14 & 0xffffff00;
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = local_14;
  return;
}

