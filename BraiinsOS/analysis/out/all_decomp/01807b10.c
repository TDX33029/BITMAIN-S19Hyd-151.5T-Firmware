// FUN_01807b10 @ 01807b10 size=5016 calls_out=9 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01807b10(int param_1,int *param_2,int *param_3,byte *param_4,int param_5,int param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 extraout_r1;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 extraout_r1_00;
  int iVar10;
  byte *pbVar11;
  undefined4 uVar12;
  uint uVar13;
  code *pcVar14;
  code *pcVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  byte *pbVar20;
  code *pcVar21;
  int iVar22;
  code *pcVar23;
  code *pcVar24;
  int iVar25;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  code *pcVar30;
  int iVar31;
  code *pcVar32;
  code *pcVar33;
  int *piVar34;
  code *pcVar35;
  int *piVar36;
  int *piVar37;
  int iVar38;
  uint uVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  int iVar42;
  uint uVar43;
  bool bVar44;
  undefined8 uVar45;
  undefined4 *local_138;
  byte *local_130;
  uint local_124;
  uint local_120;
  byte *local_114;
  byte *local_100;
  byte *local_fc;
  int *local_f4;
  code *local_f0;
  code *local_c4;
  undefined4 local_c0;
  code *local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 *local_9c [4];
  undefined1 *apuStack_8c [5];
  int local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  code *local_64;
  int local_60;
  undefined1 *local_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined1 auStack_28 [4];
  
  uVar39 = *(uint *)(param_1 + 200);
  local_2c = DAT_018ddaf8;
  uVar13 = uVar39;
  if (5 < uVar39) {
    uVar13 = 6;
  }
  if (uVar13 < 3) {
    uVar13 = 3;
  }
  uVar28 = *(uint *)(param_1 + 0xcc);
  pcVar14 = (code *)(&PTR_FUN_018bc1c8)[(uVar13 - 3) + param_6 * 4];
  pcVar15 = pcVar14;
  if (uVar39 == 3) {
    pcVar15 = (code *)0x3;
  }
  iVar10 = *(int *)(param_1 + 4);
  if (uVar39 != 3) {
    pcVar15 = (code *)&DAT_00000004;
  }
  iVar16 = *(int *)(param_1 + 0xc);
  puVar40 = *(undefined4 **)(param_1 + 0xd4);
  local_c0 = *(undefined4 *)(param_1 + 0x1c);
  local_78 = 0;
  pbVar11 = param_4 + param_5;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = (code *)0x0;
  local_60 = 0;
  piVar17 = *(int **)(param_1 + 0x84);
  piVar18 = *(int **)(param_1 + 0x80);
  iVar19 = param_1 + 0x70;
  pbVar20 = pbVar11 + -8;
  if (puVar40 == (undefined4 *)0x0) {
    local_b4 = 0;
    local_124 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
  }
  else {
    local_124 = puVar40[3];
    local_b4 = puVar40[1];
    local_b8 = *puVar40;
    local_b0 = puVar40[2];
    local_a8 = puVar40[4];
  }
  local_138 = &local_b8;
  local_ac = local_124;
  local_9c[0] = (undefined1 *)0x0;
  local_a4 = 0;
  local_a0 = 0;
  FUN_01806158(local_138,0,param_5);
  local_120 = local_b4;
  FUN_01805bf4(iVar19,param_4,param_5,2);
  uVar45 = CONCAT44(pbVar20,local_bc);
  local_114 = param_4;
  if (param_4 == (byte *)(iVar10 + iVar16)) {
    local_114 = param_4 + 1;
  }
  local_130 = param_4;
  if (local_114 < pbVar20) {
    local_fc = &BYTE_00451f99;
    uVar13 = 0xfff;
    if (uVar28 < 0xfff) {
      uVar13 = uVar28;
    }
    do {
      while( true ) {
        iVar10 = (int)local_114 - (int)local_130;
        uVar39 = (uint)(iVar10 == 0);
        uVar45 = (*pcVar14)(piVar18,param_1,&local_c0,local_114,pbVar11,param_3,uVar39,pcVar15);
        local_bc = (code *)uVar45;
        if (local_120 < local_124) {
          local_b4 = local_120;
          local_ac = local_124;
          FUN_018062fc(local_138,piVar18,&local_bc,(int)local_114 - (int)param_4,
                       (int)pbVar11 - (int)local_114);
          uVar45 = CONCAT44(extraout_r1,local_bc);
          local_120 = local_b4;
        }
        local_bc = (code *)uVar45;
        pcVar21 = local_bc;
        if (local_bc != (code *)0x0) break;
        local_114 = local_114 + 1;
LAB_01807cf8:
        local_bc = (code *)uVar45;
        if (pbVar20 <= local_114) goto LAB_01808970;
      }
      piVar17[3] = iVar10;
      piVar17[2] = 0;
      iVar16 = FUN_01805b00(iVar10,iVar19);
      pcVar21 = pcVar21 + 0x1fffffff;
      *piVar17 = iVar16;
      iVar16 = param_3[1];
      uVar28 = param_3[2];
      piVar17[4] = *param_3;
      piVar17[5] = iVar16;
      piVar17[6] = uVar28;
      uVar29 = piVar18[(int)pcVar21 * 2 + 1];
      if (uVar13 < uVar29) {
        local_f0 = (code *)0x0;
        iVar10 = 0x38;
        uVar28 = piVar18[(int)pcVar21 * 2];
        local_c4 = (code *)&SUB_00000002;
        piVar7 = piVar17;
LAB_01807e1c:
        puVar2 = (undefined1 *)piVar7[4];
        puVar3 = (undefined1 *)piVar7[5];
        apuStack_8c[1] = puVar2;
        apuStack_8c[2] = puVar3;
        apuStack_8c[3] = (undefined1 *)piVar7[6];
        if (uVar28 < 4) {
          iVar16 = uVar28 + uVar39;
          if (iVar16 != 1) {
            if (iVar16 == 4) {
              apuStack_8c[1] = puVar2 + -1;
LAB_01808dac:
              apuStack_8c[3] = puVar3;
            }
            else {
              apuStack_8c[3] = auStack_28;
              if (iVar16 == 2) {
                apuStack_8c[3] = (undefined1 *)piVar7[6];
              }
              apuStack_8c[1] = local_9c[iVar16 + 4];
              if (iVar16 != 2) goto LAB_01808dac;
            }
            apuStack_8c[2] = puVar2;
          }
        }
        else {
          apuStack_8c[1] = (undefined1 *)(uVar28 - 3);
          apuStack_8c[2] = puVar2;
          apuStack_8c[3] = puVar3;
        }
        iVar16 = 0;
        piVar34 = (int *)((int)piVar17 + iVar10);
        *param_3 = (int)apuStack_8c[1];
        param_3[1] = (int)apuStack_8c[2];
        param_3[2] = (int)apuStack_8c[3];
LAB_01808a34:
        *piVar34 = local_78;
        piVar34[1] = uVar28;
        piVar34[2] = uVar29;
        piVar34[3] = iVar16;
        iVar38 = piVar7[2];
        piVar34[4] = local_68;
        piVar34[5] = (int)local_64;
        piVar34[6] = local_60;
        local_58 = (undefined1 *)*piVar7;
        puStack_54 = (undefined1 *)piVar7[1];
        puStack_50 = (undefined1 *)piVar7[2];
        iVar10 = piVar7[3];
        local_48 = piVar7[4];
        iStack_44 = piVar7[5];
        iStack_40 = piVar7[6];
        piVar34[3] = iVar10;
        pcVar21 = local_c4;
        local_74 = uVar28;
        local_70 = uVar29;
        local_6c = iVar16;
        if (iVar38 == 0) {
          iStack_4c = iVar10;
LAB_01808b04:
          piVar7 = piVar17 + (int)pcVar21 * 7;
          do {
            uVar39 = piVar7[3];
            iVar10 = piVar7[2];
            local_114 = local_130 + uVar39;
            if (iVar10 != 0) {
              iVar16 = piVar7[1];
              FUN_01805980(iVar19,uVar39,local_130,iVar16,iVar10);
              puVar40 = (undefined4 *)param_2[3];
              if (pbVar11 + -0x20 < local_114) {
                FUN_01805660(puVar40,local_130,local_114);
LAB_01808d14:
                param_2[3] = param_2[3] + uVar39;
                piVar34 = (int *)param_2[1];
                if (0xffff < uVar39) {
                  param_2[9] = 1;
                  param_2[10] = (int)piVar34 - *param_2 >> 3;
                }
              }
              else {
                local_3c = *(undefined4 *)local_130;
                uStack_38 = *(undefined4 *)(local_130 + 4);
                uStack_34 = *(undefined4 *)(local_130 + 8);
                uStack_30 = *(undefined4 *)(local_130 + 0xc);
                puVar40[3] = uStack_30;
                *puVar40 = local_3c;
                puVar40[1] = uStack_38;
                puVar40[2] = uStack_34;
                iVar38 = param_2[3];
                if (0x10 < uVar39) {
                  local_3c = *(undefined4 *)(local_130 + 0x10);
                  uStack_38 = *(undefined4 *)(local_130 + 0x14);
                  uStack_34 = *(undefined4 *)(local_130 + 0x18);
                  uStack_30 = *(undefined4 *)(local_130 + 0x1c);
                  *(undefined4 *)(iVar38 + 0x10) = local_3c;
                  *(undefined4 *)(iVar38 + 0x14) = uStack_38;
                  *(undefined4 *)(iVar38 + 0x18) = uStack_34;
                  *(undefined4 *)(iVar38 + 0x1c) = uStack_30;
                  if (0x10 < (int)(uVar39 - 0x10)) {
                    puVar40 = (undefined4 *)(iVar38 + 0x20);
                    pbVar6 = local_130 + 0x40;
                    do {
                      uVar9 = *(undefined4 *)(pbVar6 + -0x1c);
                      uVar12 = *(undefined4 *)(pbVar6 + -0x18);
                      puVar41 = puVar40 + 8;
                      uVar27 = *(undefined4 *)(pbVar6 + -0x14);
                      *puVar40 = *(undefined4 *)(pbVar6 + -0x20);
                      puVar40[1] = uVar9;
                      puVar40[2] = uVar12;
                      puVar40[3] = uVar27;
                      local_3c = *(undefined4 *)(pbVar6 + -0x10);
                      uStack_38 = *(undefined4 *)(pbVar6 + -0xc);
                      uStack_34 = *(undefined4 *)(pbVar6 + -8);
                      uStack_30 = *(undefined4 *)(pbVar6 + -4);
                      puVar40[4] = local_3c;
                      puVar40[5] = uStack_38;
                      puVar40[6] = uStack_34;
                      puVar40[7] = uStack_30;
                      puVar40 = puVar41;
                      pbVar6 = pbVar6 + 0x20;
                    } while (puVar41 < (undefined4 *)(iVar38 + uVar39));
                  }
                  goto LAB_01808d14;
                }
                param_2[3] = (int)(iVar38 + uVar39);
                piVar34 = (int *)param_2[1];
              }
              *(short *)(piVar34 + 1) = (short)uVar39;
              *piVar34 = iVar16;
              if (0xffff < iVar10 - 3U) {
                param_2[9] = 2;
                param_2[10] = (int)piVar34 - *param_2 >> 3;
              }
              *(short *)((int)piVar34 + 6) = (short)(iVar10 - 3U);
              local_114 = local_130 + uVar39 + iVar10;
              param_2[1] = (int)(piVar34 + 2);
              local_130 = local_114;
            }
            pcVar21 = pcVar21 + 1;
            piVar7 = piVar7 + 7;
          } while (pcVar21 <= local_c4);
        }
        else {
          piVar7 = piVar17 + (int)local_c4 * 7;
          iStack_4c = iVar10;
          do {
            local_f0 = local_f0 + -(iVar38 + iVar10);
            pcVar21 = pcVar21 + -1;
            piVar34 = piVar17 + (int)local_f0 * 7;
            piVar7[-7] = (int)local_58;
            piVar7[-6] = (int)puStack_54;
            piVar7[-5] = (int)puStack_50;
            piVar7[-4] = iStack_4c;
            iVar38 = piVar34[2];
            iVar10 = piVar34[3];
            piVar7[-3] = local_48;
            piVar7[-2] = iStack_44;
            piVar7[-1] = iStack_40;
            local_58 = (undefined1 *)*piVar34;
            puStack_54 = (undefined1 *)piVar34[1];
            puStack_50 = (undefined1 *)piVar34[2];
            iStack_4c = piVar34[3];
            local_48 = piVar34[4];
            iStack_44 = piVar34[5];
            iStack_40 = piVar34[6];
            piVar7[-4] = iVar10;
            piVar7 = piVar7 + -7;
          } while (iVar38 != 0);
          if (pcVar21 <= local_c4) goto LAB_01808b04;
        }
        FUN_01805860(iVar19,2);
        uVar45 = CONCAT44(extraout_r1_00,local_bc);
        goto LAB_01807cf8;
      }
      piVar17[9] = 0;
      bVar44 = pcVar15 == (code *)&DAT_00000004;
      piVar17[10] = iVar10 + 1;
      iVar16 = iVar10 + 2;
      piVar17[7] = 0x40000000;
      if (bVar44) {
        iVar10 = iVar10 + 3;
      }
      piVar17[0xe] = 0x40000000;
      if (bVar44) {
        piVar17[0x15] = 0x40000000;
        piVar17[0x18] = iVar10;
      }
      piVar17[0x10] = 0;
      piVar17[0x11] = iVar16;
      if (bVar44) {
        piVar17[0x17] = 0;
      }
      pcVar33 = pcVar15;
      piVar7 = piVar18;
      do {
        pcVar35 = (code *)piVar7[1];
        if (pcVar33 <= pcVar35) {
          iVar10 = *piVar7;
          if (*(int *)(param_1 + 0xa8) == 1) {
            piVar34 = piVar17 + (int)pcVar33 * 7;
            do {
              pcVar24 = pcVar33 + -2;
              iVar16 = *piVar17;
              piVar34[1] = iVar10;
              piVar34[2] = (int)pcVar33;
              uVar39 = 0x1f - LZCOUNT(pcVar24);
              piVar34[3] = 0;
              pcVar33 = pcVar33 + 1;
              uVar28 = FUN_01805a98(iVar19,2);
              *piVar34 = (uVar39 + (0x2f - LZCOUNT(iVar10))) * 0x100 +
                         ((uint)((int)pcVar24 * 0x100) >> (uVar39 & 0xff)) + uVar28 + iVar16;
              piVar34 = piVar34 + 7;
            } while (pcVar33 <= pcVar35);
          }
          else {
            iVar16 = *(int *)(param_1 + 0x7c);
            iVar38 = 0x1f - LZCOUNT(iVar10);
            iVar22 = *(int *)(param_1 + 0x78);
            piVar34 = piVar17 + (int)pcVar33 * 7;
            do {
              pcVar23 = pcVar33 + -3;
              iVar42 = *(int *)(param_1 + 0xa4);
              iVar4 = *(int *)(iVar16 + iVar38 * 4) + 1;
              pcVar24 = pcVar23;
              if ((code *)0x7f < pcVar23) {
                pcVar24 = (code *)LZCOUNT(pcVar23);
              }
              if ((code *)0x7f < pcVar23) {
                uVar28 = 0x43 - (int)pcVar24;
              }
              uVar39 = 0x1f - LZCOUNT(iVar4);
              if (pcVar23 < &DAT_00000080) {
                uVar28 = (uint)(byte)pcVar33[0x451f99];
              }
              iVar25 = *(int *)(param_1 + 0xa0);
              bVar1 = (&DAT_00452170)[uVar28];
              iVar5 = *(int *)(iVar22 + uVar28 * 4) + 1;
              uVar29 = 0x1f - LZCOUNT(iVar5);
              iVar31 = *piVar17;
              piVar34[2] = (int)pcVar33;
              piVar34[1] = iVar10;
              piVar34[3] = 0;
              pcVar33 = pcVar33 + 1;
              uVar28 = FUN_01805a98(iVar19,2);
              *piVar34 = uVar28 + iVar31 +
                         (((short)(ushort)bVar1 * 0x100 +
                           ((iVar42 + iVar25 + 0x33 + iVar38 * 0x100 + uVar39 * -0x100) -
                           ((uint)(iVar4 * 0x100) >> (uVar39 & 0xff))) + uVar29 * -0x100) -
                         ((uint)(iVar5 * 0x100) >> (uVar29 & 0xff)));
              piVar34 = piVar34 + 7;
            } while (pcVar33 <= pcVar35);
          }
        }
        piVar7 = piVar7 + 2;
      } while (piVar18 + (int)pcVar21 * 2 + 2 != piVar7);
      pcVar21 = pcVar33 + -1;
      piVar17[(int)pcVar33 * 7] = 0x40000000;
      if (pcVar21 == (code *)0x0) {
        piVar7 = piVar17;
      }
      else {
        local_f4 = piVar17 + 0xb;
        local_f0 = (code *)&DAT_00000001;
        pbVar6 = local_114;
        do {
          local_100 = pbVar6 + 1;
          iVar10 = *(int *)(param_1 + 0xb0);
          iVar16 = local_f4[-8];
          iVar38 = local_f4[-0xb];
          if (iVar10 == 2) {
            iVar22 = 0x800;
          }
          else if (*(int *)(param_1 + 0xa8) == 1) {
            iVar22 = 0x600;
          }
          else {
            iVar22 = *(int *)(param_1 + 0x98);
            iVar4 = *(int *)(*(int *)(param_1 + 0x70) + (uint)*pbVar6 * 4) + 1;
            uVar39 = 0x1f - LZCOUNT(iVar4);
            uVar39 = uVar39 * 0x100 + ((uint)(iVar4 * 0x100) >> (uVar39 & 0xff));
            if (iVar22 - 0x100U < uVar39) {
              iVar22 = iVar22 - (iVar22 - 0x100U);
            }
            else {
              iVar22 = iVar22 - uVar39;
            }
          }
          iVar4 = iVar16 + 1;
          iVar42 = FUN_01805b00(iVar4,iVar19);
          iVar5 = FUN_01805b00(iVar16,iVar19);
          iVar5 = (iVar42 + iVar38 + iVar22) - iVar5;
          iVar22 = local_f4[-4];
          iVar38 = local_f4[-1];
          if (iVar5 <= iVar22) {
            uVar39 = local_f4[-3];
            iVar42 = local_f4[-2];
            bVar44 = iVar38 == 0;
            local_58 = (undefined1 *)local_f4[-4];
            puStack_54 = (undefined1 *)local_f4[-3];
            puStack_50 = (undefined1 *)local_f4[-2];
            iStack_4c = local_f4[-1];
            local_48 = *local_f4;
            iStack_44 = local_f4[1];
            iStack_40 = local_f4[2];
            local_f4[-4] = local_f4[-0xb];
            local_f4[-3] = local_f4[-10];
            local_f4[-2] = local_f4[-9];
            local_f4[-1] = local_f4[-8];
            *local_f4 = local_f4[-7];
            local_f4[1] = local_f4[-6];
            local_f4[2] = local_f4[-5];
            local_f4[-1] = iVar4;
            local_f4[-4] = iVar5;
            iVar38 = iVar4;
            if (bVar44) {
              iVar25 = FUN_01805b00(1,iVar19);
              iVar31 = FUN_01805a98(iVar19,2);
              if (((uint)(local_100 < pbVar11) & (uint)(iVar25 - iVar31) >> 0x1f) != 0) {
                if (iVar10 == 2) {
                  iVar10 = 0x800;
                }
                else if (*(int *)(param_1 + 0xa8) == 1) {
                  iVar10 = 0x600;
                }
                else {
                  iVar10 = *(int *)(param_1 + 0x98);
                  iVar26 = *(int *)(*(int *)(param_1 + 0x70) + (uint)*local_100 * 4) + 1;
                  uVar28 = 0x1f - LZCOUNT(iVar26);
                  uVar28 = uVar28 * 0x100 + ((uint)(iVar26 * 0x100) >> (uVar28 & 0xff));
                  if (iVar10 - 0x100U < uVar28) {
                    iVar10 = iVar10 - (iVar10 - 0x100U);
                  }
                  else {
                    iVar10 = iVar10 - uVar28;
                  }
                }
                iVar25 = iVar22 + (iVar25 - iVar31) + iVar10;
                iVar16 = FUN_01805b00(iVar16 + 2,iVar19);
                iVar22 = FUN_01805b00(iVar4,iVar19);
                if ((iVar25 < (iVar16 + iVar5 + iVar10) - iVar22) && (iVar25 < local_f4[3])) {
                  iVar42 = (int)local_f0 - iVar42;
                  local_9c[1] = (undefined1 *)piVar17[iVar42 * 7 + 4];
                  local_9c[2] = (undefined1 *)piVar17[iVar42 * 7 + 5];
                  local_9c[3] = (undefined1 *)piVar17[iVar42 * 7 + 6];
                  if (uVar39 < 4) {
                    if (piVar17[iVar42 * 7 + 3] != 0) {
                      uVar39 = uVar39 - 1;
                    }
                    if (uVar39 != 0) {
                      if (uVar39 == 3) {
                        puVar2 = local_9c[1] + -1;
LAB_01808e8c:
                        local_9c[3] = local_9c[2];
                      }
                      else {
                        local_9c[3] = auStack_28;
                        if (uVar39 == 1) {
                          local_9c[3] = (undefined1 *)piVar17[iVar42 * 7 + 6];
                        }
                        puVar2 = local_9c[uVar39 + 1];
                        if (uVar39 != 1) goto LAB_01808e8c;
                      }
                      local_9c[2] = local_9c[1];
                      local_9c[1] = puVar2;
                    }
                  }
                  else {
                    local_9c[3] = local_9c[2];
                    local_9c[2] = local_9c[1];
                    local_9c[1] = (undefined1 *)(uVar39 - 3);
                  }
                  if (pcVar21 < local_f0 + 1) {
                    pcVar21 = local_f0 + 1;
                  }
                  apuStack_8c[1] = local_9c[1];
                  apuStack_8c[2] = local_9c[2];
                  apuStack_8c[3] = local_9c[3];
                  local_f4[3] = (int)local_58;
                  local_f4[4] = (int)puStack_54;
                  local_f4[5] = (int)puStack_50;
                  local_f4[6] = iStack_4c;
                  local_f4[7] = local_48;
                  local_f4[8] = iStack_44;
                  local_f4[9] = iStack_40;
                  local_f4[6] = 1;
                  local_f4[3] = iVar25;
                  iVar38 = local_f4[-1];
                  local_f4[7] = (int)local_9c[1];
                  local_f4[8] = (int)local_9c[2];
                  local_f4[9] = (int)local_9c[3];
                }
              }
            }
          }
          if (iVar38 == 0) {
            uVar39 = local_f4[-3];
            iVar10 = (int)local_f0 - local_f4[-2];
            puVar2 = (undefined1 *)piVar17[iVar10 * 7 + 4];
            puVar3 = (undefined1 *)piVar17[iVar10 * 7 + 5];
            apuStack_8c[1] = puVar2;
            apuStack_8c[2] = puVar3;
            apuStack_8c[3] = (undefined1 *)piVar17[iVar10 * 7 + 6];
            if (uVar39 < 4) {
              if (piVar17[iVar10 * 7 + 3] != 0) {
                uVar39 = uVar39 - 1;
              }
              if (uVar39 != 0) {
                if (uVar39 == 3) {
                  apuStack_8c[1] = puVar2 + -1;
LAB_01808738:
                  apuStack_8c[3] = puVar3;
                }
                else {
                  apuStack_8c[3] = puVar3;
                  if (uVar39 == 1) {
                    apuStack_8c[3] = (undefined1 *)piVar17[iVar10 * 7 + 6];
                  }
                  apuStack_8c[1] = local_9c[uVar39 + 5];
                  if (uVar39 != 1) goto LAB_01808738;
                }
                apuStack_8c[2] = puVar2;
              }
            }
            else {
              apuStack_8c[1] = (undefined1 *)(uVar39 - 3);
              apuStack_8c[2] = puVar2;
              apuStack_8c[3] = puVar3;
            }
            local_58 = apuStack_8c[1];
            puStack_54 = apuStack_8c[2];
            puStack_50 = apuStack_8c[3];
            *local_f4 = (int)apuStack_8c[1];
            local_f4[1] = (int)apuStack_8c[2];
            local_f4[2] = (int)apuStack_8c[3];
          }
          if (local_100 <= pbVar20) {
            if (pcVar21 == local_f0) break;
            iVar10 = FUN_01805a98(iVar19,2);
            pcVar33 = (code *)local_f4[-4];
            local_bc = (code *)(*pcVar14)(piVar18,param_1,&local_c0,local_100,pbVar11,local_f4,
                                          iVar38 == 0,pcVar15);
            if (local_120 < local_124) {
              local_b4 = local_120;
              local_ac = local_124;
              FUN_018062fc(local_138,piVar18,&local_bc,(int)local_100 - (int)param_4,
                           (int)pbVar11 - (int)local_100);
              local_120 = local_b4;
            }
            if (local_bc != (code *)0x0) {
              pcVar35 = local_bc + 0x1fffffff;
              uVar29 = piVar18[(int)pcVar35 * 2 + 1];
              if (uVar13 < uVar29) {
                uVar28 = piVar18[(int)pcVar35 * 2];
              }
              else {
                pcVar24 = local_f0 + uVar29;
                if ((pcVar24 < (code *)0x1000) && (local_114 + (int)pcVar24 < pbVar11)) {
                  pcVar24 = (code *)piVar18[1];
                  if (pcVar15 <= pcVar24) {
                    iVar16 = *piVar18;
                    iVar38 = LZCOUNT(iVar16);
                    pcVar30 = pcVar24 + (int)local_f0;
                    iVar4 = 0x1f - iVar38;
                    iVar22 = *(int *)(param_1 + 0xa8);
                    piVar7 = piVar17 + (int)pcVar30 * 7;
                    pcVar24 = pcVar24 + -2;
                    pcVar23 = pcVar33;
                    do {
                      if (iVar22 == 1) {
                        iVar42 = ((0x1fU - LZCOUNT(pcVar24)) + (0x2f - iVar38)) * 0x100 +
                                 ((uint)((int)pcVar24 << 8) >> (0x1fU - LZCOUNT(pcVar24) & 0xff));
                      }
                      else {
                        pcVar32 = pcVar24 + -1;
                        if ((code *)0x7f < pcVar32) {
                          pcVar23 = (code *)(0x43 - LZCOUNT(pcVar32));
                        }
                        iVar42 = *(int *)(*(int *)(param_1 + 0x7c) + iVar4 * 4) + 1;
                        uVar28 = 0x1f - LZCOUNT(iVar42);
                        pbVar6 = (byte *)(iVar42 * 0x100);
                        uVar39 = (uint)pbVar6 >> (uVar28 & 0xff);
                        if (pcVar32 < &DAT_00000080) {
                          pbVar6 = &BYTE_00451f9b;
                        }
                        if (pcVar32 < &DAT_00000080) {
                          pcVar23 = (code *)(uint)(byte)pcVar24[(int)pbVar6];
                        }
                        iVar42 = *(int *)(*(int *)(param_1 + 0x78) + (int)pcVar23 * 4) + 1;
                        pcVar32 = pcVar23 + 0x452170;
                        pcVar23 = (code *)&DAT_00000100;
                        uVar29 = 0x1f - LZCOUNT(iVar42);
                        iVar42 = ((short)(ushort)(byte)*pcVar32 * 0x100 +
                                  ((*(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0xa0) + 0x33 +
                                    iVar4 * 0x100 + uVar28 * -0x100) - uVar39) + uVar29 * -0x100) -
                                 ((uint)(iVar42 * 0x100) >> (uVar29 & 0xff));
                      }
                      pcVar32 = pcVar24 + -1;
                      if (pcVar21 < pcVar30) {
                        piVar34 = piVar17 + (int)pcVar21 * 7;
                        do {
                          piVar34[7] = 0x40000000;
                          piVar36 = piVar34 + 7;
                          piVar34[10] = 1;
                          piVar34 = piVar36;
                        } while (piVar7 != piVar36);
                        pcVar21 = pcVar30;
LAB_018084ec:
                        *piVar7 = (int)(pcVar33 + iVar42 + iVar10);
                        piVar7[1] = iVar16;
                        piVar7[2] = (int)(pcVar24 + 2);
                        piVar7[3] = 0;
                      }
                      else if ((int)(pcVar33 + iVar42 + iVar10) < *piVar7) goto LAB_018084ec;
                      pcVar30 = pcVar30 + -1;
                      piVar7 = piVar7 + -7;
                      pcVar24 = pcVar32;
                    } while ((code *)(uint)(pcVar15 != (code *)0x3) != pcVar32);
                  }
                  if (local_bc != (code *)&DAT_00000001) {
                    piVar7 = piVar18;
                    do {
                      iVar16 = piVar7[1];
                      uVar39 = piVar7[3];
                      if (iVar16 + 1U <= uVar39) {
                        iVar22 = piVar7[2];
                        iVar4 = LZCOUNT(iVar22);
                        iVar38 = 0x1f - iVar4;
                        pcVar24 = local_f0 + uVar39;
                        iVar42 = *(int *)(param_1 + 0xa8);
                        piVar34 = piVar17 + (int)pcVar24 * 7;
                        do {
                          if (iVar42 == 1) {
                            uVar28 = 0x1f - LZCOUNT(uVar39 - 2);
                            iVar5 = ((0x2f - iVar4) + uVar28) * 0x100 +
                                    ((uVar39 - 2) * 0x100 >> (uVar28 & 0xff));
                          }
                          else {
                            uVar29 = uVar39 - 3;
                            uVar28 = uVar29;
                            if (0x7f < uVar29) {
                              uVar28 = 0x43 - LZCOUNT(uVar29);
                            }
                            iVar5 = *(int *)(*(int *)(param_1 + 0x7c) + iVar38 * 4) + 1;
                            uVar43 = 0x1f - LZCOUNT(iVar5);
                            pbVar6 = (byte *)(iVar5 * 0x100);
                            pbVar8 = pbVar6;
                            if (uVar29 < 0x80) {
                              pbVar8 = local_fc;
                            }
                            if (uVar29 < 0x80) {
                              uVar28 = (uint)pbVar8[uVar39];
                            }
                            iVar5 = *(int *)(*(int *)(param_1 + 0x78) + uVar28 * 4) + 1;
                            uVar29 = 0x1f - LZCOUNT(iVar5);
                            iVar5 = ((short)(ushort)(byte)(&DAT_00452170)[uVar28] * 0x100 +
                                     ((*(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0xa0) + 0x33 +
                                       iVar38 * 0x100 + uVar43 * -0x100) -
                                     ((uint)pbVar6 >> (uVar43 & 0xff))) + uVar29 * -0x100) -
                                    ((uint)(iVar5 * 0x100) >> (uVar29 & 0xff));
                          }
                          if (pcVar21 < pcVar24) {
                            piVar36 = piVar17 + (int)pcVar21 * 7;
                            do {
                              piVar36[7] = 0x40000000;
                              piVar37 = piVar36 + 7;
                              piVar36[10] = 1;
                              piVar36 = piVar37;
                            } while (piVar37 != piVar34);
                            pcVar21 = pcVar24;
LAB_01808698:
                            *piVar34 = (int)(pcVar33 + iVar5 + iVar10);
                            piVar34[1] = iVar22;
                            piVar34[2] = uVar39;
                            piVar34[3] = 0;
                          }
                          else if ((int)(pcVar33 + iVar5 + iVar10) < *piVar34) goto LAB_01808698;
                          uVar39 = uVar39 - 1;
                          pcVar24 = pcVar24 + -1;
                          piVar34 = piVar34 + -7;
                        } while (iVar16 + 1U <= uVar39);
                      }
                      piVar7 = piVar7 + 2;
                    } while (piVar7 != piVar18 + (int)pcVar35 * 2);
                  }
                  piVar17[(int)pcVar21 * 7 + 7] = 0x40000000;
                  goto LAB_0180812c;
                }
                pcVar21 = pcVar33;
                if (uVar29 == 0) {
                  pcVar21 = pcVar24;
                }
                uVar28 = piVar18[(int)pcVar35 * 2];
                pcVar33 = local_bc;
                if (uVar29 == 0) goto LAB_01808954;
              }
              piVar7 = local_f4 + -4;
              local_c4 = local_f0 + 2;
              uVar39 = (uint)(local_f4[-1] == 0);
              iVar10 = (int)local_c4 * 0x1c;
              goto LAB_01807e1c;
            }
          }
LAB_0180812c:
          local_f0 = local_f0 + 1;
          local_f4 = local_f4 + 7;
          pbVar6 = local_100;
        } while (local_f0 <= pcVar21);
        piVar7 = piVar17 + (int)pcVar21 * 7;
      }
      uVar29 = piVar7[2];
      local_78 = *piVar7;
      local_74 = piVar7[1];
      local_70 = piVar7[2];
      local_6c = piVar7[3];
      local_68 = piVar7[4];
      local_64 = (code *)piVar7[5];
      local_60 = piVar7[6];
      pcVar33 = local_64;
      if (uVar29 != 0) {
        local_f0 = pcVar21 + -uVar29;
        iVar16 = piVar7[3];
        uVar28 = piVar7[1];
        if (iVar16 == 0) {
          local_c4 = local_f0 + 2;
          iVar10 = (int)local_f0 * 0x1c + 0x38;
          piVar7 = piVar17 + (int)local_f0 * 7;
          uVar39 = (uint)(piVar7[3] == 0);
          goto LAB_01807e1c;
        }
        local_f0 = local_f0 + -iVar16;
        local_c4 = local_f0 + 2;
        piVar34 = piVar17 + (int)local_c4 * 7;
        piVar7 = piVar17 + (int)local_f0 * 7;
        *param_3 = local_68;
        param_3[1] = (int)local_64;
        param_3[2] = local_60;
        piVar34[2] = 0;
        piVar34[3] = iVar16;
        piVar34[-7] = local_78;
        piVar34[-6] = local_74;
        piVar34[-5] = local_70;
        piVar34[-4] = local_6c;
        piVar34[-3] = local_68;
        piVar34[-2] = (int)local_64;
        piVar34[-1] = local_60;
        goto LAB_01808a34;
      }
LAB_01808954:
      uVar45 = CONCAT44(pcVar33,local_bc);
      local_114 = local_114 + (int)pcVar21;
    } while (local_114 < pbVar20);
  }
LAB_01808970:
  local_bc = (code *)uVar45;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)pbVar11 - (int)local_130,(int)((ulonglong)uVar45 >> 0x20),
                 local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

