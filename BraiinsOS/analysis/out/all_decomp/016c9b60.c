// FUN_016c9b60 @ 016c9b60 size=1820 calls_out=3 calls_in=2
// strings: 

void FUN_016c9b60(undefined4 *param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  uint **ppuVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  uint *unaff_r6;
  undefined1 *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *unaff_r10;
  uint **unaff_r11;
  uint *in_r12;
  uint **ppuVar17;
  bool bVar18;
  byte *local_c8;
  uint *local_c4;
  uint **local_c0;
  uint local_b8;
  int local_b4;
  int local_b0;
  uint *local_ac;
  byte *local_a8;
  uint *local_98;
  uint **local_94;
  undefined4 local_90;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *puStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar14 = &DAT_8000001d;
  local_98 = (uint *)&DAT_8000001d;
  local_94 = (uint **)CONCAT31(local_94._1_3_,0x19);
  if (param_3 != (uint *)0x0) {
    if ((~*param_2 & 0x1f) != 0 && param_3 != (uint *)&DAT_00000001) {
      puVar16 = (uint *)(uint)param_2[1];
      if ((char)param_2[1] < '\0') {
        switch(puVar16) {
        case (uint *)0x81:
          unaff_r6 = &switchD_016ca068::switchdataD_016ca06c;
          if (&SUB_00000002 < param_3) {
            if (0x7fffffff < (uint)(int)(char)param_2[2]) {
              puVar16 = (uint *)(uint)param_2[2];
              uVar9 = 3;
              goto LAB_016c9bdc;
            }
          }
          break;
        case (uint *)0x82:
          unaff_r6 = &switchD_016ca068::switchdataD_016ca06c;
          if ((uint *)0x3 < param_3) {
            if (param_2[2] != 0) {
              puVar16 = (uint *)(uint)CONCAT11(param_2[2],param_2[3]);
              uVar9 = 4;
LAB_016ca134:
              unaff_r6 = (uint *)&DAT_0000ffff;
              if (puVar16 < &DAT_0000ffff) goto LAB_016c9bdc;
            }
          }
          break;
        case (uint *)0x83:
          unaff_r6 = &switchD_016ca068::switchdataD_016ca06c;
          if (&DAT_00000004 < param_3) {
            if (param_2[2] != 0) {
              in_r12 = (uint *)(uint)param_2[4];
              puVar16 = (uint *)((uint)param_2[3] << 8 | (uint)param_2[2] << 0x10 | (uint)in_r12);
              uVar9 = 5;
              goto LAB_016ca134;
            }
          }
          break;
        case (uint *)0x84:
          unaff_r6 = &switchD_016ca068::switchdataD_016ca06c;
          if ((&SUB_00000002 < param_3) && (&DAT_00000005 < param_3)) {
            if (param_2[2] != 0) {
              in_r12 = (uint *)(uint)param_2[4];
              puVar16 = (uint *)((uint)param_2[3] << 0x10 | (uint)param_2[2] << 0x18 |
                                 (int)in_r12 << 8 | (uint)param_2[5]);
              uVar9 = 6;
              goto LAB_016ca134;
            }
          }
        }
      }
      else {
        uVar9 = 2;
LAB_016c9bdc:
        unaff_r6 = (uint *)((int)puVar16 + uVar9);
        if (((!CARRY4(uVar9,(uint)puVar16)) && (unaff_r6 <= param_3)) && (*param_2 == 0x30)) {
          if (puVar16 == (uint *)0x0) {
            uVar9 = 0;
            local_a8 = (byte *)0x0;
            local_ac = (uint *)0x0;
            FUN_016c3a1c(&local_98);
            local_c4 = (uint *)0x0;
LAB_016ca160:
            if ((uVar9 & 0x10000) != 0) {
              *param_1 = 0x80000025;
              return;
            }
            if (local_a8 != (byte *)0x0) {
              *param_1 = &DAT_80000028;
              return;
            }
            if (local_ac != (uint *)0x0) {
              local_94 = local_c0;
              local_90 = 0;
              local_98 = local_ac;
              FUN_016c8d60(&local_48,&local_98);
              local_78 = local_44;
              uStack_74 = local_40;
              uStack_70 = uStack_3c;
              local_68 = puStack_38;
              local_64 = uStack_34;
              local_60 = local_30;
              local_5c = local_2c;
              if (local_48 != -0x7fffffd3) {
                *param_1 = 0x80000012;
                FUN_016c3a1c(&local_48);
                return;
              }
              if (local_44 != 0) {
                param_1[3] = 0;
                param_1[1] = local_ac;
                param_1[2] = local_c0;
                param_1[4] = local_c4;
                param_1[5] = uVar9;
                *param_1 = 0x8000002d;
                return;
              }
            }
            *param_1 = 0x80000022;
            return;
          }
          unaff_r6 = (uint *)(param_2 + uVar9);
          uVar9 = 0;
          puVar14 = (undefined1 *)0x80000000;
          local_a8 = (byte *)0x0;
          puVar15 = (uint *)0x0;
          uVar13 = 0;
          local_ac = (uint *)0x0;
          local_b0 = 0;
          local_b4 = 0;
          local_b8 = 0;
          bVar4 = 0;
LAB_016c9c34:
          bVar12 = (byte)uVar13;
          bVar1 = *(byte *)((int)unaff_r6 + (int)puVar15);
          uVar13 = (uint)bVar1;
          ppuVar3 = &local_98;
          if (((~uVar13 & 0x1f) == 0) || (puVar16 <= (uint *)((int)puVar15 + 1))) goto LAB_016ca09c;
          bVar2 = *(byte *)((int)unaff_r6 + (int)puVar15 + 1);
          puVar5 = (uint *)((int)puVar15 + 2);
          ppuVar17 = (uint **)(uint)bVar2;
          if (-1 < (char)bVar2) goto LAB_016c9db4;
          if ((undefined1 *)0x3 < (undefined1 *)((int)ppuVar17 + -0x81)) goto LAB_016ca09c;
          puVar10 = &switchD_016c9c94::switchdataD_016c9c98;
          puVar7 = (uint *)(&switchD_016c9c94::switchdataD_016c9c98)[(int)ppuVar17 + -0x81];
          switch(ppuVar17) {
          case (uint **)0x81:
            if (puVar16 <= puVar5) goto switchD_016c9dec_caseD_86;
            if (0x7fffffff < (uint)(int)(char)*(byte *)((int)unaff_r6 + (int)puVar5)) {
              ppuVar17 = (uint **)(uint)*(byte *)((int)unaff_r6 + (int)puVar5);
              puVar5 = (uint *)((int)puVar15 + 3);
              goto LAB_016c9db4;
            }
            break;
          case (uint **)0x82:
            if (puVar16 <= puVar5) goto switchD_016c9dec_caseD_86;
            if (((uint *)((int)puVar15 + 3) < puVar16) &&
               (*(byte *)((int)unaff_r6 + (int)puVar5) != 0)) {
              ppuVar17 = (uint **)(uint)CONCAT11(*(byte *)((int)unaff_r6 + (int)puVar5),
                                                 *(byte *)((int)unaff_r6 + (int)puVar15 + 3));
              puVar5 = puVar15 + 1;
              goto LAB_016c9da4;
            }
            break;
          case (uint **)0x83:
            if (puVar5 < puVar16) {
              puVar7 = (uint *)((int)puVar15 + 3);
              if (puVar7 < puVar16) {
                puVar10 = puVar15 + 1;
              }
              if ((puVar7 < puVar16 && puVar10 < puVar16) &&
                 (*(byte *)((int)unaff_r6 + (int)puVar5) != 0)) {
                ppuVar17 = (uint **)((uint)*(byte *)((int)unaff_r6 + (int)puVar7) << 8 |
                                     (uint)*(byte *)((int)unaff_r6 + (int)puVar5) << 0x10 |
                                    (uint)*(byte *)((int)unaff_r6 + (int)puVar10));
                puVar5 = (uint *)((int)puVar15 + 5);
                goto LAB_016c9da4;
              }
            }
            goto switchD_016c9dec_caseD_86;
          case (uint **)0x84:
            if (puVar5 < puVar16) {
              puVar7 = (uint *)((int)puVar15 + 3);
            }
            if (!(puVar5 < puVar16 && puVar7 < puVar16)) goto switchD_016c9dec_caseD_86;
            puVar11 = puVar15 + 1;
            puVar10 = in_r12;
            if (puVar11 < puVar16) {
              puVar10 = (uint *)((int)puVar15 + 5);
            }
            if ((!(puVar11 < puVar16 && puVar10 < puVar16)) ||
               (*(byte *)((int)unaff_r6 + (int)puVar5) == 0)) goto switchD_016c9dec_caseD_86;
            ppuVar17 = (uint **)((uint)*(byte *)((int)unaff_r6 + (int)puVar7) << 0x10 |
                                 (uint)*(byte *)((int)unaff_r6 + (int)puVar5) << 0x18 |
                                 (uint)*(byte *)((int)unaff_r6 + (int)puVar11) << 8 |
                                (uint)*(byte *)((int)unaff_r6 + (int)puVar10));
            puVar5 = (uint *)((int)puVar15 + 6);
LAB_016c9da4:
            if (&DAT_0000ffff <= ppuVar17) break;
LAB_016c9db4:
            puVar15 = (uint *)((int)ppuVar17 + (int)puVar5);
            if ((CARRY4((uint)ppuVar17,(uint)puVar5)) || (puVar16 < puVar15)) break;
            bVar12 = 0;
            in_r12 = unaff_r10;
            if (0x1f < uVar13 - 0x81) goto switchD_016c9dec_caseD_86;
            puVar5 = (uint *)((int)unaff_r6 + (int)puVar5);
            switch(uVar13) {
            case 0x81:
              if (ppuVar17 != (uint **)&DAT_00000001) {
LAB_016ca2f0:
                bVar12 = (byte)local_b8;
                goto switchD_016c9dec_caseD_86;
              }
              uVar8 = 1;
              if ((byte)*puVar5 != 0xff) {
                if ((byte)*puVar5 != 0) goto LAB_016ca2f0;
                uVar8 = 0;
              }
              uVar9 = uVar9 & 0xffffff00 | uVar8;
              local_b8 = uVar8;
              break;
            case 0x82:
              if (ppuVar17 != (uint **)&DAT_00000001) {
LAB_016ca2d8:
                bVar12 = (byte)local_b0;
                goto switchD_016c9dec_caseD_86;
              }
              iVar6 = 1;
              if ((byte)*puVar5 != 0xff) {
                if ((byte)*puVar5 != 0) goto LAB_016ca2d8;
                iVar6 = 0;
              }
              uVar9 = uVar9 & 0xffff00ff | iVar6 << 8;
              local_b0 = iVar6;
              break;
            case 0x83:
              if (local_a8 == (byte *)0x0) {
                local_48 = -0x80000000;
                if (ppuVar17 != (uint **)0x0) {
                  local_a8 = (byte *)((int)puVar5 + 1);
                  uVar8 = (uint)(byte)*puVar5;
                  if ((uVar8 < 8) &&
                     ((local_c4 = (uint *)((int)ppuVar17 + -1), local_c4 != (uint *)0x0 ||
                      (uVar8 == 0)))) {
                    if (ppuVar17 == (uint **)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(0xffffffff,0,&DAT_018af2b8);
                    }
                    if ((uVar8 == 0) ||
                       (((uint)local_a8[(int)((int)ppuVar17 + -2)] & ~(-1 << uVar8)) == 0)) {
                      FUN_016c3a1c(&local_48);
                      unaff_r10 = local_c4;
                      local_c8 = local_a8;
                      break;
                    }
                  }
                }
                FUN_016c3a1c(&local_48);
                puVar14 = (undefined1 *)0x80000000;
                unaff_r11 = ppuVar3;
              }
              else {
                puVar14 = (undefined1 *)0x80000009;
                local_c8 = local_a8;
              }
              unaff_r6 = (uint *)((uint)local_c8 >> 8);
              bVar12 = (byte)local_c8;
              goto switchD_016c9dec_caseD_86;
            case 0x84:
              if (ppuVar17 != (uint **)&DAT_00000001) {
LAB_016ca2e8:
                bVar12 = (byte)local_b4;
                goto switchD_016c9dec_caseD_86;
              }
              iVar6 = 1;
              if ((byte)*puVar5 != 0xff) {
                if ((byte)*puVar5 != 0) goto LAB_016ca2e8;
                iVar6 = 0;
              }
              uVar9 = uVar9 & 0xff00ffff | iVar6 << 0x10;
              local_b4 = iVar6;
              break;
            case 0x85:
              if (ppuVar17 != (uint **)&DAT_00000001) {
LAB_016ca2e0:
                bVar12 = bVar4;
                goto switchD_016c9dec_caseD_86;
              }
              bVar12 = 1;
              if ((byte)*puVar5 != 0xff) {
                if ((byte)*puVar5 != 0) goto LAB_016ca2e0;
                bVar12 = 0;
              }
              bVar4 = bVar12;
              uVar9 = uVar9 & 0xffffff | (uint)bVar4 << 0x18;
              break;
            default:
              goto switchD_016c9dec_caseD_86;
            case 0xa0:
              bVar18 = local_ac != (uint *)0x0;
              local_c0 = ppuVar17;
              local_ac = puVar5;
              if (bVar18) {
                puVar14 = (undefined1 *)0x80000009;
                goto switchD_016c9dec_caseD_86;
              }
            }
            if (puVar15 != puVar16) goto code_r0x016ca034;
            FUN_016c3a1c(&local_98);
            if ((uVar9 & 0x1000000) != 0) {
              *param_1 = 0x80000012;
              return;
            }
            goto LAB_016ca160;
          }
LAB_016ca09c:
          goto switchD_016c9dec_caseD_86;
        }
      }
    }
  }
  local_68 = (uint *)0x80000000;
  ppuVar3 = &local_68;
  in_r12 = unaff_r10;
  bVar12 = 0x19;
switchD_016c9dec_caseD_86:
  FUN_016c3a1c(ppuVar3);
  *(short *)((int)param_1 + 5) = (short)unaff_r6;
  *(char *)((int)param_1 + 7) = (char)((uint)unaff_r6 >> 0x10);
  param_1[2] = in_r12;
  param_1[3] = unaff_r11;
  *(byte *)(param_1 + 1) = bVar12;
  *param_1 = puVar14;
  return;
code_r0x016ca034:
  unaff_r11 = ppuVar17;
  in_r12 = puVar5;
  if (puVar16 <= puVar15) goto code_r0x016ca044;
  goto LAB_016c9c34;
code_r0x016ca044:
  bVar12 = bVar1;
  goto switchD_016c9dec_caseD_86;
}

