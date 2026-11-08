// FUN_01409738 @ 01409738 size=3788 calls_out=22 calls_in=0
// strings: a Display implementation returned an error unexpectedly

void FUN_01409738(int param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  int **ppiVar13;
  undefined4 uVar14;
  undefined *puVar15;
  int iVar16;
  uint uVar17;
  undefined1 uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int **ppiVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  undefined *puVar28;
  uint uVar29;
  uint uVar30;
  undefined *puVar31;
  uint uVar32;
  uint uVar33;
  bool bVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint local_158;
  int **local_148;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_124;
  int *local_120;
  uint local_11c;
  ushort local_118;
  ushort local_116;
  uint local_114;
  uint local_10c;
  uint local_108;
  char local_100;
  undefined2 local_ec;
  undefined1 local_ea;
  int *local_e8;
  int *local_e4;
  uint local_e0;
  int *local_dc;
  undefined1 local_d8;
  undefined2 local_d7;
  undefined1 local_d5;
  int *local_d0;
  int *local_cc;
  uint local_c8;
  int *local_c4;
  uint local_c0;
  int *local_b8;
  int *local_b4;
  undefined1 *local_b0;
  int *local_ac;
  int *local_a8;
  uint local_a4;
  int *local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined1 local_74;
  int *local_70;
  int *local_6c;
  uint local_68;
  int *local_64;
  undefined4 local_60;
  undefined1 auStack_29 [5];
  
  local_b4 = (int *)&DAT_018a36f4;
  local_b8 = &local_134;
  local_12c = 0;
  local_134 = 0;
  local_ac = (int *)0x0;
  local_130 = 1;
  local_b0 = &DAT_60000020;
  iVar7 = FUN_010a3c98(param_2 + 0x10,&local_b8);
  uVar6 = local_130;
  iVar5 = local_134;
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,auStack_29,
                 &DAT_018a370c,&DAT_018af130);
  }
  local_b0 = (undefined1 *)0x0;
  local_b8 = (int *)0x0;
  local_a8 = (int *)0x0;
  FUN_016b18bc(&local_134,&local_b8,local_130,local_12c);
  if (local_134 == 2) goto LAB_0140a4ec;
  if (*(int *)(param_1 + 8) != 0) {
    local_158 = local_114;
    iVar7 = *(int *)(param_1 + 4);
    iVar16 = iVar7 + *(int *)(param_1 + 8) * 0x48;
    puVar31 = &DAT_018aedb8;
    if (local_100 != '\0') {
      if (local_108 < local_10c) goto LAB_014098a0;
      if (local_10c != 0) {
        if (local_10c < local_11c) {
          if (-0x41 < *(char *)((int)local_120 + local_10c)) goto LAB_0140987c;
        }
        else if (local_10c == local_11c) goto LAB_0140987c;
        goto LAB_014098a0;
      }
LAB_0140987c:
      if (local_108 != 0) {
        if (local_11c <= local_108) {
          if (local_108 != local_11c) goto LAB_014098a0;
          goto LAB_014098ac;
        }
        if (-0x41 < *(char *)((int)local_120 + local_108)) goto LAB_014098ac;
LAB_014098a0:
        piVar19 = local_120;
        uVar23 = local_11c;
        goto LAB_01409a34;
      }
LAB_014098ac:
      if (*(char *)(iVar16 + -0x14) != '\0') {
        iVar7 = local_108 - local_10c;
        iVar8 = (int)local_120 + local_10c;
        goto LAB_014098c4;
      }
LAB_01409a78:
      local_64 = (int *)0x0;
      local_68 = 0;
      local_6c = (int *)0x10;
      local_70 = (int *)0x0;
      FUN_01442b00(&local_b8,param_2,&local_70);
      if ((char)local_a8 != '\x02') {
        (*(code *)local_b8[4])(&local_ac,local_b4,local_b0);
      }
      local_64 = (int *)0x0;
      local_68 = 0;
      local_6c = (int *)0x1e;
      local_70 = (int *)0x0;
      FUN_01442b00(&local_b8,param_2,&local_70);
      if ((char)local_a8 != '\x02') {
        (*(code *)local_b8[4])(&local_ac,local_b4,local_b0);
      }
      local_6c = (int *)CONCAT13(local_6c._3_1_,0x320000);
      local_6c = (int *)CONCAT22(local_6c._2_2_,0x6569);
      local_70 = (int *)0x6b6f6f63;
      local_148 = &local_70;
      uVar23 = FUN_010a0130(local_148,7);
      ppiVar24 = (int **)(uVar23 & 0xff);
      if (ppiVar24 == (int **)&DAT_00000051) {
        if ((char)local_70 != '\0') {
          bVar34 = ((uint)local_70 >> 8 & 0xff) != 0;
          uVar23 = 0;
          if (bVar34) {
            uVar23 = (uint)local_70 >> 0x10 & 0xff;
          }
          if (bVar34 && uVar23 != 0) {
            bVar34 = (uint)local_70 >> 0x18 != 0;
            uVar23 = 0;
            if (bVar34) {
              uVar23 = (uint)local_6c & 0xff;
            }
            if (bVar34 && uVar23 != 0) {
              bVar34 = ((uint)local_6c >> 8 & 0xff) != 0;
              uVar23 = 0;
              if (bVar34) {
                uVar23 = (uint)local_6c >> 0x10 & 0xff;
              }
              if (bVar34 && uVar23 != 0) goto LAB_01409ba4;
            }
          }
        }
      }
      else {
        local_148 = ppiVar24;
LAB_01409ba4:
        uVar23 = param_2[10];
        if (uVar23 != 0) {
          if (*param_2 == 2 && param_2[1] == 0) {
            local_98 = param_2[2];
            local_94 = param_2[3];
            local_90 = param_2[4];
            local_8c = param_2[5];
            local_9c = local_8c ^ 0x74656462;
            local_a4 = local_8c ^ 0x646f7261;
            local_ac = (int *)(local_94 ^ 0x6c796765);
            local_84 = 0;
            local_b0 = (undefined1 *)(local_98 ^ 0x6e657261);
            local_80 = 0;
            local_b4 = (int *)(local_94 ^ 0x736f6d65);
            local_a0 = (int *)(local_90 ^ 0x79746573);
            local_a8 = (int *)(local_90 ^ 0x6e646f6d);
            local_d0 = (int *)(uint)(ppiVar24 == (int **)&DAT_00000051);
            local_b8 = (int *)(local_98 ^ 0x70736575);
            local_7c = 0;
            local_88 = 0;
            FUN_010b4a1c(&local_b8,&local_d0,4);
            if (ppiVar24 == (int **)&DAT_00000051) {
              uVar14 = 7;
              ppiVar13 = local_148;
            }
            else {
              ppiVar13 = &local_d0;
              uVar14 = 4;
              local_d0 = (int *)((uint)local_148 & 0xff);
            }
            FUN_010b4a1c(&local_b8,ppiVar13,uVar14);
            puVar31 = (undefined *)
                      ((int)local_b4 + CARRY4((uint)local_a8,(uint)local_b8) + local_a4);
            uVar25 = (local_a4 << 0xd | (uint)local_a8 >> 0x13) ^ (uint)puVar31;
            uVar21 = ((int)local_a8 << 0xd | local_a4 >> 0x13) ^
                     (uint)((int)local_a8 + (int)local_b8);
            uVar30 = local_84 | local_80 << 0x18;
            uVar22 = uVar30 ^ local_9c;
            uVar9 = local_88 ^ (uint)local_a0;
            uVar20 = uVar9 + (int)local_b0;
            puVar15 = (undefined *)((int)local_ac + CARRY4(uVar9,(uint)local_b0) + uVar22);
            uVar10 = (uVar9 << 0x10 | uVar22 >> 0x10) ^ uVar20;
            puVar28 = puVar15 + CARRY4(uVar20,uVar21) + uVar25;
            uVar32 = (uint)puVar28 ^ (uVar25 << 0x11 | uVar21 >> 0xf);
            uVar17 = (uVar22 << 0x10 | uVar9 >> 0x10) ^ (uint)puVar15;
            uVar22 = uVar20 + uVar21 ^ (uVar21 << 0x11 | uVar25 >> 0xf);
            puVar15 = (undefined *)((int)local_a8 + (int)local_b8) +
                      CARRY4(uVar10,(uint)puVar31) + uVar17;
            uVar9 = (uint)(puVar31 + uVar10) ^ local_88;
            uVar33 = uVar9 + uVar22;
            uVar29 = ((uint)puVar15 ^ uVar30) + uVar32 + (uint)CARRY4(uVar9,uVar22);
            uVar30 = uVar29 ^ (uVar32 << 0xd | uVar22 >> 0x13);
            uVar22 = uVar33 ^ (uVar22 << 0xd | uVar32 >> 0x13);
            uVar32 = (uVar17 << 0x15 | uVar10 >> 0xb) ^ (uint)puVar15;
            uVar26 = (uint)puVar28 ^ 0xff;
            uVar9 = (uVar10 << 0x15 | uVar17 >> 0xb) ^ (uint)(puVar31 + uVar10);
            uVar25 = uVar9 + uVar26;
            uVar21 = uVar32 + uVar20 + uVar21 + (uint)CARRY4(uVar9,uVar26);
            uVar26 = uVar30 + uVar21 + (uint)CARRY4(uVar22,uVar25);
            uVar17 = uVar26 ^ (uVar30 << 0x11 | uVar22 >> 0xf);
            uVar10 = uVar22 + uVar25 ^ (uVar22 << 0x11 | uVar30 >> 0xf);
            uVar21 = (uVar32 << 0x10 | uVar9 >> 0x10) ^ uVar21;
            uVar30 = (uVar9 << 0x10 | uVar32 >> 0x10) ^ uVar25;
            uVar32 = uVar30 + uVar29;
            uVar20 = uVar21 + uVar33 + (uint)CARRY4(uVar30,uVar29);
            uVar33 = uVar17 + uVar20 + (uint)CARRY4(uVar10,uVar32);
            uVar9 = (uVar17 << 0xd | uVar10 >> 0x13) ^ uVar33;
            uVar17 = (uVar10 << 0xd | uVar17 >> 0x13) ^ uVar10 + uVar32;
            uVar20 = (uVar21 << 0x15 | uVar30 >> 0xb) ^ uVar20;
            uVar21 = (uVar30 << 0x15 | uVar21 >> 0xb) ^ uVar32;
            uVar30 = uVar21 + uVar26;
            uVar26 = uVar20 + uVar22 + uVar25 + (uint)CARRY4(uVar21,uVar26);
            uVar29 = uVar9 + uVar26 + (uint)CARRY4(uVar17,uVar30);
            uVar26 = (uVar20 << 0x10 | uVar21 >> 0x10) ^ uVar26;
            uVar22 = (uVar21 << 0x10 | uVar20 >> 0x10) ^ uVar30;
            uVar21 = uVar22 + uVar33;
            uVar25 = (uVar9 << 0x11 | uVar17 >> 0xf) ^ uVar29;
            uVar10 = uVar26 + uVar10 + uVar32 + (uint)CARRY4(uVar22,uVar33);
            uVar20 = (uVar22 << 0x15 | uVar26 >> 0xb) ^ uVar21;
            uVar22 = (uVar26 << 0x15 | uVar22 >> 0xb) ^ uVar10;
            uVar9 = (uVar17 << 0x11 | uVar9 >> 0xf) ^ uVar17 + uVar30;
            uVar17 = uVar22 + uVar17 + uVar30 + (uint)CARRY4(uVar20,uVar29);
            uVar10 = (uVar25 << 0xd | uVar9 >> 0x13) ^ uVar25 + uVar10 + (uint)CARRY4(uVar9,uVar21);
            uVar9 = (uVar9 << 0xd | uVar25 >> 0x13) ^ uVar9 + uVar21;
            uVar9 = ((uVar22 << 0x10 | uVar20 >> 0x10) ^ uVar17) >> 0xb ^ uVar10 >> 0xf ^
                    uVar10 + uVar17 + (uint)CARRY4(uVar9,uVar20 + uVar29) ^ uVar9 + uVar20 + uVar29;
          }
          else {
            if (ppiVar24 == (int **)&DAT_00000051) {
              iVar7 = 0x1b3;
              uVar9 = ((((((*(byte *)local_148 ^ 0x47985764) * 0x1b3 ^
                          (uint)*(byte *)((int)local_148 + 1)) * 0x1b3 ^
                         (uint)*(byte *)((int)local_148 + 2)) * 0x1b3 ^
                        (uint)*(byte *)((int)local_148 + 3)) * 0x1b3 ^
                       (uint)*(byte *)(local_148 + 1)) * 0x1b3 ^ (uint)*(byte *)((int)local_148 + 5)
                      ) * 0x1b3 ^ (uint)*(byte *)((int)local_148 + 6);
            }
            else {
              uVar9 = (ppiVar24 == (int **)&DAT_00000051 ^ 0x84222325) * 0x5635bc91 ^
                      (uint)local_148 & 0xff;
              iVar7 = -0x436f;
            }
            uVar9 = uVar9 * iVar7;
          }
          uVar2 = *(ushort *)(param_2 + 0xe);
          uVar22 = (uint)uVar2;
          uVar9 = uVar9 & 0x7fff;
          iVar7 = param_2[6];
          uVar10 = param_2[7];
          iVar8 = param_2[9];
          if (ppiVar24 != (int **)&DAT_00000051) {
            uVar20 = 0;
            uVar17 = uVar22 & uVar9;
LAB_0140a078:
            do {
              uVar21 = uVar17;
              uVar17 = 0;
            } while (uVar10 <= uVar21);
            puVar11 = (ushort *)(iVar7 + uVar21 * 4);
            uVar17 = (uint)*puVar11;
            if ((uVar17 == 0xffff) ||
               (uVar3 = puVar11[1], (uVar21 - (uVar3 & uVar2) & uVar22) < uVar20))
            goto LAB_0140a184;
            if (uVar3 == uVar9) {
              if (uVar23 <= uVar17) goto LAB_0140a5d8;
              iVar12 = uVar17 * 0x34 + iVar8;
              piVar19 = (int *)(iVar12 + 0x20);
              iVar27 = *piVar19;
              if (iVar27 == 0) {
                piVar19 = (int *)(uint)*(byte *)(iVar12 + 0x24);
              }
              if (iVar27 == 0 && piVar19 == (int *)((uint)local_148 & 0xff)) goto LAB_0140a0dc;
            }
            uVar20 = uVar20 + 1;
            uVar17 = uVar21 + 1;
            goto LAB_0140a078;
          }
          uVar20 = 0;
          uVar17 = uVar22 & uVar9;
LAB_01409fcc:
          do {
            uVar21 = uVar17;
            uVar17 = 0;
          } while (uVar10 <= uVar21);
          puVar11 = (ushort *)(iVar7 + uVar21 * 4);
          uVar17 = (uint)*puVar11;
          if ((uVar17 == 0xffff) ||
             (uVar3 = puVar11[1], (uVar21 - (uVar3 & uVar2) & uVar22) < uVar20)) goto LAB_0140a184;
          if (uVar3 == uVar9) {
            if (uVar23 <= uVar17) {
LAB_0140a5d8:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar17,uVar23,&DAT_018a6bf0);
            }
            iVar12 = uVar17 * 0x34 + iVar8;
            if (((*(int *)(iVar12 + 0x20) != 0) && (*(int *)(iVar12 + 0x28) == 7)) &&
               (iVar12 = thunk_FUN_016dd50a(*(undefined4 *)(iVar12 + 0x24),local_148,7), iVar12 == 0
               )) goto LAB_0140a0dc;
          }
          uVar20 = uVar20 + 1;
          uVar17 = uVar21 + 1;
          goto LAB_01409fcc;
        }
      }
LAB_0140a184:
      local_c0 = CONCAT31(local_c0._1_3_,2);
      goto LAB_0140a198;
    }
    if (*(char *)(iVar16 + -0x14) != '\0') {
      iVar8 = 0;
LAB_014098c4:
      piVar19 = *(int **)(iVar16 + -0x34);
      uVar23 = *(uint *)(iVar16 + -0x30);
      local_10c = *(uint *)(iVar16 + -0x20);
      local_108 = *(uint *)(iVar16 + -0x1c);
      if (local_108 < local_10c) goto LAB_01409a34;
      if (local_10c != 0) {
        if (local_10c < uVar23) {
          if (-0x41 < *(char *)((int)piVar19 + local_10c)) goto LAB_01409908;
        }
        else if (local_10c == uVar23) goto LAB_01409908;
        goto LAB_01409a34;
      }
LAB_01409908:
      if (local_108 == 0) {
LAB_01409934:
        if (((iVar8 == 0) || (iVar7 != local_108 - local_10c)) ||
           (iVar7 = thunk_FUN_016dd50a(iVar8,(int)piVar19 + local_10c), iVar7 != 0))
        goto LAB_01409a78;
        goto LAB_0140995c;
      }
      if (local_108 < uVar23) {
        if (-0x41 < *(char *)((int)piVar19 + local_108)) goto LAB_01409934;
      }
      else if (local_108 == uVar23) goto LAB_01409934;
LAB_01409a34:
      local_11c = uVar23;
      local_158 = local_108;
      goto LAB_01409a38;
    }
