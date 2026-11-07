// FUN_00b59b68 @ 00b59b68 size=6660 calls_out=53 calls_in=0
// strings: Miner manager not initialized | BUG: impossible | BUG: poisoned lock | BUG: impossible

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00b5b064 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b59b68(double *******param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  double *******pppppppdVar4;
  double *******pppppppdVar5;
  undefined *puVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 *puVar9;
  double *******pppppppdVar10;
  double *******pppppppdVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  double *****pppppdVar16;
  double *pdVar17;
  int iVar18;
  double *****pppppdVar19;
  uint uVar20;
  double *****pppppdVar21;
  double *****pppppdVar22;
  double *******pppppppdVar23;
  double *******pppppppdVar24;
  double *******pppppppdVar25;
  double ******ppppppdVar26;
  uint *puVar27;
  undefined4 *puVar28;
  double ******ppppppdVar29;
  double *******pppppppdVar30;
  double ******ppppppdVar31;
  int iVar32;
  double *******pppppppdVar33;
  undefined4 uVar34;
  int iVar35;
  double *******pppppppdVar36;
  int unaff_r11;
  double *******pppppppdVar37;
  double ******extraout_r12;
  double ******extraout_r12_00;
  bool bVar38;
  uint in_fpscr;
  float fVar39;
  double dVar40;
  undefined4 uVar41;
  double dVar42;
  double dVar43;
  undefined8 uVar44;
  double dVar45;
  double dVar46;
  ulonglong uVar47;
  undefined8 uVar48;
  int local_35c;
  double *******local_358;
  double *****local_34c;
  double *******local_334;
  undefined4 *local_328;
  undefined4 *local_324;
  double ******local_310;
  double ******ppppppdStack_30c;
  double ******local_308;
  double ******ppppppdStack_304;
  double *******local_2f8;
  double *******local_2f4;
  double *******local_2f0;
  double *******local_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  double *******local_2d8;
  double *******local_2d4;
  double *******local_2d0;
  double *******local_2cc;
  double *******local_2c8;
  double *******local_2c0;
  double *******local_2bc;
  double *******local_2b8;
  double *******local_2b0;
  double *******local_2ac;
  double *******local_2a8;
  double *******local_2a4;
  double *******local_2a0;
  double *******local_29c;
  double *******local_298;
  double *******pppppppdStack_294;
  double ******ppppppdStack_290;
  double ******local_28c;
  double *******local_288;
  double *******local_284;
  double *******local_280;
  double *******pppppppdStack_27c;
  double *******local_278;
  double *******local_274;
  double *******local_270;
  double *******pppppppdStack_26c;
  double ******ppppppdStack_268;
  double ******ppppppdStack_264;
  double *******local_1b0;
  double *******local_1ac;
  double *******local_1a8;
  double *******local_1a4;
  double ******local_1a0;
  double ******local_19c;
  double ******local_198;
  double ******local_194;
  double ******local_190;
  double ******local_18c;
  undefined *local_188;
  int local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_150;
  uint local_148;
  undefined4 local_144;
  double *******local_d8;
  double *******local_d4;
  double *******local_d0;
  double *******local_cc;
  double *******local_c8;
  double *******local_c4;
  double *******local_c0;
  double *******local_bc;
  double ******local_b8;
  double ******local_b4;
  undefined4 local_b0;
  undefined4 *local_ac;
  undefined8 local_a8;
  double *******local_9c;
  double ******local_98;
  double *******local_94;
  double local_90;
  double ******local_88;
  double *******local_84;
  double ******local_80;
  double *******local_7c;
  double *******local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_3 + 0x19)) {
  case 0:
    piVar15 = (int *)(param_3[0x18] + 0x2c);
    if (*piVar15 == 0) {
      iVar8 = FUN_00c70f88(&DAT_0034e635,0x2b);
      *param_3 = 1;
      param_3[1] = iVar8;
      iVar18 = -0x80000000;
      goto LAB_00b5b3c0;
    }
    *param_3 = 0;
    param_3[1] = piVar15;
    iVar8 = *piVar15 + 8;
    param_3[2] = iVar8;
    *(undefined1 *)(param_3 + 5) = 0;
LAB_00b59c34:
    local_324 = param_3 + 5;
    param_3[3] = iVar8;
    iVar8 = FUN_00b31650();
    if (iVar8 == 0) {
      iVar8 = FUN_00c70f88("Miner manager not initialized",0x1d);
      iVar18 = -0x80000000;
      *(undefined1 *)local_324 = 1;
      goto LAB_00b5b3b8;
    }
    param_3[4] = iVar8;
    *(undefined1 *)(param_3 + 0x11) = 0;
    param_3[6] = iVar8 + 8;
switchD_00b59c14_caseD_3:
    puVar28 = param_3 + 6;
    FUN_00b23e50(&local_1b0,puVar28,param_4);
    if (local_1b0 != (double *******)&DAT_80000000) {
      local_2f8 = local_1b0;
      local_2f4 = local_1ac;
      local_2f0 = local_1a8;
      FUN_00b216bc(puVar28);
      pppppppdVar33 = local_2f4 + (int)local_2f0;
      iVar8 = *(int *)(param_3[3] + 0x204);
      pppppppdVar23 = local_2f4;
      while (pppppppdVar23 != pppppppdVar33) {
        puVar9 = (undefined4 *)(*(int *)(param_3[4] + 0x3c4) + -4);
        iVar18 = *(int *)(param_3[4] + 0x3c8) << 2;
        while (iVar18 != 0) {
          puVar9 = puVar9 + 1;
          piVar15 = (int *)*puVar9;
          iVar18 = iVar18 + -4;
          if ((double *******)piVar15[0xe3] == (double *******)(*pppppppdVar23)[0xe3])
          goto LAB_00b59d2c;
        }
        local_1b0 = (double *******)&DAT_00000006;
        local_1ac = (double *******)(*pppppppdVar23)[0xe3];
        puVar9 = (undefined4 *)FUN_008e9748(&local_1b0);
        (**(code **)*puVar9)();
        pppppppdVar23 = pppppppdVar23 + 1;
      }
      param_3[6] = 0;
      param_3[7] = 4;
      param_3[8] = 0;
      pppppppdVar23 = local_2f4;
      pppppppdVar33 = local_2f0;
      goto joined_r0x00b59fe0;
    }
    uVar7 = 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018707a0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018707a0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_3 + 5)) {
    case 0:
      iVar8 = param_3[2];
      goto LAB_00b59c34;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01870050);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01870050);
    case 3:
      goto switchD_00b59c14_caseD_3;
    }
    goto switchD_00b59c14_caseD_4;
  }
  goto LAB_00b5a3d4;
