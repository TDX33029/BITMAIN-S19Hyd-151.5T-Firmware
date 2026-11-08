// FUN_0190b0e0 @ 0190b0e0 size=116 calls_out=1 calls_in=5
// strings: 

void FUN_0190b0e0(undefined4 *param_1,int param_2,int param_3,code *param_4)

{
  uint uVar1;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  (*param_4)(&local_30,param_2 + (param_3 - 1U & 0xfffffff8) + 8);
  uVar1 = local_30;
  local_30 = 0x80000021;
  if ((uVar1 & 1) == 0) {
    *param_1 = 0x80000021;
    param_1[1] = uStack_2c;
    param_1[2] = local_28;
    param_1[3] = local_24;
    param_1[4] = local_20;
    param_1[5] = uStack_1c;
    param_1[6] = uStack_18;
    param_1[7] = uStack_14;
  }
  else {
    param_1[2] = local_28;
    param_1[3] = local_24;
    *param_1 = 0x80000029;
    FUN_0190ac88(&local_30);
  }
  return;
}

