// FUN_01110b70 @ 01110b70 size=220 calls_out=5 calls_in=1
// strings: should not panic; pk_parity is 0 or 1

void FUN_01110b70(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_016dd606(&local_68,0,0x40);
  FUN_018341c4(DAT_018db708,&local_68,param_2);
  local_b0 = local_68;
  uStack_ac = uStack_64;
  uStack_a8 = uStack_60;
  uStack_a4 = uStack_5c;
  uStack_a0 = uStack_58;
  local_9c = local_54;
  uStack_98 = uStack_50;
  uStack_94 = uStack_4c;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  local_88 = local_40;
  uStack_84 = uStack_3c;
  uStack_80 = uStack_38;
  uStack_7c = uStack_34;
  uStack_78 = uStack_30;
  uStack_74 = uStack_2c;
  local_70 = 0;
  FUN_016dd606(&local_68,0,0x40);
  FUN_01833044(DAT_018db708,&local_68,&local_70,&local_b0);
  if (1 < local_70) {
    local_6c = local_70;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("should not panic, pk_parity is 0 or 1",0x25,&local_6c,&DAT_01887068,&DAT_01887098)
    ;
  }
  FUN_016dd1aa(param_1,&local_68,0x40);
  return;
}

