// FUN_01492fb0 @ 01492fb0 size=4756 calls_out=24 calls_in=2
// strings: a Display implementation returned an error unexpectedly

void FUN_01492fb0(int param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  undefined2 *puVar14;
  int **ppiVar15;
  undefined4 uVar16;
  undefined *puVar17;
  int iVar18;
  uint uVar19;
  undefined1 uVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined *puVar29;
  uint uVar30;
  uint uVar31;
  undefined *puVar32;
  int **ppiVar33;
  uint uVar34;
  uint uVar35;
  bool bVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint local_178;
  uint local_170;
  int **local_160;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  int local_13c;
  int *local_138;
  uint local_134;
  ushort local_130;
  ushort local_12e;
  uint local_12c;
  uint local_124;
  uint local_120;
  char local_118;
  undefined2 local_104;
  undefined1 local_102;
  int *local_100;
  int *piStack_fc;
  uint uStack_f8;
  int *piStack_f4;
  int *local_f0;
  int *piStack_ec;
  uint uStack_e8;
  int *piStack_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined1 local_da;
  int *local_d8;
  int *piStack_d4;
  uint uStack_d0;
  int *piStack_cc;
  int *local_c8;
  int *local_c4;
  uint local_c0;
  int *local_bc;
  uint local_b8;
  int *local_b0;
  int *local_ac;
  undefined1 *local_a8;
  int *local_a4;
  undefined4 local_a0;
  uint local_9c;
  int *local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  int *local_68;
  int *local_64;
  uint local_60;
  int *local_5c;
  undefined2 local_57;
  undefined1 local_55;
  
  local_ac = (int *)&DAT_018a5048;
  local_b0 = &local_14c;
  local_144 = 0;
  local_14c = 0;
  local_a4 = (int *)0x0;
  local_148 = 1;
  local_a8 = &DAT_60000020;
  iVar9 = FUN_010a3c98(param_2 + 0x10,&local_b0);
  uVar7 = local_148;
  iVar6 = local_14c;
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_68,
                 &DAT_018a5060,&DAT_018af130);
  }
  local_a8 = (undefined1 *)0x0;
  local_b0 = (int *)0x0;
  local_a0 = (int *)0x0;
  FUN_016b18bc(&local_14c,&local_b0,local_148,local_144);
  if (local_14c == 2) goto LAB_014940d0;
  if (*(int *)(param_1 + 8) == 0) goto LAB_014940c0;
  local_170 = local_12c;
  iVar9 = *(int *)(param_1 + 4);
  iVar18 = iVar9 + *(int *)(param_1 + 8) * 0x48;
  puVar32 = &DAT_018aedb8;
  if (local_118 != '\0') {
    if (local_120 < local_124) goto LAB_0149311c;
    if (local_124 != 0) {
      if (local_124 < local_134) {
        if (-0x41 < *(char *)((int)local_138 + local_124)) goto LAB_014930f8;
      }
      else if (local_124 == local_134) goto LAB_014930f8;
      goto LAB_0149311c;
    }
LAB_014930f8:
    if (local_120 != 0) {
      if (local_134 <= local_120) {
        if (local_120 != local_134) goto LAB_0149311c;
        goto LAB_01493128;
      }
      if (-0x41 < *(char *)((int)local_138 + local_120)) goto LAB_01493128;
LAB_0149311c:
      piVar21 = local_138;
      uVar26 = local_134;
      goto LAB_014932b0;
    }
LAB_01493128:
    if (*(char *)(iVar18 + -0x14) != '\0') {
      iVar9 = local_120 - local_124;
      iVar10 = (int)local_138 + local_124;
      goto LAB_01493140;
    }
LAB_014932f8:
    local_5c = (int *)0x0;
    local_60 = 0;
    local_64 = (int *)0x10;
    local_68 = (int *)0x0;
    FUN_014c9140(&local_b0,param_2,&local_68);
    if ((char)local_a0 != '\x02') {
      (*(code *)local_b0[4])(&local_a4,local_ac,local_a8);
    }
    local_5c = (int *)0x0;
    local_60 = 0;
    local_64 = (int *)0x1e;
    local_68 = (int *)0x0;
    FUN_014c9140(&local_b0,param_2,&local_68);
    if ((char)local_a0 != '\x02') {
      (*(code *)local_b0[4])(&local_a4,local_ac,local_a8);
    }
    local_64 = (int *)CONCAT13(local_64._3_1_,0x320000);
    local_64 = (int *)CONCAT22(local_64._2_2_,0x6569);
    local_68 = (int *)0x6b6f6f63;
    local_160 = &local_68;
    uVar26 = FUN_010a0130(local_160,7);
    ppiVar33 = (int **)(uVar26 & 0xff);
    if (ppiVar33 == (int **)&DAT_00000051) {
      if ((char)local_68 != '\0') {
        bVar36 = ((uint)local_68 >> 8 & 0xff) != 0;
        uVar26 = 0;
        if (bVar36) {
          uVar26 = (uint)local_68 >> 0x10 & 0xff;
        }
        if (bVar36 && uVar26 != 0) {
          bVar36 = (uint)local_68 >> 0x18 != 0;
          uVar26 = 0;
          if (bVar36) {
            uVar26 = (uint)local_64 & 0xff;
          }
          if (bVar36 && uVar26 != 0) {
            bVar36 = ((uint)local_64 >> 8 & 0xff) != 0;
            uVar26 = 0;
            if (bVar36) {
              uVar26 = (uint)local_64 >> 0x10 & 0xff;
            }
            if (bVar36 && uVar26 != 0) goto LAB_01493420;
          }
        }
      }
    }
    else {
      local_160 = ppiVar33;
LAB_01493420:
      local_178 = param_2[10];
      if (local_178 != 0) {
        if (*param_2 == 2 && param_2[1] == 0) {
          local_90 = param_2[2];
          local_8c = param_2[3];
          local_88 = param_2[4];
          local_84 = param_2[5];
          local_94 = local_84 ^ 0x74656462;
          local_7c = 0;
          local_9c = local_84 ^ 0x646f7261;
          local_a4 = (int *)(local_8c ^ 0x6c796765);
          local_78 = 0;
          local_74 = 0;
          local_80 = 0;
          local_a8 = (undefined1 *)(local_90 ^ 0x6e657261);
          local_98 = (int *)(local_88 ^ 0x79746573);
          local_ac = (int *)(local_8c ^ 0x736f6d65);
          local_a0 = (int *)(local_88 ^ 0x6e646f6d);
          local_c8 = (int *)(uint)(ppiVar33 == (int **)&DAT_00000051);
          local_b0 = (int *)(local_90 ^ 0x70736575);
          FUN_00ed56f4(&local_b0,&local_c8,4);
          if (ppiVar33 == (int **)&DAT_00000051) {
            uVar16 = 7;
            ppiVar15 = local_160;
          }
          else {
            ppiVar15 = &local_c8;
            uVar16 = 4;
            local_c8 = (int *)((uint)local_160 & 0xff);
          }
          FUN_00ed56f4(&local_b0,ppiVar15,uVar16);
          puVar32 = (undefined *)((int)local_ac + CARRY4((uint)local_a0,(uint)local_b0) + local_9c);
          uVar27 = (local_9c << 0xd | (uint)local_a0 >> 0x13) ^ (uint)puVar32;
          uVar23 = ((int)local_a0 << 0xd | local_9c >> 0x13) ^ (uint)((int)local_a0 + (int)local_b0)
          ;
          uVar31 = local_7c | local_78 << 0x18;
          uVar24 = uVar31 ^ local_94;
          uVar26 = local_80 ^ (uint)local_98;
          uVar22 = uVar26 + (int)local_a8;
          puVar17 = (undefined *)((int)local_a4 + CARRY4(uVar26,(uint)local_a8) + uVar24);
          uVar11 = (uVar26 << 0x10 | uVar24 >> 0x10) ^ uVar22;
          puVar29 = puVar17 + CARRY4(uVar22,uVar23) + uVar27;
          uVar34 = (uint)puVar29 ^ (uVar27 << 0x11 | uVar23 >> 0xf);
          uVar19 = (uVar24 << 0x10 | uVar26 >> 0x10) ^ (uint)puVar17;
          uVar24 = uVar22 + uVar23 ^ (uVar23 << 0x11 | uVar27 >> 0xf);
          puVar17 = (undefined *)((int)local_a0 + (int)local_b0) +
                    CARRY4(uVar11,(uint)puVar32) + uVar19;
          uVar26 = (uint)(puVar32 + uVar11) ^ local_80;
          uVar35 = uVar26 + uVar24;
          uVar30 = ((uint)puVar17 ^ uVar31) + uVar34 + (uint)CARRY4(uVar26,uVar24);
          uVar31 = uVar30 ^ (uVar34 << 0xd | uVar24 >> 0x13);
          uVar24 = uVar35 ^ (uVar24 << 0xd | uVar34 >> 0x13);
          uVar34 = (uVar19 << 0x15 | uVar11 >> 0xb) ^ (uint)puVar17;
          uVar28 = (uint)puVar29 ^ 0xff;
          uVar26 = (uVar11 << 0x15 | uVar19 >> 0xb) ^ (uint)(puVar32 + uVar11);
          uVar27 = uVar26 + uVar28;
          uVar23 = uVar34 + uVar22 + uVar23 + (uint)CARRY4(uVar26,uVar28);
          uVar28 = uVar31 + uVar23 + (uint)CARRY4(uVar24,uVar27);
          uVar19 = uVar28 ^ (uVar31 << 0x11 | uVar24 >> 0xf);
          uVar11 = uVar24 + uVar27 ^ (uVar24 << 0x11 | uVar31 >> 0xf);
          uVar23 = (uVar34 << 0x10 | uVar26 >> 0x10) ^ uVar23;
          uVar31 = (uVar26 << 0x10 | uVar34 >> 0x10) ^ uVar27;
          uVar34 = uVar31 + uVar30;
          uVar22 = uVar23 + uVar35 + (uint)CARRY4(uVar31,uVar30);
          uVar35 = uVar19 + uVar22 + (uint)CARRY4(uVar11,uVar34);
          uVar26 = (uVar19 << 0xd | uVar11 >> 0x13) ^ uVar35;
          uVar19 = (uVar11 << 0xd | uVar19 >> 0x13) ^ uVar11 + uVar34;
          uVar22 = (uVar23 << 0x15 | uVar31 >> 0xb) ^ uVar22;
          uVar23 = (uVar31 << 0x15 | uVar23 >> 0xb) ^ uVar34;
          uVar31 = uVar23 + uVar28;
          uVar28 = uVar22 + uVar24 + uVar27 + (uint)CARRY4(uVar23,uVar28);
          uVar30 = uVar26 + uVar28 + (uint)CARRY4(uVar19,uVar31);
          uVar28 = (uVar22 << 0x10 | uVar23 >> 0x10) ^ uVar28;
          uVar24 = (uVar23 << 0x10 | uVar22 >> 0x10) ^ uVar31;
          uVar23 = uVar24 + uVar35;
          uVar27 = (uVar26 << 0x11 | uVar19 >> 0xf) ^ uVar30;
          uVar11 = uVar28 + uVar11 + uVar34 + (uint)CARRY4(uVar24,uVar35);
          uVar22 = (uVar24 << 0x15 | uVar28 >> 0xb) ^ uVar23;
          uVar24 = (uVar28 << 0x15 | uVar24 >> 0xb) ^ uVar11;
          uVar26 = (uVar19 << 0x11 | uVar26 >> 0xf) ^ uVar19 + uVar31;
          uVar19 = uVar24 + uVar19 + uVar31 + (uint)CARRY4(uVar22,uVar30);
          uVar11 = (uVar27 << 0xd | uVar26 >> 0x13) ^ uVar27 + uVar11 + (uint)CARRY4(uVar26,uVar23);
          uVar26 = (uVar26 << 0xd | uVar27 >> 0x13) ^ uVar26 + uVar23;
          uVar26 = ((uVar24 << 0x10 | uVar22 >> 0x10) ^ uVar19) >> 0xb ^ uVar11 >> 0xf ^
                   uVar11 + uVar19 + (uint)CARRY4(uVar26,uVar22 + uVar30) ^ uVar26 + uVar22 + uVar30
          ;
        }
        else {
          if (ppiVar33 == (int **)&DAT_00000051) {
            iVar9 = 0x1b3;
            uVar26 = ((((((*(byte *)local_160 ^ 0x47985764) * 0x1b3 ^
                         (uint)*(byte *)((int)local_160 + 1)) * 0x1b3 ^
                        (uint)*(byte *)((int)local_160 + 2)) * 0x1b3 ^
                       (uint)*(byte *)((int)local_160 + 3)) * 0x1b3 ^ (uint)*(byte *)(local_160 + 1)
                      ) * 0x1b3 ^ (uint)*(byte *)((int)local_160 + 5)) * 0x1b3 ^
                     (uint)*(byte *)((int)local_160 + 6);
          }
          else {
            uVar26 = (ppiVar33 == (int **)&DAT_00000051 ^ 0x84222325) * 0x5635bc91 ^
                     (uint)local_160 & 0xff;
            iVar9 = -0x436f;
          }
          uVar26 = uVar26 * iVar9;
        }
        uVar4 = *(ushort *)(param_2 + 0xe);
        uVar24 = (uint)uVar4;
        uVar26 = uVar26 & 0x7fff;
        iVar9 = param_2[6];
        uVar11 = param_2[7];
        iVar10 = param_2[9];
        if (ppiVar33 != (int **)&DAT_00000051) {
          uVar22 = 0;
          uVar19 = uVar24 & uVar26;
LAB_014938fc:
          do {
            uVar23 = uVar19;
            uVar19 = 0;
          } while (uVar11 <= uVar23);
          puVar12 = (ushort *)(iVar9 + uVar23 * 4);
          uVar19 = (uint)*puVar12;
          if ((uVar19 == 0xffff) ||
             (uVar8 = puVar12[1], (uVar23 - (uVar8 & uVar4) & uVar24) < uVar22)) goto LAB_01493a04;
          if (uVar8 == uVar26) {
            if (local_178 <= uVar19) goto LAB_01494188;
            iVar13 = uVar19 * 0x34 + iVar10;
            piVar21 = (int *)(iVar13 + 0x20);
            iVar25 = *piVar21;
            if (iVar25 == 0) {
              piVar21 = (int *)(uint)*(byte *)(iVar13 + 0x24);
            }
            if (iVar25 == 0 && piVar21 == (int *)((uint)local_160 & 0xff)) goto LAB_01493960;
          }
          uVar22 = uVar22 + 1;
          uVar19 = uVar23 + 1;
          goto LAB_014938fc;
        }
        uVar22 = 0;
        uVar19 = uVar24 & uVar26;
LAB_0149384c:
        do {
          uVar23 = uVar19;
          uVar19 = 0;
        } while (uVar11 <= uVar23);
        puVar12 = (ushort *)(iVar9 + uVar23 * 4);
        uVar19 = (uint)*puVar12;
        if ((uVar19 == 0xffff) || (uVar8 = puVar12[1], (uVar23 - (uVar8 & uVar4) & uVar24) < uVar22)
           ) goto LAB_01493a04;
        if (uVar8 == uVar26) {
          if (local_178 <= uVar19) {
LAB_01494188:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar19,local_178,&DAT_018a6bf0);
          }
          iVar13 = uVar19 * 0x34 + iVar10;
          if (((*(int *)(iVar13 + 0x20) != 0) && (*(int *)(iVar13 + 0x28) == 7)) &&
             (iVar13 = thunk_FUN_016dd50a(*(undefined4 *)(iVar13 + 0x24),local_160,7), iVar13 == 0))
          goto LAB_01493960;
        }
        uVar22 = uVar22 + 1;
        uVar19 = uVar23 + 1;
        goto LAB_0149384c;
      }
    }
