// FUN_01a60888 @ 01a60888 size=136 calls_out=1 calls_in=1
// strings: 

void FUN_01a60888(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 local_18;
  uint uStack_14;
  uint uStack_10;
  
  if (param_2 == (uint *)0x0) {
    *param_1 = 0x80000003;
  }
  else {
    uVar1 = 1;
    if ((int)*param_2 < 0) {
      uVar1 = *param_2 ^ 0x80000000;
    }
    if (uVar1 == 0) {
      local_18 = 0x80000000;
    }
    else if (uVar1 == 1) {
      FUN_006666fc(&local_18,param_2[1],param_2[2]);
    }
    else {
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      local_18 = 0x80000002;
    }
    *param_1 = local_18;
    param_1[1] = uStack_14;
    param_1[2] = uStack_10;
  }
  return;
}

