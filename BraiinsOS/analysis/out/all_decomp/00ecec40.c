// FUN_00ecec40 @ 00ecec40 size=284 calls_out=6 calls_in=1
// strings: defrost_temperature_limit_c

int FUN_00ecec40(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  char local_50 [28];
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28 [2];
  uint local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  
  if (*param_1 != 0) {
    local_28[0] = 10;
    iVar1 = FUN_0157c50c(local_28,0,0);
    return iVar1;
  }
  iVar1 = FUN_00ecf2d0(param_1,"defrost_temperature_limit_c",0x1b);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01887458);
  }
  local_34 = param_1[4];
  local_30 = param_1[5];
  local_2c = param_1[6];
  param_1[4] = -0x80000000;
  if (local_34 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0038a142,0x2b,&DAT_01887448);
  }
  local_20 = param_4 >> 0x1f;
  uStack_1c = 0;
  local_28[0] = CONCAT31(local_28[0]._1_3_,2);
  local_18 = param_3;
  local_14 = param_4;
  FUN_00e9dc08(local_50,param_1 + 1,&local_34,local_28);
  if (local_50[0] != '\x06') {
    FUN_005c37bc(local_50);
  }
  return 0;
}