LAB_01493a04:
    local_b8 = CONCAT31(local_b8._1_3_,2);
    goto LAB_01493a14;
  }
  if (*(char *)(iVar18 + -0x14) != '\0') {
    iVar10 = 0;
LAB_01493140:
    piVar21 = *(int **)(iVar18 + -0x34);
    uVar26 = *(uint *)(iVar18 + -0x30);
    local_124 = *(uint *)(iVar18 + -0x20);
    local_120 = *(uint *)(iVar18 + -0x1c);
    if (local_120 < local_124) goto LAB_014932b0;
    if (local_124 != 0) {
      if (local_124 < uVar26) {
        if (-0x41 < *(char *)((int)piVar21 + local_124)) goto LAB_01493180;
      }
      else if (local_124 == uVar26) goto LAB_01493180;
      goto LAB_014932b0;
    }
LAB_01493180:
    if (local_120 == 0) {
LAB_014931a8:
      if (((iVar10 == 0) || (iVar9 != local_120 - local_124)) ||
         (iVar9 = thunk_FUN_016dd50a(iVar10,(int)piVar21 + local_124), iVar9 != 0))
      goto LAB_014932f8;
      goto LAB_014931d4;
    }
    if (local_120 < uVar26) {
      if (-0x41 < *(char *)((int)piVar21 + local_120)) goto LAB_014931a8;
    }
    else if (local_120 == uVar26) goto LAB_014931a8;
LAB_014932b0:
    local_134 = uVar26;
    local_170 = local_120;
    goto LAB_014932b4;
  }
