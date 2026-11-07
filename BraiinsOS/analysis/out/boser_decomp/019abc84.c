// FUN_019abc84 @ 019abc84 size=88 calls_out=2 calls_in=11
// strings: 

void FUN_019abc84(undefined4 *param_1)

{
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24 [3];
  
  FUN_019a3070(&local_30);
  if (local_30 == -0x80000000) {
    local_24[0] = 1;
    local_30 = -0x80000000;
  }
  else {
    FUN_012fbd94(local_24,uStack_2c,uStack_28);
    param_1[2] = uStack_2c;
    param_1[3] = uStack_28;
  }
  *param_1 = local_24[0];
  param_1[1] = local_30;
  return;
}