LAB_00b5ae18:
  if (local_288 != (double *******)0x0) {
    thunk_FUN_016d3fb4(pppppppdVar4);
  }
  FUN_00c541f4(&local_1b0);
  goto LAB_00b5ae34;
LAB_00b5af6c:
  pppppppdVar25 = local_1a8;
  dVar42 = dVar43 + dVar42;
  uVar20 = uVar12 & 0xfffffff;
  if (NAN(dVar42)) {
    uVar12 = uVar20 | (uint)NAN(dVar46) << 0x1c;
    if (!SUB41(uVar12 >> 0x1c,0)) goto LAB_00b5b004;
  }
  else {
    uVar12 = uVar20 | (uint)NAN(dVar46) << 0x1c;
    if ((!SUB41(uVar12 >> 0x1c,0)) &&
       (uVar12 = uVar20 | (uint)(dVar42 == dVar46) << 0x1e | (uint)(dVar46 <= dVar42) << 0x1d,
       bVar3 = (byte)(uVar12 >> 0x18), (bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)))
    goto LAB_00b5aff8;
  }
  if (local_1a8 == local_1b0) {
    FUN_00d64eec(&local_1b0);
    pppppppdVar24 = local_1ac;
  }
  pdVar17 = (double *)((int)pppppppdVar24 + iVar8);
  local_1a8 = (double *******)((int)pppppppdVar25 + 1);
  iVar8 = iVar8 + 8;
  *pdVar17 = dVar42;
  goto LAB_00b5af6c;
LAB_00b5aff8:
  uVar20 = uVar20 | (uint)(dVar42 < dVar46) << 0x1f;
  uVar12 = uVar20 | (uint)(NAN(dVar42) || NAN(dVar46)) << 0x1c;
  if ((byte)(uVar20 >> 0x1f) != ((byte)(uVar12 >> 0x1c) & 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
  }
LAB_00b5b004:
  if (&DAT_00000001 < local_1a8) {
    if (&DAT_00000014 < local_1a8) {
      FUN_00cd8f18(pppppppdVar24,local_1a8);
    }
    else {
      FUN_00b5dc40(pppppppdVar24,local_1a8);
    }
  }
  pppppppdVar11 = local_1a8;
  pppppppdVar25 = local_1ac;
  pppppppdVar24 = local_1b0;
  local_94 = local_2b8;
  if (local_2b8 == (double *******)0x0) {
    if (pppppppdVar30[0x81][0x2f] == (double *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_01879bd0);
    }
    uVar41 = *(undefined4 *)(iVar18 + 0xe0);
    uVar34 = FUN_018462e8(pppppppdVar30[0x81][0x2e]);
    dVar43 = *(double *)(iVar18 + 0xc0);
    dVar42 = (double)VectorUnsignedToFloat(uVar34,(byte)(uVar12 >> 0x16) & 3);
    dVar46 = (double)(float)pppppppdVar30[0x74];
    FUN_016d5bf8(SUB84(dVar46,0),(int)((ulonglong)dVar46 >> 0x20),
                 (int)*(undefined8 *)(pppppppdVar30 + 0x7e));
    dVar42 = dVar43 / dVar42 + *(double *)(pppppppdVar30 + 0x7c);
    uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
    FUN_016d5578(SUB84(dVar42,0),uVar34,0xeb1c432d);
    FUN_016d5bf8(SUB84(dVar42,0),uVar34,(int)*(undefined8 *)(pppppppdVar30 + 0x7a));
    if (local_2c0 == (double *******)0x0) {
      FUN_00d64bd8(&local_2c0);
    }
    dVar43 = (double)VectorUnsignedToFloat(uVar41,(byte)(uVar12 >> 0x16) & 3);
    *local_2bc = (double ******)0x0;
    dVar43 = (dVar43 / 1000000.0) * 1.05 * 1000000.0;
    dVar43 = (double)VectorUnsignedToFloat
                               ((uint)(0.0 < dVar43) * (int)(longlong)dVar43,
                                (byte)(uVar12 >> 0x16) & 3);
    local_2bc[2] = (double ******)0x0;
    local_2bc[3] = (double ******)0x3ff00000;
    *(double *)(local_2bc + 4) = dVar45;
    *(double *)(local_2bc + 6) = dVar45;
    *(double *)(local_2bc + 8) = (dVar46 * dVar42) / (dVar43 / 1000000.0);
    local_2b8 = (double *******)&DAT_00000001;
  }
  local_bc = (double *******)&local_94;
  local_c0 = &local_98;
  local_90 = 50.0 / dVar45;
  local_88 = (double ******)&local_90;
  local_c8 = &local_88;
  local_298 = (double *******)&DAT_00000064;
  local_2a8 = (double *******)0x0;
  local_2b0 = (double *******)0x0;
  local_cc = (double *******)&local_2c0;
  local_2a0 = (double *******)0x0;
  local_d4 = pppppppdVar25 + (int)pppppppdVar11 * 2;
  local_78 = (double *******)&local_2b0;
  local_7c = (double *******)&local_9c;
  iVar8 = (int)pppppppdVar11 << 3;
  local_d0 = &local_80;
  pppppppdVar11 = pppppppdVar25;
  local_c4 = pppppppdVar30;
  local_84 = pppppppdVar30;
  local_80 = (double ******)&local_b0;
  do {
    if (iVar8 == 0) {
      iVar8 = 8;
      unaff_r11 = 0;
      iVar18 = 0;
      goto joined_r0x00b5b2bc;
    }
    local_d8 = pppppppdVar11 + 2;
    FUN_00d63a80((int)*(undefined8 *)pppppppdVar11,&local_1b0,&local_d0);
    iVar8 = iVar8 + -8;
    pppppppdVar11 = pppppppdVar11 + 2;
  } while (local_1b0 == (double *******)&DAT_00000005 && local_1ac == (double *******)0x0);
  iVar8 = thunk_FUN_016d4a50(0x140);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,0x140);
  }
  FUN_016dd1aa(iVar8,&local_1b0,0x50);
  pppppppdVar30 = local_d4;
  unaff_r11 = 1;
  local_6c = 1;
  local_74 = 4;
  local_288 = local_d8;
  local_284 = local_d4;
  local_280 = local_d0;
  pppppppdStack_27c = local_cc;
  local_278 = local_c8;
  local_274 = local_c4;
  local_270 = local_c0;
  pppppppdStack_26c = local_bc;
  pppppppdVar11 = local_d8;
  local_70 = iVar8;
  while (iVar18 = local_74, pppppppdVar11 != pppppppdVar30) {
    pppppppdVar36 = pppppppdVar11 + 2;
    local_288 = pppppppdVar36;
    FUN_00d63a80((int)*(undefined8 *)pppppppdVar11,&local_1b0,&local_280);
    pppppppdVar11 = pppppppdVar36;
    if (local_1b0 != (double *******)&DAT_00000005 || local_1ac != (double *******)0x0) {
      if (unaff_r11 == local_74) {
        FUN_00d653ec(&local_74,unaff_r11,1,8);
        iVar8 = local_70;
      }
      FUN_016dd1aa(iVar8 + unaff_r11 * 0x50,&local_1b0,0x50);
      unaff_r11 = unaff_r11 + 1;
      local_6c = unaff_r11;
    }
  }