LAB_0140995c:
    if ((local_118 & 1) != 0) {
      uVar35 = CONCAT44((uint)local_116,1);
      uVar4 = CONCAT44((uint)local_116,1);
      if (*(short *)(iVar16 + -0x2c) == 1) {
LAB_01409974:
        uVar9 = (uint)(uVar4 >> 0x20);
        uVar23 = 1;
        uVar36 = CONCAT44((uint)*(ushort *)(iVar16 + -0x2a),1);
        if ((uVar4 & 1) == 0) goto LAB_01409a6c;
LAB_01409984:
        if (((uVar36 & 1) == 0) || ((uVar9 & 0xffff) != ((uint)(uVar36 >> 0x20) & 0xffff)))
        goto LAB_01409a78;
      }
      else {
LAB_014099f8:
        uVar9 = (uint)(uVar35 >> 0x20);
        local_108 = *(uint *)(iVar16 + -0x28);
        piVar19 = *(int **)(iVar16 + -0x34);
        if (local_108 != 0) {
          uVar23 = *(uint *)(iVar16 + -0x30);
          if (local_108 < uVar23) {
            if (*(char *)((int)piVar19 + local_108) < -0x40) goto LAB_01409a24;
          }
          else if (local_108 != uVar23) {
LAB_01409a24:
            local_10c = 0;
            puVar31 = &DAT_018af070;
            goto LAB_01409a34;
          }
        }
        uVar36 = FUN_016b3b14(piVar19);
        uVar23 = (uint)uVar36;
        if ((uVar35 & 1) != 0) goto LAB_01409984;
LAB_01409a6c:
        if ((uVar23 & 0xffff) != 0) goto LAB_01409a78;
      }
      goto LAB_0140a234;
    }
    if (local_114 == 0) {
LAB_014099d8:
      uVar35 = FUN_016b3b14(local_120);
      uVar4 = uVar35;
      if (*(short *)(iVar16 + -0x2c) == 1) goto LAB_01409974;
      goto LAB_014099f8;
    }
    if (local_114 < local_11c) {
      if (-0x41 < *(char *)((int)local_120 + local_114)) goto LAB_014099d8;
    }
    else if (local_114 == local_11c) goto LAB_014099d8;
    goto LAB_0140a274;
  }
  goto LAB_0140a4dc;
