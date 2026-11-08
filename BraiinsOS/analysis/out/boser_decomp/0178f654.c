// FUN_0178f654 @ 0178f654 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_0178f654(undefined4 *param_1,int param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  if (((*(int *)(param_2 + 0x90) == -0x80000000) || (*(int *)(param_2 + 0x98) != 2)) ||
     (**(short **)(param_2 + 0x94) != 0x3268)) {
    FUN_01432cb4(param_1,*(undefined4 *)(param_2 + 0xc));
  }
  else {
    FUN_01432cb4(&local_20,*(undefined4 *)(param_2 + 0xc));
    local_14 = local_14 & 0xffffff00;
    *param_1 = local_20;
    param_1[1] = uStack_1c;
    param_1[2] = uStack_18;
    param_1[3] = local_14;
  }
  return;
}

