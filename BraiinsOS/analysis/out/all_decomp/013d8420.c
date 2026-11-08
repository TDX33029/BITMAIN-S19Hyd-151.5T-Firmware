// FUN_013d8420 @ 013d8420 size=544 calls_out=7 calls_in=1
// strings: 

void FUN_013d8420(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int local_1fc;
  int local_1f8 [17];
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  undefined4 uStack_80;
  undefined1 auStack_7c [48];
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_1fc = FUN_013d2518(param_2);
  if (local_1fc != 0x5b) {
    FUN_013ff7ac(&local_1fc,&DAT_0056738c,&DAT_01894cb8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13d863c);
    (*pcVar1)();
  }
  FUN_013d9120(&local_c0,param_2);
  local_100 = local_bc;
  uStack_fc = uStack_b8;
  uStack_f8 = uStack_b4;
  uStack_f4 = uStack_b0;
  uStack_f0 = uStack_ac;
  local_ec = local_a8;
  uStack_e8 = uStack_a4;
  uStack_e4 = uStack_a0;
  uStack_e0 = uStack_9c;
  uStack_dc = uStack_98;
  local_d8 = local_94;
  uStack_d4 = uStack_90;
  uStack_d0 = uStack_8c;
  uStack_cc = uStack_88;
  uStack_c8 = uStack_84;
  uStack_c4 = uStack_80;
  if (local_c0 == 0x110009) {
    *param_1 = local_bc;
    param_1[1] = uStack_b8;
    param_1[2] = uStack_b4;
    param_1[3] = uStack_b0;
    param_1[4] = uStack_ac;
    param_1[5] = local_a8;
    param_1[6] = uStack_a4;
    param_1[7] = uStack_a0;
    param_1[8] = uStack_9c;
    param_1[9] = uStack_98;
    param_1[10] = local_94;
    param_1[0xb] = uStack_90;
    param_1[0xc] = uStack_8c;
    param_1[0xd] = uStack_88;
    param_1[0xe] = uStack_84;
    param_1[0xf] = uStack_80;
    iVar14 = param_3[1];
    iVar11 = param_3[2] + 1;
    iVar12 = iVar14;
    while (iVar11 = iVar11 + -1, iVar11 != 0) {
      FUN_013e7308(iVar12);
      iVar12 = iVar12 + 0x58;
    }
    if (*param_3 != 0) {
      if (iVar14 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar13 = *(byte *)(iVar14 + -3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar7 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar11 = uVar7 - 0x10, uVar7 == 0)) {
        iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar7 = (uint)(*(byte *)(iVar14 + -3) >> 5);
      iVar10 = *(int *)(iVar12 + 8) + 0x10;
      iVar8 = iVar11 * uVar13 + iVar11 + -4;
      iVar11 = iVar10 + iVar8;
      if (4 < uVar7) {
        if (uVar7 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar7 = *(uint *)(iVar11 + -4);
        if (uVar7 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar11 - iVar14) < uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar11 - uVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar10 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar12 + 0x14);
      uVar7 = 1 << uVar13;
      *(undefined1 *)(iVar14 + -3) = 0xff;
      *(undefined2 *)(iVar14 + -2) = 0;
      do {
        uVar9 = *(uint *)(iVar12 + 0x10);
        uVar5 = *(uint *)(iVar12 + 0xc) | uVar9;
        if ((uVar7 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar9 == 0) || (uVar5 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar12,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar4;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar4 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar7 + uVar9;
          return;
        }
        puVar15 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar5 = *puVar15;
          if (uVar9 != uVar5) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar7 + uVar9;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar9 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  else {
    FUN_016dd1aa(&local_158,auStack_7c,0x54);
    puVar4 = (undefined4 *)((uint)local_1f8 | 4);
    *puVar4 = local_100;
    puVar4[1] = uStack_fc;
    puVar4[2] = uStack_f8;
    puVar4[3] = uStack_f4;
    puVar4[4] = uStack_f0;
    puVar4[5] = local_ec;
    puVar4[6] = uStack_e8;
    puVar4[7] = uStack_e4;
    puVar4[8] = uStack_e0;
    puVar4[9] = uStack_dc;
    puVar4[10] = local_d8;
    puVar4[0xb] = uStack_d4;
    puVar4[0xc] = uStack_d0;
    puVar4[0xd] = uStack_cc;
    puVar4[0xe] = uStack_c8;
    puVar4[0xf] = uStack_c4;
    local_1b4 = local_158;
    uStack_1b0 = uStack_154;
    uStack_1ac = uStack_150;
    uStack_1a8 = uStack_14c;
    uStack_1a4 = uStack_148;
    uStack_1a0 = uStack_144;
    local_19c = local_140;
    uStack_198 = uStack_13c;
    uStack_194 = uStack_138;
    uStack_190 = uStack_134;
    uStack_18c = uStack_130;
    uStack_188 = uStack_12c;
    local_180 = local_128;
    uStack_17c = uStack_124;
    uStack_178 = uStack_120;
    uStack_174 = uStack_11c;
    local_170 = local_118;
    uStack_16c = uStack_114;
    uStack_168 = uStack_110;
    uStack_164 = uStack_10c;
    uStack_160 = uStack_108;
    local_1f8[0] = local_c0;
    iVar12 = *param_2;
    if (*(int *)(iVar12 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_01894ca8);
    }
    *(undefined4 *)(iVar12 + 0x20) = 0xffffffff;
    local_4c = *param_3;
    iStack_48 = param_3[1];
    iStack_44 = param_3[2];
    iStack_40 = param_3[3];
    local_3c = param_3[4];
    iStack_38 = param_3[5];
    iStack_34 = param_3[6];
    iStack_30 = param_3[7];
    iStack_2c = param_3[8];
    FUN_016dd1aa(&local_c0,local_1f8,0x74);
    iVar11 = *(int *)(iVar12 + 0x2c);
    if (iVar11 == *(int *)(iVar12 + 0x24)) {
      FUN_01401694();
    }
    FUN_016dd1aa(iVar11 * 0x98 + *(int *)(iVar12 + 0x28),&local_c0,0x98);
    *(int *)(iVar12 + 0x2c) = iVar11 + 1;
    *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 1;
    param_1[1] = local_180;
    param_1[2] = uStack_17c;
    param_1[3] = uStack_178;
    param_1[4] = uStack_174;
    param_1[5] = local_170;
    param_1[6] = uStack_16c;
    param_1[7] = uStack_168;
    param_1[8] = uStack_164;
    param_1[9] = uStack_160;
    *param_1 = 0x22;
  }
  return;
}