LAB_0140a0dc:
  if (uVar23 <= uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar17,uVar23,&DAT_018a63c4);
  }
  piVar19 = (int *)(iVar8 + uVar17 * 0x34);
  if (*piVar19 != 0) {
    FUN_01442274(param_2,piVar19[1]);
  }
  FUN_014428b8(&local_b8,param_2,uVar21,uVar17);
  local_d0 = local_ac;
  local_cc = local_a8;
  local_c8 = local_a4;
  local_c4 = local_a0;
  local_c0 = local_9c;
  if (local_98 != 0) {
    (**(code **)(local_98 + 0x10))(&local_8c,local_94,local_90);
  }
  if ((char)local_c0 != '\x02') {
    (*(code *)local_d0[4])(&local_c4,local_cc,local_c8);
  }
LAB_0140a198:
  local_64 = (int *)0x0;
  local_68 = 0;
  local_6c = (int *)0x33;
  local_70 = (int *)0x0;
  FUN_01442b00(&local_b8,param_2,&local_70);
  if ((char)local_a8 != '\x02') {
    (*(code *)local_b8[4])(&local_ac,local_b4,local_b0);
  }
  local_64 = (int *)0x0;
  local_68 = 0;
  local_6c = (int *)0x4c;
  local_70 = (int *)0x0;
  FUN_01442b00(&local_b8,param_2,&local_70);
  if ((char)local_a8 != '\x02') {
    (*(code *)local_b8[4])(&local_ac,local_b4,local_b0);
  }
