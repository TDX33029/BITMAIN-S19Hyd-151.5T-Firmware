// FUN_00c05d98 @ 00c05d98 size=1248 calls_out=4 calls_in=0
// strings: origin

byte FUN_00c05d98(uint *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint **local_6c;
  undefined *local_68;
  uint *local_64;
  undefined *local_60;
  uint *local_5c;
  undefined *local_58;
  uint *local_54;
  undefined *local_50;
  uint *local_4c;
  undefined *local_48;
  uint **local_44;
  undefined *local_40;
  uint *local_3c;
  undefined4 *local_38;
  byte local_34;
  byte local_33;
  uint *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar2 = 0;
  if ((uint)(*param_1 < 2) <= -param_1[1]) {
    iVar2 = *param_1 - 1;
  }
  if (iVar2 == 0) {
    local_30 = param_1 + 0x20;
    local_40 = &DAT_018727e4;
    local_44 = &local_30;
    local_4c = param_1 + 0x1a;
    local_5c = param_1 + 0x26;
    local_64 = param_1 + 0x24;
    local_6c = (uint **)(param_1 + 4);
    local_50 = &DAT_01872a2c;
    local_48 = &DAT_01872a3c;
    local_58 = &DAT_01872a1c;
    local_60 = &DAT_01872a1c;
    local_68 = &DAT_01872a0c;
    local_54 = param_1;
    bVar1 = FUN_00fb36b8(param_2,&DAT_003577e6,2,&DAT_01872a4c,6,&local_6c,6);
  }
  else {
    local_38 = param_2;
    if (iVar2 == 1) {
      local_3c = param_1 + 0x18;
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0035781e,2);
      bVar1 = 1;
      if (iVar2 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a79,3);
          bVar1 = 1;
          if (iVar2 == 0) {
            iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00357820,0x13);
            bVar1 = 1;
            if (iVar2 == 0) {
              iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
              bVar1 = 1;
              if (iVar2 == 0) {
                bVar1 = FUN_00c065c4(param_1 + 2,param_2);
              }
            }
          }
        }
        else {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7e,3);
          bVar1 = 1;
          if (iVar2 == 0) {
            local_64 = (uint *)param_2[2];
            local_60 = (undefined *)param_2[3];
            local_28 = &local_21;
            local_6c = &local_30;
            local_2c = param_2[1];
            local_30 = (uint *)*param_2;
            local_68 = &DAT_01880dc4;
            local_21 = 1;
            iVar2 = FUN_00fb1f64(local_6c,&DAT_00357820,0x13);
            if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar2 == 0)) {
              iVar2 = FUN_00c065c4(param_1 + 2,&local_6c);
              if (iVar2 == 0) {
                bVar1 = (**(code **)(local_68 + 0xc))(local_6c,&DAT_00414a81,2);
              }
              else {
                bVar1 = 1;
              }
            }
          }
        }
      }
      uVar4 = 6;
      pcVar3 = "origin";
      pcVar5 = FUN_00d6371c;
      local_34 = bVar1;
    }
    else {
      local_3c = param_1 + 0x18;
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00357833,2);
      bVar1 = 1;
      if (iVar2 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a79,3);
          bVar1 = 1;
          if (iVar2 == 0) {
            iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00357820,0x13);
            bVar1 = 1;
            if (iVar2 == 0) {
              iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
              bVar1 = 1;
              if (iVar2 == 0) {
                bVar1 = FUN_00c065c4(param_1 + 2,param_2);
              }
            }
          }
        }
        else {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7e,3);
          bVar1 = 1;
          if (iVar2 == 0) {
            local_64 = (uint *)param_2[2];
            local_60 = (undefined *)param_2[3];
            local_28 = &local_21;
            local_6c = &local_30;
            local_2c = param_2[1];
            local_30 = (uint *)*param_2;
            local_68 = &DAT_01880dc4;
            local_21 = 1;
            iVar2 = FUN_00fb1f64(local_6c,&DAT_00357820,0x13);
            if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar2 == 0)) {
              iVar2 = FUN_00c065c4(param_1 + 2,&local_6c);
              if (iVar2 == 0) {
                bVar1 = (**(code **)(local_68 + 0xc))(local_6c,&DAT_00414a81,2);
              }
              else {
                bVar1 = 1;
              }
            }
          }
        }
      }
      uVar4 = 8;
      pcVar3 = &DAT_0056aa60;
      pcVar5 = FUN_00cd7c18;
      local_34 = bVar1;
    }
    local_33 = 1;
    FUN_00fb2258(&local_38,pcVar3,uVar4,&local_3c,pcVar5);
    bVar1 = local_33 | local_34;
    if (local_33 == 1 && (local_34 & 1) == 0) {
      if ((*(byte *)((int)local_38 + 10) & 0x80) == 0) {
        bVar1 = (**(code **)(local_38[1] + 0xc))(*local_38," }",2);
        return bVar1 & 1;
      }
      bVar1 = (**(code **)(local_38[1] + 0xc))(*local_38,"}",1);
      return bVar1 & 1;
    }
  }
  return bVar1 & 1;
}

