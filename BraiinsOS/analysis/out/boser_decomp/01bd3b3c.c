// FUN_01bd3b3c @ 01bd3b3c size=368 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_01bd3b3c(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  bVar1 = param_2 != 0;
  local_1c = DAT_01d53560;
  FUN_01bd0bf4(&local_3c,bVar1,*param_3,*param_4);
  FUN_01bd0bf4(&local_38,bVar1,param_3[1],param_4[1]);
  FUN_01bd0bf4(&local_34,bVar1,param_3[2],param_4[2]);
  FUN_01bd0bf4(&local_30,bVar1,param_3[3],param_4[3]);
  FUN_01bd0bf4(&local_2c,bVar1,param_3[4],param_4[4]);
  FUN_01bd0bf4(&local_28,bVar1,param_3[5],param_4[5]);
  FUN_01bd0bf4(&local_24,bVar1,param_3[6],param_4[6]);
  FUN_01bd0bf4(&local_20,bVar1,param_3[7],param_4[7]);
  *param_1 = local_3c;
  param_1[1] = local_38;
  param_1[2] = local_34;
  param_1[3] = local_30;
  param_1[4] = local_2c;
  param_1[5] = local_28;
  param_1[6] = local_24;
  param_1[7] = local_20;
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

