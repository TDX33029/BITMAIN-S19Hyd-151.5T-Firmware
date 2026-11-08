// FUN_01bcedd4 @ 01bcedd4 size=260 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01bcedd4(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = DAT_01d53560;
  for (uVar1 = 0; uVar1 <= *(uint *)(param_2 + 0xf0); uVar1 = uVar1 + 1) {
    FUN_01bced98(&local_34,param_2 + uVar1 * 0x10,0x10);
    *param_1 = local_34;
    param_1[2] = local_30;
    param_1[4] = local_2c;
    param_1[6] = local_28;
    FUN_01bced98(&local_34,param_2 + uVar1 * 0x10,0x10);
    param_1[1] = local_34;
    param_1[3] = local_30;
    param_1[5] = local_2c;
    param_1[7] = local_28;
    FUN_01bcec60(param_1);
    param_1 = param_1 + 8;
  }
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

