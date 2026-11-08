// FUN_018980a8 @ 018980a8 size=284 calls_out=4 calls_in=3
// strings: 

bool FUN_018980a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
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
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
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
  
  pcVar3 = (code *)param_1[1];
  FUN_01bed93e(&local_58,0,0x30);
  (*pcVar3)(&local_58,param_3);
  local_b8 = local_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  uStack_a8 = uStack_48;
  uStack_a4 = uStack_44;
  local_a0 = local_40;
  uStack_9c = uStack_3c;
  uStack_98 = uStack_38;
  uStack_94 = uStack_34;
  uStack_90 = uStack_30;
  uStack_8c = uStack_2c;
  FUN_01bed93e(&local_58,0,0x30);
  (*pcVar3)(&local_58,param_2);
  local_88 = local_58;
  uStack_84 = uStack_54;
  uStack_80 = uStack_50;
  uStack_7c = uStack_4c;
  uStack_78 = uStack_48;
  uStack_74 = uStack_44;
  local_70 = local_40;
  uStack_6c = uStack_3c;
  uStack_68 = uStack_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  uVar2 = param_1[3];
  if (0xc < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0xc,&DAT_01d21b9c);
  }
  FUN_01bd5160(&local_88,&local_88,param_4,param_1 + 4,uVar2);
  (*(code *)*param_1)(&local_88,&local_88,param_2);
  FUN_01bd5160(&local_88,&local_88,param_5,param_1 + 4,uVar2);
  iVar1 = FUN_01bd4f04(&local_b8,&local_88,uVar2);
  return iVar1 != -1;
}

