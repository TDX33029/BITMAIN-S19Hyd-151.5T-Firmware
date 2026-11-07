// FUN_01806614 @ 01806614 size=5288 calls_out=6 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01806614(int param_1,int *param_2,int *param_3,byte *param_4,int param_5,int param_6)

{
  undefined4 extraout_r1;
  code *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int extraout_r1_00;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 uVar11;
  uint uVar12;
  code *pcVar13;
  code *pcVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  int iVar29;
  int *piVar30;
  code *pcVar31;
  code *pcVar32;
  uint uVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  uint uVar36;
  code *pcVar37;
  byte *pbVar38;
  bool bVar39;
  undefined8 uVar40;
  undefined4 *local_12c;
  byte *local_120;
  byte *local_114;
  uint local_100;
  uint local_f4;
  byte *local_f0;
  code *local_c0;
  code *local_b8;
  code *local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88 [4];
  int local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  undefined4 local_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  
  uVar33 = *(uint *)(param_1 + 200);
  local_2c = DAT_018ddaf8;
  uVar12 = uVar33;
  if (5 < uVar33) {
    uVar12 = 6;
  }
  if (uVar12 < 3) {
    uVar12 = 3;
  }
  uVar23 = *(uint *)(param_1 + 0xcc);
  pcVar13 = (code *)(&PTR_FUN_018bc1c8)[(uVar12 - 3) + param_6 * 4];
  pcVar14 = pcVar13;
  if (uVar33 == 3) {
    pcVar14 = (code *)0x3;
  }
  iVar4 = *(int *)(param_1 + 4);
  if (uVar33 != 3) {
    pcVar14 = (code *)&DAT_00000004;
  }
  iVar15 = *(int *)(param_1 + 0xc);
  puVar34 = *(undefined4 **)(param_1 + 0xd4);
  local_b0 = *(undefined4 *)(param_1 + 0x1c);
  local_78 = 0;
  pbVar5 = param_4 + param_5;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  pbVar16 = *(byte **)(param_1 + 0x84);
  pbVar17 = *(byte **)(param_1 + 0x80);
  pbVar18 = pbVar5 + -8;
  if (puVar34 == (undefined4 *)0x0) {
    local_a4 = 0;
    local_100 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
  }
  else {
    local_100 = puVar34[3];
    local_a4 = puVar34[1];
    local_a8 = *puVar34;
    local_a0 = puVar34[2];
    local_98 = puVar34[4];
  }
  local_12c = &local_a8;
  local_9c = local_100;
  local_8c = 0;
  local_94 = 0;
  local_90 = 0;
  FUN_01806158(local_12c,0,param_5);
  local_f4 = local_a4;
  FUN_01805bf4(param_1 + 0x70,param_4,param_5,0);
  uVar40 = CONCAT44(pbVar18,local_ac);
  local_f0 = param_4;
  if (param_4 == (byte *)(iVar4 + iVar15)) {
    local_f0 = param_4 + 1;
  }
  local_120 = param_4;
  if (local_f0 < pbVar18) {
    local_114 = &BYTE_00451f99;
    uVar12 = 0xfff;
    if (uVar23 < 0xfff) {
      uVar12 = uVar23;
    }
    do {
      while( true ) {
        uVar23 = (int)local_f0 - (int)local_120;
        uVar33 = (uint)(uVar23 == 0);
        uVar40 = (*pcVar13)(pbVar17,param_1,&local_b0,local_f0,pbVar5,param_3,uVar33,pcVar14);
        local_ac = (int)uVar40;
        if (local_f4 < local_100) {
          local_a4 = local_f4;
          local_9c = local_100;
          FUN_018062fc(local_12c,pbVar17,&local_ac,(int)local_f0 - (int)param_4,
                       (int)pbVar5 - (int)local_f0);
          uVar40 = CONCAT44(extraout_r1,local_ac);
          local_f4 = local_a4;
        }
        local_ac = (int)uVar40;
        if (local_ac != 0) break;
        local_f0 = local_f0 + 1;
LAB_01806800:
        local_ac = (int)uVar40;
        if (pbVar18 <= local_f0) goto LAB_0180745c;
      }
      iVar15 = *(int *)(param_1 + 0xa8);
      *(uint *)(pbVar16 + 0xc) = uVar23;
      iVar4 = 0;
      pbVar16[8] = 0;
      pbVar16[9] = 0;
      pbVar16[10] = 0;
      pbVar16[0xb] = 0;
      if (iVar15 == 1) {
        iVar4 = (0x1f - LZCOUNT(uVar23 + 1)) * 0x100;
      }
      else {
        if (uVar23 == 0x20000) {
          iVar15 = 0x8c;
          iVar6 = 0x1000;
          iVar4 = 0x100;
        }
        else if (uVar23 < 0x40) {
          iVar15 = (uint)(byte)""[uVar23] << 2;
          iVar6 = (uint)(byte)(&DAT_004521a8)[(byte)""[uVar23]] << 8;
        }
        else {
          iVar15 = (-LZCOUNT(uVar23) + 0x32) * 4;
          iVar6 = (uint)(byte)(&UNK_004521da)[-LZCOUNT(uVar23)] << 8;
        }
        iVar4 = iVar4 + iVar6 + *(int *)(param_1 + 0x9c) +
                (0x1f - LZCOUNT(*(int *)(*(int *)(param_1 + 0x74) + iVar15) + 1)) * -0x100;
      }
      iVar15 = local_ac + 0x1fffffff;
      *(int *)pbVar16 = iVar4;
      iVar6 = param_3[1];
      iVar4 = param_3[2];
      *(int *)(pbVar16 + 0x10) = *param_3;
      *(int *)(pbVar16 + 0x14) = iVar6;
      *(int *)(pbVar16 + 0x18) = iVar4;
      uVar36 = *(uint *)(pbVar17 + (iVar15 * 2 + 1) * 4);
      if (uVar12 < uVar36) {
        uVar23 = *(uint *)(pbVar17 + iVar15 * 8);
        iVar4 = 0x38;
        local_c0 = (code *)&SUB_00000002;
        local_b8 = (code *)0x0;
        pbVar26 = pbVar16;
LAB_01806978:
        iVar15 = *(int *)(pbVar26 + 0x10);
        iVar6 = *(int *)(pbVar26 + 0x14);
        local_88[0] = iVar15;
        local_88[1] = iVar6;
        local_88[2] = *(int *)(pbVar26 + 0x18);
        if (uVar23 < 4) {
          iVar25 = uVar23 + uVar33 + -1;
          if (iVar25 != 0) {
            if (iVar25 == 3) {
              local_88[0] = iVar15 + -1;
LAB_0180793c:
              local_88[2] = iVar6;
            }
            else {
              local_88[2] = iVar6;
              if (iVar25 == 1) {
                local_88[2] = *(int *)(pbVar26 + 0x18);
              }
              local_88[0] = local_88[iVar25];
              if (iVar25 != 1) goto LAB_0180793c;
            }
            local_88[1] = iVar15;
          }
        }
        else {
          local_88[0] = uVar23 - 3;
          local_88[1] = iVar15;
          local_88[2] = iVar6;
        }
        pbVar28 = pbVar16 + iVar4;
        iVar4 = 0;
        *param_3 = local_88[0];
        param_3[1] = local_88[1];
        param_3[2] = local_88[2];
LAB_0180751c:
        *(int *)pbVar28 = local_78;
        *(uint *)(pbVar28 + 4) = uVar23;
        *(uint *)(pbVar28 + 8) = uVar36;
        *(int *)(pbVar28 + 0xc) = iVar4;
        iVar6 = *(int *)(pbVar26 + 8);
        *(int *)(pbVar28 + 0x10) = local_68;
        *(int *)(pbVar28 + 0x14) = local_64;
        *(int *)(pbVar28 + 0x18) = local_60;
        local_58 = *(int *)pbVar26;
        iStack_54 = *(int *)(pbVar26 + 4);
        iStack_50 = *(int *)(pbVar26 + 8);
        iVar15 = *(int *)(pbVar26 + 0xc);
        local_48 = *(int *)(pbVar26 + 0x10);
        iStack_44 = *(int *)(pbVar26 + 0x14);
        iStack_40 = *(int *)(pbVar26 + 0x18);
        *(int *)(pbVar28 + 0xc) = iVar15;
        local_74 = uVar23;
        local_70 = uVar36;
        local_6c = iVar4;
        if (iVar6 == 0) {
          local_b4 = local_c0;
          iStack_4c = iVar15;
LAB_018075f8:
          pbVar26 = pbVar16 + (int)local_b4 * 0x1c;
          iVar4 = iStack_44;
          do {
            uVar33 = *(uint *)(pbVar26 + 0xc);
            iVar15 = *(int *)(pbVar26 + 8);
            local_f0 = local_120 + uVar33;
            if (iVar15 != 0) {
              uVar21 = *(undefined4 *)(pbVar26 + 4);
              FUN_01805980(param_1 + 0x70,uVar33,local_120,uVar21,iVar15);
              puVar34 = (undefined4 *)param_2[3];
              if (pbVar5 + -0x20 < local_f0) {
                FUN_01805660(puVar34,local_120,local_f0);
                iVar4 = extraout_r1_00;
LAB_01807840:
                param_2[3] = param_2[3] + uVar33;
                puVar34 = (undefined4 *)param_2[1];
                if (0xffff < uVar33) {
                  param_2[9] = 1;
                  param_2[10] = (int)puVar34 - *param_2 >> 3;
                }
              }
              else {
                local_3c = *(undefined4 *)local_120;
                iVar4 = *(int *)(local_120 + 4);
                uStack_34 = *(undefined4 *)(local_120 + 8);
                uStack_30 = *(undefined4 *)(local_120 + 0xc);
                puVar34[3] = uStack_30;
                *puVar34 = local_3c;
                puVar34[1] = iVar4;
                puVar34[2] = uStack_34;
                iVar6 = param_2[3];
                if (0x10 < uVar33) {
                  local_3c = *(undefined4 *)(local_120 + 0x10);
                  iVar4 = *(int *)(local_120 + 0x14);
                  uStack_34 = *(undefined4 *)(local_120 + 0x18);
                  uStack_30 = *(undefined4 *)(local_120 + 0x1c);
                  *(undefined4 *)(iVar6 + 0x10) = local_3c;
                  *(int *)(iVar6 + 0x14) = iVar4;
                  *(undefined4 *)(iVar6 + 0x18) = uStack_34;
                  *(undefined4 *)(iVar6 + 0x1c) = uStack_30;
                  iStack_38 = iVar4;
                  if (0x10 < (int)(uVar33 - 0x10)) {
                    puVar34 = (undefined4 *)(iVar6 + 0x20);
                    pbVar28 = local_120 + 0x40;
                    do {
                      uVar3 = *(undefined4 *)(pbVar28 + -0x1c);
                      uVar11 = *(undefined4 *)(pbVar28 + -0x18);
                      puVar35 = puVar34 + 8;
                      uVar22 = *(undefined4 *)(pbVar28 + -0x14);
                      *puVar34 = *(undefined4 *)(pbVar28 + -0x20);
                      puVar34[1] = uVar3;
                      puVar34[2] = uVar11;
                      puVar34[3] = uVar22;
                      local_3c = *(undefined4 *)(pbVar28 + -0x10);
                      iVar4 = *(int *)(pbVar28 + -0xc);
                      uStack_34 = *(undefined4 *)(pbVar28 + -8);
                      uStack_30 = *(undefined4 *)(pbVar28 + -4);
                      puVar34[4] = local_3c;
                      puVar34[5] = iVar4;
                      puVar34[6] = uStack_34;
                      puVar34[7] = uStack_30;
                      puVar34 = puVar35;
                      pbVar28 = pbVar28 + 0x20;
                    } while (puVar35 < (undefined4 *)(iVar6 + uVar33));
                    iStack_38 = iVar4;
                  }
                  goto LAB_01807840;
                }
                param_2[3] = (int)(iVar6 + uVar33);
                puVar34 = (undefined4 *)param_2[1];
                iStack_38 = iVar4;
              }
              *(short *)(puVar34 + 1) = (short)uVar33;
              *puVar34 = uVar21;
              if (0xffff < iVar15 - 3U) {
                param_2[9] = 2;
                param_2[10] = (int)puVar34 - *param_2 >> 3;
              }
              *(short *)((int)puVar34 + 6) = (short)(iVar15 - 3U);
              local_120 = local_120 + uVar33 + iVar15;
              param_2[1] = (int)(puVar34 + 2);
              local_f0 = local_120;
            }
            local_b4 = local_b4 + 1;
            pbVar26 = pbVar26 + 0x1c;
          } while (local_b4 <= local_c0);
        }
        else {
          local_b4 = local_c0;
          pbVar26 = pbVar16 + (int)local_c0 * 0x1c;
          iStack_4c = iVar15;
          do {
            local_b8 = local_b8 + -(iVar15 + iVar6);
            local_b4 = local_b4 + -1;
            pbVar28 = pbVar16 + (int)local_b8 * 0x1c;
            *(int *)(pbVar26 + -0x1c) = local_58;
            *(int *)(pbVar26 + -0x18) = iStack_54;
            *(int *)(pbVar26 + -0x14) = iStack_50;
            *(int *)(pbVar26 + -0x10) = iStack_4c;
            iVar6 = *(int *)(pbVar28 + 8);
            iVar15 = *(int *)(pbVar28 + 0xc);
            *(int *)(pbVar26 + -0xc) = local_48;
            *(int *)(pbVar26 + -8) = iStack_44;
            *(int *)(pbVar26 + -4) = iStack_40;
            local_58 = *(int *)pbVar28;
            iStack_54 = *(int *)(pbVar28 + 4);
            iStack_50 = *(int *)(pbVar28 + 8);
            iStack_4c = *(int *)(pbVar28 + 0xc);
            local_48 = *(int *)(pbVar28 + 0x10);
            iVar4 = *(int *)(pbVar28 + 0x14);
            iStack_40 = *(int *)(pbVar28 + 0x18);
            *(int *)(pbVar26 + -0x10) = iVar15;
            pbVar26 = pbVar26 + -0x1c;
            iStack_44 = iVar4;
          } while (iVar6 != 0);
          if (local_b4 <= local_c0) goto LAB_018075f8;
        }
        uVar40 = CONCAT44(iVar4,local_ac);
        if (*(int *)(param_1 + 0xb0) != 2) {
          *(int *)(param_1 + 0x98) = (0x1f - LZCOUNT(*(int *)(param_1 + 0x88) + 1)) * 0x100;
        }
        *(int *)(param_1 + 0x9c) = (0x1f - LZCOUNT(*(int *)(param_1 + 0x8c) + 1)) * 0x100;
        *(int *)(param_1 + 0xa0) = (0x1f - LZCOUNT(*(int *)(param_1 + 0x90) + 1)) * 0x100;
        *(int *)(param_1 + 0xa4) = (0x1f - LZCOUNT(*(int *)(param_1 + 0x94) + 1)) * 0x100;
        goto LAB_01806800;
      }
      pbVar16[0x24] = 0;
      pbVar16[0x25] = 0;
      pbVar16[0x26] = 0;
      pbVar16[0x27] = 0;
      pbVar16[0x40] = 0;
      pbVar16[0x41] = 0;
      pbVar16[0x42] = 0;
      pbVar16[0x43] = 0;
      if (pcVar14 == (code *)&DAT_00000004) {
        pbVar16[0x5c] = 0;
        pbVar16[0x5d] = 0;
        pbVar16[0x5e] = 0;
        pbVar16[0x5f] = 0;
      }
      pbVar16[0x1c] = 0;
      pbVar16[0x1d] = 0;
      pbVar16[0x1e] = 0;
      pbVar16[0x1f] = 0x40;
      pbVar16[0x38] = 0;
      pbVar16[0x39] = 0;
      pbVar16[0x3a] = 0;
      pbVar16[0x3b] = 0x40;
      *(uint *)(pbVar16 + 0x28) = uVar23 + 1;
      if (pcVar14 == (code *)&DAT_00000004) {
        pbVar16[0x54] = 0;
        pbVar16[0x55] = 0;
        pbVar16[0x56] = 0;
        pbVar16[0x57] = 0x40;
        *(uint *)(pbVar16 + 0x60) = uVar23 + 3;
      }
      *(uint *)(pbVar16 + 0x44) = uVar23 + 2;
      pbVar26 = pbVar17;
      pcVar32 = pcVar14;
      pbVar28 = pbVar16;
      do {
        pcVar31 = *(code **)(pbVar26 + 4);
        if (pcVar32 <= pcVar31) {
          pbVar7 = *(byte **)pbVar26;
          iVar4 = LZCOUNT(pbVar7);
          if (*(int *)(param_1 + 0xa8) == 1) {
            pbVar27 = pbVar16 + (int)pcVar32 * 0x1c;
            do {
              pcVar37 = pcVar32 + -2;
              iVar6 = *(int *)pbVar16;
              *(code **)(pbVar27 + 8) = pcVar32;
              pcVar32 = pcVar32 + 1;
              *(byte **)(pbVar27 + 4) = pbVar7;
              pbVar27[0xc] = 0;
              pbVar27[0xd] = 0;
              pbVar27[0xe] = 0;
              pbVar27[0xf] = 0;
              *(int *)pbVar27 = iVar6 + ((0x4e - iVar4) - LZCOUNT(pcVar37)) * 0x100;
              pbVar27 = pbVar27 + 0x1c;
              pbVar28 = pbVar7;
            } while (pcVar32 <= pcVar31);
          }
          else {
            iVar6 = 0x1f - iVar4;
            if (iVar4 - 0xcU < 0x14) {
              iVar25 = *(int *)(param_1 + 0x7c);
              piVar30 = *(int **)(param_1 + 0x74);
              pcVar37 = pcVar32 + -3;
              iVar4 = *(int *)(param_1 + 0x78);
              pbVar27 = pbVar16 + (int)pcVar32 * 0x1c;
              do {
                iVar8 = *(int *)(iVar25 + iVar6 * 4);
                iVar29 = *(int *)(param_1 + 0xa0);
                if ((code *)0x7f < pcVar37) {
                  pbVar28 = (byte *)LZCOUNT(pcVar37);
                }
                iVar19 = *(int *)(param_1 + 0xa4);
                if (pcVar37 < &DAT_00000080) {
                  pbVar28 = local_114;
                }
                if (pcVar37 < &DAT_00000080) {
                  pbVar28 = (byte *)(uint)pbVar28[(int)pcVar32];
                }
                if ((code *)0x7f < pcVar37) {
                  pbVar28 = (byte *)(0x43 - (int)pbVar28);
                }
                pcVar37 = pcVar37 + 1;
                iVar24 = *(int *)pbVar16;
                iVar9 = *(int *)(iVar4 + (int)pbVar28 * 4);
                *(byte **)(pbVar27 + 4) = pbVar7;
                pbVar27[0xc] = 0;
                pbVar27[0xd] = 0;
                pbVar27[0xe] = 0;
                pbVar27[0xf] = 0;
                *(code **)(pbVar27 + 8) = pcVar32;
                pcVar32 = pcVar32 + 1;
                pbVar28 = (byte *)((short)(ushort)pbVar28[0x452170] * 0x100 +
                                   iVar19 + iVar29 + 0x33 + iVar6 * 0x100 +
                                   (0x1f - LZCOUNT(iVar8 + 1)) * -0x100 +
                                  (0x1f - LZCOUNT(iVar9 + 1)) * -0x100);
                *(byte **)pbVar27 =
                     pbVar28 + *(int *)(param_1 + 0x9c) + (0x1f - LZCOUNT(*piVar30 + 1)) * -0x100 +
                               iVar24;
                pbVar27 = pbVar27 + 0x1c;
              } while (pcVar32 <= pcVar31);
            }
            else {
              iVar8 = *(int *)(param_1 + 0x78);
              iVar25 = *(int *)(param_1 + 0x7c);
              piVar30 = *(int **)(param_1 + 0x74);
              pbVar27 = pbVar16 + (int)pcVar32 * 0x1c;
              do {
                iVar29 = *(int *)(iVar25 + iVar6 * 4);
                pcVar1 = pcVar32 + -3;
                iVar19 = *(int *)pbVar16;
                pcVar37 = pcVar1;
                if ((code *)0x7f < pcVar1) {
                  pcVar37 = (code *)LZCOUNT(pcVar1);
                }
                iVar9 = *(int *)(param_1 + 0xa4);
                if (pcVar1 < (code *)0x80) {
                  uVar33 = (uint)(byte)pcVar32[0x451f99];
                }
                else {
                  uVar33 = 0x43 - (int)pcVar37;
                }
                iVar20 = *(int *)(param_1 + 0xa0);
                iVar24 = *(int *)(iVar8 + uVar33 * 4);
                *(byte **)(pbVar27 + 4) = pbVar7;
                pbVar27[0xc] = 0;
                pbVar27[0xd] = 0;
                pbVar27[0xe] = 0;
                pbVar27[0xf] = 0;
                *(code **)(pbVar27 + 8) = pcVar32;
                pcVar32 = pcVar32 + 1;
                pbVar28 = pbVar27 + 0x1c;
                *(int *)pbVar27 =
                     *(int *)(param_1 + 0x9c) + (0x1f - LZCOUNT(*piVar30 + 1)) * -0x100 + iVar19 +
                     (short)(ushort)(byte)(&DAT_00452170)[uVar33] * 0x100 +
                     iVar9 + iVar20 + 0x33 + iVar6 * 0x100 + (0xc - iVar4) * 0x200 +
                     (0x1f - LZCOUNT(iVar29 + 1)) * -0x100 + (0x1f - LZCOUNT(iVar24 + 1)) * -0x100;
                pbVar27 = pbVar28;
              } while (pcVar32 <= pcVar31);
            }
          }
        }
        pbVar26 = pbVar26 + 8;
      } while (pbVar17 + (iVar15 * 2 + 2) * 4 != pbVar26);
      pcVar31 = pcVar32 + -1;
      pbVar26 = pbVar16 + (int)pcVar32 * 0x1c;
      pbVar26[0] = 0;
      pbVar26[1] = 0;
      pbVar26[2] = 0;
      pbVar26[3] = 0x40;
      if (pcVar31 == (code *)0x0) {
        pbVar26 = pbVar16;
      }
      else {
        local_b4 = (code *)(pbVar16 + 0x2c);
        local_b8 = (code *)&DAT_00000001;
        pbVar26 = pbVar16;
        pbVar28 = local_f0;
        do {
          pbVar7 = pbVar28 + 1;
          uVar23 = *(uint *)(local_b4 + -0x20);
          iVar4 = *(int *)(local_b4 + -0x2c);
          uVar33 = uVar23 + 1;
          if (*(int *)(param_1 + 0xb0) == 2) {
            iVar4 = iVar4 + 0x800;
            if (*(int *)(param_1 + 0xa8) == 1) goto LAB_01806e7c;
LAB_01806d3c:
            if (uVar33 == 0x20000) {
              iVar15 = 0x8c;
              iVar6 = 0x1000;
              iVar25 = 0x100;
LAB_01806d50:
              iVar29 = *(int *)(param_1 + 0x74);
              iVar8 = *(int *)(param_1 + 0x9c);
              bVar39 = uVar23 == 0x20000;
              if (bVar39) {
                pbVar26 = (byte *)0x1000;
                uVar23 = 0x100;
              }
              iVar15 = iVar25 + iVar6 + iVar8 +
                       (0x1f - LZCOUNT(*(int *)(iVar29 + iVar15) + 1)) * -0x100;
              if (!bVar39) goto LAB_01807a6c;
              iVar6 = 0x8c;
            }
            else {
              if (0x3f < uVar33) {
                iVar25 = 0;
                iVar15 = (-LZCOUNT(uVar33) + 0x32) * 4;
                iVar6 = (uint)(byte)(&UNK_004521da)[-LZCOUNT(uVar33)] << 8;
                goto LAB_01806d50;
              }
              iVar29 = *(int *)(param_1 + 0x74);
              iVar8 = *(int *)(param_1 + 0x9c);
              iVar15 = (short)(ushort)(byte)(&DAT_004521a8)[(byte)(&DAT_0045201d)[uVar23]] * 0x100 +
                       iVar8 + (0x1f - LZCOUNT(*(int *)(iVar29 + (uint)(byte)(&DAT_0045201d)[uVar23]
                                                                 * 4) + 1)) * -0x100;
LAB_01807a6c:
              if (uVar23 < 0x40) {
                pbVar26 = (byte *)("" + uVar23);
                iVar6 = (uint)*pbVar26 << 2;
                uVar23 = 0;
                pbVar26 = (byte *)((uint)(byte)(&DAT_004521a8)[*pbVar26] << 8);
              }
              else {
                iVar25 = LZCOUNT(uVar23);
                iVar6 = (-iVar25 + 0x32) * 4;
                uVar23 = 0;
                pbVar26 = (byte *)((uint)(byte)(&UNK_004521da)[-iVar25] << 8);
              }
            }
            pbVar28 = pbVar26 + (0x1f - LZCOUNT(*(int *)(iVar29 + iVar6) + 1)) * -0x100 +
                                iVar8 + uVar23;
          }
          else {
            if (*(int *)(param_1 + 0xa8) != 1) {
              uVar36 = *(int *)(param_1 + 0x98) - 0x100;
              iVar15 = 0x1f - LZCOUNT(*(int *)(*(int *)(param_1 + 0x70) + (uint)*pbVar28 * 4) + 1);
              if (uVar36 < (uint)(iVar15 * 0x100)) {
                iVar15 = -uVar36;
              }
              else {
                iVar15 = iVar15 * -0x100;
              }
              iVar4 = *(int *)(param_1 + 0x98) + iVar15 + iVar4;
              goto LAB_01806d3c;
            }
            iVar4 = iVar4 + 0x600;
LAB_01806e7c:
            iVar15 = (0x1f - LZCOUNT(uVar23 + 2)) * 0x100;
            pbVar28 = (byte *)((0x1f - LZCOUNT(uVar33)) * 0x100);
          }
          iVar4 = (iVar15 + iVar4) - (int)pbVar28;
          if (*(int *)(local_b4 + -0x10) < iVar4) {
            uVar33 = *(uint *)(local_b4 + -4);
            iVar4 = *(int *)(local_b4 + -0x10);
          }
          else {
            pbVar26 = (byte *)(local_b4 + -0x1c);
            *(int *)(local_b4 + -0x10) = *(int *)(local_b4 + -0x2c);
            *(int *)(local_b4 + -0xc) = *(int *)(local_b4 + -0x28);
            *(int *)(local_b4 + -8) = *(int *)(local_b4 + -0x24);
            *(int *)(local_b4 + -4) = *(int *)(local_b4 + -0x20);
            *(int *)local_b4 = *(int *)pbVar26;
            *(int *)(local_b4 + 4) = *(int *)(local_b4 + -0x18);
            *(int *)(local_b4 + 8) = *(int *)(local_b4 + -0x14);
            *(int *)(local_b4 + -0x10) = iVar4;
            *(uint *)(local_b4 + -4) = uVar33;
          }
          if (uVar33 == 0) {
            pbVar26 = (byte *)local_88;
            uVar23 = *(uint *)(local_b4 + -0xc);
            iVar25 = (int)local_b8 - *(int *)(local_b4 + -8);
            iVar15 = *(int *)(pbVar16 + (iVar25 * 7 + 4) * 4);
            iVar6 = *(int *)(pbVar16 + (iVar25 * 7 + 5) * 4);
            local_88[0] = iVar15;
            local_88[1] = iVar6;
            local_88[2] = *(int *)(pbVar16 + (iVar25 * 7 + 6) * 4);
            if (uVar23 < 4) {
              if (*(int *)(pbVar16 + (iVar25 * 7 + 3) * 4) != 0) {
                uVar23 = uVar23 - 1;
              }
              if (uVar23 != 0) {
                if (uVar23 == 3) {
                  local_88[0] = iVar15 + -1;
LAB_018072cc:
                  local_88[2] = iVar6;
                }
                else {
                  local_88[2] = iVar6;
                  if (uVar23 == 1) {
                    local_88[2] = *(int *)(pbVar16 + (iVar25 * 7 + 6) * 4);
                  }
                  local_88[0] = local_88[uVar23];
                  if (uVar23 != 1) goto LAB_018072cc;
                }
                local_88[1] = iVar15;
              }
            }
            else {
              local_88[0] = uVar23 - 3;
              local_88[1] = iVar15;
              local_88[2] = iVar6;
            }
            local_58 = local_88[0];
            iStack_54 = local_88[1];
            iStack_50 = local_88[2];
            *(int *)local_b4 = local_88[0];
            *(int *)(local_b4 + 4) = local_88[1];
            *(int *)(local_b4 + 8) = local_88[2];
          }
          if (pbVar7 <= pbVar18) {
            if (pcVar31 == local_b8) break;
            if (iVar4 + 0x80 < *(int *)(local_b4 + 0xc)) {
              if (*(int *)(param_1 + 0xa8) != 1) {
                iVar4 = iVar4 + *(int *)(param_1 + 0x9c) +
                                (0x1f - LZCOUNT(**(int **)(param_1 + 0x74) + 1)) * -0x100;
              }
              local_ac = (*pcVar13)(pbVar17,param_1,&local_b0,pbVar7,pbVar5,local_b4,uVar33 == 0,
                                    pcVar14);
              if (local_f4 < local_100) {
                local_a4 = local_f4;
                local_9c = local_100;
                FUN_018062fc(local_12c,pbVar17,&local_ac,(int)pbVar7 - (int)param_4,
                             (int)pbVar5 - (int)pbVar7);
                local_f4 = local_a4;
              }
              pbVar26 = pbVar17;
              if (local_ac != 0) {
                iVar15 = local_ac + 0x1fffffff;
                uVar36 = *(uint *)(pbVar17 + (iVar15 * 2 + 1) * 4);
                if (uVar12 < uVar36) {
                  uVar23 = *(uint *)(pbVar17 + iVar15 * 8);
                }
                else {
                  pcVar32 = local_b8 + uVar36;
                  if ((pcVar32 < (code *)0x1000) && (local_f0 + (int)pcVar32 < pbVar5)) {
                    pcVar32 = *(code **)(pbVar17 + 4);
                    if (pcVar14 <= pcVar32) {
                      pbVar27 = *(byte **)pbVar17;
                      iVar25 = LZCOUNT(pbVar27);
                      pcVar37 = pcVar32 + (int)local_b8;
                      pcVar32 = pcVar32 + -3;
                      pbVar28 = pbVar16 + (int)pcVar37 * 0x1c;
                      iVar6 = *(int *)(param_1 + 0xa8);
                      if (pcVar14 == (code *)0x3) {
                        pcVar1 = (code *)0xffffffff;
                      }
                      else {
                        pcVar1 = (code *)0x0;
                      }
                      pbVar26 = pbVar27;
                      if (iVar6 == 1) goto LAB_01807200;
                      do {
                        iVar8 = (0x1f - iVar25) * 0x100 + *(int *)(param_1 + 0xa4) +
                                (0x1f - LZCOUNT(*(int *)(*(int *)(param_1 + 0x7c) +
                                                        (0x1f - iVar25) * 4) + 1)) * -0x100;
                        if (0x13 < iVar25 - 0xcU) {
                          iVar8 = iVar8 + (0xc - iVar25) * 0x200;
                        }
                        if (pcVar32 < (code *)0x80) {
                          uVar33 = (uint)(byte)pcVar32[0x451f9c];
                        }
                        else {
                          uVar33 = 0x43 - LZCOUNT(pcVar32);
                        }
                        pbVar26 = (byte *)(*(int *)(param_1 + 0xa0) + 0x33 + iVar8);
                        pbVar2 = pbVar26 + ((short)(ushort)(byte)(&DAT_00452170)[uVar33] * 0x40 +
                                           (0x1f - LZCOUNT(*(int *)(*(int *)(param_1 + 0x78) +
                                                                   uVar33 * 4) + 1)) * -0x40) * 4;
                        pbVar10 = pbVar28;
                        while( true ) {
                          if (pcVar31 < pcVar37) {
                            pbVar26 = (byte *)0x40000000;
                            pbVar28 = pbVar16 + (int)pcVar31 * 0x1c;
                            do {
                              pbVar28[0x1c] = 0;
                              pbVar28[0x1d] = 0;
                              pbVar28[0x1e] = 0;
                              pbVar28[0x1f] = 0x40;
                              pbVar38 = pbVar28 + 0x1c;
                              pbVar28[0x28] = 1;
                              pbVar28[0x29] = 0;
                              pbVar28[0x2a] = 0;
                              pbVar28[0x2b] = 0;
                              pbVar28 = pbVar38;
                            } while (pbVar38 != pbVar10);
                            pcVar31 = pcVar37;
                          }
                          else if (*(int *)pbVar10 <= (int)(pbVar2 + iVar4)) goto LAB_0180701c;
                          pcVar37 = pcVar37 + -1;
                          *(byte **)(pbVar10 + 4) = pbVar27;
                          *(code **)(pbVar10 + 8) = pcVar32 + 3;
                          pcVar32 = pcVar32 + -1;
                          pbVar10[0xc] = 0;
                          pbVar10[0xd] = 0;
                          pbVar10[0xe] = 0;
                          pbVar10[0xf] = 0;
                          pbVar28 = pbVar10 + -0x1c;
                          *(byte **)pbVar10 = pbVar2 + iVar4;
                          if (pcVar1 == pcVar32) goto LAB_0180701c;
                          if (iVar6 != 1) break;
LAB_01807200:
                          pbVar2 = (byte *)(((0x4e - iVar25) - LZCOUNT(pcVar32 + 1)) * 0x100);
                          pbVar10 = pbVar28;
                        }
                      } while( true );
                    }
LAB_0180701c:
                    if (local_ac != 1) {
                      pbVar26 = (byte *)0x40000000;
                      pbVar28 = pbVar17;
                      do {
                        iVar6 = *(int *)(pbVar28 + 4);
                        uVar33 = *(uint *)(pbVar28 + 0xc);
                        if (iVar6 + 1U <= uVar33) {
                          iVar8 = *(int *)(pbVar28 + 8);
                          iVar29 = LZCOUNT(iVar8);
                          pcVar32 = local_b8 + uVar33;
                          iVar25 = *(int *)(param_1 + 0xa8);
                          pbVar27 = pbVar16 + (int)pcVar32 * 0x1c;
                          if (iVar25 == 1) goto LAB_0180727c;
                          do {
                            iVar19 = (0x1f - iVar29) * 0x100 + *(int *)(param_1 + 0xa4) +
                                     (0x1f - LZCOUNT(*(int *)(*(int *)(param_1 + 0x7c) +
                                                             (0x1f - iVar29) * 4) + 1)) * -0x100;
                            uVar23 = uVar33 - 3;
                            if (0x13 < iVar29 - 0xcU) {
                              iVar19 = iVar19 + (0xc - iVar29) * 0x200;
                            }
                            uVar36 = uVar23;
                            if (0x7f < uVar23) {
                              uVar36 = LZCOUNT(uVar23);
                            }
                            if (uVar23 < 0x80) {
                              uVar36 = (uint)(&BYTE_00451f99)[uVar33];
                            }
                            else {
                              uVar36 = 0x43 - uVar36;
                            }
                            iVar19 = (short)(ushort)(byte)(&DAT_00452170)[uVar36] * 0x100 +
                                     *(int *)(param_1 + 0xa0) + 0x33 + iVar19 +
                                     (0x1f - LZCOUNT(*(int *)(*(int *)(param_1 + 0x78) + uVar36 * 4)
                                                     + 1)) * -0x100;
                            pbVar2 = pbVar27;
                            while( true ) {
                              if (pcVar31 < pcVar32) {
                                pbVar27 = pbVar16 + (int)pcVar31 * 0x1c;
                                do {
                                  pbVar27[0x1c] = 0;
                                  pbVar27[0x1d] = 0;
                                  pbVar27[0x1e] = 0;
                                  pbVar27[0x1f] = 0x40;
                                  pbVar10 = pbVar27 + 0x1c;
                                  pbVar27[0x28] = 1;
                                  pbVar27[0x29] = 0;
                                  pbVar27[0x2a] = 0;
                                  pbVar27[0x2b] = 0;
                                  pbVar27 = pbVar10;
                                } while (pbVar10 != pbVar2);
                                pcVar31 = pcVar32;
                              }
                              else if (*(int *)pbVar2 <= iVar19 + iVar4) goto LAB_01807168;
                              pcVar32 = pcVar32 + -1;
                              *(uint *)(pbVar2 + 8) = uVar33;
                              uVar33 = uVar33 - 1;
                              *(int *)(pbVar2 + 4) = iVar8;
                              pbVar2[0xc] = 0;
                              pbVar2[0xd] = 0;
                              pbVar2[0xe] = 0;
                              pbVar2[0xf] = 0;
                              pbVar27 = pbVar2 + -0x1c;
                              *(int *)pbVar2 = iVar19 + iVar4;
                              if (uVar33 < iVar6 + 1U) goto LAB_01807168;
                              if (iVar25 != 1) break;
LAB_0180727c:
                              iVar19 = ((0x4e - iVar29) - LZCOUNT(uVar33 - 2)) * 0x100;
                              pbVar2 = pbVar27;
                            }
                          } while( true );
                        }
LAB_01807168:
                        pbVar28 = pbVar28 + 8;
                      } while (pbVar28 != pbVar17 + iVar15 * 8);
                    }
                    pbVar28 = pbVar16 + ((int)pcVar31 * 7 + 7) * 4;
                    pbVar28[0] = 0;
                    pbVar28[1] = 0;
                    pbVar28[2] = 0;
                    pbVar28[3] = 0x40;
                    goto LAB_01806cc8;
                  }
                  if (uVar36 == 0) {
                    pcVar31 = pcVar32;
                  }
                  uVar23 = *(uint *)(pbVar17 + iVar15 * 8);
                  if (uVar36 == 0) goto LAB_01807440;
                }
                pbVar26 = (byte *)(local_b4 + -0x10);
                local_c0 = local_b8 + 2;
                iVar4 = (int)local_c0 * 0x1c;
                uVar33 = (uint)(*(int *)(local_b4 + -4) == 0);
                goto LAB_01806978;
              }
            }
          }
LAB_01806cc8:
          local_b8 = local_b8 + 1;
          local_b4 = local_b4 + 0x1c;
          pbVar28 = pbVar7;
        } while (local_b8 <= pcVar31);
        pbVar26 = pbVar16 + (int)pcVar31 * 0x1c;
      }
      uVar36 = *(uint *)(pbVar26 + 8);
      local_78 = *(int *)pbVar26;
      local_74 = *(uint *)(pbVar26 + 4);
      local_70 = *(uint *)(pbVar26 + 8);
      local_6c = *(int *)(pbVar26 + 0xc);
      local_68 = *(int *)(pbVar26 + 0x10);
      iVar15 = *(int *)(pbVar26 + 0x14);
      local_60 = *(int *)(pbVar26 + 0x18);
      local_64 = iVar15;
      if (uVar36 != 0) {
        local_b8 = pcVar31 + -uVar36;
        iVar4 = *(int *)(pbVar26 + 0xc);
        uVar23 = *(uint *)(pbVar26 + 4);
        if (iVar4 == 0) {
          local_c0 = local_b8 + 2;
          iVar4 = (int)local_b8 * 0x1c + 0x38;
          pbVar26 = pbVar16 + (int)local_b8 * 0x1c;
          uVar33 = (uint)(*(int *)(pbVar26 + 0xc) == 0);
          goto LAB_01806978;
        }
        local_b8 = local_b8 + -iVar4;
        local_c0 = local_b8 + 2;
        pbVar28 = pbVar16 + (int)local_c0 * 0x1c;
        pbVar26 = pbVar16 + (int)local_b8 * 0x1c;
        *param_3 = local_68;
        param_3[1] = iVar15;
        param_3[2] = local_60;
        pbVar28[8] = 0;
        pbVar28[9] = 0;
        pbVar28[10] = 0;
        pbVar28[0xb] = 0;
        *(int *)(pbVar28 + 0xc) = iVar4;
        *(int *)(pbVar28 + -0x1c) = local_78;
        *(uint *)(pbVar28 + -0x18) = local_74;
        *(uint *)(pbVar28 + -0x14) = local_70;
        *(int *)(pbVar28 + -0x10) = local_6c;
        *(int *)(pbVar28 + -0xc) = local_68;
        *(int *)(pbVar28 + -8) = iVar15;
        *(int *)(pbVar28 + -4) = local_60;
        goto LAB_0180751c;
      }
LAB_01807440:
      uVar40 = CONCAT44(iVar15,local_ac);
      local_f0 = local_f0 + (int)pcVar31;
    } while (local_f0 < pbVar18);
  }
LAB_0180745c:
  local_ac = (int)uVar40;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)pbVar5 - (int)local_120,(int)((ulonglong)uVar40 >> 0x20),
                 local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

