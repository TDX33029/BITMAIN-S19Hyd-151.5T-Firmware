// FUN_01898f50 @ 01898f50 size=220 calls_out=3 calls_in=1
// strings: 

bool FUN_01898f50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *puVar4;
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
  
  puVar4 = (undefined4 *)*param_1;
  pcVar3 = (code *)*puVar4;
  FUN_01bed93e(&local_58,0,0x30);
  (*pcVar3)(&local_58,param_4,param_2);
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
  pcVar3 = (code *)*puVar4;
  FUN_01bed93e(&local_58,0,0x30);
  (*pcVar3)(&local_58,param_3,&DAT_0051d604);
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
  uVar2 = *(uint *)(*param_1 + 0xc);
  if (0xc < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0xc,&DAT_01d2190c);
  }
  iVar1 = thunk_FUN_01bed842(&local_b8,&local_88,uVar2 << 2);
  return iVar1 == 0;
}