LAB_014931d4:
  if ((local_130 & 1) != 0) {
    uVar37 = CONCAT44((uint)local_12e,1);
    sVar3 = *(short *)(iVar18 + -0x2c);
joined_r0x01493270:
    if (sVar3 == 1) {
      uVar26 = 1;
      uVar38 = CONCAT44((uint)*(ushort *)(iVar18 + -0x2a),1);
      if ((uVar37 & 1) == 0) goto LAB_014932e8;
LAB_014931fc:
      if (((uVar38 & 1) == 0) ||
         (((uint)(uVar37 >> 0x20) & 0xffff) != ((uint)(uVar38 >> 0x20) & 0xffff)))
      goto LAB_014932f8;
    }
    else {
      local_120 = *(uint *)(iVar18 + -0x28);
      piVar21 = *(int **)(iVar18 + -0x34);
      if (local_120 != 0) {
        uVar26 = *(uint *)(iVar18 + -0x30);
        if (local_120 < uVar26) {
          if (*(char *)((int)piVar21 + local_120) < -0x40) goto LAB_014932a0;
        }
        else if (local_120 != uVar26) {
LAB_014932a0:
          local_124 = 0;
          puVar32 = &DAT_018af070;
          goto LAB_014932b0;
        }
      }
      uVar38 = FUN_016b3b14(piVar21);
      uVar26 = (uint)uVar38;
      if ((uVar37 & 1) != 0) goto LAB_014931fc;
LAB_014932e8:
      if ((uVar26 & 0xffff) != 0) goto LAB_014932f8;
    }
    goto LAB_01493ab4;
  }
  if (local_12c == 0) {
LAB_01493254:
    uVar37 = FUN_016b3b14(local_138);
    sVar3 = *(short *)(iVar18 + -0x2c);
    goto joined_r0x01493270;
  }
  if (local_12c < local_134) {
    if (-0x41 < *(char *)((int)local_138 + local_12c)) goto LAB_01493254;
  }
  else if (local_12c == local_134) goto LAB_01493254;
  goto LAB_01493af4;