LAB_0140a234:
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (local_114 != 0) {
      if (local_114 < local_11c) {
        if (-0x41 < *(char *)((int)local_120 + local_114)) goto LAB_0140a28c;
      }
      else if (local_114 == local_11c) {
LAB_0140a28c:
        if (((local_114 != 4) || (*local_120 != 0x70747468)) ||
           (local_158 = *(uint *)(iVar16 + -0x28), local_158 == 0)) goto LAB_0140a2ac;
        local_11c = *(uint *)(iVar16 + -0x30);
        piVar19 = *(int **)(iVar16 + -0x34);
        if (local_158 < local_11c) {
          if (-0x41 < *(char *)((int)piVar19 + local_158)) goto LAB_0140a54c;
        }
        else if (local_158 == local_11c) {
LAB_0140a54c:
          if ((local_158 == 5) && (iVar7 = thunk_FUN_016dd50a(piVar19,&DAT_0041860c,5), iVar7 == 0))
          goto LAB_0140a4dc;
          goto LAB_0140a2ac;
        }
        local_10c = 0;
        puVar31 = &DAT_018af070;
        goto LAB_01409a38;
      }
LAB_0140a274:
      local_10c = 0;
      puVar31 = &DAT_018af070;
      piVar19 = local_120;
LAB_01409a38:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(piVar19,local_11c,local_10c,local_158,puVar31);
    }
