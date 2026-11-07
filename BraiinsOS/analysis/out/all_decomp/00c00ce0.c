// FUN_00c00ce0 @ 00c00ce0 size=1320 calls_out=13 calls_in=1
// strings: 

void FUN_00c00ce0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int extraout_r2;
  int extraout_r2_00;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  bool bVar26;
  uint in_fpscr;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  longlong lVar32;
  uint local_1a4 [3];
  int local_198;
  uint local_194;
  undefined4 local_190;
  int local_18c;
  int local_188;
  undefined4 local_184;
  uint local_180;
  int local_17c;
  uint local_178;
  int local_170;
  int local_16c;
  undefined4 local_168;
  undefined4 *local_164;
  undefined4 *local_160;
  uint local_158;
  int local_154;
  uint local_150;
  undefined1 auStack_148 [8];
  int local_140;
  int local_13c;
  int local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 *puStack_ec;
  undefined4 *puStack_e8;
  undefined1 auStack_e0 [8];
  int local_d8;
  int iStack_d4;
  int local_90;
  int local_8c;
  undefined4 local_88;
  
  local_16c = param_3 + param_4 * 0x50;
  local_168 = 0;
  local_170 = param_3;
  local_164 = param_2;
  local_160 = param_2;
  FUN_00ce7f8c(auStack_148,&local_170);
  if (local_140 == 5 && local_13c == 0) {
    local_178 = 0;
    local_17c = 8;
    local_180 = 0;
    local_198 = extraout_r2;
  }
  else {
    FUN_016dd1aa(&local_90,auStack_148,0x50);
    iVar7 = thunk_FUN_016d4a50(0x140);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,0x140);
    }
    FUN_016dd1aa(iVar7,auStack_148,0x50);
    local_150 = 1;
    local_158 = 4;
    iVar8 = 0x50;
    local_f8 = local_170;
    iStack_f4 = local_16c;
    uStack_f0 = local_168;
    puStack_ec = local_164;
    puStack_e8 = local_160;
    local_154 = iVar7;
    while (uVar4 = local_150, FUN_00ce7f8c(auStack_e0,&local_f8), local_d8 != 5 || iStack_d4 != 0) {
      FUN_016dd1aa(&local_90,auStack_e0,0x50);
      if (uVar4 == local_158) {
        FUN_00d653ec(&local_158,uVar4,1,8,0x50);
        iVar7 = local_154;
      }
      FUN_016dd1aa(iVar7 + iVar8,auStack_e0,0x50);
      local_150 = uVar4 + 1;
      iVar8 = iVar8 + 0x50;
    }
    local_180 = local_158;
    local_17c = local_154;
    local_178 = local_150;
    local_198 = local_154;
    if (local_150 != 0) {
      if (local_150 != 1) {
        if (local_150 < 0x15) {
          FUN_00b5e300();
        }
        else {
          FUN_00cd9ff8(local_154);
        }
      }
      FUN_00c3d788(&local_90,&local_180);
      local_184 = local_88;
      local_1a4[2] = local_90;
      local_198 = local_8c;
      goto LAB_00c00ea4;
    }
  }
  local_88 = 0;
  local_90 = 0;
  if (local_180 != 0) {
    thunk_FUN_016d3fb4(local_17c);
    local_198 = extraout_r2_00;
  }
  local_184 = 0;
  local_1a4[2] = 0;