LAB_01493e34:
  local_b0 = local_f0;
  local_ac = piStack_ec;
  local_a8 = (undefined1 *)uStack_e8;
  local_a4 = piStack_e4;
  local_a0 = local_e0;
  piVar21 = (int *)(iVar18 + uVar11 * 0x34);
  if (*piVar21 != 0) {
    FUN_01442274(param_2,piVar21[1]);
    uVar22 = param_2[10];
  }
  if (uVar22 <= uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar11,uVar22,&DAT_018a63b4);
  }
  iVar9 = uVar11 * 0x34 + param_2[9];
  local_d8 = *(int **)(iVar9 + 0xc);
  local_dc = *(undefined2 *)(iVar9 + 0x1d);
  local_da = *(undefined1 *)(iVar9 + 0x1f);
  piStack_d4 = *(int **)(iVar9 + 0x10);
  uStack_d0 = *(uint *)(iVar9 + 0x14);
  piStack_cc = *(int **)(iVar9 + 0x18);
  cVar2 = *(char *)(iVar9 + 0x1c);
  *(int **)(iVar9 + 0xc) = local_b0;
  *(int **)(iVar9 + 0x10) = local_ac;
  *(undefined1 **)(iVar9 + 0x14) = local_a8;
  *(int **)(iVar9 + 0x18) = local_a4;
  *(int **)(iVar9 + 0x1c) = local_a0;
  if (local_c8 != (int *)0x0) {
    (*(code *)local_c8[4])(&local_bc,local_c4,local_c0);
  }
  if (cVar2 == '\x03') goto LAB_01494204;
  local_b0 = local_d8;
  local_ac = piStack_d4;
  local_a8 = (undefined1 *)uStack_d0;
  local_a4 = piStack_cc;
  local_a0 = (int *)CONCAT13(local_da,CONCAT21(local_dc,cVar2));
  if (cVar2 != '\x02') {
    (*(code *)local_d8[4])(&local_a4,piStack_d4,uStack_d0);
  }
  goto LAB_014940c0;
