// FUN_019327dc @ 019327dc size=200 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_019327dc(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_ac = *(uint *)(param_2 + 0x40);
  if (0x40 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uStack_ac,0x40,&DAT_01d24fd8);
  }
  uVar2 = *param_1;
  FUN_01bed93e(&local_60,0,0x40);
  FUN_01bed4e2(&local_60,param_2,uStack_ac);
  local_a8 = local_60;
  uStack_a4 = uStack_5c;
  uStack_a0 = uStack_58;
  uStack_9c = uStack_54;
  uStack_98 = uStack_50;
  local_94 = local_4c;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  uStack_88 = uStack_40;
  uStack_84 = uStack_3c;
  local_80 = local_38;
  uStack_7c = uStack_34;
  uStack_78 = uStack_30;
  uStack_74 = uStack_2c;
  uStack_70 = uStack_28;
  uStack_6c = uStack_24;
  local_b0 = 0;
  local_68 = uVar2;
  local_64 = uVar2;
  iVar1 = thunk_FUN_01be5118(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x50);
  }
  FUN_01bed4e2(iVar1,&local_b0,0x50);
  return CONCAT44(&DAT_01d258f8,iVar1);
}

