// FUN_01bcecac @ 01bcecac size=224 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_01bcecac(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_34;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01bed93e(auStack_30,0,0x1c,0);
  local_34 = *param_2;
  local_2c = param_2[1];
  local_24 = param_2[2];
  local_1c = param_2[3];
  FUN_01bcec60(&local_34);
  FUN_01bce5a4(&local_34);
  FUN_01bcec60(&local_34);
  *param_1 = local_34;
  param_1[1] = local_2c;
  param_1[2] = local_24;
  param_1[3] = local_1c;
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