LAB_01493960:
  if (local_178 <= uVar19) {
    puVar32 = &DAT_018a63c4;
LAB_0149423c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar19,local_178,puVar32);
  }
  piVar21 = (int *)(iVar10 + uVar19 * 0x34);
  if (*piVar21 != 0) {
    FUN_01442274(param_2,piVar21[1]);
  }
  FUN_014428b8(&local_b0,param_2,uVar23,uVar19);
  local_c8 = local_a4;
  local_c4 = local_a0;
  local_c0 = local_9c;
  local_bc = local_98;
  local_b8 = local_94;
  if (local_90 != 0) {
    (**(code **)(local_90 + 0x10))(&local_84,local_8c,local_88);
  }
  if ((char)local_b8 != '\x02') {
    (*(code *)local_c8[4])(&local_bc,local_c4,local_c0);
  }
LAB_01493a14:
  local_5c = (int *)0x0;
  local_60 = 0;
  local_64 = (int *)0x33;
  local_68 = (int *)0x0;
  FUN_014c9140(&local_b0,param_2,&local_68);
  if ((char)local_a0 != '\x02') {
    (*(code *)local_b0[4])(&local_a4,local_ac,local_a8);
  }
  local_5c = (int *)0x0;
  local_60 = 0;
  local_64 = (int *)0x4c;
  local_68 = (int *)0x0;
  FUN_014c9140(&local_b0,param_2,&local_68);
  if ((char)local_a0 != '\x02') {
    (*(code *)local_b0[4])(&local_a4,local_ac,local_a8);
  }