LAB_0140a2ac:
    piVar19 = *(int **)(iVar16 + -0x30);
    uVar14 = *(undefined4 *)(iVar16 + -0x34);
    if (piVar19 == (int *)0x0) {
      uVar23 = 1;
    }
    else {
      uVar23 = thunk_FUN_016d4a50(piVar19);
      if (uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,piVar19);
      }
    }
    FUN_016dd1aa(uVar23,uVar14,piVar19);
    local_98 = *(uint *)(iVar16 + -0x28);
    local_94 = *(uint *)(iVar16 + -0x24);
    local_90 = *(uint *)(iVar16 + -0x20);
    local_8c = *(uint *)(iVar16 + -0x1c);
    local_84 = *(uint *)(iVar16 + -0x14);
    local_80 = *(int *)(iVar16 + -0x10);
    local_7c = *(undefined4 *)(iVar16 + -0xc);
    uStack_78 = *(undefined4 *)(iVar16 + -8);
    local_74 = *(undefined1 *)(iVar16 + -4);
    local_9c = *(uint *)(iVar16 + -0x2c);
    local_b8 = *(int **)(iVar16 + -0x48);
    local_b4 = *(int **)(iVar16 + -0x44);
    local_b0 = *(undefined1 **)(iVar16 + -0x40);
    local_ac = *(int **)(iVar16 + -0x3c);
    local_88 = *(uint *)(iVar16 + -0x18);
    local_a8 = piVar19;
    local_a4 = uVar23;
    local_a0 = piVar19;
    FUN_016b30fc();
    FUN_016b2eac(&local_b8);
    FUN_016b2cb0(&local_b8);
    if (local_a0 == (int *)0x0) {
      local_c8 = 0;
      local_cc = (int *)0x1;
      local_d0 = (int *)0x0;
      FUN_00f5ef18(&local_70,&local_d0);
    }
    else {
      piVar19 = (int *)0x0;
      do {
        bVar1 = *(byte *)(local_a4 + (int)piVar19);
        if (bVar1 < 0x20) {
          if (bVar1 != 9) goto LAB_0140a3ac;
        }
        else if (bVar1 == 0x7f) {
LAB_0140a3ac:
          bVar34 = true;
          uVar18 = 2;
          goto LAB_0140a414;
        }
        piVar19 = (int *)((int)piVar19 + 1);
      } while (local_a0 != piVar19);
      FUN_00f5eea8(&local_70);
    }
    local_ea = local_60._3_1_;
    uVar18 = 0;
    bVar34 = false;
    local_d0 = local_70;
    local_cc = local_6c;
    local_c8 = local_68;
    local_c4 = local_64;
    local_ec = local_60._1_2_;
