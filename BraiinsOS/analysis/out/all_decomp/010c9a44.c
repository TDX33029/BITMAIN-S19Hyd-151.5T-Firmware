// FUN_010c9a44 @ 010c9a44 size=528 calls_out=9 calls_in=1
// strings: slash is a valid path | scheme is valid

void FUN_010c9a44(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_b0;
  int *local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  int local_98;
  undefined1 *local_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 local_80;
  undefined1 *puStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_50;
  undefined1 *local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  *(undefined2 *)(param_1 + 10) = 0xffff;
  param_1[2] = (int)&PTR_LAB_0188508c;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = (int)&PTR_LAB_0188508c;
  param_1[7] = (int)&DAT_00418645;
  param_1[8] = 1;
  param_1[9] = 0;
  *(undefined1 *)param_1 = 0;
  FUN_010a3f2c(&local_b0);
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if ((char)local_b0 == '\x02') {
    (**(code **)(*local_ac + 0x10))(local_ac + 3,local_ac[1],local_ac[2]);
    thunk_FUN_016d3fb4(local_ac);
  }
  local_b0 = iVar1;
  local_ac = (int *)iVar2;
  local_4c = (undefined1 *)thunk_FUN_016d4a50(1);
  if (local_4c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,1);
  }
  *local_4c = 0x2f;
  local_50 = 1;
  local_48 = 1;
  FUN_00f5ef18(&local_80,&local_50);
  FUN_010a5eb0(&local_50,&local_80);
  if (local_50 == 0) {
    local_80 = CONCAT31(local_80._1_3_,local_4c._0_1_);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("slash is a valid path",0x15,&local_80,&DAT_01885294,&DAT_018850a0);
  }
  local_80 = local_50;
  puStack_7c = local_4c;
  iStack_78 = local_48;
  iStack_74 = iStack_44;
  iStack_70 = iStack_40;
  if (local_98 != 0) {
    (**(code **)(local_98 + 0x10))(&iStack_8c,local_94,local_90);
  }
  local_98 = local_80;
  local_94 = puStack_7c;
  local_90 = iStack_78;
  iStack_8c = iStack_74;
  iStack_88 = iStack_70;
  local_50 = local_b0;
  local_4c = (undefined1 *)local_ac;
  local_48 = uStack_a8;
  iStack_44 = uStack_a4;
  iStack_40 = uStack_a0;
  local_3c = local_9c;
  iStack_38 = local_80;
  puStack_34 = puStack_7c;
  iStack_30 = iStack_78;
  iStack_2c = iStack_74;
  iStack_28 = iStack_70;
  FUN_010a2fe8(&local_80,&local_50);
  if ((char)local_80 == '\x03') {
    local_50 = CONCAT31(local_50._1_3_,local_80._1_1_);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("scheme is valid",0xf,&local_50,&DAT_01885284,&DAT_018850b0);
  }
  local_50 = local_80;
  local_4c = puStack_7c;
  local_48 = iStack_78;
  iStack_44 = iStack_74;
  iStack_40 = iStack_70;
  local_3c = local_6c;
  iStack_38 = iStack_68;
  puStack_34 = (undefined1 *)iStack_64;
  iStack_30 = iStack_60;
  iStack_2c = iStack_5c;
  iStack_28 = iStack_58;
  FUN_0145d5e0(param_1);
  *param_1 = local_50;
  param_1[1] = (int)local_4c;
  param_1[2] = local_48;
  param_1[3] = iStack_44;
  param_1[4] = iStack_40;
  param_1[5] = local_3c;
  param_1[6] = iStack_38;
  param_1[7] = (int)puStack_34;
  param_1[8] = iStack_30;
  param_1[9] = iStack_2c;
  param_1[10] = iStack_28;
  return;
}

