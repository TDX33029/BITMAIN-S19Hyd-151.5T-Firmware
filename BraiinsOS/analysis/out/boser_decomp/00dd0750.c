// FUN_00dd0750 @ 00dd0750 size=680 calls_out=11 calls_in=1
// strings: 

void FUN_00dd0750(undefined4 *param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [4];
  char local_9c;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int *local_88;
  int iStack_84;
  uint uStack_80;
  int *local_78;
  int iStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  int *local_60;
  int local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 **local_38;
  undefined *local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_3 + 0xc) == 2) {
    local_110 = *(int *)(param_3 + 0x10);
    uStack_10c = *(undefined4 *)(param_3 + 0x14);
    uStack_108 = *(undefined4 *)(param_3 + 0x18);
    uStack_104 = *(undefined4 *)(param_3 + 0x1c);
    uStack_100 = *(undefined4 *)(param_3 + 0x20);
    uStack_fc = *(undefined4 *)(param_3 + 0x24);
    local_38 = &local_60;
    local_58 = 0;
    local_60 = (undefined4 *)0x0;
    local_2c = 0;
    local_5c = 1;
    local_30 = 0x60000020;
    local_34 = &DAT_01c1695c;
    iVar2 = FUN_00b81f38(&local_110,&local_38);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_78,&DAT_01c16984,&DAT_01d30334);
    }
    *param_1 = local_60;
    param_1[1] = local_5c;
    param_1[2] = local_58;
    if (3 < local_110 + 0x7fffffeaU) {
      FUN_00dc8870((int *)(param_3 + 0x10));
    }
  }
  else {
    FUN_01bed4e2(&local_110,param_3,0x60);
    local_98 = 0;
    uStack_94 = 0x41;
    uStack_90 = 0;
    uStack_8c = 0;
    local_30 = 0;
    local_34 = (undefined *)0x1;
    local_38 = (undefined4 **)0x0;
    iVar2 = FUN_012f2584(&local_110,&local_38,&DAT_01c1695c);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_78,&DAT_01c16984,&DAT_01d30334);
    }
    local_88 = (int *)local_38;
    iStack_84 = (int)local_34;
    uStack_80 = local_30;
    FUN_01283524(&local_38);
    FUN_014144fc(&local_78,&local_38);
    if ((char)local_68 == '\x02') {
      local_9c = '\x02';
      if (local_98 != 0) {
        (**(code **)(local_98 + 0x10))(&uStack_8c,0x41,0);
      }
    }
    else {
      local_60 = local_78;
      local_5c = iStack_74;
      local_58 = uStack_70;
      uStack_54 = uStack_6c;
      uStack_50 = local_68;
      FUN_01933ff0(&local_38,*param_2 + 0x78);
      puVar1 = local_34;
      if (local_38 == (undefined4 **)0x1) {
        local_a8 = CONCAT31(local_a8._1_3_,(undefined1)local_30);
        local_ac = (int)local_34;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_ac,&DAT_01c22118,&DAT_01c21cbc);
      }
      uVar3 = local_30 & 0xff;
      local_48 = local_98;
      uStack_44 = uStack_94;
      uStack_40 = uStack_90;
      uStack_3c = uStack_8c;
      local_38 = (undefined4 **)local_78;
      local_34 = (undefined *)iStack_74;
      local_30 = uStack_70;
      local_2c = uStack_6c;
      uStack_28 = local_68;
      FUN_00714c58(&local_ac,(int)puVar1 + 8,&local_48,&local_38);
      FUN_011967dc(puVar1,uVar3);
    }
    if (local_9c != '\x02') {
      (**(code **)(local_ac + 0x10))(auStack_a0,local_a8,uStack_a4);
    }
    *param_1 = 0x80000000;
    FUN_00dd1234(param_3);
  }
  return;
}