joined_r0x00b5b2bc:
  if (pppppppdVar24 != (double *******)0x0) {
    thunk_FUN_016d3fb4(pppppppdVar25);
  }
  local_324 = param_3 + 5;
  if (local_2c0 != (double *******)0x0) {
    thunk_FUN_016d3fb4(local_2bc);
  }
  if (pppppppdVar10 == (double *******)0x0) {
    bVar38 = pppppppdVar23 == (double *******)0x0 && pppppppdVar33 == (double *******)0x0;
    if (pppppppdVar23 != (double *******)0x0 || pppppppdVar33 != (double *******)0x0) {
      bVar38 = (local_148 & 0x7fffffff) == 0;
    }
    if (!bVar38) {
      thunk_FUN_016d3fb4(local_144);
    }
  }
  iVar35 = param_3[0xf];
  for (iVar32 = param_3[0x10]; iVar32 != 0; iVar32 = iVar32 + -1) {
    FUN_00ce259c(iVar35);
    iVar35 = iVar35 + 0xd8;
  }
  if (param_3[0xe] != 0) {
    thunk_FUN_016d3fb4(param_3[0xf]);
  }
  if (param_3[9] != 0) {
    thunk_FUN_016d3fb4(param_3[10]);
  }
  if (param_3[6] != 0) {
    thunk_FUN_016d3fb4(param_3[7]);
  }
  piVar15 = (int *)param_3[4];
  DataMemoryBarrier(0xb);
  do {
    iVar35 = *piVar15;
    bVar38 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar38);
  *piVar15 = iVar35 + -1;
  if (iVar35 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(param_3[4]);
  }
  *(undefined1 *)local_324 = 1;
  if (iVar18 != -0x7fffffff) {
LAB_00b5b3b8:
    local_328 = param_3 + 2;
    FUN_00b5ba7c(local_328);
LAB_00b5b3c0:
    *param_2 = iVar18;
    param_2[1] = iVar8;
    param_2[2] = unaff_r11;
    uVar7 = 1;
    goto LAB_00b5b3c8;
  }
  goto LAB_00b5a3dc;
LAB_00b59d2c:
  do {
    iVar18 = *piVar15;
    bVar38 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar38);
  *piVar15 = iVar18 + 1;
  if (iVar18 < 0) {
LAB_00b5b5f4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xb5b5f4);
    (*pcVar1)();
  }
  piVar15 = (int *)*puVar9;
  local_2b0 = (double *******)CONCAT13(local_2b0._3_1_,(int3)piVar15[0xd4]);
  uVar34 = *(undefined4 *)((int)piVar15 + 0x353);
  FUN_016dd1aa(&local_288,(int)piVar15 + 0x357,0x19);
  DataMemoryBarrier(0xb);
  do {
    iVar18 = *piVar15;
    bVar38 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar38);
  *piVar15 = iVar18 + -1;
  if (iVar18 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(piVar15);
  }
  local_b0._0_3_ = SUB43(local_2b0,0);
  local_d8 = local_288;
  local_d4 = local_284;
  local_d0 = local_280;
  local_cc = pppppppdStack_27c;
  local_c8 = local_278;
  local_c4 = local_274;
  local_c0 = (double *******)CONCAT31(local_c0._1_3_,local_270._0_1_);
  ppppppdVar26 = *(double *******)(iVar8 + 0xb8);
  pppppppdVar10 = (double *******)thunk_FUN_016d4a50(0x90);
  if (pppppppdVar10 == (double *******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x90);
  }
  *(undefined2 *)pppppppdVar10 = (undefined2)local_b0;
  *(undefined1 *)((int)pppppppdVar10 + 2) = local_b0._2_1_;
  *(undefined4 *)((int)pppppppdVar10 + 3) = uVar34;
  FUN_016dd1aa((int)pppppppdVar10 + 7,&local_d8,0x19);
  pppppppdVar10[8] = ppppppdVar26;
  local_2a8 = (double *******)&DAT_00000001;
  local_2b0 = (double *******)&DAT_00000004;
  pppppppdVar23 = pppppppdVar23 + 1;
  local_2ac = pppppppdVar10;
LAB_00b59e80:
  if (pppppppdVar23 != pppppppdVar33) {
    puVar9 = (undefined4 *)(*(int *)(param_3[4] + 0x3c4) + -4);
    iVar18 = *(int *)(param_3[4] + 0x3c8) << 2;
    do {
      if (iVar18 == 0) {
        local_1b0 = (double *******)&DAT_00000006;
        local_1ac = (double *******)(*pppppppdVar23)[0xe3];
        puVar9 = (undefined4 *)FUN_008e9748(&local_1b0);
        (**(code **)*puVar9)();
        pppppppdVar23 = pppppppdVar23 + 1;
        goto LAB_00b59e80;
      }
      puVar9 = puVar9 + 1;
      piVar15 = (int *)*puVar9;
      iVar18 = iVar18 + -4;
    } while ((double *******)piVar15[0xe3] != (double *******)(*pppppppdVar23)[0xe3]);
    do {
      iVar18 = *piVar15;
      bVar38 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar38);
    *piVar15 = iVar18 + 1;
    if (iVar18 < 0) goto LAB_00b5b5f4;
    piVar15 = (int *)*puVar9;
    local_b0 = (double *****)CONCAT13(local_b0._3_1_,(int3)piVar15[0xd4]);
    uVar34 = *(undefined4 *)((int)piVar15 + 0x353);
    FUN_016dd1aa(&local_288,(int)piVar15 + 0x357,0x19);
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar15;
      bVar38 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar38);
    *piVar15 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f31e8(piVar15);
    }
    pppppppdVar10 = local_2a8;
    local_74 = CONCAT22(CONCAT11(local_74._3_1_,local_b0._2_1_),(undefined2)local_b0);
    local_d8 = local_288;
    local_d4 = local_284;
    local_d0 = local_280;
    local_cc = pppppppdStack_27c;
    local_c8 = local_278;
    local_c4 = local_274;
    local_c0 = (double *******)CONCAT31(local_c0._1_3_,local_270._0_1_);
    ppppppdVar26 = *(double *******)(iVar8 + 0xb8);
    if (local_2a8 == local_2b0) {
      FUN_00d653ec(&local_2b0,local_2a8,1,4);
    }
    pppppppdVar30 = local_2ac + (int)pppppppdVar10 * 9;
    *(undefined2 *)pppppppdVar30 = (undefined2)local_74;
    *(undefined1 *)((int)pppppppdVar30 + 2) = local_74._2_1_;
    *(undefined4 *)((int)pppppppdVar30 + 3) = uVar34;
    FUN_016dd1aa((int)pppppppdVar30 + 7,&local_d8,0x19);
    pppppppdVar30[8] = ppppppdVar26;
    local_2a8 = (double *******)((int)pppppppdVar10 + 1);
    pppppppdVar23 = pppppppdVar23 + 1;
    goto LAB_00b59e80;
  }
  *puVar28 = local_2b0;
  param_3[7] = local_2ac;
  param_3[8] = local_2a8;
  pppppppdVar23 = local_2f4;
  pppppppdVar33 = local_2f0;
