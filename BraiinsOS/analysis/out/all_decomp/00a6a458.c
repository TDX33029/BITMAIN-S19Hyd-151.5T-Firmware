// FUN_00a6a458 @ 00a6a458 size=5220 calls_out=17 calls_in=0
// strings: hrstruct Autotuningstruct Managementstruct ScpiPsuConfigstruct PowerMeterConfigstruct PerformanceScalingstruct PlusConfigDescriptorstruct PowerMeterConfigEntry | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff70 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a6a458(undefined4 *param_1,uint *param_2,int param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  double *pdVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  double *pdVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  char *pcVar18;
  uint *puVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  undefined4 uVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  uint *puVar29;
  uint *puVar30;
  undefined4 uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  undefined4 *puVar37;
  ushort uVar38;
  ushort uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  uint *extraout_r12;
  undefined1 uVar42;
  int iVar43;
  uint uVar44;
  bool bVar45;
  uint in_fpscr;
  float fVar46;
  float extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined4 local_1e4;
  undefined4 local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint *local_1d0;
  uint *local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint local_1c0;
  uint *local_1bc;
  int local_1b8;
  int *local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_198;
  uint local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  int local_17c;
  uint local_178;
  int local_174;
  int local_170;
  uint local_168;
  undefined4 local_158;
  uint local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_134;
  int local_130;
  uint local_12c;
  uint local_128;
  int local_124;
  uint local_11c;
  ushort local_114;
  uint *local_104;
  int local_f8;
  uint local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  uint *local_dc;
  undefined4 local_d8;
  uint *local_d0;
  uint *local_cc;
  uint *local_c8;
  uint local_c4;
  int *local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint *local_a8;
  uint *local_a4;
  int *local_a0;
  uint *local_9c;
  int *local_98;
  uint *local_94;
  undefined8 local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  char local_64;
  int *local_50;
  uint *local_4c;
  int local_48;
  undefined4 local_40;
  
  uVar12 = param_2[1];
  uVar21 = *param_2 ^ 2;
  if (uVar21 == 0 && uVar12 == 0 || (*param_2 & 1) == 0) {
    if (param_3 == 0) {
      local_148 = 0;
      if (uVar21 != 0 || uVar12 != 0) goto LAB_00a6a4cc;
    }
    else {
      local_17c = (uint)(0.0 < *(double *)(param_3 + 0x18)) *
                  (int)(longlong)*(double *)(param_3 + 0x18);
      local_148 = 1;
      if (uVar21 != 0 || uVar12 != 0) {
LAB_00a6a4cc:
        if ((param_2[4] & 1) != 0) goto LAB_00a6a4d8;
      }
    }
LAB_00a6a518:
    if (param_3 == 0) {
      local_14c = 0;
      if (uVar21 != 0 || uVar12 != 0) goto LAB_00a6a554;
    }
    else {
      local_174 = (uint)(0.0 < *(double *)(param_3 + 0x20)) *
                  (int)(longlong)*(double *)(param_3 + 0x20);
      local_14c = 1;
      if (uVar21 != 0 || uVar12 != 0) goto LAB_00a6a554;
    }
LAB_00a6a568:
    if (param_3 != 0) {
      dVar47 = *(double *)(param_3 + 0x28);
      goto LAB_00a6a574;
    }
    local_150 = 0;
  }
  else {
    local_17c = (uint)(0.0 < *(double *)(param_2 + 2)) * (int)(longlong)*(double *)(param_2 + 2);
    local_148 = 1;
    if ((param_2[4] & 1) == 0) goto LAB_00a6a518;
LAB_00a6a4d8:
    local_174 = (uint)(0.0 < *(double *)(param_2 + 6)) * (int)(longlong)*(double *)(param_2 + 6);
    local_14c = 1;
LAB_00a6a554:
    if ((param_2[8] & 1) == 0) goto LAB_00a6a568;
    dVar47 = *(double *)(param_2 + 10);
LAB_00a6a574:
    local_170 = (uint)(0.0 < dVar47) * (int)(longlong)dVar47;
    local_150 = 1;
  }
  uVar13 = param_2[0x3f];
  uVar22 = param_2[0x3e] ^ 2;
  cVar20 = '\x01';
  if (uVar22 == 0 && uVar13 == 0) {
LAB_00a6a5e8:
    local_128 = 0;
    if (param_3 == 0) {
      if (uVar22 != 0 || uVar13 != 0) goto LAB_00a6a640;
    }
    else {
      bVar45 = *(int *)(param_3 + 0xe0) != 5 || *(int *)(param_3 + 0xe4) != 0;
      if (bVar45) {
        local_1a4 = (uint)(0.0 < *(double *)(param_3 + 0x128)) *
                    (int)(longlong)*(double *)(param_3 + 0x128);
      }
      local_128 = (uint)bVar45;
      if (uVar22 != 0 || uVar13 != 0) goto LAB_00a6a640;
    }
LAB_00a6a660:
    local_11c = 0;
    if (param_3 == 0) {
      local_12c = 0;
      if (uVar22 == 0 && uVar13 == 0) goto LAB_00a6a6b0;
      goto LAB_00a6a6cc;
    }
    bVar45 = *(int *)(param_3 + 0xe0) != 5 || *(int *)(param_3 + 0xe4) != 0;
    if (bVar45) {
      local_1a0 = (uint)(0.0 < *(double *)(param_3 + 0x138)) *
                  (int)(longlong)*(double *)(param_3 + 0x138);
    }
    local_12c = (uint)bVar45;
    if (uVar22 != 0 || uVar13 != 0) goto LAB_00a6a6cc;
LAB_00a6a6b0:
    local_154 = 0;
LAB_00a6a728:
    uVar3 = 0;
    local_158 = 0;
  }
  else {
    cVar20 = (char)param_2[0x4e];
    if (cVar20 == '\x02') {
      cVar20 = '\x01';
    }
    if (param_2[0x48] == 0) goto LAB_00a6a5e8;
    local_1a4 = param_2[0x49];
    local_128 = 1;
LAB_00a6a640:
    if (param_2[0x46] == 0) goto LAB_00a6a660;
    local_1a0 = param_2[0x47];
    local_12c = 1;
LAB_00a6a6cc:
    local_18c = (uint)*(byte *)((int)param_2 + 0x13a);
    local_154 = (uint)(local_18c != 2);
    local_188 = (uint)(0.0 < *(double *)(param_2 + 0x44) * 1000.0) *
                (int)(longlong)(*(double *)(param_2 + 0x44) * 1000.0);
    local_11c = param_2[0x42];
    if ((param_2[0x3e] & 1) == 0) goto LAB_00a6a728;
    local_1b8 = (uint)(0.0 < *(double *)(param_2 + 0x40) * 1000.0) *
                (int)(longlong)(*(double *)(param_2 + 0x40) * 1000.0);
    uVar3 = 1;
    local_158 = 1;
  }
  bVar45 = uVar21 != 0 || uVar12 != 0;
  if (bVar45) {
    uVar3 = (uint)(byte)param_2[0x10];
  }
  if (bVar45 && uVar3 != 4) {
    local_94 = (uint *)&DAT_0186d4ec;
    local_98 = &local_f8;
    local_f0 = 0;
    local_f8 = 0;
    local_f4 = 1;
    local_90 = 0x60000020;
    iVar4 = FUN_00faace8(&local_98,*(undefined4 *)(&DAT_018b0b38 + uVar3 * 4),
                         *(undefined4 *)(&DAT_00564420 + uVar3 * 4));
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_50,
                   &DAT_0186d504,&DAT_018af130);
    }
    if (local_f8 == -0x80000000) goto LAB_00a6a740;