LAB_0140a414:
    if (local_a8 != (int *)0x0) {
      thunk_FUN_016d3fb4(local_a4);
    }
    if (!bVar34) {
      local_e0 = local_c8;
      local_e8 = local_d0;
      local_dc = local_c4;
      local_e4 = local_cc;
      local_d7 = local_ec;
      local_d5 = local_ea;
      local_64 = (int *)0x0;
      local_68 = 0;
      local_6c = (int *)0x37;
      local_70 = (int *)0x0;
      local_d8 = uVar18;
      FUN_01407a10(&local_b8,param_2,&local_70,&local_e8);
      if ((char)local_a8 == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0040929f,0x17,auStack_29,&DAT_018a62e4,&DAT_018a6184);
      }
      local_70 = local_b8;
      local_6c = local_b4;
      local_68 = (uint)local_b0;
      local_64 = local_ac;
      local_60 = local_a8;
      if ((char)local_a8 != '\x02') {
        (*(code *)local_b8[4])(&local_64,local_b4,local_b0);
      }
    }
  }
LAB_0140a4dc:
  if (local_124 != 0) {
    thunk_FUN_016d3fb4(local_120);
  }
LAB_0140a4ec:
  if (iVar5 != 0) {
    thunk_FUN_016d3fb4(uVar6);
  }
  return;
}

