// FUN_016cce5c @ 016cce5c size=2740 calls_out=7 calls_in=6
// strings: 

void FUN_016cce5c(undefined4 *param_1,undefined1 **param_2,undefined1 **param_3)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  byte bVar4;
  undefined1 ***pppuVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **unaff_r6;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
  undefined1 **ppuVar15;
  undefined1 **unaff_r8;
  undefined1 *puVar16;
  undefined1 **ppuVar17;
  byte *local_218;
  undefined1 **local_214;
  undefined1 **local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 **local_1f8;
  undefined1 **local_1f4;
  undefined1 **local_1f0;
  undefined1 **local_1ec;
  undefined1 **local_1e8;
  undefined1 **local_1e4;
  undefined1 **local_1e0;
  undefined4 local_1d8;
  byte *local_1d4;
  undefined1 **local_1d0;
  undefined1 **local_180;
  undefined1 **local_17c;
  undefined1 **ppuStack_178;
  undefined1 **ppuStack_174;
  undefined1 **ppuStack_170;
  undefined1 **local_168;
  undefined1 **local_164;
  undefined1 **ppuStack_160;
  undefined1 **ppuStack_15c;
  undefined1 **ppuStack_158;
  undefined1 **local_150;
  undefined1 **local_14c;
  undefined1 **ppuStack_148;
  undefined1 **ppuStack_144;
  undefined1 **ppuStack_140;
  undefined1 *local_138;
  undefined1 **local_134;
  undefined1 **local_130;
  undefined1 **local_12c;
  undefined1 **local_128;
  undefined1 **local_124;
  undefined1 **local_120;
  undefined1 **local_11c;
  undefined1 **local_118;
  undefined1 **local_114;
  undefined1 **ppuStack_110;
  undefined1 **local_10c;
  undefined1 **local_108;
  undefined1 **local_104;
  undefined1 **local_100;
  undefined1 **local_fc;
  undefined1 **local_f8;
  undefined1 **local_f4;
  undefined1 **local_f0;
  undefined4 local_ec;
  undefined4 local_e4;
  undefined4 local_dc;
  undefined4 local_d4;
  undefined4 local_cc;
  undefined4 local_c4;
  undefined1 *local_b8;
  undefined1 **local_b4;
  undefined1 **local_b0;
  undefined1 **local_ac;
  undefined1 **ppuStack_a8;
  undefined1 **ppuStack_a4;
  undefined1 **ppuStack_a0;
  undefined1 **ppuStack_9c;
  undefined1 *local_98;
  undefined1 **local_94;
  undefined1 **local_90;
  undefined1 **local_78;
  undefined1 **local_74;
  undefined1 **local_70;
  undefined1 **local_68;
  undefined1 **ppuStack_64;
  undefined1 **ppuStack_60;
  undefined1 **ppuStack_5c;
  undefined1 **ppuStack_58;
  undefined1 **local_50;
  undefined1 **local_4c;
  undefined1 **ppuStack_48;
  undefined1 **ppuStack_44;
  undefined1 **ppuStack_40;
  undefined1 **local_38;
  undefined1 **ppuStack_34;
  undefined1 **ppuStack_30;
  undefined1 **ppuStack_2c;
  undefined1 **ppuStack_28;
  
  local_b4 = (undefined1 **)CONCAT31(local_b4._1_3_,2);
  local_94 = (undefined1 **)CONCAT31(local_94._1_3_,0x10);
  ppuVar14 = (undefined1 **)((uint)&local_98 | 4);
  local_b8 = &DAT_8000001d;
  local_98 = &DAT_8000001d;
  if ((param_3 == (undefined1 **)0x0) ||
     ((~*(byte *)param_2 & 0x1f) == 0 || param_3 == (undefined1 **)&DAT_00000001)) {
switchD_016ccffc_default:
    local_168 = (undefined1 **)*ppuVar14;
    local_164 = (undefined1 **)ppuVar14[1];
    local_1d8 = 0x80000000;
    FUN_016c3a1c(&local_1d8);
    local_130 = (undefined1 **)&DAT_8000001d;
  }
  else {
    bVar4 = *(byte *)((int)param_2 + 1);
    ppuVar11 = (undefined1 **)(uint)bVar4;
    if ((char)bVar4 < 0) {
      unaff_r6 = (undefined1 **)(int)(char)bVar4;
      switch(ppuVar11) {
      case (undefined1 **)0x81:
        unaff_r6 = (undefined1 **)&switchD_016ccffc::switchdataD_016cd000;
        if ((&SUB_00000002 < param_3) && (0x7fffffff < (uint)(int)(char)*(byte *)((int)param_2 + 2))
           ) {
          ppuVar11 = (undefined1 **)(uint)*(byte *)((int)param_2 + 2);
          ppuVar13 = (undefined1 **)0x3;
          goto LAB_016ccf48;
        }
        break;
      case (undefined1 **)0x82:
        unaff_r6 = (undefined1 **)&switchD_016ccffc::switchdataD_016cd000;
        if (((undefined1 **)0x3 < param_3) && (*(byte *)((int)param_2 + 2) != 0)) {
          ppuVar11 = (undefined1 **)
                     (uint)CONCAT11(*(byte *)((int)param_2 + 2),*(byte *)((int)param_2 + 3));
          ppuVar13 = (undefined1 **)&DAT_00000004;
LAB_016cd280:
          unaff_r6 = ppuVar13;
          if (ppuVar11 < &DAT_0000ffff) goto LAB_016ccf48;
        }
        break;
      case (undefined1 **)0x83:
        unaff_r6 = (undefined1 **)&switchD_016ccffc::switchdataD_016cd000;
        if (((&SUB_00000002 < param_3) && (&DAT_00000004 < param_3)) &&
           (*(byte *)((int)param_2 + 2) != 0)) {
          ppuVar11 = (undefined1 **)
                     ((uint)*(byte *)((int)param_2 + 3) << 8 |
                      (uint)*(byte *)((int)param_2 + 2) << 0x10 | (uint)*(byte *)(param_2 + 1));
          ppuVar13 = (undefined1 **)&DAT_00000005;
          goto LAB_016cd280;
        }
        break;
      case (undefined1 **)0x84:
        unaff_r6 = (undefined1 **)&switchD_016ccffc::switchdataD_016cd000;
        if ((&SUB_00000002 < param_3) && (param_3 != (undefined1 **)0x3)) {
          unaff_r6 = (undefined1 **)(uint)*(byte *)((int)param_2 + 3);
          if (((&DAT_00000005 < param_3) || (param_3 == (undefined1 **)0x3)) &&
             (*(byte *)((int)param_2 + 2) != 0)) {
            ppuVar13 = (undefined1 **)&DAT_00000006;
            ppuVar11 = (undefined1 **)
                       ((int)unaff_r6 << 0x10 | (uint)*(byte *)((int)param_2 + 2) << 0x18 |
                        (uint)*(byte *)(param_2 + 1) << 8 | (uint)*(byte *)((int)param_2 + 5));
            goto LAB_016cd280;
          }
        }
      }
      goto switchD_016ccffc_default;
    }
    ppuVar13 = (undefined1 **)&SUB_00000002;
LAB_016ccf48:
    unaff_r8 = (undefined1 **)((int)ppuVar13 + (int)ppuVar11);
    unaff_r6 = ppuVar13;
    if (((CARRY4((uint)ppuVar13,(uint)ppuVar11)) || (param_3 < unaff_r8)) ||
       (*(byte *)param_2 != 0x30)) goto switchD_016ccffc_default;
    local_218 = (byte *)((int)param_2 + (int)ppuVar13);
    ppuVar13 = &local_b8;
    local_1d8 = 0x8000002d;
    local_210 = (undefined1 **)0x0;
    local_214 = ppuVar11;
    local_1d4 = local_218;
    local_1d0 = ppuVar11;
    FUN_016cb694(&local_138,&local_218,0xffff);
    ppuVar3 = local_120;
    ppuVar2 = local_124;
    ppuVar17 = local_130;
    ppuVar11 = local_134;
    unaff_r6 = local_210;
    if (local_138 == (undefined1 *)0x1) {
      local_180 = local_11c;
      local_164 = local_128;
      local_168 = local_12c;
      local_17c = local_118;
      FUN_016c3a1c(&local_98);
      unaff_r6 = local_114;
      ppuVar14 = local_120;
      unaff_r8 = local_124;
    }
    else {
      local_4c = local_128;
      local_50 = local_12c;
      local_14c = local_118;
      local_150 = local_11c;
      if (local_210 == local_214) {
        ppuVar14 = &local_98;
        local_168 = local_12c;
        local_164 = local_128;
        local_17c = local_118;
        local_180 = local_11c;
        FUN_016c3a1c(ppuVar14);
        local_78 = local_168;
        local_74 = local_164;
        local_1e4 = local_17c;
        local_1e8 = local_180;
        if (unaff_r8 != param_3) {
          puVar7 = (undefined4 *)((uint)ppuVar13 | 4);
          local_130 = (undefined1 **)&DAT_8000001d;
          local_1f0 = (undefined1 **)*puVar7;
          local_1ec = (undefined1 **)puVar7[1];
          local_1f8 = (undefined1 **)puVar7[4];
          local_1f4 = (undefined1 **)puVar7[5];
          goto LAB_016cceec;
        }
        ppuVar15 = &local_b8;
        local_1f0 = local_168;
        local_1ec = local_164;
        local_1f4 = local_17c;
        local_1f8 = local_180;
        FUN_016c3a1c(ppuVar15);
        puVar16 = (undefined1 *)0x80000020;
        local_218 = &DAT_8000001d;
        local_214 = (undefined1 **)CONCAT31(local_214._1_3_,4);
        local_1e0 = (undefined1 **)0x0;
        local_1e4 = ppuVar17;
        local_1e8 = ppuVar11;
        local_b8 = (undefined1 *)0x80000020;
        if (ppuVar17 == (undefined1 **)0x0) {
switchD_016cd41c_default:
          local_98 = (undefined1 *)0x80000000;
          ppuVar15 = ppuVar14;
LAB_016cd180:
          FUN_016c3a1c(ppuVar15);
LAB_016cd188:
          pppuVar5 = &local_68;
LAB_016cd190:
          local_150 = *pppuVar5;
          local_14c = pppuVar5[1];
          ppuStack_148 = pppuVar5[2];
          ppuStack_144 = pppuVar5[3];
          ppuStack_140 = pppuVar5[4];
        }
        else {
          local_1e0 = (undefined1 **)&DAT_00000001;
          if ((~*(byte *)ppuVar11 & 0x1f) == 0 || ppuVar17 == (undefined1 **)&DAT_00000001)
          goto switchD_016cd41c_default;
          ppuVar10 = (undefined1 **)(uint)*(byte *)((int)ppuVar11 + 1);
          uVar9 = 2;
          local_1e0 = (undefined1 **)&SUB_00000002;
          if ((char)*(byte *)((int)ppuVar11 + 1) < '\0') {
            switch(ppuVar10) {
            case (undefined1 **)0x81:
              if (&SUB_00000002 < ppuVar17) {
                ppuVar10 = (undefined1 **)(uint)*(byte *)((int)ppuVar11 + 2);
                uVar9 = 3;
                local_1e0 = (undefined1 **)0x3;
                if (0x7fffffff < (uint)(int)(char)*(byte *)((int)ppuVar11 + 2)) goto LAB_016cd2d8;
              }
              break;
            case (undefined1 **)0x82:
              if ((&SUB_00000002 < ppuVar17) &&
                 (local_1e0 = (undefined1 **)0x3, ppuVar17 != (undefined1 **)0x3)) {
                uVar9 = 4;
                local_1e0 = (undefined1 **)&DAT_00000004;
                if (*(byte *)((int)ppuVar11 + 2) != 0) {
                  ppuVar10 = (undefined1 **)
                             (uint)CONCAT11(*(byte *)((int)ppuVar11 + 2),
                                            *(byte *)((int)ppuVar11 + 3));
LAB_016cd558:
                  if (ppuVar10 < &DAT_0000ffff) goto LAB_016cd2d8;
                }
              }
              break;
            case (undefined1 **)0x83:
              if (&SUB_00000002 < ppuVar17) {
                local_1e0 = (undefined1 **)0x3;
                if ((ppuVar17 != (undefined1 **)0x3) &&
                   (local_1e0 = (undefined1 **)&DAT_00000004, &DAT_00000004 < ppuVar17)) {
                  uVar9 = 5;
                  local_1e0 = (undefined1 **)&DAT_00000005;
                  if (*(byte *)((int)ppuVar11 + 2) != 0) {
                    ppuVar10 = (undefined1 **)
                               ((uint)*(byte *)((int)ppuVar11 + 3) << 8 |
                                (uint)*(byte *)((int)ppuVar11 + 2) << 0x10 |
                               (uint)*(byte *)(ppuVar11 + 1));
                    goto LAB_016cd558;
                  }
                }
              }
              break;
            case (undefined1 **)0x84:
              if (&SUB_00000002 < ppuVar17) {
                local_1e0 = (undefined1 **)0x3;
                if (ppuVar17 != (undefined1 **)0x3) {
                  local_1e0 = (undefined1 **)&DAT_00000004;
                  if ((&DAT_00000004 < ppuVar17) &&
                     (local_1e0 = (undefined1 **)&DAT_00000005,
                     ppuVar17 != (undefined1 **)&DAT_00000005)) {
                    uVar9 = 6;
                    local_1e0 = (undefined1 **)&DAT_00000006;
                    if (*(byte *)((int)ppuVar11 + 2) != 0) {
                      ppuVar10 = (undefined1 **)
                                 ((uint)*(byte *)((int)ppuVar11 + 3) << 0x10 |
                                  (uint)*(byte *)((int)ppuVar11 + 2) << 0x18 |
                                  (uint)*(byte *)(ppuVar11 + 1) << 8 |
                                 (uint)*(byte *)((int)ppuVar11 + 5));
                      goto LAB_016cd558;
                    }
                  }
                }
              }
            }
            goto switchD_016cd41c_default;
          }
LAB_016cd2d8:
          ppuVar12 = (undefined1 **)((int)ppuVar10 + uVar9);
          if (((CARRY4(uVar9,(uint)ppuVar10)) || (ppuVar17 < ppuVar12)) ||
             (local_1e0 = ppuVar12, *(byte *)ppuVar11 != 0xa0)) goto switchD_016cd41c_default;
          local_94 = (undefined1 **)((int)ppuVar11 + uVar9);
          local_98 = (undefined1 *)0x8000002d;
          local_70 = (undefined1 **)0x0;
          local_90 = ppuVar10;
          local_78 = local_94;
          local_74 = ppuVar10;
          FUN_016c607c(&local_138,&local_78,2);
          ppuVar17 = local_130;
          ppuVar13 = local_134;
          if (local_138 != (undefined1 *)0x8000002d) {
            local_38 = local_12c;
            ppuStack_34 = local_128;
            ppuStack_30 = local_124;
            ppuStack_2c = local_120;
            ppuStack_28 = local_11c;
            puVar16 = local_138;
LAB_016cd580:
            local_50 = local_38;
            local_4c = ppuStack_34;
            ppuStack_48 = ppuStack_30;
            ppuStack_44 = ppuStack_2c;
            ppuStack_40 = ppuStack_28;
LAB_016cd590:
            local_68 = local_50;
            ppuStack_64 = local_4c;
            ppuStack_60 = ppuStack_48;
            ppuStack_5c = ppuStack_44;
            ppuStack_58 = ppuStack_40;
            goto LAB_016cd180;
          }
          puVar16 = (undefined1 *)0x80000000;
          if (local_130 == (undefined1 **)0x0) goto LAB_016cd580;
          local_138 = (undefined1 *)0x80000000;
          FUN_016c3a1c(&local_138);
          bVar4 = *(byte *)ppuVar13;
          if (bVar4 == 0) {
            ppuVar17 = (undefined1 **)((int)ppuVar17 + -1);
            if (ppuVar17 != (undefined1 **)0x0) {
              bVar4 = *(byte *)((int)ppuVar13 + 1);
              if (-1 < (char)bVar4) goto LAB_016cd580;
              goto LAB_016cd368;
            }
LAB_016cd5a8:
            ppuVar13 = (undefined1 **)0x0;
            puVar16 = (undefined1 *)0x80000020;
            goto LAB_016cd180;
          }
          if ((char)bVar4 < '\0') goto LAB_016cd580;
LAB_016cd368:
          if (ppuVar17 != (undefined1 **)&DAT_00000001) {
            puVar16 = (undefined1 *)0x80000000;
            goto LAB_016cd590;
          }
          if (bVar4 != 2) goto LAB_016cd5a8;
          if (local_70 != local_74) {
            puVar16 = (undefined1 *)0x80000020;
            goto LAB_016cd188;
          }
          FUN_016c3a1c(&local_b8);
          FUN_016c607c(&local_138,&local_1e8,2);
          ppuVar14 = local_130;
          ppuVar13 = local_134;
          if (local_138 != (undefined1 *)0x8000002d) {
            pppuVar5 = &local_12c;
            puVar16 = local_138;
            ppuVar17 = local_130;
            goto LAB_016cd190;
          }
          FUN_016c607c(&local_138,&local_1e8,0x30);
          if (local_138 == (undefined1 *)0x8000002d) {
            puVar16 = &DAT_8000001c;
            if ((local_130 == ppuVar3) &&
               (iVar8 = thunk_FUN_016dd50a(local_134,ppuVar2,ppuVar3), iVar8 == 0)) {
              FUN_016c607c(&local_138,&local_1e8,0x30);
              ppuVar17 = local_130;
              ppuVar11 = local_134;
              if (local_138 == (undefined1 *)0x8000002d) {
                FUN_016c607c(&local_138,&local_1e8,0x30);
                ppuVar10 = local_130;
                ppuVar15 = local_134;
                if (local_138 == (undefined1 *)0x8000002d) {
                  FUN_016c607c(&local_138,&local_1e8,0x30);
                  ppuVar1 = local_130;
                  ppuVar12 = local_134;
                  if (local_138 == (undefined1 *)0x8000002d) {
                    FUN_016c607c(&local_138,&local_1e8,0x30);
                    if (local_138 == (undefined1 *)0x8000002d) {
                      local_124 = local_1f0;
                      local_120 = local_1ec;
                      local_114 = local_1f8;
                      ppuStack_110 = local_1f4;
                      local_118 = ppuVar3;
                      local_11c = ppuVar2;
                      local_c4 = 0;
                      local_cc = 0;
                      local_d4 = 0;
                      local_dc = 0;
                      local_e4 = 0;
                      local_ec = 0;
                      local_f8 = ppuVar1;
                      local_fc = ppuVar12;
                      local_100 = ppuVar10;
                      local_104 = ppuVar15;
                      local_108 = ppuVar17;
                      local_10c = ppuVar11;
                      local_128 = ppuVar14;
                      local_12c = ppuVar13;
                      local_f0 = local_130;
                      local_f4 = local_134;
                      local_138 = (undefined1 *)0x80000000;
                      ppuVar14 = local_1e0;
                      local_134 = param_2;
                      local_130 = param_3;
                      if (local_1e0 != local_1e4) {
                        local_98 = &DAT_8000001d;
                        local_94 = (undefined1 **)CONCAT31(local_94._1_3_,3);
                        FUN_016c7c18(&local_b8,&local_1e8,&local_98,&local_138);
                        ppuVar13 = local_b4;
                        puVar16 = local_b8;
                        if (local_b8 != (undefined1 *)0x8000002d) {
                          local_150 = local_ac;
                          local_14c = ppuStack_a8;
                          ppuStack_148 = ppuStack_a4;
                          ppuStack_144 = ppuStack_a0;
                          ppuStack_140 = ppuStack_9c;
                          ppuVar17 = local_b0;
                          if (((uint)local_138 & 0x7fffffff) != 0) {
                            thunk_FUN_016d3fb4(local_134);
                          }
                          goto LAB_016cd198;
                        }
                        ppuVar14 = local_1e4;
                      }
                      ppuVar2 = local_12c;
                      ppuVar17 = local_130;
                      ppuVar13 = local_134;
                      puVar16 = local_138;
                      ppuVar11 = local_1e0;
                      local_150 = local_128;
                      local_14c = local_124;
                      ppuStack_148 = local_120;
                      ppuStack_144 = local_11c;
                      ppuStack_140 = local_118;
                      FUN_016dd1aa(&local_1d8,&local_114,0x58);
                      local_168 = local_150;
                      local_164 = local_14c;
                      ppuStack_160 = ppuStack_148;
                      ppuStack_15c = ppuStack_144;
                      ppuStack_158 = ppuStack_140;
                      local_180 = local_150;
                      local_17c = local_14c;
                      ppuStack_178 = ppuStack_148;
                      ppuStack_174 = ppuStack_144;
                      ppuStack_170 = ppuStack_140;
                      if (ppuVar11 != ppuVar14) {
                        param_1[2] = local_218;
                        param_1[3] = local_214;
                        param_1[4] = local_210;
                        param_1[5] = uStack_20c;
                        param_1[6] = local_208;
                        param_1[7] = uStack_204;
                        param_1[8] = uStack_200;
                        param_1[9] = uStack_1fc;
                        *param_1 = 1;
                        if (((uint)puVar16 & 0x7fffffff) != 0) {
                          thunk_FUN_016d3fb4(ppuVar13);
                        }
                        return;
                      }
                      param_1[1] = puVar16;
                      param_1[3] = ppuVar17;
                      param_1[2] = ppuVar13;
                      param_1[4] = ppuVar2;
                      param_1[5] = local_150;
                      param_1[6] = local_14c;
                      param_1[7] = ppuStack_148;
                      param_1[8] = ppuStack_144;
                      param_1[9] = ppuStack_140;
                      FUN_016dd1aa(param_1 + 10,&local_1d8,0x58);
                      uVar6 = 0;
                      goto LAB_016cd1c4;
                    }
                    local_150 = local_12c;
                    local_14c = local_128;
                    ppuStack_148 = local_124;
                    ppuStack_144 = local_120;
                    ppuStack_140 = local_11c;
                    puVar16 = local_138;
                    ppuVar13 = local_134;
                    ppuVar17 = local_130;
                  }
                  else {
                    local_150 = local_12c;
                    local_14c = local_128;
                    ppuStack_148 = local_124;
                    ppuStack_144 = local_120;
                    ppuStack_140 = local_11c;
                    puVar16 = local_138;
                    ppuVar13 = local_134;
                    ppuVar17 = local_130;
                  }
                }
                else {
                  local_150 = local_12c;
                  local_14c = local_128;
                  ppuStack_148 = local_124;
                  ppuStack_144 = local_120;
                  ppuStack_140 = local_11c;
                  puVar16 = local_138;
                  ppuVar13 = local_134;
                  ppuVar17 = local_130;
                }
              }
              else {
                local_150 = local_12c;
                local_14c = local_128;
                ppuStack_148 = local_124;
                ppuStack_144 = local_120;
                ppuStack_140 = local_11c;
                puVar16 = local_138;
                ppuVar13 = local_134;
              }
            }
          }
          else {
            local_150 = local_12c;
            local_14c = local_128;
            ppuStack_148 = local_124;
            ppuStack_144 = local_120;
            ppuStack_140 = local_11c;
            puVar16 = local_138;
            ppuVar13 = local_134;
            ppuVar17 = local_130;
          }
        }
LAB_016cd198:
        local_168 = local_150;
        local_164 = local_14c;
        ppuStack_160 = ppuStack_148;
        ppuStack_15c = ppuStack_144;
        ppuStack_158 = ppuStack_140;
        param_1[5] = local_150;
        param_1[6] = local_14c;
        param_1[7] = ppuStack_148;
        param_1[8] = ppuStack_144;
        param_1[9] = ppuStack_140;
        param_1[2] = puVar16;
        param_1[3] = ppuVar13;
        param_1[4] = ppuVar17;
        uVar6 = 1;
LAB_016cd1c4:
        *param_1 = uVar6;
        FUN_016c3a1c(&local_218);
        return;
      }
      local_168 = (undefined1 **)*ppuVar14;
      local_164 = (undefined1 **)ppuVar14[1];
      local_130 = (undefined1 **)&DAT_8000001d;
    }
  }
  local_1f0 = local_168;
  local_1ec = local_164;
  local_1f4 = local_17c;
  local_1f8 = local_180;
  FUN_016c3a1c(&local_b8);
LAB_016cceec:
  param_1[7] = local_1f8;
  param_1[3] = local_1f0;
  param_1[4] = local_1ec;
  param_1[8] = local_1f4;
  param_1[5] = unaff_r8;
  param_1[6] = ppuVar14;
  param_1[9] = unaff_r6;
  param_1[2] = local_130;
  *param_1 = 1;
  return;
}

