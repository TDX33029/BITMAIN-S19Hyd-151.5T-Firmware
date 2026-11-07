// FUN_015cddc4 @ 015cddc4 size=4480 calls_out=41 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015cddc4(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  int **ppiVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *piVar18;
  undefined4 extraout_r1;
  code *pcVar19;
  code *extraout_r1_00;
  undefined4 uVar20;
  uint *puVar21;
  byte *pbVar22;
  undefined4 *extraout_r3;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  int *piVar27;
  uint uVar28;
  code *pcVar29;
  int iVar30;
  uint uVar31;
  uint *puVar32;
  uint *puVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  undefined4 *puVar37;
  uint uVar38;
  undefined2 uVar39;
  undefined1 uVar40;
  bool bVar41;
  undefined8 uVar42;
  undefined *local_284;
  undefined2 local_280;
  uint local_250;
  int local_240;
  int **local_23c;
  uint local_22c;
  uint local_214;
  undefined4 local_1f0;
  int local_1ec;
  uint local_1e8;
  int local_1e4;
  int **local_1e0;
  code *local_1dc;
  int **local_1d8;
  code *local_1d4;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined1 uStack_1c7;
  undefined2 uStack_1c6;
  byte local_1c4;
  undefined1 uStack_1c3;
  undefined2 uStack_1c2;
  undefined1 local_1c0;
  undefined1 uStack_1bf;
  undefined2 uStack_1be;
  undefined2 local_1bc;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined4 uStack_1b8;
  code *local_1b4;
  int **local_1b0;
  code *local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  int **local_194;
  code *local_190;
  undefined1 local_18c;
  undefined4 local_110;
  code *local_10c;
  int **local_108;
  code *local_104;
  uint local_100;
  int iStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0 [18];
  int local_a8 [18];
  int *local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_50;
  code *local_4c;
  int **local_48;
  code *local_44;
  int **local_40;
  code *pcStack_3c;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar23 = *(uint *)(param_2 + 8);
  FUN_015e87b8(&local_1f0,uVar23);
  uVar35 = local_1e8;
  iVar13 = local_1ec;
  if (*(int *)(param_1 + 0x244) == 0) {
    iVar36 = *(int *)(param_2 + 4);
  }
  else {
    iVar30 = *(int *)(param_1 + 0x240);
    iVar34 = iVar30 + *(int *)(param_1 + 0x244) * 0x18;
    iVar36 = *(int *)(param_2 + 4);
    local_284 = &DAT_01cfcd28;
    do {
      if (uVar23 != 0) {
        uVar38 = 0;
        iVar26 = iVar36;
        do {
          iVar11 = FUN_015d0104(iVar30,iVar26);
          if (iVar11 != 0) {
            if (uVar35 <= uVar38) goto LAB_015cef3c;
            *(undefined1 *)(iVar13 + uVar38) = *(undefined1 *)(iVar30 + 0x14);
          }
          uVar38 = uVar38 + 1;
          iVar26 = iVar26 + 0x48;
        } while (uVar23 != uVar38);
      }
      iVar30 = iVar30 + 0x18;
    } while (iVar30 != iVar34);
  }
  if (uVar23 == 0) {
    uVar20 = 0;
  }
  else {
    piVar12 = (int *)(iVar36 + uVar23 * 0x48);
    uVar42 = thunk_FUN_01bee35a();
    piVar18 = (int *)((ulonglong)uVar42 >> 0x20);
    iVar13 = (int)uVar42;
    uVar38 = 0;
    iVar36 = *(int *)(param_2 + 4);
    uVar20 = *(undefined4 *)(param_2 + 8);
    puVar21 = (uint *)(iVar13 + 0x2c0);
    puVar14 = extraout_r3 + 0x61;
    local_284 = &DAT_01cfcd18;
    do {
      uVar35 = local_1e8;
      if (local_1e8 <= uVar38) {
LAB_015cef3c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar38,uVar35,local_284);
      }
      if (*(char *)(local_1ec + uVar38) == '\0') {
        FUN_015cf2a4(param_1);
      }
      else {
        pbVar22 = (byte *)(piVar18 + 5);
        bVar1 = *pbVar22;
        iVar30 = 500;
        if (bVar1 == 2) {
          iVar30 = 0x1e8;
        }
        piVar27 = (int *)(param_1 + iVar30);
        if (*piVar27 == -1) {
          if (3 < DAT_01d51b00) {
            if (bVar1 != 2) {
              FUN_01bed4e2((undefined1 *)((int)&local_50 + 1U),(int)piVar18 + 0x25,0x10);
            }
            else {
              uVar16 = *(undefined4 *)((int)piVar18 + 0x1a);
              local_50._1_1_ = (undefined1)uVar16;
              local_50._2_2_ = (undefined2)((uint)uVar16 >> 8);
              local_4c._0_1_ = (undefined1)((uint)uVar16 >> 0x18);
            }
            local_108 = (int **)&local_50;
            local_104 = FUN_01309a48;
            local_10c = (code *)&LAB_00632348;
            local_110 = (int **)(piVar18 + 2);
            local_1bc = 0x17;
            uStack_1ba = 0;
            uStack_1b9 = 0;
            uStack_1b8 = (int **)&DAT_01cfca88;
            local_1c4 = 0x17;
            uStack_1c3 = 0;
            uStack_1c2 = 0;
            local_1c0 = 0x9f;
            uStack_1bf = 0x3d;
            uStack_1be = 0x4b;
            local_1c8 = 0x9f;
            uStack_1c7 = 0x3d;
            uStack_1c6 = 0x4b;
            local_50._0_1_ = bVar1 != 2;
            FUN_015fb650(&DAT_005b2711,&local_110,4,&local_1c8);
          }
        }
        else {
          iVar30 = piVar18[1];
          if (*piVar18 == 0) {
            iVar30 = 0;
          }
          local_1e4 = iVar30;
          FUN_015db1ac(&local_1c8,param_1 + 0xc0);
          uVar10 = uStack_1be;
          uVar9 = uStack_1bf;
          uVar2 = local_1c0;
          iVar34 = CONCAT13(uStack_1b9,CONCAT12(uStack_1ba,local_1bc));
          uVar35 = CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8));
          if (iVar34 == 0) {
            if (*(int *)(uVar35 - 0x2c) != 0) {
              uVar23 = FUN_015f6a28(*(undefined4 *)(uVar35 - 0x28),*(undefined4 *)(uVar35 - 0x24),
                                    *(undefined4 *)(uVar35 - 0x20),*(undefined4 *)(uVar35 - 0x1c),
                                    pbVar22);
              iVar34 = *(int *)(uVar35 - 0x38);
              uVar28 = *(uint *)(uVar35 - 0x34);
              local_22c = (uVar23 >> 0x19) * 0x1010101;
              local_214 = 0;
              while( true ) {
                uVar23 = uVar28 & uVar23;
                uVar24 = *(uint *)(iVar34 + uVar23);
                uVar31 = ~(uVar24 ^ local_22c) & 0x80808080 & (uVar24 ^ local_22c) + 0xfefefeff;
                while (uVar31 != 0) {
                  uVar4 = uVar31 >> 8;
                  uVar5 = uVar31 >> 0x10;
                  uVar7 = uVar31 >> 0x18;
                  uVar6 = uVar31 << 0x18;
                  uVar31 = uVar31 - 1 & uVar31;
                  iVar26 = FUN_015f4844(pbVar22,(uVar23 + ((uint)LZCOUNT(uVar6 | (uVar4 & 0xff) <<
                                                                                 0x10 |
                                                                         (uVar5 & 0xff) << 8 | uVar7
                                                                        ) >> 3) & uVar28) * -0x32 +
                                                iVar34 + -0x32);
                  if (iVar26 != 0) {
                    if (4 < DAT_01d51b00) {
                      local_110 = (int **)(piVar18 + 2);
                      local_4c = (code *)&LAB_0193a90c;
                      local_50._0_1_ = SUB41(&local_110,0);
                      local_50._1_1_ = (undefined1)((uint)&local_110 >> 8);
                      local_50._2_2_ = (undefined2)((uint)&local_110 >> 0x10);
                      local_1bc = 0x17;
                      uStack_1ba = 0;
                      uStack_1b9 = 0;
                      uStack_1b8 = (int **)&DAT_01cfca38;
                      local_1c4 = 0x17;
                      uStack_1c3 = 0;
                      uStack_1c2 = 0;
                      local_1c0 = 0x9f;
                      uStack_1bf = 0x3d;
                      uStack_1be = 0x4b;
                      local_1c8 = 0x9f;
                      uStack_1c7 = 0x3d;
                      uStack_1c6 = 0x4b;
                      FUN_015fb650(&DAT_005961b8,&local_50,5,&local_1c8);
                    }
                    goto LAB_015ce070;
                  }
                }
                if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) break;
                local_214 = local_214 + 4;
                uVar23 = uVar23 + local_214;
              }
            }
            FUN_015ab7cc(&local_1e0,piVar27,piVar18);
            if (local_1e0 != (int **)&SUB_00000004) {
              local_110 = local_1e0;
              local_10c = local_1dc;
              local_108 = local_1d8;
              local_104 = local_1d4;
              if (3 < DAT_01d51b00) {
                local_60 = piVar18 + 2;
                local_44 = FUN_015fb818;
                local_4c = (code *)&LAB_0193a90c;
                local_50._0_1_ = SUB41(&local_60,0);
                local_50._1_1_ = (undefined1)((uint)&local_60 >> 8);
                local_50._2_2_ = (undefined2)((uint)&local_60 >> 0x10);
                local_1bc = 0x17;
                uStack_1ba = 0;
                uStack_1b9 = 0;
                uStack_1b8 = (int **)&DAT_01cfca28;
                local_1c4 = 0x17;
                uStack_1c3 = 0;
                uStack_1c2 = 0;
                local_1c0 = 0x9f;
                uStack_1bf = 0x3d;
                uStack_1be = 0x4b;
                local_1c8 = 0x9f;
                uStack_1c7 = 0x3d;
                uStack_1c6 = 0x4b;
                local_48 = (int **)&local_110;
                FUN_015fb650(&DAT_005a9892,&local_50,4,&local_1c8);
              }
              if (&DAT_00000001 < local_110) {
                FUN_0134bd64(local_10c,local_108);
              }
            }
            if (*pbVar22 == 2) {
              uVar16 = *(undefined4 *)((int)piVar18 + 0x1a);
              uVar17 = *(undefined4 *)((int)piVar18 + 0x16);
              uStack_1c7 = *(undefined1 *)((int)piVar18 + 0x15);
              uStack_1ba = *(undefined1 *)((int)piVar18 + 0x22);
              local_1c8 = 2;
              uStack_1be = (undefined2)*(undefined4 *)((int)piVar18 + 0x1e);
              local_1bc = (undefined2)((uint)*(undefined4 *)((int)piVar18 + 0x1e) >> 0x10);
              uStack_1c2 = (undefined2)uVar16;
              local_1c0 = (undefined1)((uint)uVar16 >> 0x10);
              uStack_1bf = (undefined1)((uint)uVar16 >> 0x18);
              uStack_1c6 = (undefined2)uVar17;
              local_1c4 = (byte)((uint)uVar17 >> 0x10);
              uStack_1c3 = (undefined1)((uint)uVar17 >> 0x18);
            }
            else {
              uVar2 = *(undefined1 *)((int)piVar18 + 0x45);
              bVar41 = (*pbVar22 & 1) != 0;
              if (bVar41) {
                FUN_01bed4e2(&local_50,(int)piVar18 + 0x15,0x10);
              }
              FUN_01bed4e2((int)&uStack_1b8 + 1,(int)piVar18 + 0x25,0x10);
              FUN_01bed4e2((int)&local_1a8 + 1,(int)piVar18 + 0x35,0x10);
              local_1c8 = bVar41;
              FUN_01bed4e2(&uStack_1c7,&local_50,0x10);
              local_198._0_2_ = CONCAT11(uVar2,(undefined1)local_198);
            }
            FUN_015dc214(uVar35 - 0x38,&local_1c8);
          }
          else {
            uVar16 = CONCAT22(uStack_1c2,CONCAT11(uStack_1c3,local_1c4));
            FUN_015ab7cc(&local_1e0,piVar27,piVar18);
            if (local_1e0 != (int **)&SUB_00000004) {
              local_110 = local_1e0;
              local_10c = local_1dc;
              local_108 = local_1d8;
              local_104 = local_1d4;
              if (3 < DAT_01d51b00) {
                local_60 = piVar18 + 2;
                local_44 = FUN_015fb818;
                local_4c = (code *)&LAB_0193a90c;
                local_50._0_1_ = SUB41(&local_60,0);
                local_50._1_1_ = (undefined1)((uint)&local_60 >> 8);
                local_50._2_2_ = (undefined2)((uint)&local_60 >> 0x10);
                local_1bc = 0x17;
                uStack_1ba = 0;
                uStack_1b9 = 0;
                uStack_1b8 = (int **)&DAT_01cfca48;
                local_1c4 = 0x17;
                uStack_1c3 = 0;
                uStack_1c2 = 0;
                local_1c0 = 0x9f;
                uStack_1bf = 0x3d;
                uStack_1be = 0x4b;
                local_1c8 = 0x9f;
                uStack_1c7 = 0x3d;
                uStack_1c6 = 0x4b;
                local_48 = (int **)&local_110;
                FUN_015fb650(&DAT_005b0e1f,&local_50,4,&local_1c8);
              }
              if (&DAT_00000001 < local_110) {
                FUN_0134bd64(local_10c,local_108);
              }
              goto LAB_015ce070;
            }
            uVar39 = 0xe02c;
            FUN_006666fc(&local_1e0,piVar18[3],piVar18[4]);
            if (*pbVar22 == 2) {
              uVar40 = 2;
              uStack_1c7 = *(undefined1 *)((int)piVar18 + 0x15);
              uStack_1ba = *(undefined1 *)((int)piVar18 + 0x22);
              ppiVar15 = *(int ***)((int)piVar18 + 0x1a);
              uVar23 = *(uint *)((int)piVar18 + 0x16);
              iVar26 = *(int *)((int)piVar18 + 0x1e);
              uVar28 = uVar35;
            }
            else {
              uVar40 = (*pbVar22 & 1) != 0;
              uVar39 = local_280;
              if ((bool)uVar40) {
                uVar39 = *(undefined2 *)((int)piVar18 + 0x23);
                local_250 = (uint)*(byte *)((int)piVar18 + 0x22);
                local_240 = *(int *)((int)piVar18 + 0x1e);
                local_23c = *(int ***)((int)piVar18 + 0x1a);
                local_22c = *(uint *)((int)piVar18 + 0x16);
                local_214 = (uint)*(byte *)((int)piVar18 + 0x15);
              }
              uVar28 = (uint)*(byte *)((int)piVar18 + 0x45);
              FUN_01bed4e2(&local_50,(int)piVar18 + 0x25,0x10);
              FUN_01bed4e2(&local_110,(int)piVar18 + 0x35,0x10);
              uStack_1c7 = (undefined1)local_214;
              uStack_1ba = (undefined1)local_250;
              ppiVar15 = local_23c;
              uVar23 = local_22c;
              iVar26 = local_240;
              local_280 = uVar39;
            }
            uStack_1c2 = SUB42(ppiVar15,0);
            local_1c0 = (undefined1)((uint)ppiVar15 >> 0x10);
            uStack_1bf = (undefined1)((uint)ppiVar15 >> 0x18);
            uStack_1c6 = (undefined2)uVar23;
            local_1c4 = (byte)(uVar23 >> 0x10);
            uStack_1c3 = (undefined1)(uVar23 >> 0x18);
            uStack_1b9 = (undefined1)uVar39;
            uStack_1b8._0_1_ = (undefined1)((ushort)uVar39 >> 8);
            uStack_1be = (undefined2)iVar26;
            local_1bc = (undefined2)((uint)iVar26 >> 0x10);
            local_1c8 = uVar40;
            FUN_01bed4e2((int)&uStack_1b8 + 1,&local_50,0x10);
            FUN_01bed4e2((int)&local_1a8 + 1,&local_110,0x10);
            local_198._0_2_ = CONCAT11((char)uVar28,(undefined1)local_198);
            FUN_015fb578(&local_50,&local_1c8);
            local_194 = local_1e0;
            local_190 = local_1dc;
            local_18c = SUB41(local_1d8,0);
            local_1c0 = (undefined1)local_50;
            uStack_1bf = local_50._1_1_;
            uStack_1be = local_50._2_2_;
            local_1bc = SUB42(local_4c,0);
            uStack_1ba = (undefined1)((uint)local_4c >> 0x10);
            uStack_1b9 = (undefined1)((uint)local_4c >> 0x18);
            uStack_1b8 = local_48;
            local_1b4 = local_44;
            local_1b0 = local_40;
            local_1ac = pcStack_3c;
            local_1a8 = local_38;
            local_1a4 = iStack_34;
            local_198 = 0x5ac;
            local_19c = 0x5ac;
            local_1c8 = uVar2;
            uStack_1c7 = uVar9;
            uStack_1c6 = uVar10;
            local_1a0 = iVar30;
            FUN_015d3108(iVar34,&local_1b0,uVar35,uVar16,&local_1c8);
          }
          if (3 < DAT_01d51b00) {
            bVar1 = *pbVar22;
            if (bVar1 != 2) {
              FUN_01bed4e2((undefined1 *)((int)&local_50 + 1U),(int)piVar18 + 0x25,0x10);
            }
            else {
              uVar16 = *(undefined4 *)((int)piVar18 + 0x1a);
              local_50._1_1_ = (undefined1)uVar16;
              local_50._2_2_ = (undefined2)((uint)uVar16 >> 8);
              local_4c._0_1_ = (undefined1)((uint)uVar16 >> 0x18);
            }
            local_108 = (int **)&local_50;
            local_104 = FUN_01309a48;
            local_10c = (code *)&LAB_00632348;
            local_110 = (int **)(piVar18 + 2);
            local_1bc = 0x17;
            uStack_1ba = 0;
            uStack_1b9 = 0;
            uStack_1b8 = (int **)&DAT_01cfca58;
            local_1c4 = 0x17;
            uStack_1c3 = 0;
            uStack_1c2 = 0;
            local_1c0 = 0x9f;
            uStack_1bf = 0x3d;
            uStack_1be = 0x4b;
            local_1c8 = 0x9f;
            uStack_1c7 = 0x3d;
            uStack_1c6 = 0x4b;
            local_50._0_1_ = bVar1 != 2;
            FUN_015fb650(&DAT_0057a694,&local_110,4,&local_1c8);
          }
          uVar16 = FUN_015d003c(*(undefined4 *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x238),
                                iVar36,uVar20,iVar30,1);
          uVar17 = FUN_015d003c(*(undefined4 *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x238),
                                iVar36,uVar20,iVar30,0);
          iVar34 = local_1e4;
          iVar26 = FUN_015dd6a4(param_1 + 0xc0,local_1e4);
          if (iVar26 != 0) {
            *(undefined4 *)(iVar26 + 0x24) = uVar16;
            *(undefined4 *)(iVar26 + 0x28) = uVar17;
          }
          if (*(int *)(param_1 + 0xcc) != 0) {
            uVar23 = FUN_015f7180(*extraout_r3,extraout_r3[1],extraout_r3[2],extraout_r3[3],iVar34);
            uVar35 = uVar23 >> 0x19;
            iVar26 = *(int *)(param_1 + 0xc0);
            iVar11 = 0;
LAB_015ce784:
            uVar23 = *(uint *)(param_1 + 0xc4) & uVar23;
            uVar31 = *(uint *)(iVar26 + uVar23);
            uVar28 = uVar31 ^ uVar35 * 0x1010101;
            uVar28 = ~uVar28 & 0x80808080 & uVar28 + 0xfefefeff;
            do {
              if (uVar28 == 0) goto LAB_015ce7d8;
              uVar24 = uVar28 >> 8;
              uVar4 = uVar28 >> 0x10;
              uVar5 = uVar28 >> 0x18;
              uVar7 = uVar28 << 0x18;
              uVar28 = uVar28 - 1 & uVar28;
              uVar24 = uVar23 + ((uint)LZCOUNT(uVar7 | (uVar24 & 0xff) << 0x10 | (uVar4 & 0xff) << 8
                                               | uVar5) >> 3) & *(uint *)(param_1 + 0xc4);
            } while (iVar34 != *(int *)(iVar26 + -0x40 + uVar24 * -0x40));
            local_214 = FUN_015dd8fc(param_1 + 0x100,iVar34);
            if (local_214 == 0) {
              FUN_015db2f0(&local_1c8,param_1 + 0x100,iVar30);
              uVar10 = uStack_1be;
              uVar9 = uStack_1bf;
              uVar2 = local_1c0;
              iVar34 = CONCAT13(uStack_1b9,CONCAT12(uStack_1ba,local_1bc));
              if (iVar34 == 0) {
                iVar34 = CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8));
              }
              else {
                uVar16 = CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8));
                uVar17 = CONCAT22(uStack_1c2,CONCAT11(uStack_1c3,local_1c4));
                FUN_015f1494(&local_1c0);
                local_1c8 = uVar2;
                uStack_1c7 = uVar9;
                uStack_1c6 = uVar10;
                iVar34 = FUN_015d2f60(iVar34,extraout_r1,uVar16,uVar17,&local_1c8);
              }
              local_214 = iVar34 - 0xb0;
            }
            local_22c = (iVar26 + uVar24 * -0x40) - 0x38;
            puVar25 = *(uint **)(param_1 + 0xe0);
            iVar34 = *(int *)(param_1 + 0xec);
            puVar33 = puVar25 + 1;
            uVar35 = ~*puVar25 & 0x80808080;
            local_250 = (int)piVar18 + 0x25;
            local_23c = (int **)(local_214 + 0xa0);
            while (iVar26 = local_1e4, iVar34 != 0) {
              puVar32 = puVar33;
              if (uVar35 == 0) {
                do {
                  puVar33 = puVar32 + 1;
                  uVar35 = *puVar32;
                  puVar25 = puVar25 + -0xb0;
                  puVar32 = puVar33;
                } while ((uVar35 & 0x80808080) == 0x80808080);
                uVar35 = uVar35 & 0x80808080 ^ 0x80808080;
              }
              iVar34 = iVar34 + -1;
              sVar8 = (short)((uint)LZCOUNT(uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 |
                                            (uVar35 >> 0x10 & 0xff) << 8 | uVar35 >> 0x18) >> 3);
              uVar35 = uVar35 - 1 & uVar35;
              if (*(char *)((int)puVar25 + -sVar8 * 0xb0 + -10) != '\0') {
                puVar32 = puVar25 + -sVar8 * 0x2c + -0x28;
                FUN_015f1d0c(puVar32,piVar18);
                FUN_015c663c(&local_1c8,local_214,puVar32,local_22c,piVar27,*(undefined2 *)puVar14);
                iVar26 = CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8));
                if ((iVar26 == 2) && ((local_1c4 & 1) != 0)) {
                  uVar16 = 1;
                  if (3 < DAT_01d51b00) {
                    local_60 = (int *)puVar25[-sVar8 * 0x2c + -0xf];
                    local_5c = puVar25[-sVar8 * 0x2c + -0xe];
                    bVar1 = *pbVar22;
                    if (bVar1 != 2) {
                      FUN_01bed4e2((int)&local_110 + 1,local_250,0x10);
                    }
                    else {
                      local_110 = (int **)(*(int *)((int)piVar18 + 0x1a) << 8);
                      local_10c._0_1_ = (undefined1)((uint)*(int *)((int)piVar18 + 0x1a) >> 0x18);
                    }
                    local_110 = (int **)CONCAT31(local_110._1_3_,bVar1 != 2);
                    local_1d4 = FUN_01309a48;
                    local_1d8 = (int **)&local_110;
                    local_1dc = (code *)&LAB_018a13b8;
                    local_1e0 = &local_60;
                    local_44 = (code *)0x17;
                    local_40 = (int **)&DAT_01cfca68;
                    local_4c = (code *)&DAT_00000017;
                    local_48 = (int **)0x4b3d9f;
                    local_50._0_1_ = 0x9f;
                    local_50._1_1_ = 0x3d;
                    local_50._2_2_ = 0x4b;
                    FUN_015fb650(&DAT_0058aaf9,&local_1e0,4,&local_50);
                  }
                }
                else {
                  local_40 = (int **)0x0;
                  pcVar19 = *(code **)(local_214 + 0xa8);
                  puVar37 = *(undefined4 **)(local_214 + 0xa4);
                  *(undefined4 *)(local_214 + 0xa8) = 0;
                  pcVar29 = (code *)(puVar37 + (int)pcVar19 * 2);
                  local_4c = pcVar29;
                  local_48 = local_23c;
                  local_44 = pcVar19;
                  for (iVar11 = (int)pcVar19 << 3; iVar11 != 0; iVar11 = iVar11 + -8) {
                    uVar16 = *puVar37;
                    puVar3 = puVar37 + 1;
                    puVar37 = puVar37 + 2;
                    FUN_015f91d0(param_1 + 0x248,pcVar19,uVar16,*puVar3);
                    pcVar19 = extraout_r1_00;
                  }
                  local_50._0_1_ = SUB41(pcVar29,0);
                  local_50._1_1_ = (undefined1)((uint)pcVar29 >> 8);
                  local_50._2_2_ = (undefined2)((uint)pcVar29 >> 0x10);
                  FUN_015f5c68(&local_50);
                  uVar16 = 0;
                  local_240 = iVar26;
                }
                FUN_015f17d0(puVar32,iVar30,uVar16);
                if (CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8)) != 2) {
                  FUN_0134bd64(CONCAT22(uStack_1be,CONCAT11(uStack_1bf,local_1c0)),
                               CONCAT13(uStack_1b9,CONCAT12(uStack_1ba,local_1bc)));
                }
              }
            }
            if (*(int *)(param_1 + 0xcc) != 0) {
              uVar23 = FUN_015f7180(*extraout_r3,extraout_r3[1],extraout_r3[2],extraout_r3[3],
                                    local_1e4);
              iVar34 = 0;
              iVar30 = *(int *)(param_1 + 0xc0);
              uVar35 = uVar23 >> 0x19;
              while( true ) {
                uVar23 = *(uint *)(param_1 + 0xc4) & uVar23;
                uVar31 = *(uint *)(iVar30 + uVar23);
                uVar28 = uVar31 ^ uVar35 * 0x1010101;
                uVar28 = ~uVar28 & 0x80808080 & uVar28 + 0xfefefeff;
                while (uVar28 != 0) {
                  uVar24 = uVar28 >> 8;
                  uVar4 = uVar28 >> 0x10;
                  uVar5 = uVar28 >> 0x18;
                  uVar7 = uVar28 << 0x18;
                  uVar28 = uVar28 - 1 & uVar28;
                  uVar24 = uVar23 + ((uint)LZCOUNT(uVar7 | (uVar24 & 0xff) << 0x10 |
                                                   (uVar4 & 0xff) << 8 | uVar5) >> 3) &
                           *(uint *)(param_1 + 0xc4);
                  if (iVar26 == *(int *)(iVar30 + -0x40 + uVar24 * -0x40)) {
                    local_1e0 = *(int ***)(param_1 + 0x120);
                    iVar30 = iVar30 + uVar24 * -0x40 + -0x38;
                    local_1d0 = *(undefined4 *)(param_1 + 300);
                    local_1d4 = (code *)((int)local_1e0 + *(int *)(param_1 + 0x124) + 1);
                    local_1d8 = local_1e0 + 1;
                    local_1dc = (code *)(~(uint)*local_1e0 & 0x80808080);
                    while( true ) {
                      iVar34 = FUN_015da848(&local_1e0);
                      if (iVar34 == 0) break;
                      local_18c = 1;
                      local_1c4 = 0;
                      uStack_1c3 = 0;
                      uStack_1c2 = 0;
                      local_1c8 = 0;
                      uStack_1c7 = 0;
                      uStack_1c6 = 0;
                      local_190 = (code *)0x0;
                      local_194 = (int **)0x0;
                      local_198 = 4;
                      local_19c = 0;
                      local_1a0 = 0;
                      local_1a4 = 4;
                      local_1a8 = 0;
                      local_1ac = (code *)0x0;
                      local_1b0 = (int **)&DAT_00000008;
                      local_1b4 = (code *)0x0;
                      uStack_1b8 = (int **)0x0;
                      local_1bc = 4;
                      uStack_1ba = 0;
                      uStack_1b9 = 0;
                      local_1c0 = 0;
                      uStack_1bf = 0;
                      uStack_1be = 0;
                      FUN_015e59a4(&local_1c8,*(undefined4 *)(iVar34 + 4),
                                   *(undefined4 *)(iVar34 + 8),0xc);
                      if (*(char *)(iVar13 + 0x2d0) == '\0') {
                        FUN_019ae6ac(&local_50);
                        *puVar21 = CONCAT22(local_50._2_2_,
                                            CONCAT11(local_50._1_1_,(undefined1)local_50));
                        *(code **)(iVar13 + 0x2c4) = local_4c;
                        *(undefined4 *)(iVar13 + 0x2c8) = local_48;
                        *(code **)(iVar13 + 0x2cc) = local_44;
                        *(undefined1 *)(iVar13 + 0x2d0) = 1;
                      }
                      local_100 = *puVar21;
                      iStack_fc = *(int *)(iVar13 + 0x2c4);
                      local_f8 = *(undefined4 *)(iVar13 + 0x2c8);
                      local_f4 = *(undefined4 *)(iVar13 + 0x2cc);
                      *puVar21 = local_100 + 1;
                      *(uint *)(iVar13 + 0x2c4) = iStack_fc + (uint)(0xfffffffe < local_100);
                      local_110 = (int **)&DAT_0056d238;
                      local_10c = (code *)0x0;
                      local_108 = (int **)0x0;
                      local_104 = (code *)0x0;
                      if (*(int *)(param_1 + 0x1e8) != -1) {
                        local_50._0_1_ = 2;
                        local_50._1_1_ = 0;
                        FUN_015c507c(local_f0,&local_1c8,iVar30,(int *)(param_1 + 0x1e8),
                                     *(undefined2 *)puVar14,0,&local_50);
                        if (local_f0[0] == 2) {
                          FUN_015c64b4(local_f0);
                        }
                        else {
                          FUN_01453a54(&local_110,local_f0);
                        }
                      }
                      if (*(int *)(param_1 + 500) != -1) {
                        local_50._0_1_ = 2;
                        local_50._1_1_ = 0;
                        FUN_015c507c(local_a8,&local_1c8,iVar30,(int *)(param_1 + 500),
                                     *(undefined2 *)puVar14,0,&local_50);
                        if (local_a8[0] == 2) {
                          FUN_015c64b4(local_a8);
                        }
                        else {
                          FUN_01453a54(&local_110,local_a8);
                        }
                      }
                      if (local_104 == (code *)0x0) {
                        FUN_014532e4(&local_110);
                      }
                      else {
                        local_48 = local_110;
                        local_44 = local_10c;
                        local_40 = local_108;
                        pcStack_3c = local_104;
                        local_38 = local_100;
                        iStack_34 = iStack_fc;
                        uStack_30 = local_f8;
                        uStack_2c = local_f4;
                        local_4c = (code *)0x0;
                        local_50._0_1_ = 0x11;
                        local_50._1_1_ = 0;
                        local_50._2_2_ = 0;
                        FUN_015c4db8(&local_60,param_1,&local_50);
                        if ((&SUB_00000004 < local_60) ||
                           ((1 << ((uint)local_60 & 0xff) & 0x13U) == 0)) {
                          FUN_0134bd64(local_5c,local_58);
                        }
                      }
                      FUN_015c39bc(&local_1c8);
                    }
                    goto LAB_015ceeb4;
                  }
                }
                if ((uVar31 & 0x80808080 & uVar31 << 1) != 0) break;
                iVar34 = iVar34 + 4;
                uVar23 = uVar23 + iVar34;
              }
            }
