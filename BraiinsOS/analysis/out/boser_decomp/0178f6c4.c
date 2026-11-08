// FUN_0178f6c4 @ 0178f6c4 size=116 calls_out=1 calls_in=0
// strings: 

void FUN_0178f6c4(undefined4 *param_1,int param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  if (((*(int *)(param_2 + 0x80) == -0x80000000) || (*(int *)(param_2 + 0x88) != 2)) ||
     (**(short **)(param_2 + 0x84) != 0x3268)) {
    FUN_0177f7c4(param_1,param_2 + 0x118);
    return;
  }
  FUN_0177f7c4(&local_20,param_2 + 0x118);
  local_14 = local_14 & 0xffffff00;
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = local_14;
  return;
}

