// FUN_016fc7ac @ 016fc7ac size=1460 calls_out=16 calls_in=2
// strings: should be valid Url

void FUN_016fc7ac(undefined4 *param_1,int *param_2,char *param_3)

{
  char **ppcVar1;
  int *piVar2;
  undefined1 *unaff_r4;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_20c;
  int local_208;
  int *local_204;
  undefined2 local_200;
  char **local_1fc;
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
  int *local_144;
  undefined1 *local_140;
  char **local_138;
  int *local_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  char **local_128;
  int *local_124;
  undefined1 *local_120;
  char ***local_98;
  int *local_94;
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
  int *local_5c;
  undefined1 *local_58;
  undefined1 *puStack_54;
  char **local_50;
  char **local_48;
  int *piStack_44;
  undefined1 *puStack_40;
  char **local_38;
  int *piStack_34;
  undefined1 *apuStack_30 [2];
  undefined1 uStack_25;
  
  piVar4 = param_2 + 0x16;
  if (*piVar4 != -0x80000000) {
    FUN_01441034(local_1f8,piVar4,param_3);
    goto LAB_016fc804;
  }
  piVar2 = param_2;
  if (*param_3 != '\0') {
    piVar2 = *(int **)(param_3 + 0x10);
    local_15c = param_3;
  }
  if ((*param_3 == '\0' || piVar2 == (int *)0x0) ||
     (uVar6 = FUN_01415984(*(undefined4 *)(param_3 + 0xc)), (int)uVar6 == 0)) {
    local_1f8[0] = -0x7ffffffe;
    goto LAB_016fc804;
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    local_14c = 0;
    local_150 = (char *)0x1;
LAB_016fcaf0:
    local_48 = (char **)0x0;
LAB_016fcaf8:
    local_140 = (undefined1 *)0x0;
    local_144 = (int *)&DAT_00000001;
    local_148 = (char **)0x0;
  }
  else {
    local_158 = uVar6;
    FUN_01415bb0(&local_98,*(undefined4 *)(param_3 + 0xc));
    local_14c = (uint)(local_98 != (char ***)0x0);
    local_150 = ":";
    if (local_14c == 0) {
      local_150 = (char *)0x1;
    }
    uVar6 = local_158;
    if (*(int *)(param_3 + 0x10) == 0) goto LAB_016fcaf0;
    FUN_01415bb0(&local_48,*(undefined4 *)(param_3 + 0xc));
    uVar6 = local_158;
    if (local_48 == (char **)0x0) goto LAB_016fcaf8;
    local_98 = &local_60;
    local_38 = local_48;
    piStack_34 = piStack_44;
    apuStack_30[0] = puStack_40;
    local_58 = (undefined1 *)0x0;
    local_60 = (char **)0x0;
    local_8c = (undefined2 *)0x0;
    local_5c = (int *)&DAT_00000001;
    local_90 = (undefined8 *)0x60000020;
    local_94 = (int *)&DAT_01d189dc;
    iVar3 = FUN_012fcf18(apuStack_30,&local_98);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01d18a04,&DAT_01d30334);
    }
    local_148 = local_60;
    local_144 = local_5c;
    local_140 = local_58;
    uVar6 = local_158;
  }
  local_84 = &DAT_0132b6a0;
  local_8c = &DAT_0132b6a0;
  local_90 = &local_158;
  local_98 = (char ***)&local_15c;
  local_7c = &LAB_00632348;
  local_80 = &local_148;
  local_88 = &local_150;
  local_94 = (int *)&DAT_014142c0;
  local_158 = uVar6;
  FUN_00664898(&local_168,&DAT_005a0ae6,&local_98);
  FUN_019bb7e0(local_148,local_144);
  local_90 = (undefined8 *)0x0;
  local_98 = (char ***)0x0;
  local_88 = (char **)0x0;
  FUN_01ac814c(&local_138,&local_98,local_164,local_160);
  if (local_138 == (char **)0x2) {
    local_98 = (char ***)CONCAT31(local_98._1_3_,local_134._0_1_);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("should be valid Url",0x13,&local_98,&DAT_01d189f4,&DAT_01d18a50);
  }
  FUN_01bed4e2(auStack_1b0,&local_138,0x48);
  FUN_019bb7e0(local_168,local_164);
  (**(code **)(param_2[0x1b] + 0x14))
            (&local_138,param_2[0x1a] + (*(int *)(param_2[0x1b] + 8) - 1U & 0xfffffff8) + 8,
             auStack_1b0);
  ppcVar1 = local_128;
  piVar2 = local_134;
  if (local_138 == (char **)0x3) {
LAB_016fcc68:
    local_1f8[0] = -0x7ffffffe;
    unaff_r4 = auStack_1b0;
  }
  else {
    if (local_138 == (char **)0x2) {
      if (((short)local_134[0x12] == 3) && (local_134[0x13] != 0)) {
        (**(code **)(local_134[0x13] + 0x10))(local_134 + 0x16,local_134[0x14],local_134[0x15]);
      }
      if (piVar2[0x17] != 0) {
        FUN_01443048(piVar2[0x17],piVar2[0x18]);
      }
      if (*piVar2 != 2) {
        FUN_019bb7e0(piVar2[4],piVar2[5]);
      }
      thunk_FUN_01be4678(piVar2);
      goto LAB_016fcc68;
    }
    local_1fc = local_128;
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
    FUN_016fcea8(&local_138);
    unaff_r4 = local_120;
  }
  FUN_019bb7e0(local_1a0,local_19c);
LAB_016fc804:
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
      local_58 = puStack_130;
      puStack_54 = puStack_12c;
      local_50 = local_128;
      unaff_r4 = puStack_12c;
    }
    uVar6 = CONCAT44(local_1fc,unaff_r4);
    iVar3 = *param_2;
    if (iVar3 == 3 && param_2[1] == 0) {
      uVar5 = 3;
    }
    else {
      local_200 = (undefined2)param_2[0xe];
      uVar6 = FUN_01ac635c(param_2[6],param_2[7]);
      FUN_0187b658(&local_98,param_2[9],param_2[10]);
      FUN_017260a4(&local_138,param_2[0xc],param_2[0xd]);
      local_204 = piVar4;
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else if (iVar3 == 1) {
        uVar5 = 1;
      }
      else {
        uVar5 = 2;
        iVar3 = param_2[5];
        local_20c = param_2[3];
        local_208 = param_2[4];
        local_204 = (int *)param_2[2];
      }
      local_38 = (char **)local_98;
      piStack_34 = local_94;
      apuStack_30[0] = (undefined1 *)local_90;
      local_48 = local_138;
      piStack_44 = local_134;
      puStack_40 = puStack_130;
    }
    FUN_01bed4e2((uint)&local_98 | 6,&local_60,0x14);
    FUN_01bed4e2((uint)&local_138 | 4,local_1f8,0x44);
    param_1[2] = local_204;
    param_1[3] = local_20c;
    param_1[4] = local_208;
    *(undefined8 *)(param_1 + 6) = uVar6;
    param_1[5] = iVar3;
    *param_1 = uVar5;
    param_1[1] = 0;
    param_1[8] = local_38;
    param_1[9] = piStack_34;
    param_1[10] = apuStack_30[0];
    param_1[0xb] = local_48;
    param_1[0xc] = piStack_44;
    param_1[0xd] = puStack_40;
    *(undefined2 *)(param_1 + 0xe) = local_200;
    FUN_01bed4e2((int)param_1 + 0x3a,&local_98,0x1a);
    FUN_01bed4e2(param_1 + 0x15,&local_138,0x48);
  }
  return;
}