LAB_015ceeb4:
            bVar1 = *pbVar22;
            if (bVar1 != 2) {
              FUN_01bed4e2(&uStack_1c3,local_250,0x10);
            }
            else {
              uVar16 = *(undefined4 *)((int)piVar18 + 0x1a);
              uStack_1c3 = (undefined1)uVar16;
              uStack_1c2 = (undefined2)((uint)uVar16 >> 8);
              local_1c0 = (undefined1)((uint)uVar16 >> 0x18);
            }
            local_1c8 = 2;
            uStack_1c7 = 0;
            uStack_1c6 = 0x8000;
            local_1c4 = bVar1 != 2;
            FUN_015cc548(param_1,&local_1c8);
            goto LAB_015ce070;
          }
LAB_015ce860:
          if (3 < DAT_01d51b00) {
            local_50._0_1_ = SUB41(&local_1e4,0);
            local_50._1_1_ = (undefined1)((uint)&local_1e4 >> 8);
            local_50._2_2_ = (undefined2)((uint)&local_1e4 >> 0x10);
            local_4c = FUN_012fd02c;
            local_1bc = 0x17;
            uStack_1ba = 0;
            uStack_1b9 = 0;
            uStack_1b8 = (int **)&DAT_01cfca78;
            local_1c4 = 0x17;
            uStack_1c3 = 0;
            uStack_1c2 = 0;
            local_1c0 = 0x9f;
            uStack_1bf = 0x3d;
            uStack_1be = 0x4b;
            local_1c8 = 0x9f;
            uStack_1c7 = 0x3d;
            uStack_1c6 = 0x4b;
            FUN_015fb650(&DAT_005a683b,&local_50,4,&local_1c8);
          }
        }
      }
LAB_015ce070:
      uVar38 = uVar38 + 1;
      piVar18 = piVar18 + 0x12;
    } while (piVar18 != piVar12);
  }
  FUN_015cf0cc(param_1,iVar36,uVar20);
  FUN_019bb7e0(local_1f0,local_1ec);
  FUN_015abb4c(param_2);
  return;
LAB_015ce7d8:
  if ((uVar31 & 0x80808080 & uVar31 << 1) != 0) goto LAB_015ce860;
  iVar11 = iVar11 + 4;
  uVar23 = uVar23 + iVar11;
  goto LAB_015ce784;
}

