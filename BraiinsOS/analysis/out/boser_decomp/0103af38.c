// FUN_0103af38 @ 0103af38 size=168 calls_out=2 calls_in=0
// strings: 

void FUN_0103af38(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 uStack_11;
  
  local_24 = &local_30;
  local_28 = 0;
  local_30 = 0;
  local_18 = 0;
  local_2c = 1;
  local_1c = 0x60000020;
  local_20 = &DAT_01c1dd64;
  local_34 = param_2;
  iVar1 = FUN_00667a08(&local_34,&local_24);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_11,&DAT_01c1dd8c,&DAT_01d30334);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  (**(code **)*param_2)(param_2);
  return;
}

