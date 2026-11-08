// FUN_00ece4c8 @ 00ece4c8 size=264 calls_out=6 calls_in=1
// strings: 

int FUN_00ece4c8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char local_50 [28];
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  if (*param_1 != 0) {
    local_28[0] = 10;
    iVar1 = FUN_0157c50c(local_28,0,0);
    return iVar1;
  }
  iVar1 = FUN_00ecf2d0(param_1);
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
  uStack_1c = 0;
  local_20 = 0;
  local_14 = 0;
  local_28[0] = CONCAT31(local_28[0]._1_3_,2);
  uStack_18 = param_4;
  FUN_00e9dc08(local_50,param_1 + 1,&local_34,local_28);
  if (local_50[0] != '\x06') {
    FUN_005c37bc(local_50);
  }
  return 0;
}

