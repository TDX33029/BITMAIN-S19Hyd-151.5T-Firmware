// FUN_00c2de98 @ 00c2de98 size=2652 calls_out=17 calls_in=1
// strings: BUG: impossible | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

void FUN_00c2de98(int *param_1,undefined1 param_2,undefined8 **param_3,int *param_4,int *param_5)

{
  undefined4 ****ppppuVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  int *piVar11;
  int iVar12;
  undefined4 ***pppuVar13;
  int iVar14;
  undefined8 *puVar15;
  uint *puVar16;
  undefined8 **unaff_r4;
  uint uVar17;
  int unaff_r5;
  int iVar18;
  undefined8 **ppuVar19;
  int unaff_r6;
  undefined4 ****ppppuVar20;
  int unaff_r7;
  undefined8 **ppuVar21;
  uint uVar22;
  int unaff_r8;
  undefined4 *puVar23;
  undefined4 unaff_r9;
  undefined4 *puVar24;
  undefined4 ****unaff_r10;
  undefined8 ***pppuVar25;
  int in_r12;
  int unaff_lr;
  bool bVar26;
  uint in_fpscr;
  double dVar27;
  double dVar28;
  undefined4 ****local_264;
  int *local_260;
  int local_25c;
  undefined8 **local_258;
  int local_24c;
  int local_248;
  uint local_230;
  int local_22c;
  undefined8 **local_228;
  undefined8 *local_224;
  int local_220;
  undefined4 ****local_210;
  int *local_20c;
  undefined8 **ppuStack_208;
  undefined8 **ppuStack_204;
  undefined4 ****ppppuStack_200;
  undefined8 *local_1f8;
  int *local_1f4;
  undefined8 *local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  undefined8 **local_1bc;
  undefined8 **ppuStack_1b8;
  undefined4 ****ppppuStack_1b4;
  undefined8 *local_1b0;
  int *local_1ac;
  uint local_1a8;
  undefined4 local_1a4;
  undefined4 ****local_1a0;
  int local_19c;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_194;
  undefined4 ****ppppuStack_190;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_174;
  int *local_170;
  int local_16c;
  undefined8 local_168;
  int local_160;
  int local_15c;
  undefined8 **local_158;
  undefined8 **local_154;
  undefined4 ****local_150;
  undefined4 ***local_14c;
  int local_148;
  int iStack_144;
  undefined8 **local_140;
  undefined4 uStack_13c;
  undefined4 ***local_138;
  undefined4 local_134;
  int local_130;
  undefined4 uStack_12c;
  undefined4 ****local_48;
  undefined4 ****local_44;
  undefined1 *local_40;
  int local_3c;
  undefined4 ****local_38;
  undefined1 *local_34;
  
  if (param_4 == (int *)0x0) {
    puVar15 = (undefined8 *)0x80000000;
    iVar6 = 0;
    local_260 = param_1;
    local_228 = param_3;
    local_258 = unaff_r4;
    local_25c = unaff_r8;
    local_264 = unaff_r10;
  }
  else {
    local_210 = &local_150;
    iVar6 = param_4[0x34];
    if (iVar6 == 0) {
      iVar14 = param_4[0x22];
      uVar7 = param_4[0x23];
      ppuVar19 = (undefined8 **)param_4[5];
      ppuVar21 = (undefined8 **)param_4[4];
      local_22c = *param_4;
      dVar27 = *(double *)(param_4 + 2);
    }
    else {
      puVar24 = (undefined4 *)param_4[0x33];
      iVar14 = puVar24[10];
      if (iVar14 == 0) {
LAB_00c2e040:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac88);
      }
      puVar23 = puVar24 + 0xc;
      iVar12 = 0;
      uVar7 = 0;
      puVar16 = (uint *)puVar24[9];
      iVar18 = iVar14;
      do {
        bVar26 = CARRY4(uVar7,*puVar16);
        uVar7 = uVar7 + *puVar16;
        iVar12 = iVar12 + (uint)bVar26;
        iVar18 = iVar18 + -1;
        puVar16 = puVar16 + 1;
      } while (iVar18 != 0);
      uVar17 = 0;
      uVar7 = FUN_01846088(uVar7,iVar12,iVar14,0);
      if (iVar6 == 1) {
        ppuVar21 = (undefined8 **)*puVar24;
        ppuVar19 = (undefined8 **)puVar24[1];
        dVar27 = *(double *)(puVar24 + 6);
        local_22c = 1;
        if (ppuVar21 != (undefined8 **)&DAT_00000005 || ppuVar19 != (undefined8 **)0x0) {
          iVar14 = 1;
          goto LAB_00c2e0f8;
        }
LAB_00c2e0ec:
        ppuVar19 = (undefined8 **)0x0;
        ppuVar21 = (undefined8 **)&DAT_00000005;
      }
      else {
        uVar8 = iVar6 * 0x30 - 0x30;
        uVar22 = uVar8 / 0x30;
        do {
          iVar14 = puVar23[uVar17 * 0xc + 10];
          if (iVar14 == 0) goto LAB_00c2e040;
          uVar9 = 0;
          iVar12 = 0;
          puVar16 = (uint *)puVar23[uVar17 * 0xc + 9];
          iVar18 = iVar14;
          do {
            bVar26 = CARRY4(uVar9,*puVar16);
            uVar9 = uVar9 + *puVar16;
            iVar12 = iVar12 + (uint)bVar26;
            iVar18 = iVar18 + -1;
            puVar16 = puVar16 + 1;
          } while (iVar18 != 0);
          uVar9 = FUN_01846088(uVar9,iVar12,iVar14,0);
          uVar17 = uVar17 + 1;
          if (uVar7 <= uVar9) {
            uVar7 = uVar9;
          }
        } while (uVar17 != uVar22);
        pdVar10 = (double *)(puVar24 + 0x12);
        dVar27 = *(double *)(puVar24 + 6);
        do {
          uVar17 = in_fpscr & 0xfffffff;
          dVar28 = *pdVar10;
          in_fpscr = uVar17;
          if (NAN(dVar27)) {
            if (!NAN(dVar28)) {
              dVar28 = dVar27;
            }
LAB_00c2e06c:
            dVar27 = dVar28;
          }
          else {
            if ((NAN(dVar28)) ||
               (uVar9 = uVar17 | (uint)(dVar27 == dVar28) << 0x1e,
               in_fpscr = uVar9 | (uint)(dVar28 <= dVar27) << 0x1d,
               !(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar9 >> 0x1e,0))) goto LAB_00c2e06c;
            uVar17 = uVar17 | (uint)(dVar27 < dVar28) << 0x1f;
            in_fpscr = uVar17 | (uint)(NAN(dVar27) || NAN(dVar28)) << 0x1c;
            if ((byte)(uVar17 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
            }
          }
          pdVar10 = pdVar10 + 6;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
        ppuVar21 = (undefined8 **)*puVar24;
        ppuVar19 = (undefined8 **)puVar24[1];
        local_22c = 1;
        if (ppuVar21 == (undefined8 **)&DAT_00000005 && ppuVar19 == (undefined8 **)0x0)
        goto LAB_00c2e0ec;
        iVar14 = puVar24[4];
        ppppuVar20 = (undefined4 ****)puVar24[2];
        pppuVar13 = (undefined4 ***)puVar24[3];
        iVar18 = puVar24[5];
        if (iVar6 != 1) {
          iVar6 = (uVar8 >> 4) * -0x55555555;
          do {
            local_140 = (undefined8 **)*puVar23;
            uStack_13c = puVar23[1];
            local_138 = (undefined4 ***)puVar23[2];
            local_134 = puVar23[3];
            local_130 = puVar23[4];
            uStack_12c = puVar23[5];
            pppuVar25 = &local_158;
            local_158 = ppuVar21;
            local_154 = ppuVar19;
            local_150 = ppppuVar20;
            local_14c = pppuVar13;
            local_148 = iVar14;
            iStack_144 = iVar18;
            cVar5 = FUN_010e1310(pppuVar25,&local_140);
            if (cVar5 < '\x01') {
              pppuVar25 = &local_140;
              ppppuVar1 = &local_138;
              piVar11 = &local_130;
            }
            else {
              ppppuVar1 = local_210;
              piVar11 = &local_148;
            }
            iVar6 = iVar6 + -1;
            ppppuVar20 = (undefined4 ****)*ppppuVar1;
            ppuVar21 = *pppuVar25;
            puVar23 = puVar23 + 0xc;
            ppuVar19 = pppuVar25[1];
            pppuVar13 = ppppuVar1[1];
            iVar14 = *piVar11;
            iVar18 = piVar11[1];
          } while (iVar6 != 0);
          iVar14 = 1;
          local_230 = uVar7;
          goto LAB_00c2e0f8;
        }
      }
      local_22c = 1;
      iVar14 = 1;
    }
LAB_00c2e0f8:
    if (param_4[0x38] == -0x80000000) {
      local_220 = -0x80000000;
    }
    else {
      local_220 = param_4[0x3a];
      iVar6 = param_4[0x39];
      if (local_220 == 0) {
        local_25c = 1;
      }
      else {
        local_25c = thunk_FUN_016d4a50();
        if (local_25c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_220);
        }
      }
      FUN_016dd1aa(local_25c,iVar6,local_220);
    }
    puVar15 = (undefined8 *)param_4[0x2e];
    iVar6 = 1;
    iVar18 = param_4[0x2d];
    if ((puVar15 != (undefined8 *)0x0) && (iVar6 = thunk_FUN_016d4a50(puVar15), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,puVar15);
    }
    FUN_016dd1aa(iVar6,iVar18);
    unaff_r7 = param_4[0x31];
    in_r12 = 1;
    iVar18 = param_4[0x30];
    if ((unaff_r7 != 0) && (in_r12 = thunk_FUN_016d4a50(unaff_r7), in_r12 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,unaff_r7);
    }
    FUN_016dd1aa(in_r12,iVar18);
    local_20c = (int *)param_4[0x14];
    iVar18 = param_4[0x13];
    if (local_20c == (int *)0x0) {
      unaff_lr = 1;
    }
    else {
      unaff_lr = thunk_FUN_016d4a50(local_20c);
      if (unaff_lr == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_20c);
      }
    }
    FUN_016dd1aa(unaff_lr,iVar18,local_20c);
    local_228 = (undefined8 **)&DAT_80000000;
    if (param_4[0x3b] == -0x80000000) {
      local_248 = -0x80000000;
      unaff_r6 = local_248;
      unaff_r5 = local_24c;
    }
    else {
      unaff_r6 = param_4[0x3d];
      iVar18 = param_4[0x3c];
      if (unaff_r6 == 0) {
        unaff_r5 = 1;
      }
      else {
        unaff_r5 = thunk_FUN_016d4a50(unaff_r6);
        if (unaff_r5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,unaff_r6);
        }
      }
      FUN_016dd1aa(unaff_r5,iVar18);
    }
    if (iVar14 != 0) {
      local_168 = (double)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
      local_1f4 = (int *)&LAB_00fb1f30;
      local_1f8 = &local_168;
      local_150 = (undefined4 ****)0x0;
      local_154 = (undefined8 **)0x1;
      local_158 = (undefined8 **)0x0;
      local_168 = local_168 / 1000000.0;
      iVar14 = FUN_00fa948c(&local_158,&DAT_018734ac,&DAT_0035c508,&local_1f8);
      if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_168,
                     &DAT_018734c4,&DAT_018af130);
      }
      local_228 = local_158;
      local_258 = local_154;
      local_264 = local_150;
    }
    if (local_22c == 0) {
      local_224 = (undefined8 *)&DAT_80000000;
      if (ppuVar21 != (undefined8 **)&DAT_00000005 || ppuVar19 != (undefined8 **)0x0)
      goto LAB_00c2e3cc;
    }
    else {
      local_1f0 = (undefined8 *)0x0;
      local_154 = (undefined8 **)&DAT_018734ac;
      local_158 = &local_1f8;
      local_1f8 = (undefined8 *)0x0;
      local_14c = (undefined4 ***)0x0;
      local_1f4 = (int *)&DAT_00000001;
      local_150 = (undefined4 ****)&DAT_60000020;
      iVar14 = FUN_00fb1850(SUB84(dVar27,0),&local_158,0,0);
      if ((iVar14 != 0) || (iVar14 = (*(code *)local_154[3])(local_158," V",2), iVar14 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_168,
                     &DAT_018734c4,&DAT_018af130);
      }
      local_260 = local_1f4;
      local_230 = (uint)local_1f0;
      local_224 = local_1f8;
      if (ppuVar21 != (undefined8 **)&DAT_00000005 || ppuVar19 != (undefined8 **)0x0) {
LAB_00c2e3cc:
                    /* WARNING: Could not recover jumptable at 0x00c2e3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00c2e3e0 + *(int *)(&DAT_00c2e3e0 + (int)ppuVar21 * 4)))
                  (&DAT_00c2e3e0,*(int *)(&DAT_00c2e3e0 + (int)ppuVar21 * 4),local_210);
        return;
      }
    }
    if (param_4[0x41] == 0) {
      local_150 = (undefined4 ****)0x0;
      local_158 = (undefined8 **)0x0;
    }
    else {
      if (param_4[0x3f] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_00c45038(&local_158,param_4[0x3f],param_4[0x40]);
    }
    unaff_r9 = 0x80000000;
    ppuStack_208 = local_158;
    ppuStack_204 = local_154;
    ppppuStack_200 = local_150;
  }
  local_19c = local_22c;
  local_1a0 = local_210;
  local_1b0 = local_224;
  local_1a8 = local_230;
  local_1d8 = (int)local_20c;
  local_1e0 = (int)local_20c;
  local_188 = param_5[1];
  iVar14 = param_5[2];
  ppuStack_198 = ppuStack_208;
  ppuStack_194 = ppuStack_204;
  ppppuStack_190 = ppppuStack_200;
  iVar18 = local_188 + iVar14 * 0x110;
  local_180 = *param_5;
  local_1cc = local_220;
  local_1d4 = local_220;
  local_1f8 = puVar15;
  local_1f4 = (int *)iVar6;
  local_1f0 = puVar15;
  iStack_1ec = unaff_r7;
  iStack_1e8 = in_r12;
  local_1e4 = unaff_r7;
  local_1dc = unaff_lr;
  local_1d0 = local_25c;
  local_1c8 = unaff_r6;
  local_1c4 = unaff_r5;
  local_1c0 = unaff_r6;
  local_1bc = local_228;
  ppuStack_1b8 = local_258;
  ppppuStack_1b4 = local_264;
  local_1ac = local_260;
  local_1a4 = unaff_r9;
  local_184 = local_188;
  local_17c = iVar18;
  if (iVar14 != 0) {
    iVar14 = iVar14 * 0x110;
    iVar6 = local_188;
    local_184 = local_188;
    do {
      FUN_016dd1aa(&local_158,iVar6,0x110);
      if (local_158 == (undefined8 **)&SUB_00000002 && local_154 == (undefined8 **)0x0) {
        local_38 = local_150;
        local_40 = &LAB_00604520;
        local_44 = &local_38;
        FUN_00600d2c(&local_168,&DAT_00590e71,&local_44);
        iVar3 = local_160;
        iVar12 = (int)local_168;
        iVar2 = local_168._4_4_;
        (*(code *)**local_38)();
        if (iVar12 != -0x80000000) {
          local_184 = iVar6 + 0x110;
          local_20c = (int *)thunk_FUN_016d4a50(0x30);
          iVar6 = local_17c;
          if (local_20c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,0x30);
          }
          local_20c[1] = iVar2;
          local_20c[2] = iVar3;
          iVar14 = 1;
          *local_20c = iVar12;
          local_16c = 1;
          local_174 = 4;
          local_15c = local_17c;
          local_160 = local_180;
          local_168 = (double)CONCAT44(local_184,local_188);
          local_170 = local_20c;
          if (local_184 == local_17c) goto LAB_00c2e908;
          iVar18 = local_184;
          goto LAB_00c2e818;
        }
      }
      else {
        FUN_00c20700(&local_158);
      }
      iVar14 = iVar14 + -0x110;
      iVar6 = iVar6 + 0x110;
    } while (iVar14 != 0);
    local_184 = iVar18;
  }
  FUN_00cd6340(&local_188);
  piVar11 = (int *)&DAT_00000004;
  iVar14 = 0;
  iVar6 = 0;
LAB_00c2e938:
  *param_1 = iVar6;
  param_1[1] = (int)piVar11;
  param_1[2] = iVar14;
  *(char *)((int)param_1 + 0x79) = (char)param_3;
  *(undefined1 *)(param_1 + 0x1e) = param_2;
  FUN_016dd1aa(param_1 + 3,&local_1f8,0x6c);
  return;
LAB_00c2e818:
  iVar14 = local_16c;
  do {
    FUN_016dd1aa(&local_158,iVar18,0x110);
    iVar18 = iVar18 + 0x110;
    if (local_158 == (undefined8 **)&SUB_00000002 && local_154 == (undefined8 **)0x0) {
      local_48 = local_150;
      local_34 = &LAB_00604520;
      local_38 = &local_48;
      FUN_00600d2c(&local_44,&DAT_00590e71,&local_38);
      iVar12 = local_3c;
      puVar4 = local_40;
      ppppuVar20 = local_44;
      (*(code *)**local_48)();
      if (ppppuVar20 != (undefined4 ****)&DAT_80000000) break;
    }
    else {
      FUN_00c20700(&local_158);
    }
    if (iVar18 == iVar6) goto LAB_00c2e904;
  } while( true );
  if (iVar14 == local_174) {
    FUN_00d653ec(&local_174,iVar14,1,4,0xc);
    local_20c = local_170;
  }
  local_16c = iVar14 + 1;
  piVar11 = local_20c + iVar14 * 3;
  *piVar11 = (int)ppppuVar20;
  piVar11[1] = (int)puVar4;
  piVar11[2] = iVar12;
  iVar14 = local_16c;
  if (iVar18 == iVar6) goto LAB_00c2e904;
  goto LAB_00c2e818;
LAB_00c2e904:
  local_168 = (double)CONCAT44(iVar18,(int)local_168);
LAB_00c2e908:
  FUN_00cd6340(&local_168);
  piVar11 = local_170;
  iVar6 = local_174;
  goto LAB_00c2e938;
}

