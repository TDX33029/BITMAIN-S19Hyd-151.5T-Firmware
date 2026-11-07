// FUN_01731a34 @ 01731a34 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_01731a34(undefined4 *param_1,int param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  if (((*(int *)(param_2 + 0x22c) == -0x80000000) || (*(int *)(param_2 + 0x234) != 2)) ||
     (**(short **)(param_2 + 0x230) != 0x3268)) {
    FUN_014435a8(param_1,*(undefined4 *)(param_2 + 0xc));
  }
  else {
    FUN_014435a8(&local_20,*(undefined4 *)(param_2 + 0xc));
    local_14 = local_14 & 0xffffff00;
    *param_1 = local_20;
    param_1[1] = uStack_1c;
    param_1[2] = uStack_18;
    param_1[3] = local_14;
  }
  return;
}

