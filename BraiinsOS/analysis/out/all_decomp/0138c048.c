// FUN_0138c048 @ 0138c048 size=672 calls_out=2 calls_in=1
// strings: ReverseHybridEngineBoundedBacktrackerEnginemaximum_lenlook_set_prefixlook_set_suffixlook_set_prefix_anylook_set_suffix_anyexplicit_captures_lenstatic_explicit_captures_lenliteralalternation_literal | DFAmatch_kindstarts_for_each_patternbyte_classesunicode_word_boundaryspecialize_start_statesskip_cache_capacity_checkminimum_cache_clear_countminimum_bytes_per_state | DFAmatch_kindstarts_for_each_patternbyte_classesunicode_word_boundaryspecialize_start_statesskip_cache_capacity_checkminimum_cache_clear_countminimum_bytes_per_state

undefined4 FUN_0138c048(int param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_80;
  int local_7c;
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
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,
                    "ReverseHybridEngineBoundedBacktrackerEnginemaximum_lenlook_set_prefixlook_set_suffixlook_set_prefix_anylook_set_suffix_anyexplicit_captures_lenstatic_explicit_captures_lenliteralalternation_literal"
                    ,0x13);
  if (iVar1 == 0) {
    local_5c = param_1;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 == 0) {
        local_2c = &local_70;
        local_34 = param_1 + 600;
        local_3c = param_1 + 0x158;
        local_44 = param_1 + 0x58;
        local_4c = param_1 + 0x27c;
        local_54 = param_1 + 0x278;
        local_28 = &DAT_01893ef0;
        local_70 = (undefined4 *)(param_1 + 0x280);
        local_30 = &DAT_01893080;
        local_38 = &DAT_01893f40;
        local_40 = &DAT_01893f30;
        local_48 = &DAT_01893070;
        local_50 = &DAT_01893060;
        local_58 = &DAT_01893050;
        iVar1 = FUN_00fb36b8(param_2,
                             "DFAmatch_kindstarts_for_each_patternbyte_classesunicode_word_boundaryspecialize_start_statesskip_cache_capacity_checkminimum_cache_clear_countminimum_bytes_per_state"
                             ,3,&DAT_01893f60,7,&local_5c,7);
        if (iVar1 == 0) {
          uVar3 = *param_2;
          pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_0138c2c4:
          uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
          return uVar3;
        }
      }
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 == 0) {
        local_78 = &local_71;
        local_68 = param_2[2];
        local_64 = param_2[3];
        local_70 = &local_80;
        local_71 = 1;
        local_6c = &DAT_01880dc4;
        local_28 = &DAT_01893ef0;
        local_2c = &local_60;
        local_30 = &DAT_01893080;
        local_34 = param_1 + 600;
        local_3c = param_1 + 0x158;
        local_44 = param_1 + 0x58;
        local_4c = param_1 + 0x27c;
        local_54 = param_1 + 0x278;
        local_60 = (undefined4 *)(param_1 + 0x280);
        local_58 = &DAT_01893050;
        local_38 = &DAT_01893f40;
        local_40 = &DAT_01893f30;
        local_48 = &DAT_01893070;
        local_50 = &DAT_01893060;
        local_80 = uVar3;
        local_7c = iVar4;
        iVar1 = FUN_00fb36b8(&local_70,
                             "DFAmatch_kindstarts_for_each_patternbyte_classesunicode_word_boundaryspecialize_start_statesskip_cache_capacity_checkminimum_cache_clear_countminimum_bytes_per_state"
                             ,3,&DAT_01893f60,7,&local_5c,7);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_6c + 0xc))(local_70,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_0138c2c4;
      }
    }
  }
  return 1;
}