joined_r0x00b59fe0:
  local_2f4 = pppppppdVar23;
  local_2f0 = pppppppdVar33;
  if (pppppppdVar33 != (double *******)0x0) {
    pppppppdVar10 = (double *******)0x0;
    do {
      ppppppdVar26 = pppppppdVar23[(int)pppppppdVar10];
      pppppppdVar30 = (double *******)((int)pppppppdVar10 + 1);
      DataMemoryBarrier(0xb);
      do {
        pppppdVar19 = *ppppppdVar26;
        bVar38 = (bool)hasExclusiveAccess(ppppppdVar26);
      } while (!bVar38);
      *ppppppdVar26 = (double *****)((int)pppppdVar19 + -1);
      if (pppppdVar19 == (double *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(pppppppdVar23[(int)pppppppdVar10]);
      }
      pppppppdVar10 = pppppppdVar30;
    } while (pppppppdVar30 != pppppppdVar33);
  }
  if (local_2f8 != (double *******)0x0) {
    thunk_FUN_016d3fb4(local_2f4);
  }
  pppppdVar19 = (double *****)(param_3 + 9);
  FUN_00c043dc(pppppdVar19,1,0,param_3[7]);
  dVar46 = *(double *)(param_3[3] + 600);
  param_3[0xc] = param_3 + 0x12;
  param_3[0xd] = param_3 + 0xc;
  *(double *)(param_3 + 0x12) = dVar46 * 1.01;
  pppppppdVar23 = *(double ********)(param_3[3] + 0x4a4);
  local_ac = param_3 + 0xd;
  pppppppdVar33 = pppppppdVar23 + 4;
  do {
    local_b0 = pppppdVar19;
    if (*pppppppdVar33 != (double ******)0x0) {
      ClearExclusiveLocal();
      FUN_015bf680(pppppppdVar33);
      goto LAB_00b5a124;
    }
    bVar38 = (bool)hasExclusiveAccess(pppppppdVar33);
  } while (!bVar38);
  *pppppppdVar33 = (double ******)0x1;
  DataMemoryBarrier(0xb);
LAB_00b5a124:
  uVar20 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(pppppppdVar23 + 5);
  }
  else {
    uVar20 = FUN_015bf3f8();
    uVar20 = uVar20 ^ 1;
    cVar2 = *(char *)(pppppppdVar23 + 5);
  }
  if (cVar2 != '\0') {
    uVar12 = (uint)local_1ac >> 8;
    local_1ac = (double *******)CONCAT31((int3)uVar12,(char)uVar20);
    local_1b0 = pppppppdVar33;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: poisoned lock",0x12,&local_1b0,&DAT_0187262c);
  }
  local_2a8 = (double *******)pppppppdVar23[6];
  if (local_2a8 == (double *******)0x0) {
    ppppppdStack_290 = (double ******)0x0;
    local_2a4 = pppppppdVar23;
  }
  else {
    ppppppdStack_290 = pppppppdVar23[8];
    local_2a4 = (double *******)pppppppdVar23[7];
  }
  local_2b0 = (double *******)(uint)(local_2a8 != (double *******)0x0);
  local_29c = (double *******)0x0;
  local_2ac = (double *******)0x0;
  local_2a0 = local_2b0;
  local_298 = local_2a8;
  pppppppdStack_294 = local_2a4;
  local_28c = (double ******)&local_b0;
  do {
    iVar8 = FUN_00c394b8(&local_2b0);
    if (iVar8 == 0) {
      param_3[0xe] = 0;
      param_3[0xf] = 8;
      param_3[0x10] = 0;
      goto joined_r0x00b5a328;
    }
    FUN_00c085d4(&local_1b0,local_28c,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
    pppppppdVar30 = local_1ac;
    pppppppdVar10 = local_1b0;
  } while (local_1b0 == (double *******)&DAT_00000004 && local_1ac == (double *******)0x0);
  FUN_016dd1aa(&local_280,&local_1a8,0xd0);
  local_284 = pppppppdVar30;
  local_288 = pppppppdVar10;
  pppppppdVar10 = (double *******)thunk_FUN_016d4a50(0x360);
  if (pppppppdVar10 == (double *******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,0x360);
  }
  FUN_016dd1aa(pppppppdVar10,&local_288,0xd8);
  pppppppdVar30 = (double *******)&DAT_00000001;
  local_2f8 = (double *******)&DAT_00000004;
  local_2f0 = (double *******)&DAT_00000001;
  local_d8 = local_2b0;
  local_d4 = local_2ac;
  local_d0 = local_2a8;
  local_cc = local_2a4;
  local_c8 = local_2a0;
  local_c4 = local_29c;
  local_c0 = local_298;
  local_bc = pppppppdStack_294;
  local_b8 = ppppppdStack_290;
  local_b4 = local_28c;
  local_2f4 = pppppppdVar10;
  while (iVar8 = FUN_00c394b8(&local_d8), iVar8 != 0) {
    FUN_00c085d4(&local_1b0,local_b4,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
    pppppppdVar25 = local_1ac;
    pppppppdVar24 = local_1b0;
    if (local_1b0 != (double *******)&DAT_00000004 || local_1ac != (double *******)0x0) {
      FUN_016dd1aa(&local_280,&local_1a8,0xd0);
      local_284 = pppppppdVar25;
      local_288 = pppppppdVar24;
      if (pppppppdVar30 == local_2f8) {
        FUN_00d653ec(&local_2f8,pppppppdVar30,1,8);
        pppppppdVar10 = local_2f4;
      }
      FUN_016dd1aa(pppppppdVar10 + (int)pppppppdVar30 * 0x36,&local_288,0xd8);
      pppppppdVar30 = (double *******)((int)pppppppdVar30 + 1);
      local_2f0 = pppppppdVar30;
    }
  }
  param_3[0xe] = local_2f8;
  param_3[0xf] = local_2f4;
  param_3[0x10] = local_2f0;
joined_r0x00b5a328:
  if (((uVar20 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0))
  {
    *(undefined1 *)(pppppppdVar23 + 5) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    ppppppdVar26 = *pppppppdVar33;
    bVar38 = (bool)hasExclusiveAccess(pppppppdVar33);
  } while (!bVar38);
  *pppppppdVar33 = (double ******)0x0;
  if (ppppppdVar26 == (double ******)0x2) {
    FUN_016d6968(0xf0,pppppppdVar33,0x81,1);
  }
  *(undefined1 *)(param_3 + 0x17) = 0;
  param_3[0x14] = param_3[3];
switchD_00b59c14_caseD_4:
  FUN_00b2d3a0(&local_1b0,param_3 + 0x14,param_4);
  ppppppdVar29 = local_194;
  ppppppdVar26 = local_198;
  pppppppdVar33 = local_1ac;
  pppppppdVar23 = local_1b0;
  if (local_1b0 != (double *******)&DAT_00000008 || local_1ac != (double *******)0x0) {
    if ((*(char *)(param_3 + 0x17) == '\x03') && (param_3[0x15] != 0)) {
      FUN_00c8204c(param_3[0x15],param_3[0x16],1);
    }
    iVar8 = *(int *)(param_3[4] + 0x338);
    puVar27 = (uint *)(iVar8 + 0x98);
    uVar20 = *(uint *)(iVar8 + 0x98);
    if ((uVar20 < 0xfffffff0) && ((uVar20 & 8) == 0)) {
      if (*puVar27 != uVar20) {
        ClearExclusiveLocal();
        goto LAB_00b5a484;
      }
      bVar38 = (bool)hasExclusiveAccess(puVar27);
      if (!bVar38) goto LAB_00b5a484;
      *puVar27 = uVar20 + 0x10;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_00b5a484:
      FUN_0127d66c(puVar27);
    }
    FUN_0128236c(puVar27);
    FUN_0128236c((uint)puVar27 | 1);
    DataMemoryBarrier(0xb);
    pppppppdVar10 = (double *******)0x0;
    piVar15 = (int *)(iVar8 + 0xa0);
    if (((*piVar15 != 2) &&
        ((pppppppdVar23 != (double *******)&DAT_00000007 || pppppppdVar33 != (double *******)0x0) &&
         ((uint)ppppppdVar26 & 1) != 0)) &&
       (*(int *)(iVar8 + 0x188) != 0 && ppppppdVar29 != (double ******)0x1)) {
      fVar39 = *(float *)(iVar8 + 0xd0);
      uVar20 = FUN_00d505bc(piVar15,&LAB_00d505ac);
      local_2ec = (double *******)(fVar39 + -15.0);
      pppppppdVar30 = (double *******)((float)local_2ec + -15.0);
      if ((uVar20 & 1) != 0) {
        pppppppdVar30 = param_1;
      }
      uVar20 = FUN_00d505bc(piVar15,&LAB_00d507a8);
      local_2f0 = local_2ec;
      if ((uVar20 & 1) != 0) {
        local_2f0 = param_1;
      }
      local_2e8 = *(undefined4 *)(iVar8 + 0x184);
      uStack_2e4 = local_2e8;
      uStack_2e0 = local_2e8;
      if (*(char *)(iVar8 + 0xc4) == '\0') {
        if (*piVar15 == 1) {
          uStack_2e0 = *(undefined4 *)(iVar8 + 0xb4);
          if (*(int *)(iVar8 + 0xb0) == 0) {
            uStack_2e0 = 100;
          }
          uStack_2e4 = *(undefined4 *)(iVar8 + 0xac);
          if (*(int *)(iVar8 + 0xa8) == 0) {
            uStack_2e4 = 0x19;
          }
        }
        else {
          uStack_2e4 = *(undefined4 *)(iVar8 + 0xa4);
          uStack_2e0 = uStack_2e4;
        }
      }
      pppppppdVar10 = (double *******)&DAT_00000001;
      local_2f4 = pppppppdVar30;
    }
    local_2f8 = pppppppdVar10;
    FUN_01282570(puVar27);
    FUN_01282570((uint)puVar27 | 1);
    DataMemoryBarrier(0xb);
    do {
      uVar20 = *puVar27;
      bVar38 = (bool)hasExclusiveAccess(puVar27);
    } while (!bVar38);
    *puVar27 = uVar20 - 0x10;
    if ((uVar20 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar27);
    }
    pppppppdVar10 = local_2f8;
    if (local_2f8 == (double *******)0x0) {
      local_2d8 = (double *******)0x0;
    }
    else {
      FUN_009a7ebc(&local_1b0,*(int *)(param_3[4] + 0x3d0) + 8);
      local_2d4 = local_1ac;
      local_2d8 = local_1b0;
      if (local_198 != (double ******)0x0) {
        thunk_FUN_016d3fb4(local_194);
      }
      puVar6 = local_188;
      puVar28 = (undefined4 *)(local_188 + 4);
      for (iVar8 = local_184; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (puVar28[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar28);
        }
        puVar28 = puVar28 + 6;
      }
      if (local_18c != (double ******)0x0) {
        thunk_FUN_016d3fb4(puVar6);
      }
    }
    ppppppdVar26 = (double ******)param_3[8];
    if (ppppppdVar26 == (double ******)0x0) {
      ppppppdVar26 = *(double *******)(*(int *)(param_3[3] + 0x204) + 0xc4);
    }
    pppppppdVar23 = (double *******)((uint)pppppppdVar23 ^ 7);
    bVar38 = pppppppdVar23 != (double *******)0x0 || pppppppdVar33 != (double *******)0x0;
    pppppppdVar30 = pppppppdVar23;
    if (bVar38) {
      pppppppdVar30 = pppppppdVar10;
    }
    if (bVar38 && pppppppdVar30 != (double *******)0x0) {
      if ((local_148 & 0x7fffffff) == 0) {
        local_34c = (double *****)&DAT_00000001;
      }
      else {
        local_34c = (double *****)&DAT_00000001;
        thunk_FUN_016d3fb4(local_144);
      }
    }
    else {
      local_34c = (double *****)0x0;
    }
    iVar35 = param_3[0xf];
    iVar8 = param_3[0x10] * 0xd8;
    uVar34 = param_3[3];
    iVar18 = param_3[0x10] * 0xd8 + iVar35;
    do {
      if (iVar8 == 0) {
        local_2c8 = (double *******)0x0;
        local_2cc = (double *******)&DAT_00000008;
        local_2d0 = (double *******)0x0;
        goto LAB_00b5a844;
      }
      FUN_00b37038(&local_1b0,uVar34,&local_2d8,iVar35);
      iVar8 = iVar8 + -0xd8;
      iVar35 = iVar35 + 0xd8;
    } while (local_1b0 == (double *******)0x3);
    local_358 = (double *******)thunk_FUN_016d4a50(0xa0);
    if (local_358 == (double *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,0xa0);
    }
    *local_358 = (double ******)local_1b0;
    local_358[1] = (double ******)local_1ac;
    local_358[2] = (double ******)local_1a8;
    local_358[3] = (double ******)local_1a4;
    local_358[4] = local_1a0;
    local_358[5] = local_19c;
    local_358[6] = local_198;
    local_358[7] = local_194;
    local_358[8] = local_190;
    local_358[9] = local_18c;
    local_280 = (double *******)&DAT_00000001;
    local_288 = (double *******)&DAT_00000004;
    pppppppdVar30 = (double *******)&DAT_00000001;
    local_284 = local_358;
    while (iVar35 != iVar18) {
      FUN_00b37038(&local_1b0,uVar34,&local_2d8,iVar35);
      iVar35 = iVar35 + 0xd8;
      if (local_1b0 != (double *******)0x3) {
        if (pppppppdVar30 == local_288) {
          FUN_00d653ec(&local_288,pppppppdVar30,1,8);
          local_358 = local_284;
        }
        local_280 = (double *******)((int)pppppppdVar30 + 1);
        pppppppdVar30 = local_358 + (int)pppppppdVar30 * 10;
        *pppppppdVar30 = (double ******)local_1b0;
        pppppppdVar30[1] = (double ******)local_1ac;
        pppppppdVar30[2] = (double ******)local_1a8;
        pppppppdVar30[3] = (double ******)local_1a4;
        pppppppdVar30[4] = local_1a0;
        pppppppdVar30[5] = local_19c;
        pppppppdVar30[6] = local_198;
        pppppppdVar30[7] = local_194;
        pppppppdVar30[8] = local_190;
        pppppppdVar30[9] = local_18c;
        pppppppdVar30 = local_280;
      }
    }
    local_2d0 = local_288;
    local_2cc = local_284;
    local_2c8 = local_280;
LAB_00b5a844:
    uVar47 = FUN_007143c8();
    piVar15 = (int *)uVar47;
    cVar2 = *(char *)((int)piVar15 + 0x59);
    if ((((uVar47 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
      *(undefined1 *)(piVar15 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar15;
      bVar38 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar38);
    *piVar15 = 0;
    if (iVar8 == 2) {
      FUN_016d6968(0xf0,piVar15,0x81,1);
    }
    if (cVar2 == '\0') {
LAB_00b5ae34:
      pppppppdVar30 = (double *******)param_3[3];
      iVar18 = param_3[4];
      iVar8 = 8;
      local_2c0 = local_2d0;
      local_2bc = local_2cc;
      local_2b8 = local_2c8;
      dVar42 = *(double *)(pppppppdVar30 + 0x9a);
      dVar46 = *(double *)(pppppppdVar30 + 0x9c);
      local_9c = (double *******)0x0;
      if (pppppppdVar10 != (double *******)0x0) {
        local_9c = (double *******)&local_2f4;
      }
      local_ac = (undefined4 *)0x0;
      local_b0 = local_34c;
      dVar43 = (dVar46 - dVar42) / 200.0;
      dVar45 = *(double *)(iVar18 + 0xb8);
      uVar20 = in_fpscr & 0xfffffff | (uint)(dVar43 < 6.0) << 0x1f;
      uVar12 = uVar20 | (uint)NAN(dVar43) << 0x1c;
      local_a8 = local_150;
      dVar43 = 200.0;
      if ((byte)(uVar20 >> 0x1f) != ((byte)(uVar12 >> 0x1c) & 1)) {
        dVar43 = dVar45 / 10.0;
      }
      local_98 = ppppppdVar26;
      pppppppdVar24 = (double *******)thunk_FUN_016d4a50(8);
      if (pppppppdVar24 == (double *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,8);
      }
      pppppppdVar25 = (double *******)&DAT_00000001;
      local_1b0 = (double *******)&DAT_00000001;
      *(double *)pppppppdVar24 = dVar45;
      dVar40 = dVar45;
      local_1ac = pppppppdVar24;
      do {
        dVar40 = dVar40 - dVar43;
        uVar20 = uVar12 & 0xfffffff;
        uVar12 = uVar20 | (uint)NAN(dVar40) << 0x1c;
        local_1a8 = pppppppdVar25;
        if (!SUB41(uVar12 >> 0x1c,0)) {
          uVar12 = uVar20 | (uint)NAN(dVar42) << 0x1c;
          if (SUB41(uVar12 >> 0x1c,0)) {
LAB_00b5af50:
            dVar42 = dVar45;
            goto LAB_00b5af6c;
          }
          if (dVar40 <= dVar42) {
            uVar20 = uVar20 | (uint)(dVar40 < dVar42) << 0x1f;
            uVar12 = uVar20 | (uint)(NAN(dVar40) || NAN(dVar42)) << 0x1c;
            if ((byte)(uVar20 >> 0x1f) != ((byte)(uVar12 >> 0x1c) & 1)) goto LAB_00b5af50;
          }
          else {
            uVar20 = uVar20 | (uint)(dVar40 < dVar42) << 0x1f;
            uVar12 = uVar20 | (uint)(NAN(dVar40) || NAN(dVar42)) << 0x1c;
            if ((byte)(uVar20 >> 0x1f) != ((byte)(uVar12 >> 0x1c) & 1)) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
            }
          }
        }
        if (pppppppdVar25 == local_1b0) {
          FUN_00d64eec(&local_1b0);
          pppppppdVar24 = local_1ac;
        }
        pdVar17 = (double *)((int)pppppppdVar24 + iVar8);
        iVar8 = iVar8 + 8;
        pppppppdVar25 = (double *******)((int)pppppppdVar25 + 1);
        *pdVar17 = dVar40;
      } while( true );
    }
    FUN_015ec424(&local_288,&DAT_0034ec24,0x1f);
    pppppppdVar25 = local_280;
    pppppppdVar24 = local_284;
    pppppppdVar30 = local_288;
    if (local_288 == (double *******)&DAT_80000000) {
      pppppppdVar11 = (double *******)((uint)local_284 & 0xff);
      if (pppppppdVar11 == (double *******)0x3) {
        ppppppdVar29 = *local_280;
        ppppppdVar31 = local_280[1];
        pppppdVar19 = *ppppppdVar31;
        if (pppppdVar19 != (double *****)0x0) {
          (*(code *)pppppdVar19)(ppppppdVar29);
        }
        if (ppppppdVar31[1] != (double *****)0x0) {
          thunk_FUN_016d3fb4(ppppppdVar29);
        }
        pppppppdVar11 = (double *******)thunk_FUN_016d3fb4(pppppppdVar25);
      }
    }
    else {
      local_29c = local_280;
      local_2a0 = local_284;
      local_2a4 = (double *******)0x0;
      local_2a8 = (double *******)0x0;
      local_2ac = local_280;
      local_2b0 = local_284;
      FUN_00c62018(&local_288,&local_2b0);
      if (local_288 == (double *******)0x0) {
        local_d8 = (double *******)0x0;
        pppppppdVar11 = (double *******)FUN_00f3d3b0(local_284);
      }
      else {
        local_d8 = local_288;
        local_d4 = local_284;
        local_d0 = local_280;
        local_cc = pppppppdStack_27c;
        local_c8 = local_278;
        pppppppdVar11 = (double *******)&local_c4;
        local_c4 = local_274;
        local_c0 = local_270;
        local_bc = pppppppdStack_26c;
        local_b8 = ppppppdStack_268;
        local_b4 = ppppppdStack_264;
      }
      if (pppppppdVar30 != (double *******)0x0) {
        pppppppdVar11 = (double *******)thunk_FUN_016d3fb4(pppppppdVar24);
      }
      if (local_d8 != (double *******)0x0) {
        if (local_b8 == (double ******)0x4) {
          local_288 = local_d4;
          local_284 = local_d0;
          local_280 = local_cc;
          pppppppdVar24 = local_c4;
          pppppppdVar25 = local_d8;
          pppppppdVar30 = local_c0;
          pppppppdVar11 = local_bc;
          pppppppdVar36 = local_c8;
          local_18c = local_b4;
          goto LAB_00b5aa04;
        }
        pppppppdVar11 = (double *******)FUN_00c541f4(&local_d8);
      }
    }
    uVar48 = thunk_FUN_016de0ee(pppppppdVar11,0x2c0);
    piVar15 = (int *)((int)uVar48 + (int)((ulonglong)uVar48 >> 0x20));
    local_18c = extraout_r12;
    if ((char)piVar15[4] == '\0') {
      FUN_015f62e4(&local_288);
      *piVar15 = (int)local_288;
      piVar15[1] = (int)local_284;
      piVar15[2] = (int)local_280;
      piVar15[3] = (int)pppppppdStack_27c;
      *(undefined1 *)(piVar15 + 4) = 1;
      local_18c = extraout_r12_00;
    }
    pppppppdVar36 = (double *******)*piVar15;
    pppppppdVar24 = (double *******)piVar15[1];
    *piVar15 = (int)pppppppdVar36 + 1;
    piVar15[1] = (int)pppppppdVar24 + (uint)((double *******)0xfffffffe < pppppppdVar36);
    local_288 = (double *******)0x0;
    local_284 = (double *******)0x0;
    local_280 = (double *******)0x0;
    pppppppdVar25 = (double *******)&DAT_005674cc;
    pppppppdVar30 = (double *******)piVar15[2];
    pppppppdVar11 = (double *******)piVar15[3];
LAB_00b5aa04:
    local_334 = (double *******)0x0;
    local_170 = 0xe10;
    local_17c = 0x40690000;
    local_1ac = local_288;
    local_1a8 = local_284;
    local_1a4 = local_280;
    local_184 = 0x1f;
    local_190 = (double ******)0x4;
    local_16c = 0;
    local_180 = 0;
    local_160 = 0;
    local_188 = &DAT_0034ec24;
    local_178 = 0x4000000000000000;
    local_168 = 0x3fe0000000000000;
    local_1b0 = pppppppdVar25;
    FUN_00c0413c(&local_288,param_3[7],param_3[8]);
    pppppppdVar5 = local_280;
    pppppppdVar4 = local_284;
    pppppppdVar37 = (double *******)&DAT_0034ec24;
    if (local_1a4 != (double *******)0x0) {
      uVar12 = FUN_00c53ecc(pppppppdVar36,pppppppdVar24,pppppppdVar30,pppppppdVar11);
      pppppppdVar24 = local_1ac;
      uVar20 = uVar12 >> 0x19;
      local_35c = 0;
      while( true ) {
        uVar12 = (uint)pppppppdVar24 & uVar12;
        uVar13 = *(uint *)((int)pppppppdVar25 + uVar12);
        uVar14 = uVar13 ^ uVar20 * 0x1010101;
        pppppppdVar30 = (double *******)(~uVar14 & 0x80808080 & uVar14 + 0xfefefeff);
        while (pppppppdVar36 = pppppppdVar30, pppppppdVar36 != (double *******)0x0) {
          pppppppdVar30 = (double *******)((int)pppppppdVar36 - 1U & (uint)pppppppdVar36);
          pppppppdVar11 =
               (double *******)
               (uVar12 + ((uint)LZCOUNT((int)pppppppdVar36 << 0x18 |
                                        ((uint)pppppppdVar36 >> 8 & 0xff) << 0x10 |
                                        ((uint)pppppppdVar36 >> 0x10 & 0xff) << 8 |
                                        (uint)pppppppdVar36 >> 0x18) >> 3) & (uint)pppppppdVar24);
          if ((pppppppdVar5 == (double *******)pppppppdVar25[((int)pppppppdVar11 * -6 + -5) * 2]) &&
             (iVar8 = thunk_FUN_016dd50a(pppppppdVar4,
                                         pppppppdVar25[(int)pppppppdVar11 * -0xc + -0xb],
                                         pppppppdVar5), iVar8 == 0)) goto LAB_00b5aba4;
        }
        pppppppdVar30 = (double *******)0x0;
        if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
        local_35c = local_35c + 4;
        uVar12 = uVar12 + local_35c;
      }
LAB_00b5aba4:
      local_334 = pppppppdVar25 + ((int)pppppppdVar11 * -6 + -4) * 2;
      pppppppdVar37 = pppppppdVar5;
      if (pppppppdVar36 == (double *******)0x0) {
        local_334 = (double *******)0x0;
      }
    }
    dVar46 = -0.0;
    ppppppdVar29 = (double ******)0x0;
    do {
      pppppppdVar25 = local_2c8;
      pppppppdVar11 = pppppppdVar37;
      dVar42 = dVar46;
      dVar43 = dVar46;
      if (ppppppdVar29 == (double ******)0x0) {
LAB_00b5ac68:
        if (local_334 == (double *******)0x0) goto LAB_00b5ae18;
        ppppppdVar29 = *local_334;
        pppppppdVar24 = (double *******)local_334[3];
        pppppppdVar30 = (double *******)(ppppppdVar29 + 1);
        pppppppdVar11 = (double *******)(~(uint)*ppppppdVar29 & 0x80808080);
        do {
          if (pppppppdVar24 == (double *******)0x0) goto LAB_00b5ae18;
          pppppppdVar36 = pppppppdVar30;
          if (pppppppdVar11 == (double *******)0x0) {
            do {
              pppppppdVar30 = pppppppdVar36 + 1;
              ppppppdVar31 = *pppppppdVar36;
              ppppppdVar29 = ppppppdVar29 + -0x50;
              pppppppdVar36 = pppppppdVar30;
            } while (((uint)ppppppdVar31 & 0x80808080) == 0x80808080);
            pppppppdVar11 = (double *******)((uint)ppppppdVar31 & 0x80808080 ^ 0x80808080);
          }
          pppppppdVar24 = (double *******)((int)pppppppdVar24 + -1);
          pppppppdVar37 = (double *******)((int)pppppppdVar11 - 1U & (uint)pppppppdVar11);
          ppppppdVar31 = ppppppdVar29 +
                         ((uint)LZCOUNT((int)pppppppdVar11 << 0x18 |
                                        ((uint)pppppppdVar11 >> 8 & 0xff) << 0x10 |
                                        ((uint)pppppppdVar11 >> 0x10 & 0xff) << 8 |
                                        (uint)pppppppdVar11 >> 0x18) >> 3) * -0x14;
          pppppdVar19 = ppppppdVar31[-4];
          pppppppdVar11 = pppppppdVar37;
        } while (pppppdVar19 == (double *****)0x0);
        pppppdVar16 = ppppppdVar31[-5];
        pppppdVar21 = pppppdVar16 + 2;
        pppppdVar22 = pppppdVar19;
        do {
          dVar45 = *(double *)pppppdVar21;
          pppppdVar21 = pppppdVar21 + 6;
          pppppdVar22 = (double *****)((int)pppppdVar22 - 1);
          dVar42 = dVar42 + dVar45;
        } while (pppppdVar22 != (double *****)0x0);
        pppppdVar22 = pppppdVar19;
        do {
          dVar45 = *(double *)pppppdVar16;
          pppppdVar16 = pppppdVar16 + 6;
          pppppdVar22 = (double *****)((int)pppppdVar22 - 1);
          dVar43 = dVar43 + dVar45;
        } while (pppppdVar22 != (double *****)0x0);
        local_334 = (double *******)0x0;
      }
      else {
        do {
          if (pppppppdVar24 == (double *******)0x0) goto LAB_00b5ac68;
          pppppppdVar36 = pppppppdVar30;
          if (pppppppdVar11 == (double *******)0x0) {
            do {
              pppppppdVar30 = pppppppdVar36 + 1;
              ppppppdVar31 = *pppppppdVar36;
              ppppppdVar29 = ppppppdVar29 + -0x50;
              pppppppdVar36 = pppppppdVar30;
            } while (((uint)ppppppdVar31 & 0x80808080) == 0x80808080);
            pppppppdVar11 = (double *******)((uint)ppppppdVar31 & 0x80808080 ^ 0x80808080);
          }
          pppppppdVar24 = (double *******)((int)pppppppdVar24 + -1);
          pppppppdVar37 = (double *******)((int)pppppppdVar11 - 1U & (uint)pppppppdVar11);
          ppppppdVar31 = ppppppdVar29 +
                         ((uint)LZCOUNT((int)pppppppdVar11 << 0x18 |
                                        ((uint)pppppppdVar11 >> 8 & 0xff) << 0x10 |
                                        ((uint)pppppppdVar11 >> 0x10 & 0xff) << 8 |
                                        (uint)pppppppdVar11 >> 0x18) >> 3) * -0x14;
          pppppdVar19 = ppppppdVar31[-4];
          pppppppdVar11 = pppppppdVar37;
        } while (pppppdVar19 == (double *****)0x0);
        pppppdVar16 = ppppppdVar31[-5];
        pppppdVar21 = pppppdVar16 + 2;
        pppppdVar22 = pppppdVar19;
        do {
          dVar45 = *(double *)pppppdVar21;
          pppppdVar21 = pppppdVar21 + 6;
          pppppdVar22 = (double *****)((int)pppppdVar22 - 1);
          dVar42 = dVar42 + dVar45;
        } while (pppppdVar22 != (double *****)0x0);
        pppppdVar22 = pppppdVar19;
        do {
          dVar45 = *(double *)pppppdVar16;
          pppppdVar16 = pppppdVar16 + 6;
          pppppdVar22 = (double *****)((int)pppppdVar22 - 1);
          dVar43 = dVar43 + dVar45;
        } while (pppppdVar22 != (double *****)0x0);
      }
      pppppdVar22 = ppppppdVar31[-2];
      pppppdVar16 = ppppppdVar31[-1];
      uVar44 = *(undefined8 *)(ppppppdVar31 + -10);
      uVar48 = *(undefined8 *)(ppppppdVar31 + -8);
      if (local_2c8 == local_2d0) {
        FUN_00d653ec(&local_2d0,local_2c8,1,8);
      }
      dVar45 = (double)VectorUnsignedToFloat(pppppdVar19,(byte)(in_fpscr >> 0x16) & 3);
      local_310 = (double ******)uVar48;
      ppppppdStack_30c = (double ******)((ulonglong)uVar48 >> 0x20);
      pppppppdVar11 = local_2cc + (int)pppppppdVar25 * 10;
      *pppppppdVar11 = (double ******)0x1;
      local_308 = (double ******)uVar44;
      ppppppdStack_304 = (double ******)((ulonglong)uVar44 >> 0x20);
      *(double *)(pppppppdVar11 + 8) = dVar43 / dVar45;
      pppppppdVar11[7] = ppppppdStack_30c;
      pppppppdVar11[6] = local_310;
      pppppppdVar11[5] = ppppppdStack_304;
      pppppppdVar11[4] = local_308;
      *(double *)(pppppppdVar11 + 2) = dVar42 / dVar45;
      pppppppdVar11[1] = (double ******)(((float)pppppdVar22 + (float)pppppdVar16) * 0.5);
      local_2c8 = (double *******)((int)pppppppdVar25 + 1);
    } while( true );
  }
  uVar7 = 4;
LAB_00b5a3d4:
  local_324 = param_3 + 5;
  *(undefined1 *)local_324 = uVar7;
LAB_00b5a3dc:
  *param_2 = -0x7fffffff;
  uVar7 = 3;
LAB_00b5b3c8:
  *(undefined1 *)(param_3 + 0x19) = uVar7;
  return;
}

