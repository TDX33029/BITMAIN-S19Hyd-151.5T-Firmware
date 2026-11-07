// FUN_01389900 @ 01389900 size=1168 calls_out=9 calls_in=1
// strings: 

void FUN_01389900(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int *param_4,
                 int param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint3 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint extraout_r12;
  uint local_260;
  undefined1 auStack_200 [20];
  int local_1ec;
  int local_1dc;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined4 local_198;
  undefined1 *local_194;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined **local_174;
  int *local_170;
  uint local_16c;
  undefined4 uStack_168;
  undefined **local_164;
  int *local_160;
  uint local_15c;
  undefined4 local_158;
  int local_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  undefined2 local_144;
  byte local_ec;
  byte local_e8;
  undefined4 uStack_e7;
  uint3 uStack_e3;
  int *local_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined1 *local_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint local_4c;
  int *local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined **local_38;
  int *local_34;
  uint local_30;
  undefined4 local_2c [2];
  
  uVar7 = param_3[0x1f];
  uVar8 = param_3[0x1d];
  uVar9 = param_3[0x1c];
  bVar1 = *(byte *)(param_3 + 0x1b);
  uVar16 = param_3[0x1e];
  cVar2 = *(char *)(param_3 + 0x21);
  FUN_0178e884(param_3[0x20]);
  local_90 = param_3[0x10];
  uStack_8c = param_3[0x11];
  uStack_88 = param_3[0x12];
  uStack_84 = param_3[0x13];
  uStack_80 = param_3[0x14];
  local_7c = param_3[0x15];
  uStack_78 = param_3[0x16];
  uStack_74 = param_3[0x17];
  uStack_70 = param_3[0x18];
  uStack_6c = param_3[0x19];
  local_68 = param_3[0x1a];
  local_1a8 = *param_4;
  iStack_1a4 = param_4[1];
  iStack_1a0 = param_4[2];
  iStack_19c = param_4[3];
  FUN_014157b8(&local_e8,&local_90);
  uVar14 = local_c8;
  puVar6 = local_cc;
  iVar5 = local_d0;
  iVar3 = local_1a8;
  uVar10 = bVar1 ^ 7;
  if (uVar10 == 0 && local_1a8 == 0) {
    uVar14 = 3;
    local_164 = (undefined **)0x0;
    local_15c = uVar10;
    piVar15 = param_4;
    uVar17 = uVar16;
    uVar13 = extraout_r12;
    goto LAB_01389b40;
  }
  if (local_d0 == 0) {
LAB_01389ab0:
    local_38 = &PTR_FUN_01cec0dc;
    local_34 = (int *)&DAT_00000001;
    local_30 = 0;
    local_2c[0] = 0;
  }
  else {
    local_198 = (undefined **)local_d0;
    local_194 = local_cc;
    local_190 = local_c8;
    local_18c = uStack_c4;
    local_188 = uStack_c0;
    puVar12 = &DAT_005327c4;
    if (local_c8 != 0) {
      puVar12 = local_cc;
    }
    uVar13 = local_c8;
    if (local_c8 < 2) {
      uVar13 = 1;
    }
    FUN_012834b0(&local_38,puVar12,uVar13);
    (**(code **)(iVar5 + 0x10))(&local_18c,puVar6,uVar14);
    local_48 = local_34;
    local_44 = local_30;
    local_40 = local_2c[0];
    if (local_38 == (undefined **)0x0) goto LAB_01389ab0;
    puVar11 = (undefined4 *)((uint)&local_38 | 4);
    *puVar11 = local_34;
    puVar11[1] = local_30;
    puVar11[2] = local_2c[0];
  }
  uVar4 = uStack_e3;
  local_18c = 0;
  local_190 = 0;
  local_194 = (undefined1 *)0x1;
  local_198 = &PTR_FUN_01cec0dc;
  uVar14 = (uint)local_e8;
  local_260 = uStack_e7;
  if (local_30 == 0) {
    uVar17 = 0;
    piVar15 = (int *)&DAT_005327c4;
    if (bVar1 == 0) {
      piVar15 = (int *)"*";
    }
    (*(code *)local_38[4])(local_2c,local_34,0);
    local_15c = 1;
    local_164 = &PTR_FUN_01cec0dc;
  }
  else {
    local_15c = local_30;
    piVar15 = local_34;
    uVar17 = local_2c[0];
    local_164 = local_38;
  }
  uVar13 = (uint)uVar4;
LAB_01389b40:
  local_154 = *param_4;
  iStack_150 = param_4[1];
  iStack_14c = param_4[2];
  iStack_148 = param_4[3];
  local_144 = 0;
  local_174 = (undefined **)0x0;
  local_184 = 0;
  local_198 = (undefined **)
              CONCAT13(*(undefined1 *)((int)param_3 + 0x6f),
                       CONCAT21(*(undefined2 *)((int)param_3 + 0x6d),bVar1));
  local_194 = (undefined1 *)uVar9;
  local_190 = uVar8;
  local_18c = uVar16;
  local_188 = uVar7;
  local_160 = piVar15;
  local_158 = uVar17;
  if (uVar14 != 3) {
    local_50 = uVar14 | local_260 << 8;
    local_4c = uVar13 << 8 | local_260 >> 0x18;
    FUN_01375a8c(&local_198,&local_50);
  }
  if (local_e0 != (int *)0x0) {
    local_48 = local_e0;
    local_44 = uStack_dc;
    local_40 = uStack_d8;
    uStack_3c = uStack_d4;
    FUN_012834b0(&local_38,uStack_dc,uStack_d8);
    if (local_174 != (undefined **)0x0) {
      (*(code *)local_174[4])(&uStack_168,local_170,local_16c);
    }
    local_174 = local_38;
    local_170 = local_34;
    local_16c = local_30;
    uStack_168 = local_2c[0];
    (*(code *)local_48[4])(&uStack_3c,local_44,local_40);
  }
  FUN_01bed4e2(auStack_200,&local_198,0x58);
  if (uVar10 == 0 && iVar3 == 0) {
    if (local_e8 != 3) {
      FUN_017726bc(local_e8,CONCAT31(uStack_e3,uStack_e7._3_1_));
    }
    if (local_d0 != 0) {
      (**(code **)(local_d0 + 0x10))(&uStack_c4,local_cc,local_c8);
    }
  }
  if (local_1ec == 0 && local_1dc == 0) {
    if (cVar2 == '\x03') {
      *param_1 = 3;
      param_1[1] = 0;
      *(undefined2 *)(param_1 + 2) = 0x703;
      FUN_017b2fc0(auStack_200);
      FUN_0142e6dc(param_3);
      return;
    }
    local_194 = (undefined1 *)0x0;
    local_198 = (undefined **)0x1;
    FUN_01375a8c(auStack_200,&local_198);
  }
  FUN_01bed4e2(&local_e8,auStack_200,0x58);
  local_90 = *param_3;
  uStack_8c = param_3[1];
  uStack_88 = param_3[2];
  uStack_84 = param_3[3];
  uStack_80 = param_3[4];
  local_7c = param_3[5];
  uStack_78 = param_3[6];
  uStack_74 = param_3[7];
  uStack_70 = param_3[8];
  uStack_6c = param_3[9];
  local_68 = param_3[10];
  uStack_64 = param_3[0xb];
  uStack_60 = param_3[0xc];
  uStack_5c = param_3[0xd];
  uStack_58 = param_3[0xe];
  uStack_54 = param_3[0xf];
  FUN_01375c08(&local_198,param_2,&local_e8);
  if (param_5 != 0) {
    local_ec = local_ec | 1;
  }
  FUN_01bed4e2(param_1,&local_198,0xb0);
  return;
}

