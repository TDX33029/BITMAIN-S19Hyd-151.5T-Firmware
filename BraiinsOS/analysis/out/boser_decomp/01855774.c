// FUN_01855774 @ 01855774 size=1380 calls_out=15 calls_in=2
// strings: should be valid Url

void FUN_01855774(undefined4 *param_1,int *param_2,char *param_3)

{
  char **ppcVar1;
  int *piVar2;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  undefined2 local_1fc;
  int local_1f8 [18];
  undefined1 auStack_1b0 [16];
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  char *local_15c;
  undefined8 local_158;
  char *local_150;
  uint local_14c;
  char **local_148;
  undefined *local_144;
  undefined4 local_140;
  char **local_138;
  undefined *local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  char **local_128;
  undefined *local_124;
  undefined4 local_120;
  char ***local_98;
  undefined *local_94;
  undefined8 *local_90;
  undefined2 *local_8c;
  char **local_88;
  undefined2 *local_84;
  char ***local_80;
  undefined1 *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  char **local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  char **local_50;
  char **local_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  char **local_38;
  undefined *puStack_34;
  undefined4 auStack_30 [2];
  undefined1 uStack_25;
  
  if (param_2[0x16] != -0x80000000) {
    FUN_01441034(local_1f8,param_2 + 0x16,param_3);
    goto LAB_018557cc;
  }
  piVar2 = param_2;
  if (*param_3 != '\0') {
    piVar2 = *(int **)(param_3 + 0x10);
    local_15c = param_3;
  }
  if ((*param_3 == '\0' || piVar2 == (int *)0x0) ||
     (uVar5 = FUN_01415984(*(undefined4 *)(param_3 + 0xc)), (int)uVar5 == 0)) {
    local_1f8[0] = -0x7ffffffe;
    goto LAB_018557cc;
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    local_14c = 0;
    local_150 = (char *)0x1;
LAB_01855ac0:
    local_48 = (char **)0x0;
LAB_01855ac8:
    local_140 = 0;
    local_144 = (undefined *)0x1;
    local_148 = (char **)0x0;
  }
  else {
    local_158 = uVar5;
    FUN_01415bb0(&local_98,*(undefined4 *)(param_3 + 0xc));
    local_14c = (uint)(local_98 != (char ***)0x0);
    local_150 = ":";
    if (local_14c == 0) {
      local_150 = (char *)0x1;
    }
    uVar5 = local_158;
    if (*(int *)(param_3 + 0x10) == 0) goto LAB_01855ac0;
    FUN_01415bb0(&local_48,*(undefined4 *)(param_3 + 0xc));
    uVar5 = local_158;
    if (local_48 == (char **)0x0) goto LAB_01855ac8;
    local_98 = &local_60;
    local_38 = local_48;
    puStack_34 = puStack_44;
    auStack_30[0] = uStack_40;
    local_58 = 0;
    local_60 = (char **)0x0;
    local_8c = (undefined2 *)0x0;
    local_5c = (undefined *)0x1;
    local_90 = (undefined8 *)0x60000020;
    local_94 = &DAT_01d1f1c0;
    iVar3 = FUN_012fcf18(auStack_30,&local_98);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01d1f208,&DAT_01d30334);
    }
    local_148 = local_60;
    local_144 = local_5c;
    local_140 = local_58;
    uVar5 = local_158;
  }
  local_84 = &DAT_0132b6a0;
  local_8c = &DAT_0132b6a0;
  local_90 = &local_158;
  local_98 = (char ***)&local_15c;
  local_7c = &LAB_00632348;
  local_80 = &local_148;
  local_88 = &local_150;
  local_94 = &DAT_014142c0;
  local_158 = uVar5;
  FUN_00664898(&local_168,&DAT_005a0ae6,&local_98);
  FUN_019bb7e0(local_148,local_144);
  local_90 = (undefined8 *)0x0;
  local_98 = (char ***)0x0;
  local_88 = (char **)0x0;
  FUN_01ac814c(&local_138,&local_98,local_164,local_160);
  if (local_138 == (char **)0x2) {
    local_98 = (char ***)CONCAT31(local_98._1_3_,local_134._0_1_);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("should be valid Url",0x13,&local_98,&DAT_01d1f1e8,&DAT_01d20604);
  }
  FUN_01bed4e2(auStack_1b0,&local_138,0x48);
  FUN_019bb7e0(local_168,local_164);
  (**(code **)(param_2[0x1b] + 0x14))
            (&local_138,param_2[0x1a] + (*(int *)(param_2[0x1b] + 8) - 1U & 0xfffffff8) + 8,
             auStack_1b0);
  ppcVar1 = local_128;
  if (local_138 == (char **)0x3) {
LAB_01855be0:
    local_1f8[0] = -0x7ffffffe;
  }
  else {
    if (local_138 == (char **)0x2) {
      FUN_017109f8(local_134);
      goto LAB_01855be0;
    }
    local_1fc = SUB42(local_128,0);
    unaff_r4 = 0;
    FUN_019bb7e0(0,1);
    local_68 = 0;
    local_6c = 0;
    local_70 = 1;
    local_74 = 0;
    local_78 = 0;
    local_7c = (undefined1 *)0x1;
    local_80 = (char ***)0x0;
    local_84 = (undefined2 *)0x0;
    local_88 = (char **)0x1;
    local_8c = (undefined2 *)0x0;
    local_90 = (undefined8 *)local_120;
    local_94 = local_124;
    local_98 = (char ***)ppcVar1;
    FUN_0143fa88(&local_138,&local_98);
    FUN_01441034(local_1f8,&local_138,param_3);
    FUN_018564a0(&local_138);
  }
  FUN_019bb7e0(local_1a0,local_19c);