LAB_00c00ea4:
  if (local_1a4[2] == 0) {
    local_184 = 0;
  }
  local_1a4[0] = (uint)(local_1a4[2] != 0);
  local_190 = 0;
  local_1a4[1] = 0;
  dVar28 = *(double *)(param_2 + 10);
  dVar27 = -0.0;
  local_194 = local_1a4[0];
  local_18c = local_1a4[2];
  local_188 = local_198;
  do {
    puVar12 = &DAT_0034ae54;
    puVar6 = &DAT_0186ac08;
    uVar31 = FUN_00c38908(local_1a4);
    iVar7 = (int)((ulonglong)uVar31 >> 0x20);
    if ((int)uVar31 == 0 || iVar7 == 0) {
      iVar7 = param_2[0x13];
      if (iVar7 == 0) {
        dVar29 = -0.0;
      }
      else {
        iVar8 = param_2[0x12];
        iVar10 = 0;
        dVar29 = -0.0;
        do {
          iVar2 = iVar8 + iVar10 * 0x48;
          iVar23 = *(int *)(iVar2 + 0x40);
          if (iVar23 == 0) {
            uVar5 = 0x2d;
            puVar12 = &DAT_0186ac08;
            puVar6 = &DAT_0034ae54;
LAB_00c011a4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(puVar6,uVar5,puVar12);
          }
          iVar2 = *(int *)(iVar2 + 0x3c);
          iVar20 = 0;
          lVar1 = 0;
          do {
            iVar3 = iVar2 + iVar20 * 0x18;
            iVar11 = *(int *)(iVar3 + 0x14);
            if (iVar11 == 0) {
              uVar5 = 0x39;
              puVar6 = &DAT_0034ae25;
              puVar12 = &DAT_0186aba8;
              goto LAB_00c011a4;
            }
            iVar13 = iVar11 << 2;
            iVar9 = 0;
            puVar17 = *(uint **)(iVar3 + 0x10);
            uVar4 = 0;
            do {
              if (*(uint *)(iVar3 + 8) <= *puVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_0034ae41,0x13,&DAT_0186abb8);
              }
              uVar14 = *(uint *)(*(int *)(iVar3 + 4) + *puVar17 * 4);
              puVar17 = puVar17 + 1;
              bVar26 = CARRY4(uVar4,uVar14);
              uVar4 = uVar4 + uVar14;
              iVar9 = iVar9 + (uint)bVar26;
              iVar13 = iVar13 + -4;
            } while (iVar13 != 0);
            lVar32 = FUN_01846088(uVar4,iVar9,iVar11,0);
            lVar1 = lVar32 + lVar1;
            iVar20 = iVar20 + 1;
          } while (iVar20 != iVar23);
          uVar5 = FUN_01846088((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar23,0);
          dVar30 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
          iVar10 = iVar10 + 1;
          dVar29 = dVar29 + dVar30;
        } while (iVar10 != iVar7);
      }
      uVar5 = param_2[0xe];
      uVar18 = param_2[0xf];
      uVar15 = param_2[0x10];
      param_1[0x11] = local_90;
      param_1[0x13] = local_88;
      param_1[0x12] = local_8c;
      param_1[0xe] = uVar5;
      param_1[0xf] = uVar18;
      param_1[0x10] = uVar15;
      uVar24 = param_2[6];
      uVar21 = param_2[7];
      uVar25 = param_2[8];
      uVar22 = param_2[0x14];
      uVar31 = *(undefined8 *)(param_2 + 0xc);
      uVar5 = param_2[1];
      uVar15 = param_2[2];
      uVar18 = param_2[3];
      uVar16 = param_2[4];
      uVar19 = param_2[5];
      *param_1 = *param_2;
      param_1[1] = uVar5;
      param_1[2] = uVar15;
      param_1[3] = uVar18;
      param_1[4] = uVar16;
      param_1[5] = uVar19;
      param_1[0x14] = uVar22;
      param_1[6] = uVar24;
      param_1[7] = uVar21;
      param_1[8] = uVar25;
      *(double *)(param_1 + 10) = dVar28 * (dVar27 / dVar29);
      *(undefined8 *)(param_1 + 0xc) = uVar31;
      return;
    }
    iVar8 = *(int *)(iVar7 + 0x40);
    if (iVar8 == 0) {
      uVar5 = 0x2d;
LAB_00c011c0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(puVar12,uVar5,puVar6);
    }
    iVar7 = *(int *)(iVar7 + 0x3c);
    iVar10 = 0;
    lVar1 = 0;
    do {
      iVar2 = iVar7 + iVar10 * 0x18;
      iVar23 = *(int *)(iVar2 + 0x14);
      if (iVar23 == 0) {
        uVar5 = 0x39;
        puVar12 = &DAT_0034ae25;
        puVar6 = &DAT_0186aba8;
        goto LAB_00c011c0;
      }
      iVar20 = iVar23 << 2;
      iVar3 = 0;
      puVar17 = *(uint **)(iVar2 + 0x10);
      uVar4 = 0;
      do {
        if (*(uint *)(iVar2 + 8) <= *puVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0034ae41,0x13,&DAT_0186abb8);
        }
        uVar14 = *(uint *)(*(int *)(iVar2 + 4) + *puVar17 * 4);
        puVar17 = puVar17 + 1;
        bVar26 = CARRY4(uVar4,uVar14);
        uVar4 = uVar4 + uVar14;
        iVar3 = iVar3 + (uint)bVar26;
        iVar20 = iVar20 + -4;
      } while (iVar20 != 0);
      lVar32 = FUN_01846088(uVar4,iVar3,iVar23,0);
      lVar1 = lVar32 + lVar1;
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar8);
    uVar5 = FUN_01846088((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar8,0);
    dVar29 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar27 = dVar27 + dVar29;
  } while( true );
}