LAB_01493ab4:
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (local_12c != 0) {
      if (local_12c < local_134) {
        if (-0x41 < *(char *)((int)local_138 + local_12c)) goto LAB_01493b0c;
      }
      else if (local_12c == local_134) {
LAB_01493b0c:
        if (((local_12c != 4) || (*local_138 != 0x70747468)) ||
           (local_170 = *(uint *)(iVar18 + -0x28), local_170 == 0)) goto LAB_01493b2c;
        local_134 = *(uint *)(iVar18 + -0x30);
        piVar21 = *(int **)(iVar18 + -0x34);
        if (local_170 < local_134) {
          if (-0x41 < *(char *)((int)piVar21 + local_170)) goto LAB_01494130;
        }
        else if (local_170 == local_134) {
LAB_01494130:
          if ((local_170 == 5) && (iVar9 = thunk_FUN_016dd50a(piVar21,&DAT_0041860c,5), iVar9 == 0))
          goto LAB_014940c0;
          goto LAB_01493b2c;
        }
        local_124 = 0;
        puVar32 = &DAT_018af070;
        goto LAB_014932b4;
      }
LAB_01493af4:
      local_124 = 0;
      puVar32 = &DAT_018af070;
      piVar21 = local_138;
LAB_014932b4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(piVar21,local_134,local_124,local_170,puVar32);
    }
