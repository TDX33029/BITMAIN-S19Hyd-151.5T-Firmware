// FUN_013c1e18 @ 013c1e18 size=932 calls_out=3 calls_in=1
// strings: Regex | reverse | forward | DFAmatch_kindstarts_for_each_patternbyte_classesunicode_word_boundaryspecialize_start_statesskip_cache_capacity_checkminimum_cache_clear_countminimum_bytes_per_state | forward | DFAmatch_kindstarts_for_each_patternbyte_classesunicode_word_boundaryspecialize_start_statesskip_cache_capacity_checkminimum_cache_clear_countminimum_bytes_per_state

byte FUN_013c1e18(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int local_8c;
  undefined4 *local_88;
  byte local_84;
  byte local_83;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 local_71;
  undefined4 *local_70;
  undefined *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 *local_60;
  int local_5c;
  undefined *local_58;
  int local_54;
  undefined *local_50;
  int local_4c;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  undefined4 **local_2c;
  undefined *local_28;
  
  local_8c = param_1 + 0x288;
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar4,"Regex",5);
  bVar1 = 1;
  local_88 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"forward",7);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            local_2c = &local_70;
            local_34 = param_1 + 600;
            local_3c = param_1 + 0x158;
            local_44 = param_1 + 0x58;
            local_4c = param_1 + 0x27c;
            local_54 = param_1 + 0x278;
            local_28 = &DAT_01893ef0;
            local_70 = (undefined4 *)(param_1 + 0x280);
            local_30 = &DAT_01893f50;
            local_38 = &DAT_01893f40;
            local_40 = &DAT_01893f30;
            local_48 = &DAT_01893f20;
            local_50 = &DAT_01893f10;
            local_58 = &DAT_01893f00;
            local_5c = param_1;
            bVar1 = FUN_00fb36b8(param_2,
                                 "DFAmatch_kindstarts_for_each_patternbyte_classesunicode_word_boundaryspecialize_start_statesskip_cache_capacity_checkminimum_cache_clear_countminimum_bytes_per_state"
                                 ,3,&DAT_01893f60,7,&local_5c,7);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a7e,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        local_80 = *param_2;
        local_7c = param_2[1];
        local_68 = param_2[2];
        local_64 = param_2[3];
        local_78 = &local_71;
        local_70 = &local_80;
        local_71 = 1;
        local_6c = &DAT_01880dc4;
        iVar2 = FUN_00fb1f64(local_70,"forward",7);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_80,&DAT_00414a7c,2), iVar2 == 0)) {
          local_2c = &local_60;
          local_34 = param_1 + 600;
          local_3c = param_1 + 0x158;
          local_44 = param_1 + 0x58;
          local_4c = param_1 + 0x27c;
          local_54 = param_1 + 0x278;
          local_28 = &DAT_01893ef0;
          local_60 = (undefined4 *)(param_1 + 0x280);
          local_30 = &DAT_01893f50;
          local_38 = &DAT_01893f40;
          local_40 = &DAT_01893f30;
          local_48 = &DAT_01893f20;
          local_50 = &DAT_01893f10;
          local_58 = &DAT_01893f00;
          local_5c = param_1;
          iVar2 = FUN_00fb36b8(&local_70,
                               "DFAmatch_kindstarts_for_each_patternbyte_classesunicode_word_boundaryspecialize_start_statesskip_cache_capacity_checkminimum_cache_clear_countminimum_bytes_per_state"
                               ,3,&DAT_01893f60,7,&local_5c,7);
          if (iVar2 == 0) {
            bVar1 = (**(code **)(local_6c + 0xc))(local_70,&DAT_00414a81,2);
          }
          else {
            bVar1 = 1;
          }
        }
      }
    }
  }
  local_83 = 1;
  local_84 = bVar1;
  FUN_00fb2258(&local_88,"reverse",7,&local_8c,FUN_013927f4);
  if (local_83 != 1 || (local_84 & 1) != 0) {
    return (local_83 | local_84) & 1;
  }
  if ((*(byte *)((int)local_88 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_88[1] + 0xc))(*local_88," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_88[1] + 0xc))(*local_88,"}",1);
  return bVar1 & 1;
}