LAB_018557cc:
  if (local_1f8[0] == -0x7ffffffe) {
    *param_1 = 4;
    param_1[1] = 0;
  }
  else {
    FUN_01bed4e2(auStack_1b0,local_1f8,0x44);
    if ((char)param_2[0x14] == '\x02') {
      local_50 = (char **)CONCAT31(local_50._1_3_,2);
    }
    else {
      (**(code **)param_2[0x10])(&local_138,param_2 + 0x13,param_2[0x11],param_2[0x12]);
      local_128 = (char **)CONCAT31(local_128._1_3_,(char)param_2[0x14]);
      local_60 = local_138;
      local_5c = local_134;
      local_58 = uStack_130;
      uStack_54 = uStack_12c;
      local_50 = local_128;
      unaff_r4 = uStack_12c;
    }
    iVar3 = *param_2;
    uVar5 = CONCAT44(unaff_r4,iVar3);
    if (iVar3 == 3 && param_2[1] == 0) {
      uVar4 = 3;
    }
    else {
      local_1fc = (undefined2)param_2[0xe];
      uVar5 = FUN_01ac635c(param_2[6],param_2[7]);
      FUN_0187b658(&local_98,param_2[9],param_2[10]);
      FUN_017260a4(&local_138,param_2[0xc],param_2[0xd]);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else if (iVar3 == 1) {
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
        local_200 = param_2[2];
        local_208 = param_2[3];
        local_204 = param_2[4];
        local_20c = param_2[5];
      }
      local_38 = (char **)local_98;
      puStack_34 = local_94;
      auStack_30[0] = local_90;
      local_48 = local_138;
      puStack_44 = local_134;
      uStack_40 = uStack_130;
    }
    FUN_01bed4e2((uint)&local_98 | 6,&local_60,0x14);
    FUN_01bed4e2((uint)&local_138 | 4,local_1f8,0x44);
    param_1[2] = local_200;
    param_1[3] = local_208;
    param_1[4] = local_204;
    param_1[5] = local_20c;
    *param_1 = uVar4;
    param_1[6] = (int)uVar5;
    param_1[1] = 0;
    param_1[7] = (int)((ulonglong)uVar5 >> 0x20);
    param_1[8] = local_38;
    param_1[9] = puStack_34;
    param_1[10] = auStack_30[0];
    param_1[0xb] = local_48;
    param_1[0xc] = puStack_44;
    param_1[0xd] = uStack_40;
    *(undefined2 *)(param_1 + 0xe) = local_1fc;
    FUN_01bed4e2((int)param_1 + 0x3a,&local_98,0x1a);
    FUN_01bed4e2(param_1 + 0x15,&local_138,0x48);
  }
  return;
}

