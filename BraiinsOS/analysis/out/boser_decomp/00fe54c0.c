// FUN_00fe54c0 @ 00fe54c0 size=940 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fe54c0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  uint local_1a4;
  undefined4 local_1a0 [4];
  int *local_190;
  int *local_18c;
  int local_188;
  int *local_184;
  uint local_180;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  int local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int local_104;
  int iStack_100;
  int iStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_188 = *param_2;
  if (local_188 < 0) {
    iVar12 = FUN_012664e4(param_2,&local_58,&DAT_01c1603c);
    *param_1 = 0;
    param_1[1] = iVar12;
  }
  else {
    uVar16 = param_2[2];
    piVar14 = (int *)param_2[1];
    local_180 = 0;
    piVar15 = piVar14 + uVar16 * 8;
    local_1a0[0] = 0x80000015;
    uVar9 = uVar16;
    if (0x3fff < uVar16) {
      uVar9 = 0x4000;
    }
    local_190 = piVar14;
    local_18c = piVar14;
    local_184 = piVar15;
    uVar17 = thunk_FUN_01bee35a(0x80000015,0x2c0);
    puVar11 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
    if ((char)puVar11[4] == '\0') {
      FUN_019ae6ac(&local_58);
      *puVar11 = local_58;
      puVar11[1] = uStack_54;
      puVar11[2] = uStack_50;
      puVar11[3] = uStack_4c;
      *(undefined1 *)(puVar11 + 4) = 1;
    }
    uVar6 = *puVar11;
    uVar7 = puVar11[1];
    *puVar11 = uVar6 + 1;
    puVar11[1] = uVar7 + (0xfffffffe < uVar6);
    FUN_006e57c8(&local_158,uVar9,uVar6,uVar7,puVar11[2],puVar11[3]);
    piVar2 = (int *)((uint)&local_98 | 4);
    puVar3 = (undefined4 *)((uint)&local_138 | 4);
    piVar4 = (int *)((uint)&local_58 | 4);
    local_1a4 = 0;
    piVar10 = piVar14;
    for (iVar12 = uVar16 << 5; piVar10 = piVar10 + 8, iVar12 != 0; iVar12 = iVar12 + -0x20) {
      iVar5 = *piVar14;
      local_c8 = piVar14[1];
      iStack_c4 = piVar14[2];
      iStack_c0 = piVar14[3];
      local_bc = piVar14[4];
      iStack_b8 = piVar14[5];
      iStack_b4 = piVar14[6];
      iStack_b0 = piVar14[7];
      if (iVar5 == -0x7fffffeb) {
        piVar15 = piVar10;
        uVar16 = local_1a4;
        break;
      }
      iVar8 = piVar14[2];
      iVar13 = piVar14[3];
      *piVar2 = piVar14[1];
      piVar2[1] = iVar8;
      piVar2[2] = iVar13;
      local_a8 = piVar14[4];
      iStack_a4 = piVar14[5];
      iStack_a0 = piVar14[6];
      iStack_9c = piVar14[7];
      uVar9 = local_1a4 + 1;
      local_98 = iVar5;
      FUN_01266b34(&local_68,&local_98);
      iVar13 = local_60;
      iVar8 = local_64;
      iVar5 = local_68;
      if (local_68 == -0x80000000) {
        local_18c = piVar10;
        local_180 = uVar9;
        FUN_00db3970(&local_a8);
LAB_00fe578c:
        *param_1 = 0;
        param_1[1] = iVar8;
        FUN_006b3bf4(&local_158);
        goto LAB_00fe5818;
      }
      local_68 = local_bc;
      local_64 = iStack_b8;
      local_60 = iStack_b4;
      iStack_5c = iStack_b0;
      FUN_00db2da8(&local_98);
      iVar1 = local_98;
      if (local_88 == -0x7ffffff9) {
        local_18c = piVar10;
        local_180 = uVar9;
        FUN_019bb7e0(iVar5,iVar8);
        iVar8 = iVar1;
        goto LAB_00fe578c;
      }
      *piVar4 = local_98;
      piVar4[1] = iStack_94;
      piVar4[2] = iStack_90;
      piVar4[3] = iStack_8c;
      piVar4[4] = local_88;
      piVar4[5] = iStack_84;
      piVar4[6] = local_80;
      piVar4[7] = iStack_7c;
      piVar4[8] = iStack_78;
      piVar4[9] = iStack_74;
      piVar4[10] = iStack_70;
      piVar4[0xb] = iStack_6c;
      local_138 = local_58;
      uStack_134 = uStack_54;
      uStack_130 = uStack_50;
      uStack_12c = uStack_4c;
      local_128 = local_48;
      uStack_124 = uStack_44;
      uStack_120 = uStack_40;
      uStack_11c = uStack_3c;
      local_118 = local_38;
      uStack_114 = uStack_34;
      uStack_110 = uStack_30;
      uStack_10c = uStack_2c;
      uStack_108 = uStack_28;
      if (iVar5 == -0x80000000) {
        local_18c = piVar10;
        local_180 = uVar9;
        goto LAB_00fe57b4;
      }
      local_104 = iVar5;
      iStack_100 = iVar8;
      iStack_fc = iVar13;
      local_f8 = *puVar3;
      uStack_f4 = puVar3[1];
      uStack_f0 = puVar3[2];
      uStack_ec = puVar3[3];
      uStack_e8 = puVar3[4];
      uStack_e4 = puVar3[5];
      local_e0 = puVar3[6];
      uStack_dc = puVar3[7];
      uStack_d8 = puVar3[8];
      uStack_d4 = puVar3[9];
      uStack_d0 = puVar3[10];
      uStack_cc = puVar3[0xb];
      FUN_006e5f2c(&local_58,&local_158,&local_104);
      if (local_48 != -0x7ffffff9) {
        FUN_00db19c4(&local_58);
      }
      piVar14 = piVar14 + 8;
      local_1a4 = local_1a4 + 1;
    }
    local_18c = piVar15;
    local_180 = uVar16;
LAB_00fe57b4:
    *param_1 = local_158;
    param_1[1] = iStack_154;
    param_1[2] = iStack_150;
    param_1[3] = iStack_14c;
    param_1[4] = local_148;
    param_1[5] = iStack_144;
    param_1[6] = iStack_140;
    param_1[7] = iStack_13c;
    if (*param_1 == 0) {
LAB_00fe5818:
      FUN_00db38c0(local_1a0);
    }
    else {
      local_178 = *param_1;
      iStack_174 = param_1[1];
      iStack_170 = param_1[2];
      iStack_16c = param_1[3];
      local_168 = param_1[4];
      iStack_164 = param_1[5];
      iStack_160 = param_1[6];
      iStack_15c = param_1[7];
      iVar12 = FUN_012666d8(local_1a0);
      if (iVar12 != 0) {
        *param_1 = 0;
        param_1[1] = iVar12;
        FUN_006b3bf4(&local_178);
      }
    }
  }
  return;
}

