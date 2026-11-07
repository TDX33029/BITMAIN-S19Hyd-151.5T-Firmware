// FUN_010bbe40 @ 010bbe40 size=2916 calls_out=10 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010bbe40(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int extraout_r2;
  byte *pbVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  uint local_dc;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  byte *local_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  byte *pbStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int local_2c;
  int local_28;
  
  uVar36 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar13 = (uint *)((int)uVar36 + (int)((ulonglong)uVar36 >> 0x20));
  if ((char)puVar13[4] == '\0') {
    FUN_015f62e4(&local_58);
    *puVar13 = local_58;
    puVar13[1] = (uint)pbStack_54;
    puVar13[2] = uStack_50;
    puVar13[3] = uStack_4c;
    *(undefined1 *)(puVar13 + 4) = 1;
  }
  local_90 = *puVar13;
  local_8c = puVar13[1];
  local_88 = puVar13[2];
  local_84 = puVar13[3];
  *puVar13 = local_90 + 1;
  puVar13[1] = local_8c + (0xfffffffe < local_90);
  local_9c = 0;
  local_98 = 0;
  local_a0 = &DAT_005674cc;
  local_94 = 0;
  if (extraout_r2 != 0) {
    iVar33 = param_2 + extraout_r2 * 0x14;
    do {
      local_7c = *(byte **)(param_2 + 4);
      uStack_78 = *(uint *)(param_2 + 8);
      pbVar12 = local_7c;
      for (uVar23 = uStack_78; uVar23 != 0; uVar23 = uVar23 - 1) {
        if ((*pbVar12 != 9) && (0x5e < *pbVar12 - 0x20)) goto joined_r0x010bbfb8;
        pbVar12 = pbVar12 + 1;
      }
      local_5c = CONCAT22(local_5c._2_2_,1);
      local_64 = 0;
      local_68 = CONCAT31(local_68._1_3_,1);
      local_6c = 0x2c;
      uStack_74 = 0;
      local_80 = 0x2c;
      local_70 = uStack_78;
      local_60 = uStack_78;
      uVar36 = FUN_010bb538(&local_80);
      if ((int)uVar36 != 0) {
        puVar6 = (undefined8 *)thunk_FUN_016d4a50(0x20);
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,0x20);
        }
        *puVar6 = uVar36;
        iVar14 = 3;
        local_58 = local_80;
        pbStack_54 = local_7c;
        uStack_50 = uStack_78;
        uStack_4c = uStack_74;
        uStack_48 = local_70;
        local_44 = local_6c;
        uStack_40 = local_68;
        uStack_3c = local_64;
        uStack_38 = local_60;
        uStack_34 = local_5c;
        uVar23 = 4;
        uVar28 = 1;
        while( true ) {
          uVar37 = FUN_010bb538(&local_58);
          if ((int)uVar37 == 0) break;
          uVar17 = uVar28 + 1;
          if (uVar28 == uVar23) {
            uVar26 = iVar14 - 1U;
            if (iVar14 - 1U < uVar17) {
              uVar26 = uVar17;
            }
            uVar23 = uVar26;
            if (uVar26 < 5) {
              uVar23 = 4;
            }
            if (0xfffffff < uVar26) {
              iVar22 = 0;
              piVar10 = &local_28;
LAB_010bc93c:
              *piVar10 = iVar22;
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(local_28,local_2c);
            }
            iVar22 = uVar23 << 3;
            puVar6 = (undefined8 *)thunk_FUN_016d4ea4(puVar6,iVar22);
            if (puVar6 == (undefined8 *)0x0) {
              local_28 = 4;
              piVar10 = &local_2c;
              goto LAB_010bc93c;
            }
          }
          *(int *)(puVar6 + uVar28) = (int)uVar37;
          *(int *)((int)puVar6 + iVar14 * 4) = (int)((ulonglong)uVar37 >> 0x20);
          iVar14 = iVar14 + 2;
          uVar28 = uVar17;
        }
        puVar19 = puVar6;
        do {
          uVar23 = *(uint *)((int)puVar19 + 4);
          uVar7 = 0;
          if ((int)uVar23 < 0) {
LAB_010bc980:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar7,local_b0);
          }
          uVar7 = *(undefined4 *)puVar19;
          if (uVar23 == 0) {
            local_b0 = 1;
            local_dc = 0;
          }
          else {
            local_b0 = thunk_FUN_016d4a50(uVar23);
            if (local_b0 == 0) {
              uVar7 = 1;
              local_b0 = uVar23;
              goto LAB_010bc980;
            }
            local_dc = uVar23;
          }
          FUN_016dd1aa(local_b0,uVar7,uVar23);
          uVar5 = local_84;
          uVar4 = local_88;
          uVar3 = local_8c;
          uVar26 = local_90;
          uVar17 = local_9c;
          puVar13 = local_a0;
          uVar20 = uVar23 & 7;
          uVar27 = local_84 ^ 0x74656462;
          uVar31 = local_88 ^ 0x79746573;
          uVar35 = local_8c ^ 0x6c796765;
          local_a4 = local_90 ^ 0x6e657261;
          local_a8 = local_84 ^ 0x646f7261;
          uVar15 = local_88 ^ 0x6e646f6d;
          uVar29 = local_8c ^ 0x736f6d65;
          uVar24 = local_90 ^ 0x70736575;
          uVar8 = uVar23 & 0xfffffff8;
          if (uVar8 == 0) {
            uVar8 = 0;
            if (uVar20 < 4) goto LAB_010bc274;
LAB_010bc24c:
            local_b4 = *(uint *)(local_b0 + uVar8);
            uVar34 = 4;
          }
          else {
            uVar34 = 0;
            do {
              uVar18 = local_a8 + uVar29 + (uint)CARRY4(uVar15,uVar24);
              uVar25 = (local_a8 << 0xd | uVar15 >> 0x13) ^ uVar18;
              uVar16 = (uVar15 << 0xd | local_a8 >> 0x13) ^ uVar15 + uVar24;
              puVar21 = (uint *)(local_b0 + uVar34);
              uVar9 = *puVar21;
              uVar34 = uVar34 + 8;
              uVar11 = puVar21[1];
              uVar27 = uVar27 ^ uVar11;
              uVar31 = uVar31 ^ uVar9;
              uVar32 = local_a4 + uVar31;
              uVar30 = uVar35 + uVar27 + (uint)CARRY4(local_a4,uVar31);
              uVar35 = uVar32 + uVar16;
              local_a4 = uVar30 + uVar25 + (uint)CARRY4(uVar32,uVar16);
              local_a8 = local_a4 ^ (uVar25 << 0x11 | uVar16 >> 0xf);
              uVar30 = uVar30 ^ (uVar27 << 0x10 | uVar31 >> 0x10);
              uVar32 = uVar32 ^ (uVar31 << 0x10 | uVar27 >> 0x10);
              uVar29 = uVar30 + uVar15 + uVar24 + (uint)CARRY4(uVar32,uVar18);
              uVar27 = (uVar30 << 0x15 | uVar32 >> 0xb) ^ uVar29;
              uVar15 = uVar35 ^ (uVar16 << 0x11 | uVar25 >> 0xf);
              uVar29 = uVar29 ^ uVar11;
              uVar31 = (uVar32 << 0x15 | uVar30 >> 0xb) ^ uVar32 + uVar18;
              uVar24 = uVar32 + uVar18 ^ uVar9;
            } while (uVar34 < uVar8);
            if (3 < uVar20) goto LAB_010bc24c;
LAB_010bc274:
            local_b4 = 0;
            uVar34 = 0;
          }
          local_ac = 0;
          if ((uVar34 | 1) < uVar20) {
            uVar11 = uVar34 * 8 - 0x20;
            uVar1 = *(ushort *)(local_b0 + uVar8 + uVar34);
            uVar9 = (uint)uVar1 << (uVar34 << 3);
            if (-1 < (int)uVar11) {
              uVar9 = 0;
            }
            local_b4 = uVar9 | local_b4;
            iVar14 = uVar34 * -8;
            uVar34 = uVar34 | 2;
            local_ac = (uint)(uVar1 >> (iVar14 + 0x20U & 0xff));
            if (-1 < (int)uVar11) {
              local_ac = (uint)uVar1 << (uVar11 & 0xff);
            }
            if (uVar20 <= uVar34) goto LAB_010bc2e8;
LAB_010bc320:
            uVar9 = uVar34 * 8 - 0x20;
            bVar2 = *(byte *)(local_b0 + uVar34 + uVar8);
            uVar8 = (uint)bVar2 << (uVar34 << 3);
            if (-1 < (int)uVar9) {
              uVar8 = 0;
            }
            local_b4 = uVar8 | local_b4;
            uVar8 = (uint)(bVar2 >> (uVar34 * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar9) {
              uVar8 = (uint)bVar2 << (uVar9 & 0xff);
            }
            local_ac = uVar8 | local_ac;
LAB_010bc378:
            uVar34 = uVar20 * 8 - 0x20;
            uVar8 = 0xff >> (uVar20 * -8 + 0x20 & 0xff);
            if (-1 < (int)uVar34) {
              uVar8 = 0xff << (uVar34 & 0xff);
            }
            uVar8 = local_ac | uVar8;
            local_ac = 0xff << (uVar20 << 3);
            if (-1 < (int)uVar34) {
              local_ac = 0;
            }
            local_ac = local_b4 | local_ac;
            if (uVar20 == 7) {
              uVar27 = uVar27 ^ uVar8;
              uVar32 = local_a8 + uVar29 + (uint)CARRY4(uVar15,uVar24);
              uVar9 = (local_a8 << 0xd | uVar15 >> 0x13) ^ uVar32;
              uVar31 = uVar31 ^ local_ac;
              uVar11 = (uVar15 << 0xd | local_a8 >> 0x13) ^ uVar15 + uVar24;
              uVar20 = local_a4 + uVar31;
              uVar34 = uVar35 + uVar27 + (uint)CARRY4(local_a4,uVar31);
              local_a4 = uVar34 + uVar9 + (uint)CARRY4(uVar20,uVar11);
              uVar34 = uVar34 ^ (uVar27 << 0x10 | uVar31 >> 0x10);
              uVar35 = uVar20 ^ (uVar31 << 0x10 | uVar27 >> 0x10);
              uVar29 = uVar34 + uVar15 + uVar24 + (uint)CARRY4(uVar35,uVar32);
              local_a8 = local_a4 ^ (uVar9 << 0x11 | uVar11 >> 0xf);
              uVar27 = (uVar34 << 0x15 | uVar35 >> 0xb) ^ uVar29;
              uVar15 = uVar20 + uVar11 ^ (uVar11 << 0x11 | uVar9 >> 0xf);
              uVar31 = (uVar35 << 0x15 | uVar34 >> 0xb) ^ uVar35 + uVar32;
              uVar29 = uVar29 ^ uVar8;
              uVar24 = uVar35 + uVar32 ^ local_ac;
              uVar8 = 0;
              local_ac = 0;
              local_b4 = uVar20 + uVar11;
            }
            else {
              local_b4 = uVar35;
            }
          }
          else {
            if (uVar34 < uVar20) goto LAB_010bc320;
LAB_010bc2e8:
            if (uVar20 != 0) goto LAB_010bc378;
            uVar8 = 0;
            local_ac = 0xff;
            local_b4 = uVar35;
          }
          uVar30 = local_a8 + uVar29 + (uint)CARRY4(uVar15,uVar24);
          puVar19 = puVar19 + 1;
          uVar20 = (local_a8 << 0xd | uVar15 >> 0x13) ^ uVar30;
          uVar8 = uVar8 | (uVar23 + 1) * 0x1000000;
          uVar34 = (uVar15 << 0xd | local_a8 >> 0x13) ^ uVar15 + uVar24;
          uVar27 = uVar8 ^ uVar27;
          uVar31 = local_ac ^ uVar31;
          uVar11 = uVar31 + local_a4;
          uVar29 = uVar27 + local_b4 + (uint)CARRY4(uVar31,local_a4);
          uVar9 = uVar29 + uVar20 + (uint)CARRY4(uVar11,uVar34);
          uVar35 = (uVar31 << 0x10 | uVar27 >> 0x10) ^ uVar11;
          uVar29 = (uVar27 << 0x10 | uVar31 >> 0x10) ^ uVar29;
          uVar31 = uVar29 + uVar15 + uVar24 + (uint)CARRY4(uVar35,uVar30);
          uVar27 = uVar9 ^ (uVar20 << 0x11 | uVar34 >> 0xf);
          local_ac = uVar35 + uVar30 ^ local_ac;
          uVar15 = uVar11 + uVar34 ^ (uVar34 << 0x11 | uVar20 >> 0xf);
          uVar32 = local_ac + uVar15;
          uVar16 = (uVar31 ^ uVar8) + uVar27 + (uint)CARRY4(local_ac,uVar15);
          uVar24 = uVar16 ^ (uVar27 << 0xd | uVar15 >> 0x13);
          uVar20 = uVar32 ^ (uVar15 << 0xd | uVar27 >> 0x13);
          uVar31 = (uVar29 << 0x15 | uVar35 >> 0xb) ^ uVar31;
          uVar9 = uVar9 ^ 0xff;
          uVar8 = (uVar35 << 0x15 | uVar29 >> 0xb) ^ uVar35 + uVar30;
          uVar35 = uVar8 + uVar9;
          uVar29 = uVar31 + uVar11 + uVar34 + (uint)CARRY4(uVar8,uVar9);
          uVar11 = uVar24 + uVar29 + (uint)CARRY4(uVar20,uVar35);
          uVar15 = uVar11 ^ (uVar24 << 0x11 | uVar20 >> 0xf);
          uVar34 = uVar20 + uVar35 ^ (uVar20 << 0x11 | uVar24 >> 0xf);
          uVar29 = (uVar31 << 0x10 | uVar8 >> 0x10) ^ uVar29;
          uVar31 = (uVar8 << 0x10 | uVar31 >> 0x10) ^ uVar35;
          uVar27 = uVar31 + uVar16;
          uVar24 = uVar29 + uVar32 + (uint)CARRY4(uVar31,uVar16);
          uVar30 = uVar15 + uVar24 + (uint)CARRY4(uVar34,uVar27);
          uVar8 = (uVar15 << 0xd | uVar34 >> 0x13) ^ uVar30;
          uVar9 = (uVar34 << 0xd | uVar15 >> 0x13) ^ uVar34 + uVar27;
          uVar24 = (uVar29 << 0x15 | uVar31 >> 0xb) ^ uVar24;
          uVar31 = (uVar31 << 0x15 | uVar29 >> 0xb) ^ uVar27;
          uVar29 = uVar31 + uVar11;
          uVar20 = uVar24 + uVar20 + uVar35 + (uint)CARRY4(uVar31,uVar11);
          uVar32 = uVar8 + uVar20 + (uint)CARRY4(uVar9,uVar29);
          uVar11 = (uVar8 << 0x11 | uVar9 >> 0xf) ^ uVar32;
          uVar20 = (uVar24 << 0x10 | uVar31 >> 0x10) ^ uVar20;
          uVar35 = (uVar31 << 0x10 | uVar24 >> 0x10) ^ uVar29;
          uVar15 = uVar35 + uVar30;
          uVar24 = uVar20 + uVar34 + uVar27 + (uint)CARRY4(uVar35,uVar30);
          uVar31 = (uVar35 << 0x15 | uVar20 >> 0xb) ^ uVar15;
          uVar20 = (uVar20 << 0x15 | uVar35 >> 0xb) ^ uVar24;
          uVar27 = uVar31 + uVar32;
          uVar8 = (uVar9 << 0x11 | uVar8 >> 0xf) ^ uVar9 + uVar29;
          uVar29 = uVar20 + uVar9 + uVar29 + (uint)CARRY4(uVar31,uVar32);
          uVar35 = (uVar11 << 0xd | uVar8 >> 0x13) ^ uVar11 + uVar24 + (uint)CARRY4(uVar8,uVar15);
          uVar8 = (uVar8 << 0xd | uVar11 >> 0x13) ^ uVar8 + uVar15;
          iVar14 = 0;
          uVar35 = ((uVar27 ^ uVar20 >> 0x10) << 0x15 |
                   ((uVar20 << 0x10 | uVar31 >> 0x10) ^ uVar29) >> 0xb) ^
                   (uVar8 << 0x11 | uVar35 >> 0xf) ^ uVar35 + uVar29 + (uint)CARRY4(uVar8,uVar27) ^
                   uVar8 + uVar27;
          uVar8 = uVar35;
          while( true ) {
            uVar8 = uVar17 & uVar8;
            uVar27 = *(uint *)((int)puVar13 + uVar8);
            uVar31 = uVar27 ^ (uVar35 >> 0x19) * 0x1010101;
            for (uVar31 = ~uVar31 & 0x80808080 & uVar31 + 0xfefefeff; uVar31 != 0;
                uVar31 = uVar31 - 1 & uVar31) {
              uVar29 = uVar8 + ((uint)LZCOUNT(uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 |
                                              (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18) >> 3) &
                       uVar17;
              if ((puVar13[uVar29 * -3 + -1] == uVar23) &&
                 (iVar22 = thunk_FUN_016dd50a(puVar13[uVar29 * -3 + -2],local_b0,uVar23),
                 iVar22 == 0)) {
                if (local_dc != 0) {
                  thunk_FUN_016d3fb4(local_b0);
                }
                goto LAB_010bc868;
              }
            }
            if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
            iVar14 = iVar14 + 4;
            uVar8 = uVar8 + iVar14;
          }
          if (local_98 == 0) {
            FUN_010b29b4(&local_a0,uVar5,uVar26,uVar3,uVar4,uVar5);
          }
          if (local_dc != 0x80000000) {
            uVar17 = local_9c & uVar35;
            uVar26 = *(uint *)((int)local_a0 + uVar17) & 0x80808080;
            if (uVar26 == 0) {
              iVar14 = 4;
              do {
                uVar17 = uVar17 + iVar14;
                iVar14 = iVar14 + 4;
                uVar17 = uVar17 & local_9c;
                uVar26 = *(uint *)((int)local_a0 + uVar17) & 0x80808080;
              } while (uVar26 == 0);
            }
            uVar17 = uVar17 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                             (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3) &
                     local_9c;
            uVar26 = (uint)*(char *)((int)local_a0 + uVar17);
            if (-1 < (int)uVar26) {
              uVar17 = *local_a0 & 0x80808080;
              uVar17 = LZCOUNT((*local_a0 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                               (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18);
              uVar26 = (uint)*(byte *)((int)local_a0 + (uVar17 >> 3));
              uVar17 = uVar17 >> 3;
            }
            bVar2 = (byte)(uVar35 >> 0x19);
            *(byte *)((int)local_a0 + uVar17) = bVar2;
            *(byte *)((int)local_a0 + (uVar17 - 4 & local_9c) + 4) = bVar2;
            local_a0[uVar17 * -3 + -3] = local_dc;
            local_a0[uVar17 * -3 + -2] = local_b0;
            local_a0[uVar17 * -3 + -1] = uVar23;
            local_98 = local_98 - (uVar26 & 1);
            local_94 = local_94 + 1;
          }
LAB_010bc868:
        } while (puVar19 != puVar6 + uVar28);
        if ((int)uVar36 != 0) {
          thunk_FUN_016d3fb4(puVar6);
        }
      }
joined_r0x010bbfb8:
      param_2 = param_2 + 0x14;
    } while (param_2 != iVar33);
  }
  *param_1 = local_a0;
  param_1[1] = local_9c;
  param_1[2] = local_98;
  param_1[3] = local_94;
  param_1[4] = local_90;
  param_1[5] = local_8c;
  param_1[6] = local_88;
  param_1[7] = local_84;
  return;
}