LAB_01493b2c:
    piVar21 = *(int **)(iVar18 + -0x30);
    uVar16 = *(undefined4 *)(iVar18 + -0x34);
    if (piVar21 == (int *)0x0) {
      uVar26 = 1;
    }
    else {
      uVar26 = thunk_FUN_016d4a50(piVar21);
      if (uVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,piVar21);
      }
    }
    FUN_016dd1aa(uVar26,uVar16,piVar21);
    local_90 = *(uint *)(iVar18 + -0x28);
    local_8c = *(uint *)(iVar18 + -0x24);
    local_88 = *(uint *)(iVar18 + -0x20);
    local_84 = *(uint *)(iVar18 + -0x1c);
    local_7c = *(uint *)(iVar18 + -0x14);
    local_78 = *(int *)(iVar18 + -0x10);
    local_74 = *(undefined4 *)(iVar18 + -0xc);
    uStack_70 = *(undefined4 *)(iVar18 + -8);
    local_6c = *(undefined1 *)(iVar18 + -4);
    local_94 = *(uint *)(iVar18 + -0x2c);
    local_b0 = *(int **)(iVar18 + -0x48);
    local_ac = *(int **)(iVar18 + -0x44);
    local_a8 = *(undefined1 **)(iVar18 + -0x40);
    local_a4 = *(int **)(iVar18 + -0x3c);
    local_80 = *(uint *)(iVar18 + -0x18);
    local_a0 = piVar21;
    local_9c = uVar26;
    local_98 = piVar21;
    FUN_016b30fc();
    FUN_016b2eac(&local_b0);
    FUN_016b2cb0(&local_b0);
    if (local_98 == (int *)0x0) {
      local_c0 = 0;
      local_c4 = (int *)0x1;
      local_c8 = (int *)0x0;
      FUN_00f5ef18(&local_68,&local_c8);
    }
    else {
      piVar21 = (int *)0x0;
      do {
        bVar1 = *(byte *)(local_9c + (int)piVar21);
        if (bVar1 < 0x20) {
          if (bVar1 != 9) goto LAB_01493c28;
        }
        else if (bVar1 == 0x7f) {
LAB_01493c28:
          bVar36 = true;
          uVar20 = 2;
          goto LAB_01493c8c;
        }
        piVar21 = (int *)((int)piVar21 + 1);
      } while (local_98 != piVar21);
      FUN_00f5eea8(&local_68);
    }
    uVar20 = 0;
    bVar36 = false;
    local_100 = local_68;
    piStack_fc = local_64;
    uStack_f8 = local_60;
    piStack_f4 = local_5c;
    local_104 = local_57;
    local_102 = local_55;