LAB_00a6a7b0:
    local_168 = local_f4;
    local_180 = local_f0;
    local_124 = local_f8;
  }
  else {
LAB_00a6a740:
    if (param_3 != 0) {
      local_f0 = 0;
      local_f4 = 1;
      local_f8 = 0;
      local_98 = &local_f8;
      local_90 = 0x60000020;
      local_94 = (uint *)&DAT_0186d4ec;
      iVar4 = FUN_00faace8(&local_98,
                           *(undefined4 *)(&DAT_018b0b48 + (uint)*(byte *)(param_3 + 0x7f) * 4),
                           *(undefined4 *)(&DAT_00564420 + (uint)*(byte *)(param_3 + 0x7f) * 4));
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_50,
                     &DAT_0186d504,&DAT_018af130);
      }
      goto LAB_00a6a7b0;
    }
    local_124 = -0x80000000;
  }
  if (param_2[0x33] == 0x80000000) {
    uVar3 = 0;
    puVar29 = (uint *)&DAT_00000008;
    local_c8 = (uint *)0x0;
    piVar26 = (int *)0x8;
    local_cc = (uint *)&DAT_00000008;
    local_d0 = (uint *)0x0;
    local_bc = 0;
    local_c0 = (int *)0x8;
    local_104 = (uint *)0x0;
    local_c4 = 0;
  }
  else {
    local_104 = (uint *)param_2[0x35];
    uVar40 = 0;
    iVar4 = (int)local_104 * 0x30;
    if ((uint *)0x2aaaaaa < local_104) {
LAB_00a6a940:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar40,iVar4);
    }
    if (iVar4 == 0) {
      local_a4 = (uint *)&DAT_00000008;
      local_a8 = (uint *)0x0;
    }
    else {
      piVar26 = (int *)param_2[0x34];
      puVar29 = (uint *)thunk_FUN_016d4a50(iVar4);
      if (puVar29 == (uint *)0x0) {
        uVar40 = 8;
        goto LAB_00a6a940;
      }
      local_a8 = local_104;
      local_a4 = puVar29;
      if (local_104 != (uint *)0x0) {
        iVar35 = 0;
        puVar30 = (uint *)0x0;
        piVar28 = piVar26;
        do {
          if (iVar4 == iVar35) break;
          iVar32 = piVar28[6];
          iVar15 = piVar28[5];
          if (iVar32 == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = thunk_FUN_016d4a50(iVar32);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar32);
            }
          }
          FUN_016dd1aa(iVar6,iVar15,iVar32);
          iVar15 = *piVar28;
          if (iVar15 != 2) {
            local_98 = *(int **)((int)piVar26 + iVar35 + 4);
            local_94 = *(uint **)((int)piVar26 + iVar35 + 8);
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)((int)piVar26 + iVar35 + 0xc));
          }
          local_50 = local_98;
          local_4c = local_94;
          local_48 = (int)local_90;
          piVar5 = (int *)&DAT_80000000;
          puVar16 = extraout_r12;
          iVar43 = 0xa6aa58;
          if (piVar28[8] != -0x80000000) {
            FUN_00a5f64c(&local_98,*(undefined4 *)((int)piVar26 + iVar35 + 0x24),
                         *(undefined4 *)((int)piVar26 + iVar35 + 0x28));
            piVar5 = local_98;
            puVar16 = local_94;
            iVar43 = (int)local_90;
          }
          puVar30 = (uint *)((int)puVar30 + 1);
          piVar28 = piVar28 + 0xc;
          local_90 = CONCAT44(local_90._4_4_,local_48);
          local_94 = local_4c;
          local_98 = local_50;
          piVar27 = (int *)((int)puVar29 + iVar35);
          *piVar27 = iVar15;
          iVar35 = iVar35 + 0x30;
          piVar27[1] = (int)local_50;
          piVar27[2] = (int)local_4c;
          piVar27[3] = local_48;
          piVar27[4] = iVar32;
          piVar27[5] = iVar6;
          piVar27[9] = (int)puVar16;
          piVar27[10] = iVar43;
          piVar27[6] = iVar32;
          piVar27[7] = 0;
          piVar27[8] = (int)piVar5;
        } while (local_104 != puVar30);
      }
    }
    puVar29 = local_a4;
    piVar26 = (int *)0x8;
    local_d0 = local_a8;
    local_cc = local_a4;
    local_bc = 0;
    local_c0 = (int *)0x8;
    local_c4 = 0;
    local_c8 = local_104;
    if (local_104 == (uint *)0x0) {
      uVar3 = 0;
    }
    else {
      local_1d0 = local_a4 + (int)local_104 * 0xc;
      local_1cc = &local_88;
      uVar7 = 0;
      piVar28 = piVar26;
      puVar30 = local_a4;
      do {
        uVar3 = uVar7;
        piVar26 = piVar28;
        if (puVar30[8] != 0x80000000) {
          FUN_00a5f64c(&local_98,puVar30[9],puVar30[10]);
          puVar16 = local_94;
          piVar5 = local_98;
          local_1c0 = *puVar30;
          if (local_1c0 == 2) {
            local_1c0 = 0;
            local_1bc = (uint *)&DAT_00000001;
          }
          else {
            local_1bc = (uint *)puVar30[1];
            unaff_d9 = *(undefined8 *)(puVar30 + 2);
          }
          local_b0 = 0;
          local_b8 = 0;
          local_b4 = 4;
          puVar19 = local_94 + (int)local_90 * 10;
          local_a0 = local_98;
          local_a4 = local_94;
          local_a8 = local_94;
          local_9c = puVar19;
          if ((int)local_90 != 0) {
            iVar4 = 0;
            uVar3 = 0;
            local_178 = 4;
            do {
              puVar37 = (undefined4 *)((int)puVar16 + iVar4);
              piVar27 = (int *)*puVar37;
              if (piVar27 == (int *)&DAT_80000000) {
                local_a4 = (uint *)((int)puVar16 + iVar4 + 0x28);
                goto LAB_00a6b2e0;
              }
              uVar10 = puVar37[3];
              iVar35 = puVar37[4];
              uVar40 = puVar37[7];
              uVar31 = puVar37[5];
              uVar24 = puVar37[6];
              bVar2 = *(byte *)(puVar37 + 9);
              puVar23 = (uint *)puVar37[1];
              uVar25 = puVar37[2];
              local_48 = 0;
              local_50 = (int *)0x0;
              local_40 = 0;
              FUN_016b18bc(&local_98,&local_50,puVar23,uVar25);
              uVar36 = local_70;
              uVar33 = local_84;
              uVar17 = local_88;
              if (local_98 == (int *)&SUB_00000002) {
LAB_00a6b1b0:
                uVar9 = 1;
                uVar44 = 0;
                uVar34 = 0;
              }
              else {
                if (local_64 == '\0') {
                  uVar44 = 0x80000000;
                  uVar34 = local_1d4;
                  uVar9 = local_198;
                }
                else {
                  if (local_6c < local_70) goto LAB_00a6b924;
                  if (local_70 != 0) {
                    if (local_70 < local_80) {
                      if (*(char *)(local_84 + local_70) < -0x40) goto LAB_00a6b924;
                    }
                    else if (local_70 != local_80) goto LAB_00a6b924;
                  }
                  if (local_6c != 0) {
                    if (local_6c < local_80) {
                      if (*(char *)(local_84 + local_6c) < -0x40) goto LAB_00a6b924;
                    }
                    else if (local_6c != local_80) {
LAB_00a6b924:
                      local_a4 = (uint *)((int)puVar16 + iVar4 + 0x28);
                    /* WARNING: Subroutine does not return */
                      FUN_00faa8ac(local_84,local_80,local_70,local_6c,&DAT_018aedb8);
                    }
                  }
                  uVar34 = local_6c - local_70;
                  if ((int)uVar34 < 0) {
                    uVar40 = 0;
LAB_00a6b3e0:
                    local_a4 = (uint *)((int)puVar16 + iVar4 + 0x28);
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(uVar40,local_198);
                  }
                  if (uVar34 == 0) {
                    uVar9 = 1;
                    uVar44 = 0;
                  }
                  else {
                    uVar9 = thunk_FUN_016d4a50(uVar34);
                    uVar44 = uVar34;
                    if (uVar9 == 0) {
                      uVar40 = 1;
                      local_198 = uVar34;
                      goto LAB_00a6b3e0;
                    }
                  }
                  FUN_016dd1aa(uVar9,uVar33 + uVar36);
                  local_1b0 = uVar17;
                  local_1a8 = uVar33;
                }
                if (uVar17 != 0) {
                  thunk_FUN_016d3fb4(uVar33);
                }
                local_1d4 = uVar34;
                local_198 = uVar9;
                if (uVar44 == 0x80000000) goto LAB_00a6b1b0;
              }
              local_90 = CONCAT44(uVar44,uVar25);
              local_74 = CONCAT31(local_74._1_3_,bVar2 == 2 | bVar2 & 1);
              local_98 = piVar27;
              local_94 = puVar23;
              local_88 = uVar9;
              local_84 = uVar34;
              local_80 = uVar10;
              local_7c = iVar35;
              local_78 = uVar31;
              if (uVar3 == local_b8) {
                FUN_00a8a6a0(&local_b8);
                local_178 = local_b4;
              }
              uVar3 = uVar3 + 1;
              puVar8 = (undefined4 *)(local_178 + iVar4);
              *puVar8 = local_98;
              puVar8[1] = local_94;
              puVar8[2] = (int)local_90;
              puVar8[3] = local_90._4_4_;
              puVar8[4] = local_88;
              puVar8[5] = local_84;
              puVar8[6] = local_80;
              puVar8[7] = local_7c;
              puVar8[8] = local_78;
              puVar8[9] = local_74;
              local_b0 = uVar3;
              if ((uVar24 & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(uVar40);
              }
              iVar4 = iVar4 + 0x28;
            } while (puVar37 + 10 != puVar19);
            local_a4 = puVar19;
LAB_00a6b2e0:
          }
          puVar23 = local_a4 + 4;
          for (iVar4 = ((uint)((int)puVar19 - (int)local_a4) >> 3) * -0x33333333; iVar4 != 0;
              iVar4 = iVar4 + -1) {
            if (puVar23[-4] != 0) {
              thunk_FUN_016d3fb4(puVar23[-3]);
            }
            if (puVar23[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar23);
            }
            if ((puVar23[2] & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(puVar23[3]);
            }
            puVar23 = puVar23 + 10;
          }
          if (piVar5 != (int *)0x0) {
            thunk_FUN_016d3fb4(puVar16);
          }
          local_88 = local_b8;
          local_84 = local_b4;
          local_80 = local_b0;
          uVar3 = local_1c0 & 1;
          if (uVar3 != 0) {
            unaff_d8 = unaff_d9;
          }
          local_98._0_2_ = (ushort)(byte)uVar3;
          if (uVar3 == 0) {
            local_1c8 = local_1bc;
          }
          local_94 = local_1c8;
          local_90 = unaff_d8;
          if (uVar7 == local_c4) {
            FUN_00a8a388(&local_c4);
            piVar26 = local_c0;
          }
          piVar5 = piVar26 + uVar7 * 8;
          *piVar5 = (int)local_98;
          piVar5[1] = (int)local_94;
          piVar5[2] = (int)local_90;
          piVar5[3] = local_90._4_4_;
          uVar3 = uVar7 + 1;
          piVar5[4] = local_88;
          piVar5[5] = local_84;
          piVar5[6] = local_80;
          piVar5[7] = local_7c;
          local_1c4 = puVar30;
          local_1b4 = piVar28;
          local_1ac = uVar7;
          local_bc = uVar3;
        }
        puVar30 = puVar30 + 0xc;
        uVar7 = uVar3;
        piVar28 = piVar26;
      } while (puVar30 != local_1d0);
    }
  }
  local_90 = CONCAT44(piVar26 + uVar3 * 8,local_c4);
  local_98 = piVar26;
  local_94 = (uint *)piVar26;
  FUN_00a99fdc(&local_50,&local_98);
  iVar4 = local_48;
  puVar30 = local_4c;
  if (local_48 != 0) {
    iVar35 = local_48 << 5;
    puVar16 = local_4c + 4;
    iVar32 = iVar35;
    do {
      FUN_00a5eed0(puVar16);
      puVar16 = puVar16 + 8;
      iVar32 = iVar32 + -0x20;
    } while (iVar32 != 0);
    pdVar14 = (double *)(puVar30 + 2);
    dVar47 = -0.0;
    iVar32 = iVar4;
    do {
      pdVar1 = pdVar14 + -1;
      dVar49 = *pdVar14;
      pdVar14 = pdVar14 + 4;
      dVar48 = 0.0;
      if (*(char *)pdVar1 != '\0') {
        dVar48 = dVar49;
      }
      iVar32 = iVar32 + -1;
      dVar47 = dVar47 + dVar48;
    } while (iVar32 != 0);
    puVar16 = puVar30 + 1;
    iVar15 = 0;
    iVar32 = iVar4;
    do {
      puVar19 = puVar16 + -1;
      uVar3 = *puVar16;
      puVar16 = puVar16 + 8;
      if ((char)*puVar19 == '\0') {
        iVar15 = iVar15 + uVar3;
      }
      iVar32 = iVar32 + -1;
    } while (iVar32 != 0);
    puVar16 = puVar30 + 1;
    dVar48 = (double)VectorUnsignedToFloat(iVar15,(byte)(in_fpscr >> 0x16) & 3);
    do {
      if ((char)puVar16[-1] == '\0') {
        *(undefined2 *)(puVar16 + -1) = 1;
        dVar49 = (double)VectorUnsignedToFloat(*puVar16,(byte)(in_fpscr >> 0x16) & 3);
        *(double *)(puVar16 + 1) = ((1.0 - dVar47) / dVar48) * dVar49;
      }
      puVar16 = puVar16 + 8;
      iVar35 = iVar35 + -0x20;
    } while (iVar35 != 0);
  }
  local_90 = CONCAT44(local_90._4_4_,iVar4);
  local_94 = puVar30;
  local_98 = local_50;
  FUN_00a67a70(&local_50,&local_98);
  iVar4 = local_48;
  puVar30 = local_4c;
  FUN_00a677cc(&local_f8,local_4c,local_48);
  if (local_f8 == -0x80000000) {
    local_130 = -0x80000000;
    local_144 = 0;
    local_140 = 0;
    local_134 = 0x80000000;
  }
  else {
    local_130 = local_f8;
    local_134 = local_e0;
    local_1c0 = local_f4;
    local_144 = local_f0;
    local_140 = local_d8;
    local_1bc = local_dc;
    if (local_ec != 0) {
      thunk_FUN_016d3fb4(local_e8);
    }
  }
  iVar35 = 0;
  while (iVar32 = iVar35, iVar32 != iVar4) {
    puVar37 = (undefined4 *)(puVar30[iVar32 * 6 + 3] + 0x10);
    for (uVar3 = puVar30[iVar32 * 6 + 4]; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar37[-4] != 0) {
        thunk_FUN_016d3fb4(puVar37[-3]);
      }
      if (puVar37[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar37);
      }
      if (puVar37[2] != 0) {
        thunk_FUN_016d3fb4(puVar37[3]);
      }
      puVar37 = puVar37 + 10;
    }
    iVar35 = iVar32 + 1;
    if (puVar30[iVar32 * 6 + 2] != 0) {
      thunk_FUN_016d3fb4(puVar30[iVar32 * 6 + 3]);
    }
  }
  if (local_50 != (int *)0x0) {
    thunk_FUN_016d3fb4(puVar30);
  }
  FUN_00a60670(puVar29,local_104);
  if (local_d0 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar29);
  }
  uVar33 = param_2[0x36];
  uVar17 = param_2[0x37];
  uVar7 = uVar33 ^ 2;
  bVar45 = uVar7 != 0 || uVar17 != 0;
  uVar3 = 0;
  if (bVar45) {
    uVar3 = param_2[0x3a];
  }
  if (bVar45 && uVar3 != 0) {
    local_1a8 = param_2[0x3b];
LAB_00a6ad28:
    uVar3 = 1;
    local_178 = 1;
  }
  else {
    if (param_3 != 0) {
      local_1a8 = (uint)(0.0 < *(double *)(param_3 + 0xb0)) *
                  (int)(longlong)*(double *)(param_3 + 0xb0);
      goto LAB_00a6ad28;
    }
    uVar3 = 0;
    local_178 = 0;
  }
  uVar36 = param_2[0x26];
  if (uVar36 != 2) {
    uVar3 = param_2[0x28];
  }
  if (uVar36 != 2 && uVar3 != 0) {
    local_1ac = param_2[0x29];
LAB_00a6ad68:
    local_184 = 1;
  }
  else {
    if (param_3 != 0) {
      local_1ac = *(uint *)(param_3 + 100);
      goto LAB_00a6ad68;
    }
    local_184 = 0;
  }
  DataMemoryBarrier(0xb);
  if (DAT_018daf08 != 2) {
    FUN_00a71744();
  }
  iVar4 = DAT_018daf04;
  uVar40 = DAT_018daf00;
  if (DAT_018daf04 == 0) {
    iVar35 = 1;
  }
  else {
    iVar35 = thunk_FUN_016d4a50(DAT_018daf04);
    if (iVar35 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar4);
    }
  }
  fVar46 = (float)FUN_016dd1aa(iVar35,uVar40);
  bVar45 = uVar7 != 0 || uVar17 != 0;
  uVar3 = uVar33;
  if (bVar45) {
    uVar3 = (uint)*(byte *)((int)param_2 + 0xf1);
  }
  if (bVar45 && uVar3 != 2) {
LAB_00a6ae24:
    uVar40 = 1;
    if ((uVar3 & 1) != 0) {
      uVar40 = 2;
    }
    local_1b0 = thunk_FUN_016d4a50(uVar40);
    if (local_1b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar40);
    }
    pcVar18 = 
    "hrstruct Autotuningstruct Managementstruct ScpiPsuConfigstruct PowerMeterConfigstruct PerformanceScalingstruct PlusConfigDescriptorstruct PowerMeterConfigEntry"
    ;
    if ((uVar3 & 1) == 0) {
      pcVar18 = "w";
    }
    fVar46 = (float)FUN_016dd1aa(local_1b0,pcVar18,uVar40);
    dVar47 = *(double *)(param_2 + 0x38);
    if (param_3 != 0) {
LAB_00a6ae70:
                    /* WARNING: Could not recover jumptable at 0x00a6ae88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00a6ae8c + *(int *)(&DAT_00a6ae8c + *(int *)(param_3 + 0x80) * 4)))
                (*(undefined4 *)(param_3 + 0x88),*(undefined4 *)(param_3 + 0x8c));
      return;
    }
  }
  else {
    if (param_3 != 0) {
      if (*(int *)(param_3 + 0xe0) == 5 && *(int *)(param_3 + 0xe4) == 0) goto LAB_00a6ae70;
      uVar3 = (uint)*(byte *)(param_3 + 0x150);
      goto LAB_00a6ae24;
    }
    dVar47 = *(double *)(param_2 + 0x38);
    uVar40 = 0x80000000;
  }
  uVar44 = 0;
  uVar24 = 0;
  uVar10 = 0;
  if (param_2[0x12] != 3 || param_2[0x13] != 0) {
    local_1c4 = (uint *)param_2[0x1d];
    local_1c8 = (uint *)param_2[0x1f];
    uVar24 = param_2[0x1c];
    uVar10 = param_2[0x1e];
  }
  local_f8 = -0x80000000;
  if (uVar36 != 2) {
    uVar3 = param_2[0x30];
  }
  if (uVar36 != 2 && uVar3 != 2) {
    uVar44 = (uint)(byte)param_2[0x32];
    if (uVar44 != 3) {
      local_94 = (uint *)&DAT_0186d4ec;
      local_f4 = 1;
      local_f0 = 0;
      local_f8 = 0;
      local_98 = &local_f8;
      local_90 = 0x60000020;
      iVar32 = FUN_00faace8(&local_98,*(undefined4 *)(&DAT_018b0b58 + uVar44 * 4),
                            *(undefined4 *)(&DAT_0041edf4 + uVar44 * 4));
      if (iVar32 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_50,
                     &DAT_0186d504,&DAT_018af130);
      }
      local_1e0 = local_f4;
      local_1e4 = local_f0;
      fVar46 = extraout_s0;
    }
    uVar44 = uVar3 & 1;
    local_1dc = param_2[0x31];
    uVar31 = 0;
    if (uVar21 == 0 && uVar12 == 0) goto LAB_00a6b54c;
  }
  else {
    uVar31 = 0;
    if (uVar21 == 0 && uVar12 == 0) goto LAB_00a6b54c;
  }
  uVar31 = 0;
  if ((param_2[0xc] & 1) != 0) {
    uVar31 = 1;
    fVar46 = (float)*(double *)(param_2 + 0xe);
  }
LAB_00a6b54c:
  if (uVar36 == 2) {
    local_114 = 0;
    uVar11 = 0;
    uVar38 = 0;
    uVar39 = 0;
  }
  else {
    local_1d0 = (uint *)param_2[0x2d];
    uVar39 = 0;
    local_1d4 = param_2[0x2b];
    local_114 = (ushort)param_2[0x2c] & (ushort)(local_1d0 < (uint *)0x8000);
    local_1cc = (uint *)param_2[0x27];
    uVar38 = (ushort)param_2[0x2a] & (ushort)(local_1d4 < 0x8000);
    uVar11 = (ushort)uVar36 & (ushort)(local_1cc < (uint *)0x8000);
    if (param_2[0x2e] != 0) {
      local_1d8 = param_2[0x2f];
      uVar39 = (ushort)(local_1d8 < 0x8000);
    }
  }
  param_1[0x2a] = iVar35;
  param_1[0x2b] = iVar4;
  param_1[0x29] = iVar4;
  *(char *)(param_1 + 0x28) = cVar20;
  param_1[0x26] = local_158;
  param_1[0x27] = local_1b8;
  param_1[0x1e] = local_128;
  param_1[0x1f] = local_1a4;
  param_1[0x20] = local_12c;
  param_1[0x21] = local_1a0;
  param_1[0x22] = local_154;
  param_1[0x23] = local_18c;
  param_1[0x24] = local_11c;
  param_1[0x25] = local_188;
  param_1[0x17] = local_174;
  param_1[0x16] = local_14c;
  param_1[0x15] = local_170;
  param_1[0x14] = local_150;
  param_1[0x13] = local_17c;
  param_1[0x12] = local_148;
  param_1[0x30] = local_1b0;
  param_1[1] = local_1a8;
  *param_1 = local_178;
  param_1[4] = 0;
  param_1[5] = local_1b4;
  param_1[0x32] = local_124;
  param_1[0x34] = local_180;
  param_1[0x35] = local_130;
  param_1[0x36] = local_1c0;
  param_1[0x37] = local_144;
  param_1[0x38] = local_134;
  param_1[0x39] = local_1bc;
  uVar25 = param_4[1];
  uVar41 = param_4[2];
  param_1[0x3a] = local_140;
  param_1[0x2d] = uVar25;
  param_1[0x33] = local_168;
  *(undefined1 *)(param_1 + 0x4e) = param_5;
  param_1[7] = local_1ac;
  param_1[6] = local_184;
  param_1[8] = uVar24;
  param_1[9] = local_1c4;
  param_1[10] = uVar10;
  param_1[0xb] = local_1c8;
  param_1[0x47] = local_f8;
  param_1[2] = (uVar7 != 0 || uVar17 != 0) & uVar33;
  param_1[0x3b] = 0x80000000;
  param_1[0x3e] = 0x80000000;
  param_1[0x41] = 0x80000000;
  param_1[0x44] = 0x80000000;
  param_1[0x48] = local_1e0;
  param_1[0x49] = local_1e4;
  param_1[0xc] = uVar44;
  param_1[0xd] = local_1dc;
  param_1[0xe] = uVar31;
  *(undefined2 *)((int)param_1 + 0x136) = (undefined2)local_1d8;
  *(short *)((int)param_1 + 0x132) = (short)local_1d0;
  *(ushort *)(param_1 + 0x4c) = local_114;
  *(short *)((int)param_1 + 0x12e) = (short)local_1d4;
  *(short *)((int)param_1 + 0x12a) = (short)local_1cc;
  uVar31 = *param_4;
  uVar12 = param_2[0x4a];
  bVar45 = uVar22 == 0 && uVar13 == 0;
  uVar42 = *(undefined1 *)((int)param_2 + 0x139);
  if (bVar45) {
    uVar12 = 0;
  }
  uVar21 = param_2[0x4b];
  if (bVar45) {
    uVar42 = 2;
  }
  *(ushort *)(param_1 + 0x4d) = uVar39;
  *(ushort *)(param_1 + 0x4b) = uVar38;
  *(ushort *)(param_1 + 0x4a) = uVar11;
  param_1[0x2c] = uVar31;
  param_1[0x2e] = uVar41;
  param_1[0x2f] = uVar40;
  param_1[0x31] = uVar40;
  param_1[3] = (uint)(0.0 < dVar47 * 1000.0) * (int)(longlong)(dVar47 * 1000.0);
  *(undefined1 *)(param_1 + 0x18) = 6;
  param_1[0xf] = fVar46;
  *(undefined1 *)((int)param_1 + 0x139) = uVar42;
  *(undefined1 *)((int)param_1 + 0x13a) = 2;
  param_1[0x11] = uVar21;
  param_1[0x10] = uVar12;
  return;
}

