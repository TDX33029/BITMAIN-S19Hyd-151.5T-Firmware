// FUN_01af2664 @ 01af2664 size=2684 calls_out=8 calls_in=3
// strings: 

void FUN_01af2664(undefined4 *param_1,undefined1 **param_2,undefined1 **param_3)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 ***pppuVar7;
  undefined4 uVar8;
  undefined1 **ppuVar9;
  uint uVar10;
  undefined1 **ppuVar11;
  uint uVar12;
  undefined1 **ppuVar13;
  undefined1 **unaff_r4;
  undefined1 **unaff_r6;
  undefined1 **ppuVar14;
  undefined1 **ppuVar15;
  undefined1 **ppuVar16;
  undefined1 *puVar17;
  undefined1 **local_200;
  undefined1 **local_1fc;
  undefined1 **local_1f8;
  undefined1 **local_1f4;
  byte *local_1f0;
  undefined1 **local_1ec;
  undefined1 **local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 **local_1d0;
  undefined1 **local_1cc;
  undefined1 **local_1c8;
  undefined1 **local_1c4;
  undefined1 **local_1c0;
  undefined1 **local_1bc;
  undefined1 **local_1b8;
  undefined4 local_1b0;
  byte *local_1ac;
  undefined1 **local_1a8;
  undefined1 **local_158;
  undefined1 **local_154;
  undefined1 **ppuStack_150;
  undefined1 **ppuStack_14c;
  undefined1 **ppuStack_148;
  undefined1 **local_140;
  undefined1 **local_13c;
  undefined1 **ppuStack_138;
  undefined1 **ppuStack_134;
  undefined1 **ppuStack_130;
  undefined1 **local_128;
  undefined1 **ppuStack_124;
  undefined1 **ppuStack_120;
  undefined1 **ppuStack_11c;
  undefined1 **ppuStack_118;
  undefined1 *local_110;
  undefined1 **local_10c;
  undefined1 **local_108;
  undefined1 **local_104;
  undefined1 **local_100;
  undefined1 **local_fc;
  undefined1 **local_f8;
  undefined1 **local_f4;
  undefined1 **local_f0;
  undefined1 **local_ec;
  undefined1 **local_e8;
  undefined1 **local_e4;
  undefined1 **local_e0;
  undefined1 **local_dc;
  undefined1 **local_d8;
  undefined1 **local_d4;
  undefined1 **local_d0;
  undefined1 **local_cc;
  undefined1 **local_c8;
  undefined4 local_c4;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_9c;
  undefined1 *local_90;
  undefined1 **local_8c;
  undefined1 **local_88;
  undefined1 **local_84;
  undefined1 **ppuStack_80;
  undefined1 **ppuStack_7c;
  undefined1 **ppuStack_78;
  undefined1 **ppuStack_74;
  undefined1 *local_70;
  undefined1 **local_6c;
  undefined1 **local_68;
  undefined1 **local_50;
  undefined1 **local_4c;
  undefined1 **local_48;
  undefined1 **local_40;
  undefined1 **ppuStack_3c;
  undefined1 **ppuStack_38;
  undefined1 **ppuStack_34;
  undefined1 **ppuStack_30;
  
  local_90 = (undefined1 *)0x8000001d;
  local_70 = (undefined1 *)0x8000001d;
  local_6c = (undefined1 **)CONCAT31(local_6c._1_3_,0x10);
  ppuVar14 = (undefined1 **)((uint)&local_70 | 4);
  local_8c = (undefined1 **)CONCAT31(local_8c._1_3_,2);
  ppuVar9 = (undefined1 **)0x2;
  if (param_3 == (undefined1 **)0x0) {
LAB_01af2ac0:
    local_1ac = (byte *)0x0;
    local_1a8 = ppuVar9;
LAB_01af2ad4:
    local_1b0 = 0x80000000;
    local_50 = (undefined1 **)*ppuVar14;
    local_4c = (undefined1 **)ppuVar14[1];
    FUN_01aeb5f4(&local_1b0);
LAB_01af2af0:
    local_108 = (undefined1 **)0x8000001d;
  }
  else {
    ppuVar9 = (undefined1 **)~(uint)*(byte *)param_2;
    if ((((uint)ppuVar9 & 0x1f) == 0) ||
       (unaff_r6 = param_3, param_3 == (undefined1 **)&DAT_00000001)) goto LAB_01af2ac0;
    uVar12 = (uint)(char)*(byte *)((int)param_2 + 1);
    if ((int)uVar12 < 0) {
      ppuVar15 = (undefined1 **)(*(byte *)((int)param_2 + 1) - 0x81);
      ppuVar9 = ppuVar15;
      if (ppuVar15 < &SUB_00000004) {
        ppuVar9 = (undefined1 **)(&switchD_01af277c::switchdataD_01af2780)[(int)ppuVar15];
        switch(ppuVar15) {
        case (undefined1 **)0x0:
          if (((undefined1 **)0x2 < param_3) &&
             (uVar12 = (uint)(char)*(byte *)((int)param_2 + 2), 0x7fffffff < uVar12)) {
            uVar10 = 3;
            goto LAB_01af26d0;
          }
          break;
        case (undefined1 **)0x1:
          if (&DAT_00000003 < param_3) {
            ppuVar9 = (undefined1 **)0x0;
            if (*(byte *)((int)param_2 + 2) != 0) {
              ppuVar9 = (undefined1 **)
                        (uint)CONCAT11(*(byte *)((int)param_2 + 2),*(byte *)((int)param_2 + 3));
              uVar10 = 4;
LAB_01af2ab0:
              if (ppuVar9 < (undefined1 **)0xffff) goto LAB_01af26d4;
            }
          }
          break;
        case (undefined1 **)0x2:
          if (((undefined1 **)0x2 < param_3) && (&SUB_00000004 < param_3)) {
            ppuVar9 = (undefined1 **)0x0;
            if (*(byte *)((int)param_2 + 2) != 0) {
              ppuVar9 = (undefined1 **)
                        ((uint)*(byte *)((int)param_2 + 3) << 8 |
                         (uint)*(byte *)((int)param_2 + 2) << 0x10 | (uint)*(byte *)(param_2 + 1));
              uVar10 = 5;
              goto LAB_01af2ab0;
            }
          }
          break;
        case (undefined1 **)0x3:
          if (((undefined1 **)0x2 < param_3) && (param_3 != (undefined1 **)&DAT_00000003)) {
            if (((&DAT_00000005 < param_3) || (param_3 == (undefined1 **)&DAT_00000003)) &&
               (*(byte *)((int)param_2 + 2) != 0)) {
              unaff_r4 = (undefined1 **)(uint)*(byte *)((int)param_2 + 5);
              uVar10 = 6;
              ppuVar9 = (undefined1 **)
                        ((uint)*(byte *)((int)param_2 + 3) << 0x10 |
                         (uint)*(byte *)((int)param_2 + 2) << 0x18 |
                         (uint)*(byte *)(param_2 + 1) << 8 | (uint)unaff_r4);
              goto LAB_01af2ab0;
            }
          }
        }
      }
      goto LAB_01af2ac0;
    }
    uVar10 = 2;
LAB_01af26d0:
    ppuVar9 = (undefined1 **)(uVar12 & 0xff);
LAB_01af26d4:
    ppuVar15 = (undefined1 **)((int)ppuVar9 + uVar10);
    if ((CARRY4((uint)ppuVar9,uVar10)) || (param_3 < ppuVar15)) goto LAB_01af2ac0;
    if (*(byte *)param_2 != 0x30) goto LAB_01af2ad4;
    local_1f0 = (byte *)((int)param_2 + uVar10);
    local_1b0 = 0x8000002d;
    local_1e8 = (undefined1 **)0x0;
    local_1ec = ppuVar9;
    local_1ac = local_1f0;
    local_1a8 = ppuVar9;
    FUN_01aedd8c(&local_110,&local_1f0,0xffff);
    ppuVar4 = local_f8;
    ppuVar3 = local_fc;
    ppuVar16 = local_108;
    ppuVar9 = local_10c;
    unaff_r4 = local_1e8;
    if (local_110 == (undefined1 *)0x0) {
      local_13c = local_100;
      local_140 = local_104;
      local_154 = local_f0;
      local_158 = local_f4;
      if (local_1e8 == local_1ec) {
        ppuVar14 = &local_70;
        local_50 = local_104;
        local_4c = local_100;
        local_1bc = local_f0;
        local_1c0 = local_f4;
        FUN_01aeb5f4(ppuVar14);
        ppuVar2 = local_4c;
        ppuVar1 = local_50;
        ppuVar13 = local_1bc;
        ppuVar11 = local_1c0;
        local_1c4 = local_4c;
        local_1c8 = local_50;
        local_1cc = local_1bc;
        local_1d0 = local_1c0;
        if (ppuVar15 != param_3) {
          puVar6 = (undefined4 *)((uint)&local_90 | 4);
          local_108 = (undefined1 **)0x8000001d;
          local_1f8 = (undefined1 **)*puVar6;
          local_1f4 = (undefined1 **)puVar6[1];
          local_200 = (undefined1 **)puVar6[4];
          local_1fc = (undefined1 **)puVar6[5];
          goto LAB_01af2b1c;
        }
        FUN_01aeb5f4(&local_90);
        puVar17 = &DAT_80000020;
        local_1c4 = ppuVar2;
        local_1c8 = ppuVar1;
        local_1f0 = (byte *)0x8000001d;
        local_1ec = (undefined1 **)CONCAT31(local_1ec._1_3_,4);
        local_1cc = ppuVar13;
        local_1d0 = ppuVar11;
        local_1b8 = (undefined1 **)0x0;
        local_1bc = ppuVar16;
        local_1c0 = ppuVar9;
        local_90 = &DAT_80000020;
        if (ppuVar16 == (undefined1 **)0x0) {
LAB_01af2d30:
          local_6c = (undefined1 **)0x0;
          local_68 = ppuVar11;
LAB_01af2d48:
          local_70 = (undefined1 *)0x80000000;
LAB_01af2d50:
          FUN_01aeb5f4(ppuVar14);
LAB_01af2d58:
          pppuVar7 = &local_40;
LAB_01af2d5c:
          local_128 = *pppuVar7;
          ppuStack_124 = pppuVar7[1];
          ppuStack_120 = pppuVar7[2];
          ppuStack_11c = pppuVar7[3];
          ppuStack_118 = pppuVar7[4];
        }
        else {
          local_1b8 = (undefined1 **)&DAT_00000001;
          ppuVar11 = (undefined1 **)~(uint)*(byte *)ppuVar9;
          if ((((uint)ppuVar11 & 0x1f) == 0) || (ppuVar16 == (undefined1 **)&DAT_00000001))
          goto LAB_01af2d30;
          ppuVar15 = (undefined1 **)0x2;
          local_1b8 = (undefined1 **)0x2;
          uVar12 = (uint)(char)*(byte *)((int)ppuVar9 + 1);
          if ((int)uVar12 < 0) {
            ppuVar11 = (undefined1 **)(*(byte *)((int)ppuVar9 + 1) - 0x81);
            if (ppuVar11 < &SUB_00000004) {
              ppuVar13 = (undefined1 **)(&switchD_01af2ba0::switchdataD_01af2ba4)[(int)ppuVar11];
              switch(ppuVar11) {
              case (undefined1 **)0x0:
                ppuVar11 = ppuVar13;
                if ((undefined1 **)0x2 < ppuVar16) {
                  ppuVar15 = (undefined1 **)&DAT_00000003;
                  local_1b8 = (undefined1 **)&DAT_00000003;
                  uVar12 = (uint)(char)*(byte *)((int)ppuVar9 + 2);
                  ppuVar11 = ppuVar9;
                  if ((int)uVar12 < 0) goto LAB_01af2910;
                }
                break;
              case (undefined1 **)0x1:
                ppuVar11 = ppuVar13;
                if ((undefined1 **)0x2 < ppuVar16) {
                  local_1b8 = (undefined1 **)&DAT_00000003;
                  ppuVar11 = (undefined1 **)&DAT_00000003;
                  if (ppuVar16 != (undefined1 **)&DAT_00000003) {
                    ppuVar15 = (undefined1 **)&SUB_00000004;
                    local_1b8 = (undefined1 **)&SUB_00000004;
                    ppuVar11 = (undefined1 **)(uint)*(byte *)((int)ppuVar9 + 3);
                    if (*(byte *)((int)ppuVar9 + 2) != 0) {
                      ppuVar11 = (undefined1 **)
                                 (uint)CONCAT11(*(byte *)((int)ppuVar9 + 2),
                                                *(byte *)((int)ppuVar9 + 3));
LAB_01af2d20:
                      if (ppuVar11 < (undefined1 **)0xffff) goto LAB_01af2914;
                    }
                  }
                }
                break;
              case (undefined1 **)0x2:
                ppuVar11 = ppuVar13;
                if ((undefined1 **)0x2 < ppuVar16) {
                  local_1b8 = (undefined1 **)&DAT_00000003;
                  ppuVar11 = (undefined1 **)&DAT_00000003;
                  if (ppuVar16 != (undefined1 **)&DAT_00000003) {
                    local_1b8 = (undefined1 **)&SUB_00000004;
                    ppuVar11 = (undefined1 **)&SUB_00000004;
                    if (&SUB_00000004 < ppuVar16) {
                      ppuVar15 = (undefined1 **)&DAT_00000005;
                      local_1b8 = (undefined1 **)&DAT_00000005;
                      if (*(byte *)((int)ppuVar9 + 2) != 0) {
                        ppuVar11 = (undefined1 **)
                                   ((uint)*(byte *)((int)ppuVar9 + 3) << 8 |
                                    (uint)*(byte *)((int)ppuVar9 + 2) << 0x10 |
                                   (uint)*(byte *)(ppuVar9 + 1));
                        goto LAB_01af2d20;
                      }
                    }
                  }
                }
                break;
              case (undefined1 **)0x3:
                ppuVar11 = ppuVar13;
                if ((undefined1 **)0x2 < ppuVar16) {
                  local_1b8 = (undefined1 **)&DAT_00000003;
                  ppuVar11 = (undefined1 **)&DAT_00000003;
                  if (ppuVar16 != (undefined1 **)&DAT_00000003) {
                    local_1b8 = (undefined1 **)&SUB_00000004;
                    ppuVar11 = (undefined1 **)&SUB_00000004;
                    if (&SUB_00000004 < ppuVar16) {
                      local_1b8 = (undefined1 **)&DAT_00000005;
                      ppuVar11 = (undefined1 **)&DAT_00000005;
                      if (ppuVar16 != (undefined1 **)&DAT_00000005) {
                        ppuVar15 = (undefined1 **)&DAT_00000006;
                        local_1b8 = (undefined1 **)&DAT_00000006;
                        if (*(byte *)((int)ppuVar9 + 2) != 0) {
                          ppuVar11 = (undefined1 **)
                                     ((uint)*(byte *)((int)ppuVar9 + 3) << 0x10 |
                                      (uint)*(byte *)((int)ppuVar9 + 2) << 0x18 |
                                      (uint)*(byte *)(ppuVar9 + 1) << 8 |
                                     (uint)*(byte *)((int)ppuVar9 + 5));
                          goto LAB_01af2d20;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_01af2d30;
          }
LAB_01af2910:
          ppuVar11 = (undefined1 **)(uVar12 & 0xff);
LAB_01af2914:
          ppuVar13 = (undefined1 **)((int)ppuVar11 + (int)ppuVar15);
          if ((CARRY4((uint)ppuVar11,(uint)ppuVar15)) || (ppuVar16 < ppuVar13)) goto LAB_01af2d30;
          local_1b8 = ppuVar13;
          if (*(byte *)ppuVar9 != 0xa0) goto LAB_01af2d48;
          local_48 = (undefined1 **)0x0;
          local_6c = (undefined1 **)((int)ppuVar9 + (int)ppuVar15);
          local_68 = ppuVar11;
          local_50 = local_6c;
          local_4c = ppuVar11;
          FUN_01af3370(&local_110,&local_50);
          if (local_110 != (undefined1 *)0x8000002d) {
            local_40 = local_104;
            ppuStack_3c = local_100;
            ppuStack_38 = local_fc;
            ppuStack_34 = local_f8;
            ppuStack_30 = local_f4;
            ppuVar15 = local_10c;
            ppuVar16 = local_108;
            puVar17 = local_110;
LAB_01af2db0:
            ppuVar14 = &local_90;
            goto LAB_01af2d50;
          }
          if (((uint)local_10c & 0xff) != 2) {
            ppuVar15 = (undefined1 **)0x0;
            puVar17 = &DAT_80000020;
            goto LAB_01af2db0;
          }
          if (local_48 != local_4c) {
            puVar17 = &DAT_80000020;
            ppuVar15 = (undefined1 **)0x2;
            goto LAB_01af2d58;
          }
          FUN_01aeb5f4(&local_90);
          FUN_01af347c(&local_110,&local_1c0,2);
          ppuVar16 = local_108;
          ppuVar15 = local_10c;
          if (local_110 != (undefined1 *)0x8000002d) {
            pppuVar7 = &local_104;
            puVar17 = local_110;
            goto LAB_01af2d5c;
          }
          FUN_01af347c(&local_110,&local_1c0,0x30);
          if (local_110 == (undefined1 *)0x8000002d) {
            puVar17 = &DAT_8000001c;
            if ((local_108 == ppuVar4) &&
               (iVar5 = thunk_FUN_01bed842(local_10c,ppuVar3,ppuVar4), iVar5 == 0)) {
              FUN_01af347c(&local_110,&local_1c0,0x30);
              ppuVar14 = local_108;
              ppuVar9 = local_10c;
              if (local_110 == (undefined1 *)0x8000002d) {
                FUN_01af347c(&local_110,&local_1c0,0x30);
                ppuVar13 = local_108;
                ppuVar11 = local_10c;
                if (local_110 == (undefined1 *)0x8000002d) {
                  FUN_01af347c(&local_110,&local_1c0,0x30);
                  ppuVar2 = local_108;
                  ppuVar1 = local_10c;
                  if (local_110 == (undefined1 *)0x8000002d) {
                    FUN_01af347c(&local_110,&local_1c0,0x30);
                    if (local_110 == (undefined1 *)0x8000002d) {
                      local_fc = local_1c8;
                      local_f8 = local_1c4;
                      local_ec = local_1d0;
                      local_e8 = local_1cc;
                      local_104 = ppuVar15;
                      local_100 = ppuVar16;
                      local_f0 = ppuVar4;
                      local_f4 = ppuVar3;
                      local_9c = 0;
                      local_a4 = 0;
                      local_ac = 0;
                      local_b4 = 0;
                      local_bc = 0;
                      local_c4 = 0;
                      local_d0 = ppuVar2;
                      local_d4 = ppuVar1;
                      local_d8 = ppuVar13;
                      local_dc = ppuVar11;
                      local_e0 = ppuVar14;
                      local_e4 = ppuVar9;
                      local_110 = (undefined1 *)0x80000000;
                      local_c8 = local_108;
                      local_cc = local_10c;
                      ppuVar9 = local_1b8;
                      local_10c = param_2;
                      local_108 = param_3;
                      if (local_1b8 != local_1bc) {
                        local_70 = (undefined1 *)0x8000001d;
                        local_6c = (undefined1 **)CONCAT31(local_6c._1_3_,3);
                        FUN_01af4638(&local_90,&local_1c0,&local_70,&local_110);
                        ppuVar15 = local_8c;
                        puVar17 = local_90;
                        if (local_90 != (undefined1 *)0x8000002d) {
                          local_128 = local_84;
                          ppuStack_124 = ppuStack_80;
                          ppuStack_120 = ppuStack_7c;
                          ppuStack_11c = ppuStack_78;
                          ppuStack_118 = ppuStack_74;
                          ppuVar16 = local_88;
                          if (local_110 != (undefined1 *)0x80000000) {
                            FUN_0134bd64(local_110,local_10c);
                          }
                          goto LAB_01af2d68;
                        }
                        ppuVar9 = local_1bc;
                      }
                      ppuVar3 = local_104;
                      ppuVar16 = local_108;
                      ppuVar15 = local_10c;
                      puVar17 = local_110;
                      ppuVar14 = local_1b8;
                      local_128 = local_100;
                      ppuStack_124 = local_fc;
                      ppuStack_120 = local_f8;
                      ppuStack_11c = local_f4;
                      ppuStack_118 = local_f0;
                      FUN_01bed4e2(&local_1b0,&local_ec,0x58);
                      local_140 = local_128;
                      local_13c = ppuStack_124;
                      ppuStack_138 = ppuStack_120;
                      ppuStack_134 = ppuStack_11c;
                      ppuStack_130 = ppuStack_118;
                      local_158 = local_128;
                      local_154 = ppuStack_124;
                      ppuStack_150 = ppuStack_120;
                      ppuStack_14c = ppuStack_11c;
                      ppuStack_148 = ppuStack_118;
                      if (ppuVar14 != ppuVar9) {
                        param_1[2] = local_1f0;
                        param_1[3] = local_1ec;
                        param_1[4] = local_1e8;
                        param_1[5] = uStack_1e4;
                        param_1[6] = local_1e0;
                        param_1[7] = uStack_1dc;
                        param_1[8] = uStack_1d8;
                        param_1[9] = uStack_1d4;
                        *param_1 = 1;
                        if (puVar17 == (undefined1 *)0x80000000) {
                          return;
                        }
                        FUN_0134bd64(puVar17,ppuVar15);
                        return;
                      }
                      param_1[1] = puVar17;
                      param_1[2] = ppuVar15;
                      param_1[3] = ppuVar16;
                      param_1[4] = ppuVar3;
                      param_1[5] = local_128;
                      param_1[6] = ppuStack_124;
                      param_1[7] = ppuStack_120;
                      param_1[8] = ppuStack_11c;
                      param_1[9] = ppuStack_118;
                      FUN_01bed4e2(param_1 + 10,&local_1b0,0x58);
                      uVar8 = 0;
                      goto LAB_01af2d98;
                    }
                    local_128 = local_104;
                    ppuStack_124 = local_100;
                    ppuStack_120 = local_fc;
                    ppuStack_11c = local_f8;
                    ppuStack_118 = local_f4;
                    ppuVar15 = local_10c;
                    ppuVar16 = local_108;
                    puVar17 = local_110;
                  }
                  else {
                    local_128 = local_104;
                    ppuStack_124 = local_100;
                    ppuStack_120 = local_fc;
                    ppuStack_11c = local_f8;
                    ppuStack_118 = local_f4;
                    ppuVar15 = local_10c;
                    ppuVar16 = local_108;
                    puVar17 = local_110;
                  }
                }
                else {
                  local_128 = local_104;
                  ppuStack_124 = local_100;
                  ppuStack_120 = local_fc;
                  ppuStack_11c = local_f8;
                  ppuStack_118 = local_f4;
                  ppuVar15 = local_10c;
                  ppuVar16 = local_108;
                  puVar17 = local_110;
                }
              }
              else {
                local_128 = local_104;
                ppuStack_124 = local_100;
                ppuStack_120 = local_fc;
                ppuStack_11c = local_f8;
                ppuStack_118 = local_f4;
                ppuVar15 = local_10c;
                ppuVar16 = local_108;
                puVar17 = local_110;
              }
            }
          }
          else {
            local_128 = local_104;
            ppuStack_124 = local_100;
            ppuStack_120 = local_fc;
            ppuStack_11c = local_f8;
            ppuStack_118 = local_f4;
            ppuVar15 = local_10c;
            ppuVar16 = local_108;
            puVar17 = local_110;
          }
        }
LAB_01af2d68:
        local_140 = local_128;
        local_13c = ppuStack_124;
        ppuStack_138 = ppuStack_120;
        ppuStack_134 = ppuStack_11c;
        ppuStack_130 = ppuStack_118;
        param_1[5] = local_128;
        param_1[6] = ppuStack_124;
        param_1[7] = ppuStack_120;
        param_1[8] = ppuStack_11c;
        param_1[9] = ppuStack_118;
        uVar8 = 1;
        param_1[2] = puVar17;
        param_1[3] = ppuVar15;
        param_1[4] = ppuVar16;
LAB_01af2d98:
        *param_1 = uVar8;
        FUN_01aeb5f4(&local_1f0);
        return;
      }
      local_50 = (undefined1 **)*ppuVar14;
      local_4c = (undefined1 **)ppuVar14[1];
      goto LAB_01af2af0;
    }
    local_1c0 = local_f4;
    local_4c = local_100;
    local_50 = local_104;
    local_1bc = local_f0;
    FUN_01aeb5f4(&local_70);
    unaff_r4 = local_ec;
    unaff_r6 = local_fc;
    ppuVar14 = local_f8;
  }
  local_1f8 = local_50;
  local_1f4 = local_4c;
  local_1fc = local_1bc;
  local_200 = local_1c0;
  FUN_01aeb5f4(&local_90);
  param_3 = unaff_r6;
LAB_01af2b1c:
  param_1[7] = local_200;
  param_1[3] = local_1f8;
  param_1[4] = local_1f4;
  param_1[8] = local_1fc;
  param_1[5] = param_3;
  param_1[6] = ppuVar14;
  param_1[9] = unaff_r4;
  param_1[2] = local_108;
  *param_1 = 1;
  return;
}