LAB_01493c8c:
    if (local_a0 != (int *)0x0) {
      thunk_FUN_016d3fb4(local_9c);
    }
    if (!bVar36) {
      local_f0 = local_100;
      piStack_ec = piStack_fc;
      uStack_e8 = uStack_f8;
      piStack_e4 = piStack_f4;
      local_e0 = (int *)CONCAT13(local_102,CONCAT21(local_104,uVar20));
      local_bc = (int *)0x0;
      local_c0 = 0;
      local_c4 = (int *)0x37;
      local_c8 = (int *)0x0;
      iVar9 = FUN_014c18b0(param_2);
      if (iVar9 == 0) {
        uVar8 = FUN_014c1c00(param_2,&local_c8);
        uVar26 = local_c0;
        piVar21 = local_c4;
        uVar22 = param_2[10];
        uVar27 = 0;
        bVar36 = local_c8 == (int *)0x0;
        uVar4 = *(ushort *)(param_2 + 0xe);
        iVar18 = param_2[9];
        uVar24 = (uint)local_c4 & 0xff;
        iVar9 = param_2[6];
        uVar23 = param_2[7];
        uVar11 = (uint)(uVar4 & uVar8);
LAB_01493d7c:
        do {
          uVar19 = uVar11;
          uVar11 = 0;
        } while (uVar23 <= uVar19);
        puVar12 = (ushort *)(iVar9 + uVar19 * 4);
        uVar11 = (uint)*puVar12;
        if (uVar11 == 0xffff) {
          local_5c = local_bc;
          local_68 = local_c8;
          local_60 = local_c0;
          local_64 = local_c4;
          local_b0 = local_f0;
          local_ac = piStack_ec;
          local_a8 = (undefined1 *)uStack_e8;
          local_a4 = piStack_e4;
          local_a0 = local_e0;
          iVar9 = FUN_0145da44(param_2,uVar8,&local_68);
          if (iVar9 != 0) goto LAB_01494204;
          local_178 = param_2[7];
          if (local_178 <= uVar19) {
            puVar32 = &DAT_018a6354;
            goto LAB_0149423c;
          }
          puVar14 = (undefined2 *)(param_2[6] + uVar19 * 4);
          *puVar14 = (short)uVar22;
          puVar14[1] = uVar8;
          goto LAB_014940c0;
        }
        uVar5 = puVar12[1];
        if ((uVar19 - (uVar4 & uVar5) & (uint)uVar4) < uVar27) {
          local_5c = local_bc;
          local_68 = local_c8;
          local_64 = local_c4;
          local_60 = local_c0;
          iVar10 = *param_2;
          iVar18 = param_2[1];
          local_b0 = local_f0;
          local_ac = piStack_ec;
          local_a8 = (undefined1 *)uStack_e8;
          local_a4 = piStack_e4;
          local_a0 = local_e0;
          iVar9 = FUN_0145da44(param_2,uVar8,&local_68);
          if (iVar9 == 0) {
            iVar9 = param_2[6];
            uVar11 = 0;
            uVar24 = param_2[7];
            uVar26 = uVar22 & 0xffff;
            while( true ) {
              do {
                uVar22 = uVar19;
                uVar19 = 0;
              } while (uVar24 <= uVar22);
              puVar12 = (ushort *)(iVar9 + uVar22 * 4);
              uVar4 = *puVar12;
              if (uVar4 == 0xffff) break;
              uVar5 = puVar12[1];
              *puVar12 = (ushort)uVar26;
              uVar11 = uVar11 + 1;
              puVar12[1] = uVar8;
              uVar26 = (uint)uVar4;
              uVar19 = uVar22 + 1;
              uVar8 = uVar5;
            }
            puVar12[1] = uVar8;
            *puVar12 = (ushort)uVar26;
            if ((uVar27 >> 9 != 0 && (iVar10 != 2 || iVar18 != 0) || 0x7f < uVar11) &&
               (*param_2 == 0 && param_2[1] == 0)) {
              *param_2 = 1;
              param_2[1] = 0;
            }
            goto LAB_014940c0;
          }
          goto LAB_01494204;
        }
        if (uVar5 == uVar8) {
          if (uVar22 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar11,uVar22,&DAT_018a6344);
          }
          iVar10 = uVar11 * 0x34 + iVar18;
          if ((*(int *)(iVar10 + 0x20) != 0) == bVar36) goto LAB_01493d74;
          if (*(int *)(iVar10 + 0x20) == 0) {
            if (*(byte *)(iVar10 + 0x24) == uVar24) goto LAB_01493e34;
          }
          else if ((*(uint *)(iVar10 + 0x28) == uVar26) &&
                  (iVar10 = thunk_FUN_016dd50a(*(undefined4 *)(iVar10 + 0x24),piVar21,uVar26),
                  iVar10 == 0)) goto LAB_01493e34;
        }
LAB_01493d74:
        uVar27 = uVar27 + 1;
        uVar11 = uVar19 + 1;
        goto LAB_01493d7c;
      }
      (*(code *)local_f0[4])(&piStack_e4,piStack_ec,uStack_e8);
      if (local_c8 != (int *)0x0) {
        (*(code *)local_c8[4])(&local_bc,local_c4,local_c0);
      }
LAB_01494204:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0040929f,0x17,&local_68,&DAT_018a62e4,&DAT_018a6184);
    }
  }
LAB_014940c0:
  if (local_13c != 0) {
    thunk_FUN_016d3fb4(local_138);
  }
LAB_014940d0:
  if (iVar6 != 0) {
    thunk_FUN_016d3fb4(uVar7);
  }
  return;
}

