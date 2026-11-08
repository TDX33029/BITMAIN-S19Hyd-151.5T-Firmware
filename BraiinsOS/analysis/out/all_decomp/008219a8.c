// FUN_008219a8 @ 008219a8 size=384 calls_out=9 calls_in=1
// strings: 

void FUN_008219a8(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_4c;
  uint *local_48;
  uint *local_44;
  code *local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_28;
  
  FUN_00821b48(&local_4c);
  if ((char)local_4c == '\x01') {
    *param_1 = 0x80000000;
    param_1[1] = local_48;
    return;
  }
  if (((param_3 & 0xff) == 0) || ((param_3 & 0xff) != 1)) {
    uVar3 = *param_2;
    if (0xff < uVar3) {
      local_28 = FUN_0081e9c8();
      local_40 = FUN_00facd88;
      local_4c = &local_28;
      local_48 = &DAT_0157d360;
      local_44 = param_2;
      FUN_00600d2c(&local_38,&DAT_00343148,&local_4c);
      uVar2 = FUN_00808de4(&local_38);
      *param_1 = 0x80000000;
      param_1[1] = uVar2;
      return;
    }
    uVar2 = 2;
    puVar1 = (uint *)thunk_FUN_016d4a50(2);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,2);
    }
    *(short *)puVar1 = (short)uVar3;
    local_44 = (uint *)0x2;
  }
  else {
    uVar3 = *param_2;
    uVar2 = 4;
    puVar1 = (uint *)thunk_FUN_016d4a50(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    *puVar1 = uVar3;
    local_44 = (uint *)0x4;
  }
  local_40 = (code *)((int)local_44 + 4);
  local_3c = local_4c._1_1_;
  local_4c = (undefined8 *)uVar2;
  local_48 = puVar1;
  FUN_00873188(&local_38,&local_4c,param_3);
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  thunk_FUN_016d3fb4(puVar1);
  return;
}

