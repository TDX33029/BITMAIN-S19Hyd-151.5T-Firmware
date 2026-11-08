// FUN_0165e788 @ 0165e788 size=8872 calls_out=52 calls_in=0
// strings: assertion failed: next.is_notified() | assertion failed: self.ref_count() > 0 | internal error: entered unreachable code: unexpected stage | [internal exception] blocking task ran twice.the timer is shutdown; must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum duration | assertion failed: prev.ref_count() >= 1 | park missing

/* WARNING: Type propagation algorithm not settling */

void FUN_0165e788(uint *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  uint ****ppppuVar6;
  undefined1 *puVar7;
  uint **ppuVar8;
  uint uVar9;
  uint *puVar10;
  int extraout_r1;
  int iVar11;
  int iVar12;
  uint ***pppuVar13;
  int extraout_r1_00;
  int extraout_r1_01;
  uint extraout_r1_02;
  uint **ppuVar14;
  uint *puVar15;
  uint ****extraout_r1_03;
  code *pcVar16;
  uint uVar17;
  uint *puVar18;
  int extraout_r2;
  uint ***pppuVar19;
  uint ****ppppuVar20;
  uint ****ppppuVar21;
  uint uVar22;
  uint ***pppuVar23;
  uint uVar24;
  int iVar25;
  uint ****ppppuVar26;
  int *piVar27;
  undefined4 *puVar28;
  uint unaff_r5;
  int *piVar29;
  char *pcVar30;
  undefined4 uVar31;
  int iVar32;
  uint uVar33;
  int *piVar34;
  uint ****ppppuVar35;
  uint **ppuVar36;
  uint uVar37;
  uint *puVar38;
  int iVar39;
  int *piVar40;
  uint ****ppppuVar41;
  bool bVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulonglong uVar45;
  uint local_130;
  uint *local_12c;
  int local_124;
  int local_120;
  undefined4 *local_10c;
  uint local_f8;
  undefined4 local_f0 [2];
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_e0;
  uint ****local_dc;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  int *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  uint ****local_a0;
  uint ****local_9c;
  int *local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint ****local_68;
  int *piStack_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint ****local_34;
  
  puVar4 = param_1 + 10;
  DataMemoryBarrier(0xb);
  uVar33 = *param_1;
  while( true ) {
    if ((uVar33 & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: next.is_notified()",0x24,&DAT_018ad23c);
    }
    if ((uVar33 & 3) != 0) break;
    uVar17 = (uVar33 & 0x3f) >> 5;
    uVar22 = uVar33 & 0xfffffff8 | 1;
    uVar9 = *param_1;
    if (uVar9 == uVar33) goto LAB_0165e81c;
LAB_0165e7b4:
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar33 = uVar9;
  }
  if (uVar33 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.ref_count() > 0",0x26,&DAT_018ad2cc);
  }
  uVar22 = uVar33 - 0x40;
  uVar17 = 2;
  if (uVar22 < 0x40) {
    uVar17 = 3;
  }
  uVar9 = *param_1;
  if (uVar9 != uVar33) goto LAB_0165e7b4;
LAB_0165e81c:
  DataMemoryBarrier(0xb);
LAB_0165e820:
  bVar42 = (bool)hasExclusiveAccess(param_1);
  if (!bVar42) goto code_r0x0165e82c;
  *param_1 = uVar22;
  DataMemoryBarrier(0xb);
  switch(uVar17) {
  case 0:
    puVar10 = param_1 + 0xc;
    if (*puVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
    }
    uVar43 = thunk_FUN_016de0ee(0,0x40);
    piVar27 = (int *)((int)uVar43 + (int)((ulonglong)uVar43 >> 0x20));
    uVar33 = *puVar4;
    uVar17 = param_1[0xb];
    if ((char)piVar27[0xe] == '\x01') {
LAB_0165e998:
      local_120 = piVar27[6];
      local_124 = piVar27[7];
      piVar27[6] = uVar33;
      piVar27[7] = uVar17;
      cVar3 = '\x01';
    }
    else {
      if ((char)piVar27[0xe] != '\x02') {
        FUN_015e8e6c(piVar27,FUN_01655ec4);
        *(undefined1 *)(piVar27 + 0xe) = 1;
        goto LAB_0165e998;
      }
      local_120 = 0;
      local_124 = 0;
      cVar3 = '\x02';
    }
    puVar18 = param_1 + 0xe;
    piVar34 = (int *)*puVar18;
    *puVar18 = 0;
    if (piVar34 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("[internal exception] blocking task ran twice.the timer is shutdown, must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum duration"
                   ,0x2d,&DAT_018ad3f4);
    }
    if (cVar3 == '\x01') {
LAB_0165e9fc:
      *(undefined1 *)(piVar27 + 0xc) = 0;
    }
    else if (cVar3 != '\x02') {
      FUN_015e8e6c(piVar27,FUN_01655ec4);
      *(undefined1 *)(piVar27 + 0xe) = 1;
      goto LAB_0165e9fc;
    }
    piVar29 = piVar34 + 4;
    DataMemoryBarrier(0xb);
    do {
      local_10c = (undefined4 *)*piVar29;
      bVar42 = (bool)hasExclusiveAccess(piVar29);
    } while (!bVar42);
    *piVar29 = 0;
    DataMemoryBarrier(0xb);
    if (local_10c == (undefined4 *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar39 = *piVar34;
        bVar42 = (bool)hasExclusiveAccess(piVar34);
      } while (!bVar42);
      *piVar34 = iVar39 + -1;
      if (iVar39 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659540(piVar34);
      }
      goto LAB_01660690;
    }
    uVar33 = piVar34[3];
    if (*(uint *)(piVar34[2] + 0x7c) <= uVar33) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar33,*(uint *)(piVar34[2] + 0x7c),&DAT_018acf6c);
    }
    uVar43 = thunk_FUN_016de0ee(piVar29,0x248);
    uVar17 = *(uint *)((int)uVar43 + (int)((ulonglong)uVar43 >> 0x20));
    iVar39 = *(int *)(extraout_r2 + 0x78);
    if (uVar17 < 3) {
      uVar43 = FUN_015f7ed0();
    }
    else {
      piVar29 = (int *)(uVar17 - 8);
      do {
        iVar5 = *piVar29;
        iVar11 = iVar5 + 1;
        uVar43 = CONCAT44(iVar11,piVar29);
        bVar42 = (bool)hasExclusiveAccess(piVar29);
      } while (!bVar42);
      *piVar29 = iVar11;
      if (iVar5 < 0) goto LAB_01660a9c;
    }
    piVar29 = (int *)uVar43;
    FUN_0164c1c0(iVar39 + uVar33 * 0x80,(int)((ulonglong)uVar43 >> 0x20),piVar29[2],piVar29[3]);
    DataMemoryBarrier(0xb);
    do {
      iVar39 = *piVar29;
      bVar42 = (bool)hasExclusiveAccess(piVar29);
    } while (!bVar42);
    *piVar29 = iVar39 + -1;
    if (iVar39 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(piVar29);
    }
    piVar29 = (int *)piVar34[2];
    do {
      iVar39 = *piVar29;
      bVar42 = (bool)hasExclusiveAccess(piVar29);
    } while (!bVar42);
    *piVar29 = iVar39 + 1;
    if (iVar39 < 0) goto LAB_01660a9c;
    piVar29 = (int *)piVar34[2];
    if ((char)piVar27[0xe] != '\x01') {
      if ((char)piVar27[0xe] == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(piVar27,FUN_01655ec4);
      *(undefined1 *)(piVar27 + 0xe) = 1;
    }
    if (*(char *)((int)piVar27 + 0x32) != '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                   ,0x183,&DAT_018acf7c);
    }
    *(undefined1 *)((int)piVar27 + 0x32) = 1;
    uVar43 = FUN_016470fc(piVar29 + 0x56);
    if ((piVar27[9] & 1U) == 0) {
      uVar44 = FUN_0164e918();
      if ((uint)uVar44 < 2) {
        uVar44 = CONCAT44((int)((ulonglong)uVar44 >> 0x20),1);
      }
    }
    else {
      uVar44 = CONCAT44(piVar27[10],piVar27[0xb]);
    }
    uVar31 = (undefined4)((ulonglong)uVar44 >> 0x20);
    piVar27[9] = 1;
    *(undefined8 *)(piVar27 + 10) = uVar43;
    if (*piVar27 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018aca90);
    }
    *piVar27 = -1;
    do {
      iVar39 = *piVar29;
      bVar42 = (bool)hasExclusiveAccess(piVar29);
    } while (!bVar42);
    *piVar29 = iVar39 + 1;
    if (iVar39 < 0) goto LAB_01660a9c;
    local_d4 = piVar27[1];
    local_d0 = piVar27[2];
    *piVar27 = *piVar27 + 1;
    piVar27[2] = (int)piVar29;
    local_cc = piVar27[3] + 1;
    piVar27[1] = 1;
    if (0xfffffffe < (uint)piVar27[3]) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("reached max `enter` depth",0x33,&DAT_018aca80);
    }
    local_c0 = 1;
    piVar27[3] = local_cc;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_a4 = 0;
    local_a8 = 4;
    local_bc = piVar34;
    if ((char)piVar27[0xe] == '\x01') {
      local_130 = piVar27[8];
      piVar27[8] = (int)&local_c0;
    }
    else {
      local_c8 = uVar31;
      local_c4 = (int)uVar44;
      if ((char)piVar27[0xe] == '\x02') {
        FUN_016392ac(local_10c);
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(piVar27,FUN_01655ec4);
      uVar44 = CONCAT44(local_c8,local_c4);
      local_130 = piVar27[8];
      *(undefined1 *)(piVar27 + 0xe) = 1;
      piVar27[8] = (int)&local_c0;
      if ((local_c0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("expected `MultiThread::Context`",0x3f,&DAT_018acf8c);
      }
    }
    local_c8 = (undefined4)((ulonglong)uVar44 >> 0x20);
    local_c4 = (undefined4)uVar44;
    local_12c = (uint *)(piVar27 + 8);
    *(byte *)(local_10c + 0x19) = *(byte *)(local_bc[2] + 0x44) ^ 1;
    FUN_015f3b0c(&local_a0,1);
    local_10c[10] = local_a0;
    local_10c[0xb] = local_9c;
    local_10c[0xc] = local_98;
    FUN_015f3b0c(&local_a0,1);
    local_10c[0x10] = 0;
    *local_10c = local_a0;
    local_10c[1] = local_9c;
    local_10c[2] = local_98;
    if (*(char *)((int)local_10c + 0x66) != '\0') goto LAB_0165ed18;
    uVar33 = (uint)&local_c0 | 4;
    break;
  case 1:
    local_a0 = (uint ****)0x2;
    FUN_016531b0(param_1 + 6,&local_a0);
    local_58 = 0;
    local_60 = *puVar4;
    local_5c = param_1[0xb];
    local_68 = (uint ****)&DAT_00000001;
    local_54 = extraout_r1;
    FUN_016531b0(param_1 + 6,&local_68);
    goto LAB_01660fa4;
  case 2:
    goto switchD_0165e858_caseD_2;
  case 3:
    FUN_01634c3c(param_1);
    return;
  }
LAB_0165f0a8:
  piVar34 = local_bc;
  local_10c[0x15] = local_10c[0x15] + 1;
  if (*(int *)(local_bc[2] + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(&DAT_018ad01c);
  }
  FUN_0184606c();
  if (extraout_r1_00 == 0) {
    FUN_016500b8(local_10c);
    local_10c = (undefined4 *)FUN_016541d8(uVar33,local_10c,0);
    FUN_01654904(local_10c,local_bc + 2);
    FUN_015f3b0c(&local_a0,1);
    local_10c[10] = local_a0;
    local_10c[0xb] = local_9c;
    local_10c[0xc] = local_98;
    FUN_015f3b0c(&local_a0,1);
    local_10c[2] = local_98;
    *local_10c = local_a0;
    local_10c[1] = local_9c;
    local_10c[0x10] = 0;
    uVar17 = local_10c[0x18];
    piVar34 = local_bc;
  }
  else {
    uVar17 = local_10c[0x18];
  }
  if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(&DAT_018acfdc);
  }
  FUN_0184606c(local_10c[0x15],uVar17);
  if (extraout_r1_01 == 0) {
    if (*(int *)(piVar34[2] + 8) == 1) {
      uVar22 = *(uint *)(piVar34[2] + 0xc);
    }
    else {
      uVar22 = (uint)(0.0 < 200000.0 / *(double *)(local_10c + 0xe)) *
               (int)(longlong)(200000.0 / *(double *)(local_10c + 0xe));
      if (uVar22 < 3) {
        uVar22 = 2;
      }
      if (0x7e < uVar22) {
        uVar22 = 0x7f;
      }
    }
    uVar9 = uVar17 - uVar22;
    if (uVar17 < uVar22 || uVar9 == 0) {
      uVar9 = uVar22 - uVar17;
    }
    if (2 < uVar9) {
      local_10c[0x18] = uVar22;
    }
    pppuVar13 = (uint ***)FUN_0163a858();
    if (pppuVar13 == (uint ***)0x0) {
      pppuVar13 = (uint ***)local_10c[0x16];
      local_10c[0x16] = 0;
      if (pppuVar13 == (uint ***)0x0) {
        iVar39 = local_10c[0x14];
        puVar28 = (undefined4 *)(iVar39 + 8);
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        local_68 = *(uint *****)(iVar39 + 0xc);
        if (*(uint *****)(iVar39 + 0x10) != (uint ****)*puVar28) {
          ppppuVar35 = (uint ****)*puVar28;
          do {
            local_a0 = (uint ****)((int)ppppuVar35 + 1);
            if (local_68 == ppppuVar35) {
              ppppuVar6 = local_a0;
            }
            else {
              if (local_a0 == local_68) goto LAB_01660704;
              ppppuVar6 = local_68;
            }
            ppppuVar21 = (uint ****)*puVar28;
            ppppuVar26 = *(uint *****)(iVar39 + 0xc);
            if (ppppuVar21 == ppppuVar35 && ppppuVar26 == local_68) {
              DataMemoryBarrier(0xb);
              do {
                bVar42 = (bool)hasExclusiveAccess(puVar28);
                if (bVar42) {
                  *puVar28 = local_a0;
                  *(uint *****)(iVar39 + 0xc) = ppppuVar6;
                  DataMemoryBarrier(0xb);
                  pppuVar13 = *(uint ****)(*(int *)(iVar39 + 0x14) + ((uint)ppppuVar35 & 0xff) * 4);
                  goto joined_r0x0165f5b8;
                }
                ppppuVar21 = (uint ****)*puVar28;
                ppppuVar26 = *(uint *****)(iVar39 + 0xc);
              } while (ppppuVar21 == ppppuVar35 && ppppuVar26 == local_68);
            }
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            ppppuVar35 = ppppuVar21;
            local_68 = ppppuVar26;
          } while (*(uint *****)(iVar39 + 0x10) != ppppuVar21);
        }
        goto LAB_0165f5bc;
      }
    }
LAB_0165f90c:
    local_10c = (undefined4 *)FUN_01654a60(uVar33,pppuVar13,local_10c);
LAB_0165f91c:
    if (local_10c != (undefined4 *)0x0) goto LAB_0165f928;
    goto LAB_016605e0;
  }
  pppuVar13 = (uint ***)local_10c[0x16];
  local_10c[0x16] = 0;
  if (pppuVar13 != (uint ***)0x0) goto LAB_0165f90c;
  iVar39 = local_10c[0x14];
  puVar28 = (undefined4 *)(iVar39 + 8);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  local_68 = *(uint *****)(iVar39 + 0xc);
  if (*(uint *****)(iVar39 + 0x10) != (uint ****)*puVar28) {
    ppppuVar35 = (uint ****)*puVar28;
    do {
      local_a0 = (uint ****)((int)ppppuVar35 + 1);
      if (local_68 == ppppuVar35) {
        ppppuVar6 = local_a0;
      }
      else {
        if (local_a0 == local_68) {
LAB_01660704:
          FUN_015fef84(1,&local_68,&local_a0,0);
          goto LAB_01660a9c;
        }
        ppppuVar6 = local_68;
      }
      ppppuVar21 = (uint ****)*puVar28;
      ppppuVar26 = *(uint *****)(iVar39 + 0xc);
      if (ppppuVar21 == ppppuVar35 && ppppuVar26 == local_68) {
        DataMemoryBarrier(0xb);
        do {
          bVar42 = (bool)hasExclusiveAccess(puVar28);
          if (bVar42) {
            *puVar28 = local_a0;
            *(uint *****)(iVar39 + 0xc) = ppppuVar6;
            DataMemoryBarrier(0xb);
            pppuVar13 = *(uint ****)(*(int *)(iVar39 + 0x14) + ((uint)ppppuVar35 & 0xff) * 4);
            goto LAB_0165f90c;
          }
          ppppuVar21 = (uint ****)*puVar28;
          ppppuVar26 = *(uint *****)(iVar39 + 0xc);
        } while (ppppuVar21 == ppppuVar35 && ppppuVar26 == local_68);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      ppppuVar35 = ppppuVar21;
      local_68 = ppppuVar26;
    } while (*(uint *****)(iVar39 + 0x10) != ppppuVar21);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(piVar34[2] + 0x98) == 0) goto LAB_0165f5bc;
  iVar11 = *(int *)(local_10c[0x14] + 0xc);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  iVar39 = *(int *)(local_10c[0x14] + 0x10);
  DataMemoryBarrier(0xb);
  iVar5 = piVar34[2];
  if (*(int *)(iVar5 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_018acfec);
  }
  iVar12 = FUN_018462e8(*(undefined4 *)(piVar34[2] + 0x98));
  uVar22 = (iVar11 - iVar39) + 0x100;
  pcVar30 = (char *)(iVar5 + 0x9c);
  uVar17 = iVar12 + 1U;
  if (uVar22 < iVar12 + 1U) {
    uVar17 = uVar22;
  }
  if (uVar17 < 2) {
    uVar17 = 1;
  }
  if (*pcVar30 == '\0') {
    bVar42 = (bool)hasExclusiveAccess(pcVar30);
    if (!bVar42) goto LAB_0165f3e4;
    *pcVar30 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0165f3e4:
    FUN_01280da8(pcVar30);
  }
  FUN_0128236c(pcVar30);
  uVar22 = *(uint *)(piVar34[2] + 0x98);
  DataMemoryBarrier(0xb);
  if (uVar22 <= uVar17) {
    uVar17 = uVar22;
  }
  if (0x7f < uVar17) {
    uVar17 = 0x80;
  }
  *(uint *)(piVar34[2] + 0x98) = uVar22 - uVar17;
  ppppuVar35 = (uint ****)(iVar5 + 0xac);
  local_a0 = ppppuVar35;
  if (uVar22 == 0) {
    pppuVar13 = (uint ***)0x0;
    goto LAB_0165f8c0;
  }
  pppuVar13 = *ppppuVar35;
  if (pppuVar13 != (uint ***)0x0) {
    pppuVar19 = (uint ***)pppuVar13[1];
    *ppppuVar35 = pppuVar19;
    if (pppuVar19 == (uint ***)0x0) {
      *(undefined4 *)(iVar5 + 0xb0) = 0;
    }
    pppuVar13[1] = (uint **)0x0;
  }
  iVar39 = local_10c[0x14];
  local_9c = (uint ****)(uVar17 - 1);
  if (local_9c == (uint ****)0x0) goto LAB_0165f8c0;
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  uVar22 = *(uint *)(iVar39 + 0x10);
  ppppuVar6 = local_9c;
  if (0x101 - uVar17 < uVar22 - *(int *)(iVar39 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("explicit panic",0xe,&DAT_018ac4dc);
  }
  for (; ppppuVar6 != (uint ****)0x0; ppppuVar6 = (uint ****)((int)ppppuVar6 + -1)) {
    pppuVar19 = *ppppuVar35;
    if (pppuVar19 == (uint ***)0x0) goto joined_r0x0165f8b4;
    pppuVar23 = (uint ***)pppuVar19[1];
    uVar17 = uVar22 & 0xff;
    *ppppuVar35 = pppuVar23;
    uVar22 = uVar22 + 1;
    if (pppuVar23 == (uint ***)0x0) {
      *(undefined4 *)(iVar5 + 0xb0) = 0;
    }
    pppuVar19[1] = (uint **)0x0;
    *(uint ****)(*(int *)(iVar39 + 0x14) + uVar17 * 4) = pppuVar19;
  }
  goto LAB_0165f8b8;
code_r0x0165e82c:
  uVar9 = *param_1;
  if (uVar9 != uVar33) goto LAB_0165e7b4;
  goto LAB_0165e820;
joined_r0x0165f8b4:
  while ((ppppuVar6 = (uint ****)((int)ppppuVar6 + -1), ppppuVar6 != (uint ****)0x0 &&
         (pppuVar19 = *ppppuVar35, pppuVar19 != (uint ***)0x0))) {
    pppuVar23 = (uint ***)pppuVar19[1];
    *ppppuVar35 = pppuVar23;
    if (pppuVar23 == (uint ***)0x0) {
      *(undefined4 *)(iVar5 + 0xb0) = 0;
    }
    pppuVar19[1] = (uint **)0x0;
    DataMemoryBarrier(0xb);
    do {
      ppuVar36 = *pppuVar19;
      bVar42 = (bool)hasExclusiveAccess(pppuVar19);
    } while (!bVar42);
    *pppuVar19 = ppuVar36 + -0x10;
    DataMemoryBarrier(0xb);
    if (ppuVar36 < (uint **)0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
    }
    if (((uint)ppuVar36 & 0xffffffc0) == 0x40) {
      (*(code *)pppuVar19[2][2])();
    }
  }
LAB_0165f8b8:
  DataMemoryBarrier(0xb);
  *(uint *)(iVar39 + 0x10) = uVar22;
LAB_0165f8c0:
  FUN_01282570(pcVar30);
  if (*pcVar30 == '\x01') {
    DataMemoryBarrier(0xb);
    while (bVar42 = (bool)hasExclusiveAccess(pcVar30), !bVar42) {
      if (*pcVar30 != '\x01') goto LAB_0165f8f4;
    }
    *pcVar30 = '\0';
  }
  else {
LAB_0165f8f4:
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar30);
  }
joined_r0x0165f5b8:
  if (pppuVar13 != (uint ***)0x0) goto LAB_0165f90c;
LAB_0165f5bc:
  FUN_016500b8(local_10c);
  piVar34 = local_bc;
  if (*(char *)((int)local_10c + 0x65) != '\0') {
LAB_0165f628:
    uVar22 = local_10c[0x13];
    iVar39 = local_bc[2];
    uVar17 = local_10c[0x12] ^ local_10c[0x12] << 0x11;
    uVar9 = *(uint *)(iVar39 + 0x4c);
    uVar17 = uVar22 >> 0x10 ^ uVar17 >> 7 ^ uVar22 ^ uVar17;
    local_10c[0x12] = uVar22;
    local_10c[0x13] = uVar17;
    if (uVar9 != 0) {
      uVar37 = 0;
      do {
        FUN_0184606c(uVar37 + (int)((ulonglong)uVar9 * (ulonglong)(uVar17 + uVar22) >> 0x20),uVar9);
        if (extraout_r1_02 != piVar34[3]) {
          uVar24 = *(uint *)(piVar34[2] + 0x4c);
          if (uVar24 <= extraout_r1_02) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(extraout_r1_02,uVar24,&DAT_018acf9c);
          }
          iVar39 = local_10c[0x14];
          uVar24 = *(uint *)(iVar39 + 0x10);
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          if (uVar24 - *(int *)(iVar39 + 0xc) < 0x81) {
            iVar5 = *(int *)(*(int *)(piVar34[2] + 0x48) + extraout_r1_02 * 8);
            puVar28 = (undefined4 *)(iVar5 + 8);
            ppppuVar6 = (uint ****)*puVar28;
            ppppuVar21 = *(uint *****)(iVar5 + 0xc);
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            ppppuVar35 = *(uint *****)(iVar5 + 0x10);
            DataMemoryBarrier(0xb);
            if (ppppuVar21 == ppppuVar6) {
              do {
                if (ppppuVar35 == ppppuVar21) break;
                ppppuVar41 = (uint ****)
                             (((int)ppppuVar35 - (int)ppppuVar21) -
                             ((uint)((int)ppppuVar35 - (int)ppppuVar21) >> 1));
                ppppuVar20 = (uint ****)((int)ppppuVar41 + (int)ppppuVar21);
                ppppuVar35 = (uint ****)*puVar28;
                ppppuVar26 = *(uint *****)(iVar5 + 0xc);
                if ((uint ****)*puVar28 == ppppuVar6 && *(uint *****)(iVar5 + 0xc) == ppppuVar21) {
                  DataMemoryBarrier(0xb);
LAB_0165f77c:
                  bVar42 = (bool)hasExclusiveAccess(puVar28);
                  if (!bVar42) goto code_r0x0165f788;
                  *puVar28 = ppppuVar20;
                  *(uint *****)(iVar5 + 0xc) = ppppuVar21;
                  DataMemoryBarrier(0xb);
                  local_34 = ppppuVar41;
                  if (&DAT_00000080 < ppppuVar41) {
                    local_a0 = (uint ****)&local_34;
                    local_9c = (uint ****)&LAB_00fac484;
                    /* WARNING: Subroutine does not return */
                    FUN_00faa478(&DAT_005737fb,&local_a0,&DAT_018ac4ec);
                  }
                  ppppuVar35 = (uint ****)&DAT_00000001;
                  if (&DAT_00000001 < ppppuVar41) {
                    ppppuVar35 = ppppuVar41;
                  }
                  iVar11 = -(int)ppppuVar35;
                  uVar17 = uVar24;
                  ppppuVar35 = ppppuVar21;
                  do {
                    uVar22 = (uint)ppppuVar35 & 0xff;
                    ppppuVar35 = (uint ****)((int)ppppuVar35 + 1);
                    bVar42 = iVar11 != -1;
                    iVar11 = iVar11 + 1;
                    uVar9 = uVar17 & 0xff;
                    uVar17 = uVar17 + 1;
                    *(undefined4 *)(*(int *)(iVar39 + 0x14) + uVar9 * 4) =
                         *(undefined4 *)(*(int *)(iVar5 + 0x14) + uVar22 * 4);
                  } while (bVar42);
                  ppppuVar6 = (uint ****)*puVar28;
                  ppppuVar35 = *(uint *****)(iVar5 + 0xc);
                  if (ppppuVar6 == ppppuVar20 && ppppuVar35 == ppppuVar21) {
                    DataMemoryBarrier(0xb);
                    while (bVar42 = (bool)hasExclusiveAccess(puVar28), !bVar42) {
                      ppppuVar6 = (uint ****)*puVar28;
                      ppppuVar35 = *(uint *****)(iVar5 + 0xc);
                      if (ppppuVar6 != ppppuVar20 || ppppuVar35 != ppppuVar21) goto LAB_0165fabc;
                    }
                    *puVar28 = ppppuVar20;
                    *(uint *****)(iVar5 + 0xc) = ppppuVar20;
                    bVar42 = true;
                  }
                  else {
LAB_0165fabc:
                    bVar42 = false;
                    ClearExclusiveLocal();
                  }
                  while( true ) {
                    ppppuVar26 = ppppuVar6;
                    ppppuVar21 = ppppuVar35;
                    DataMemoryBarrier(0xb);
                    if (bVar42) break;
                    local_a0 = ppppuVar26;
                    local_68 = ppppuVar21;
                    if (ppppuVar21 == ppppuVar26) {
                      FUN_015fef84(1,&local_68,&local_a0,0);
                      goto LAB_01660a9c;
                    }
                    ppppuVar6 = (uint ****)*puVar28;
                    ppppuVar35 = *(uint *****)(iVar5 + 0xc);
                    if (ppppuVar6 == ppppuVar26 && ppppuVar35 == ppppuVar21) {
                      DataMemoryBarrier(0xb);
                      while (bVar42 = (bool)hasExclusiveAccess(puVar28), !bVar42) {
                        ppppuVar6 = (uint ****)*puVar28;
                        ppppuVar35 = *(uint *****)(iVar5 + 0xc);
                        if (ppppuVar6 != ppppuVar26 || ppppuVar35 != ppppuVar21) goto LAB_0165fae8;
                      }
                      *puVar28 = ppppuVar26;
                      *(uint *****)(iVar5 + 0xc) = ppppuVar26;
                      bVar42 = true;
                    }
                    else {
LAB_0165fae8:
                      bVar42 = false;
                      ClearExclusiveLocal();
                    }
                  }
                  puVar7 = (undefined1 *)((int)ppppuVar41 + -1) + uVar24;
                  iVar5 = *(int *)(*(int *)(iVar39 + 0x14) + ((uint)puVar7 & 0xff) * 4);
                  if ((undefined1 *)((int)ppppuVar41 + -1) != (undefined1 *)0x0) {
                    DataMemoryBarrier(0xb);
                    *(undefined1 **)(iVar39 + 0x10) = puVar7;
                  }
                  goto LAB_0165fb84;
                }
LAB_0165f720:
                ppppuVar21 = ppppuVar26;
                ppppuVar6 = ppppuVar35;
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
                ppppuVar35 = *(uint *****)(iVar5 + 0x10);
                DataMemoryBarrier(0xb);
              } while (ppppuVar21 == ppppuVar6);
            }
          }
        }
        uVar37 = uVar37 + 1;
      } while (uVar37 != uVar9);
      iVar39 = piVar34[2];
    }
    iVar5 = FUN_0163a858(iVar39 + 8);
    if (iVar5 == 0) goto LAB_0165f878;
LAB_0165fb84:
    FUN_015f3b0c(&local_a0,1);
    local_10c[10] = local_a0;
    local_10c[0xb] = local_9c;
    local_10c[0xc] = local_98;
    FUN_015f3b0c(&local_a0,1);
    local_10c[0x10] = 0;
    *local_10c = local_a0;
    local_10c[1] = local_9c;
    local_10c[2] = local_98;
    local_10c = (undefined4 *)FUN_01654a60(uVar33,iVar5,local_10c);
    goto LAB_0165f91c;
  }
  iVar39 = local_bc[2];
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar39 + 0x80) & 0xffff) << 1 < *(uint *)(iVar39 + 0x84)) {
    piVar40 = (int *)(iVar39 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      bVar42 = (bool)hasExclusiveAccess(piVar40);
    } while (!bVar42);
    *piVar40 = *piVar40 + 1;
    DataMemoryBarrier(0xb);
    *(undefined1 *)((int)local_10c + 0x65) = 1;
    goto LAB_0165f628;
  }
  *(undefined1 *)((int)local_10c + 0x65) = 0;
LAB_0165f878:
  if (0x7ffffffe < local_b0) {
    FUN_00fb71b0(&DAT_018ad0ec);
LAB_01660a9c:
                    /* WARNING: Does not return */
    pcVar16 = (code *)software_udf(0xfdee,0x1660a9c);
    (*pcVar16)();
  }
  if (local_a4 != 0) {
    local_10c = (undefined4 *)FUN_016541d8(uVar33,local_10c,0);
    goto LAB_0165fa70;
  }
  iVar39 = *(int *)(local_bc[2] + 0x14);
  if (iVar39 != 0) {
    iVar5 = *(int *)(local_bc[2] + 0x18);
    (**(code **)(iVar5 + 0x14))(iVar39 + (*(int *)(iVar5 + 8) - 1U & 0xfffffff8) + 8);
  }
  piVar34 = local_bc;
  if (local_10c[0x16] != 0) goto LAB_0165fa3c;
  iVar39 = local_10c[0x14];
  puVar15 = (uint *)(iVar39 + 8);
  uVar22 = *puVar15;
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  uVar17 = *(uint *)(iVar39 + 0x10);
  bVar42 = uVar17 == uVar22;
  if (bVar42) {
    uVar17 = (uint)*(byte *)((int)local_10c + 0x67);
  }
  if (!bVar42 || (uVar17 & 1) != 0) goto LAB_0165fa3c;
  iVar5 = local_bc[2];
  iVar11 = local_bc[3];
  cVar3 = *(char *)((int)local_10c + 0x65);
  pcVar30 = (char *)(iVar5 + 0x9c);
  if (*pcVar30 == '\0') {
    puVar15 = (uint *)&DAT_00000001;
    bVar42 = (bool)hasExclusiveAccess(pcVar30);
    if (!bVar42) goto LAB_0165fc0c;
    *pcVar30 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0165fc0c:
    FUN_01280da8(pcVar30,puVar15,uVar22,*(undefined4 *)(iVar39 + 0xc));
  }
  FUN_0128236c(pcVar30);
  puVar15 = (uint *)(iVar5 + 0x80);
  DataMemoryBarrier(0xb);
  if (cVar3 == '\0') {
    do {
      bVar42 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar42);
    *puVar15 = *puVar15 - 0x10000;
    DataMemoryBarrier(0xb);
    bVar42 = false;
  }
  else {
    do {
      uVar17 = *puVar15;
      bVar42 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar42);
    *puVar15 = uVar17 - 0x10001;
    DataMemoryBarrier(0xb);
    bVar42 = (uVar17 & 0xffff) == 1;
  }
  iVar39 = *(int *)(iVar5 + 0xa8);
  if (iVar39 == *(int *)(iVar5 + 0xa0)) {
    FUN_01286e0c();
  }
  *(int *)(*(int *)(iVar5 + 0xa4) + iVar39 * 4) = iVar11;
  *(int *)(iVar5 + 0xa8) = iVar39 + 1;
  FUN_01282570(pcVar30);
  if (*pcVar30 == '\x01') {
    DataMemoryBarrier(0xb);
    while (bVar2 = (bool)hasExclusiveAccess(pcVar30), !bVar2) {
      if (*pcVar30 != '\x01') goto LAB_0165fcdc;
    }
    *pcVar30 = '\0';
  }
  else {
LAB_0165fcdc:
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar30);
  }
  *(undefined1 *)((int)local_10c + 0x65) = 0;
  if (bVar42) {
    iVar39 = piVar34[2];
    if (*(int *)(iVar39 + 0x4c) == 0) {
LAB_0165fd48:
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar39 + 0x98) == 0) goto LAB_0165fd9c;
      uVar45 = FUN_0164ff24(iVar39 + 0x80,iVar39 + 8);
    }
    else {
      piVar34 = *(int **)(iVar39 + 0x48);
      iVar5 = *(int *)(iVar39 + 0x4c) << 3;
      while( true ) {
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        if (*(int *)(*piVar34 + 0x10) != *(int *)(*piVar34 + 8)) break;
        piVar34 = piVar34 + 2;
        iVar5 = iVar5 + -8;
        if (iVar5 == 0) goto LAB_0165fd48;
      }
      uVar45 = FUN_0164ff24(iVar39 + 0x80,iVar39 + 8);
    }
    uVar17 = (uint)(uVar45 >> 0x20);
    if ((uVar45 & 1) != 0) {
      if (*(uint *)(iVar39 + 0x4c) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar17,*(uint *)(iVar39 + 0x4c),&DAT_018ac60c);
      }
      FUN_0163a560(*(undefined4 *)(*(int *)(iVar39 + 0x48) + uVar17 * 8 + 4),iVar39 + 0xb8);
    }
  }
LAB_0165fd9c:
  cVar3 = *(char *)((int)local_10c + 0x66);
  bVar42 = cVar3 != '\0';
  if (!bVar42) {
    cVar3 = *(char *)((int)local_10c + 0x67);
  }
  if (bVar42 || cVar3 != '\0') goto LAB_0165fa3c;
  iVar39 = local_10c[6] + 1;
  iVar5 = local_10c[7] + (uint)(0xfffffffe < (uint)local_10c[6]);
  iVar11 = local_10c[8] + 1;
  iVar12 = local_10c[9] + (uint)(0xfffffffe < (uint)local_10c[8]);
  local_10c[6] = iVar39;
  local_10c[7] = iVar5;
  local_10c[8] = iVar11;
  local_10c[9] = iVar12;
  uVar22 = local_bc[3];
  uVar17 = *(uint *)(local_bc[2] + 0x7c);
  if (uVar17 <= uVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar22,uVar17,&DAT_018ad06c);
  }
  uVar31 = local_10c[5];
  iVar32 = *(int *)(local_bc[2] + 0x78) + uVar22 * 0x80;
  do {
    bVar42 = (bool)hasExclusiveAccess((undefined4 *)(iVar32 + 0x10));
  } while (!bVar42);
  *(undefined4 *)(iVar32 + 0x10) = local_10c[4];
  *(undefined4 *)(iVar32 + 0x14) = uVar31;
  do {
    bVar42 = (bool)hasExclusiveAccess((int *)(iVar32 + 0x18));
  } while (!bVar42);
  *(int *)(iVar32 + 0x18) = iVar39;
  *(int *)(iVar32 + 0x1c) = iVar5;
  do {
    uVar31 = *(undefined4 *)(iVar32 + 0x24);
    bVar42 = (bool)hasExclusiveAccess((int *)(iVar32 + 0x20));
  } while (!bVar42);
  *(int *)(iVar32 + 0x20) = iVar11;
  *(int *)(iVar32 + 0x24) = iVar12;
  local_10c = (undefined4 *)FUN_016541d8(uVar33,local_10c,&DAT_3b9aca00,uVar31);
  uVar17 = local_10c[8];
  local_10c[8] = uVar17 + 1;
  local_10c[9] = local_10c[9] + (uint)(0xfffffffe < uVar17);
  FUN_01654904(local_10c,local_bc + 2);
  if (local_10c[0x16] == 0) {
    iVar39 = local_10c[0x14];
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar5 = *(int *)(iVar39 + 0x10);
    if (iVar5 != *(int *)(iVar39 + 8)) goto LAB_01660064;
    iVar12 = local_bc[2];
    iVar11 = local_bc[3];
    pcVar30 = (char *)(iVar12 + 0x9c);
    if (*pcVar30 == '\0') {
      iVar5 = 1;
      bVar42 = (bool)hasExclusiveAccess(pcVar30);
      if (!bVar42) goto LAB_0165fed8;
      *pcVar30 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0165fed8:
      FUN_01280da8(pcVar30,iVar5,*(int *)(iVar39 + 8),*(undefined4 *)(iVar39 + 0xc));
    }
    FUN_0128236c(pcVar30);
    piVar40 = *(int **)(iVar12 + 0xa4);
    uVar17 = *(uint *)(iVar12 + 0xa8) & 0x1ffffff0;
    iVar39 = -uVar17;
    piVar34 = piVar40 + uVar17;
    do {
      if (iVar39 == 0) {
        iVar39 = (*(uint *)(iVar12 + 0xa8) & 0xf) << 2;
        goto LAB_0165ffdc;
      }
      bVar42 = true;
      if (((((((*piVar40 == iVar11) || (piVar40[1] == iVar11)) || (piVar40[2] == iVar11)) ||
            ((piVar40[3] == iVar11 || (piVar40[4] == iVar11)))) ||
           ((piVar40[5] == iVar11 || ((piVar40[6] == iVar11 || (piVar40[7] == iVar11)))))) ||
          (piVar40[8] == iVar11)) ||
         ((((piVar40[9] == iVar11 || (piVar40[10] == iVar11)) || (piVar40[0xb] == iVar11)) ||
          (((piVar40[0xc] == iVar11 || (piVar40[0xd] == iVar11)) || (piVar40[0xe] == iVar11))))))
      break;
      piVar1 = piVar40 + 0xf;
      iVar39 = iVar39 + 0x10;
      piVar40 = piVar40 + 0x10;
    } while (*piVar1 != iVar11);
    goto LAB_01660008;
  }
LAB_01660064:
  iVar39 = local_bc[2];
  iVar5 = local_bc[3];
  pcVar30 = (char *)(iVar39 + 0x9c);
  if (*pcVar30 == '\0') {
    bVar42 = (bool)hasExclusiveAccess(pcVar30);
    if (!bVar42) goto LAB_016600a0;
    *pcVar30 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_016600a0:
    FUN_01280da8(pcVar30);
  }
  FUN_0128236c(pcVar30);
  iVar12 = *(int *)(iVar39 + 0xa8);
  piVar34 = (int *)(iVar39 + 0x80);
  iVar11 = 0;
  goto LAB_016600bc;
code_r0x0165f788:
  ppppuVar35 = (uint ****)*puVar28;
  ppppuVar26 = *(uint *****)(iVar5 + 0xc);
  if ((uint ****)*puVar28 != ppppuVar6 || *(uint *****)(iVar5 + 0xc) != ppppuVar21)
  goto LAB_0165f720;
  goto LAB_0165f77c;
  while( true ) {
    iVar5 = *piVar34;
    iVar39 = iVar39 + -4;
    piVar34 = piVar34 + 1;
    if (iVar5 == iVar11) break;
LAB_0165ffdc:
    if (iVar39 == 0) {
      bVar42 = false;
      goto LAB_01660008;
    }
  }
  bVar42 = true;
LAB_01660008:
  FUN_01282570(pcVar30);
  if (*pcVar30 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar30);
      if (bVar2) {
        *pcVar30 = '\0';
        goto LAB_01660048;
      }
    } while (*pcVar30 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar30);
LAB_01660048:
  if (!bVar42) goto LAB_01660080;
  goto LAB_0165fd9c;
LAB_01660080:
  *(undefined1 *)((int)local_10c + 0x65) = 1;
LAB_0165fa3c:
  iVar39 = *(int *)(local_bc[2] + 0x1c);
  if (iVar39 != 0) {
    iVar5 = *(int *)(local_bc[2] + 0x20);
    (**(code **)(iVar5 + 0x14))(iVar39 + (*(int *)(iVar5 + 8) - 1U & 0xfffffff8) + 8);
  }
LAB_0165fa70:
  FUN_015f3b0c(&local_a0,1);
  local_10c[10] = local_a0;
  local_10c[0xb] = local_9c;
  local_10c[0xc] = local_98;
  FUN_015f3b0c(&local_a0,1);
  local_10c[0x10] = 0;
  *local_10c = local_a0;
  local_10c[1] = local_9c;
  local_10c[2] = local_98;
LAB_0165f928:
  if (*(char *)((int)local_10c + 0x66) != '\0') goto LAB_0165ed18;
  goto LAB_0165f0a8;
  while( true ) {
    iVar25 = *(int *)(iVar39 + 0xa4);
    iVar11 = iVar32 + 1;
    if (*(int *)(iVar25 + iVar32 * 4) == iVar5) break;
LAB_016600bc:
    iVar32 = iVar11;
    if (iVar12 == iVar32) {
      FUN_01282570(pcVar30);
      if (*pcVar30 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar42 = (bool)hasExclusiveAccess(pcVar30);
          if (bVar42) {
            *pcVar30 = '\0';
            bVar42 = true;
            goto LAB_0166018c;
          }
        } while (*pcVar30 == '\x01');
      }
LAB_01660178:
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar30);
      bVar42 = iVar12 == iVar32;
      goto LAB_0166018c;
    }
  }
  *(undefined4 *)(iVar25 + iVar32 * 4) = *(undefined4 *)(iVar25 + (iVar12 + -1) * 4);
  *(int *)(iVar39 + 0xa8) = iVar12 + -1;
  DataMemoryBarrier(0xb);
  do {
    bVar42 = (bool)hasExclusiveAccess(piVar34);
  } while (!bVar42);
  *piVar34 = *piVar34 + 0x10000;
  DataMemoryBarrier(0xb);
  FUN_01282570(pcVar30);
  if (*pcVar30 != '\x01') goto LAB_01660178;
  DataMemoryBarrier(0xb);
  while( true ) {
    bVar42 = false;
    bVar2 = (bool)hasExclusiveAccess(pcVar30);
    if (bVar2) break;
    if (*pcVar30 != '\x01') goto LAB_01660178;
  }
  *pcVar30 = '\0';
LAB_0166018c:
  *(bool *)((int)local_10c + 0x65) = bVar42;
  goto LAB_0165fa3c;
LAB_0165ed18:
  piVar34 = local_bc;
  uVar33 = local_10c[0x12];
  uVar17 = local_10c[0x13];
  local_10c[0x12] = uVar17;
  uVar33 = uVar33 ^ uVar33 << 0x11;
  iVar5 = local_bc[2];
  iVar39 = *(int *)(iVar5 + 100);
  uVar33 = uVar17 >> 0x10 ^ uVar33 >> 7 ^ uVar17 ^ uVar33;
  local_10c[0x13] = uVar33;
  DataMemoryBarrier(0xb);
  local_f8 = (uint)((ulonglong)(iVar39 + 1) * (ulonglong)(uVar33 + uVar17) >> 0x20);
  *(undefined1 *)(iVar5 + 0x70) = 1;
  uVar33 = local_f8 + *(int *)(iVar5 + 100) + 1;
  if (local_f8 < uVar33) {
    uVar43 = thunk_FUN_016de0ee(uVar33,0x1c4);
    ppppuVar35 = (uint ****)((int)uVar43 + (int)((ulonglong)uVar43 >> 0x20));
    piVar40 = (int *)(iVar5 + 0x60);
LAB_0165ede0:
    do {
      pcVar30 = (char *)(*(int *)(iVar5 + 0x50) + (*(uint *)(iVar5 + 100) & local_f8) * 0xc);
      if (*pcVar30 == '\0') {
        bVar42 = (bool)hasExclusiveAccess(pcVar30);
        if (!bVar42) goto LAB_0165ee20;
        *pcVar30 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0165ee20:
        FUN_01280da8(pcVar30);
      }
      FUN_0128236c(pcVar30);
      iVar39 = *(int *)(pcVar30 + 8);
      if (iVar39 != 0) {
        iVar11 = *(int *)(*(int *)(iVar39 + 8) + 0x1c);
        iVar12 = *(int *)(iVar39 + iVar11);
        *(int *)(pcVar30 + 8) = iVar12;
        if (iVar12 == 0) {
          pcVar30[4] = '\0';
          pcVar30[5] = '\0';
          pcVar30[6] = '\0';
          pcVar30[7] = '\0';
        }
        else {
          *(undefined4 *)(iVar12 + *(int *)(*(int *)(iVar12 + 8) + 0x1c) + 4) = 0;
          iVar11 = *(int *)(*(int *)(iVar39 + 8) + 0x1c);
        }
        *(undefined4 *)(iVar39 + iVar11) = 0;
        *(undefined4 *)(iVar39 + *(int *)(*(int *)(iVar39 + 8) + 0x1c) + 4) = 0;
        do {
          bVar42 = (bool)hasExclusiveAccess(piVar40);
        } while (!bVar42);
        *piVar40 = *piVar40 + -1;
      }
      bVar42 = true;
      local_a0 = (uint ****)0x0;
      if (*(char *)(ppppuVar35 + 0xd) == '\x01') {
        ppppuVar6 = ppppuVar35;
      }
      else {
        ppppuVar6 = (uint ****)FUN_01284e64(ppppuVar35);
        if (ppppuVar6 == (uint ****)0x0) {
          FUN_01283788(&local_68);
          bVar42 = false;
          local_a0 = (uint ****)&DAT_00000001;
          local_9c = local_68;
          local_98 = piStack_64;
          local_94 = local_60;
          local_90 = local_5c;
          local_8c = local_58;
          local_88 = local_54;
          local_84 = uStack_50;
          local_80 = iStack_4c;
          local_7c = local_48;
          local_78 = uStack_44;
          uStack_74 = uStack_40;
          uStack_70 = uStack_3c;
          uStack_6c = uStack_38;
          ppppuVar6 = (uint ****)&local_9c;
        }
      }
      pppuVar19 = ppppuVar6[8];
      pppuVar23 = ppppuVar6[9];
      iVar11 = (int)pppuVar23 * -4;
      pppuVar13 = pppuVar23;
      do {
        if (iVar11 == 0) goto LAB_0165eef4;
        iVar12 = -4 - iVar11;
        iVar11 = iVar11 + 4;
        pppuVar13 = (uint ***)((int)pppuVar13 + -1);
      } while (*(char **)((int)pppuVar19 + iVar12) != pcVar30);
      pppuVar19[(int)pppuVar13] = pppuVar19[(int)pppuVar23 + -1];
      ppppuVar6[9] = (uint ***)((int)pppuVar23 + -1);
LAB_0165eef4:
      if (!bVar42) {
        do {
          iVar11 = DAT_018dd954 + -1;
          bVar42 = (bool)hasExclusiveAccess(0x18dd954);
        } while (!bVar42);
        DAT_018dd954 = iVar11;
        if (local_80 != 0) {
          thunk_FUN_016d3fb4(local_7c);
        }
        if (local_88 != 3) {
          if (local_88 == 0) {
            FUN_012848c0(local_84);
          }
          else if (local_88 == 1) {
            FUN_01283d28();
          }
          else {
            FUN_01284358();
          }
        }
      }
      if (*pcVar30 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar42 = (bool)hasExclusiveAccess(pcVar30);
          if (bVar42) {
            *pcVar30 = '\0';
            goto LAB_0165edc8;
          }
        } while (*pcVar30 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar30);
LAB_0165edc8:
      if (iVar39 != 0) {
        (**(code **)(*(int *)(iVar39 + 8) + 0x18))(iVar39);
        goto LAB_0165ede0;
      }
      local_f8 = local_f8 + 1;
    } while (local_f8 != uVar33);
  }
  iVar39 = piVar34[2];
  uVar17 = piVar34[3];
  uVar33 = *(uint *)(iVar39 + 0x7c);
  if (uVar33 <= uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar17,uVar33,&DAT_018acfbc);
  }
  iVar39 = *(int *)(iVar39 + 0x78) + uVar17 * 0x80;
  uVar31 = local_10c[5];
  do {
    bVar42 = (bool)hasExclusiveAccess((undefined4 *)(iVar39 + 0x10));
  } while (!bVar42);
  *(undefined4 *)(iVar39 + 0x10) = local_10c[4];
  *(undefined4 *)(iVar39 + 0x14) = uVar31;
  uVar31 = local_10c[7];
  do {
    bVar42 = (bool)hasExclusiveAccess((undefined4 *)(iVar39 + 0x18));
  } while (!bVar42);
  *(undefined4 *)(iVar39 + 0x18) = local_10c[6];
  *(undefined4 *)(iVar39 + 0x1c) = uVar31;
  uVar31 = local_10c[9];
  do {
    bVar42 = (bool)hasExclusiveAccess((undefined4 *)(iVar39 + 0x20));
  } while (!bVar42);
  *(undefined4 *)(iVar39 + 0x20) = local_10c[8];
  *(undefined4 *)(iVar39 + 0x24) = uVar31;
  iVar39 = local_bc[2];
  pcVar30 = (char *)(iVar39 + 0x88);
  if (*pcVar30 == '\0') {
    bVar42 = (bool)hasExclusiveAccess(pcVar30);
    if (bVar42) {
      *pcVar30 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_016601c0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar30);
LAB_016601c0:
  FUN_0128236c(pcVar30);
  piVar34 = (int *)(iVar39 + 0x8c);
  iVar5 = *(int *)(iVar39 + 0x94);
  if (iVar5 == *piVar34) {
    FUN_016431c4(piVar34);
  }
  *(undefined4 **)(*(int *)(iVar39 + 0x90) + iVar5 * 4) = local_10c;
  uVar33 = iVar5 + 1;
  *(uint *)(iVar39 + 0x94) = uVar33;
  if (uVar33 == *(uint *)(iVar39 + 0x4c)) {
    local_a0 = *(uint *****)(iVar39 + 0x90);
    local_9c = local_a0 + uVar33;
    *(undefined4 *)(iVar39 + 0x94) = 0;
    local_90 = 0;
    local_98 = piVar34;
    local_94 = uVar33;
    while (local_a0 != local_9c) {
      ppppuVar35 = local_a0 + 1;
      pppuVar13 = *local_a0;
      ppuVar36 = pppuVar13[0x17];
      pppuVar13[0x17] = (uint **)0x0;
      local_a0 = ppppuVar35;
      if (ppuVar36 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("park missing",0xc,&DAT_018acfcc);
      }
      while( true ) {
        ppuVar8 = pppuVar13[0x16];
        pppuVar13[0x16] = (uint **)0x0;
        if (ppuVar8 == (uint **)0x0) break;
LAB_01660390:
        DataMemoryBarrier(0xb);
        do {
          puVar15 = *ppuVar8;
          bVar42 = (bool)hasExclusiveAccess(ppuVar8);
        } while (!bVar42);
        *ppuVar8 = puVar15 + 0xfffffff0;
        DataMemoryBarrier(0xb);
        if (puVar15 < (uint *)0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
        }
        if (((uint)puVar15 & 0xffffffc0) == 0x40) {
          (*(code *)ppuVar8[2][2])();
        }
      }
      ppuVar8 = pppuVar13[0x14];
      ppuVar14 = ppuVar8 + 2;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      local_34 = (uint ****)ppuVar8[3];
      if (ppuVar8[4] != *ppuVar14) {
        ppppuVar35 = (uint ****)*ppuVar14;
        do {
          local_68 = (uint ****)((int)ppppuVar35 + 1);
          if (local_34 == ppppuVar35) {
            ppppuVar6 = local_68;
          }
          else {
            if (local_68 == local_34) {
              FUN_015fef84(1,&local_34,&local_68,0);
              goto LAB_01660a9c;
            }
            ppppuVar6 = local_34;
          }
          ppppuVar21 = (uint ****)*ppuVar14;
          ppppuVar26 = (uint ****)ppuVar8[3];
          if (ppppuVar21 == ppppuVar35 && ppppuVar26 == local_34) {
            DataMemoryBarrier(0xb);
            do {
              bVar42 = (bool)hasExclusiveAccess(ppuVar14);
              if (bVar42) {
                *ppuVar14 = (uint *)local_68;
                ppuVar8[3] = (uint *)ppppuVar6;
                DataMemoryBarrier(0xb);
                ppuVar8 = (uint **)ppuVar8[5][(uint)ppppuVar35 & 0xff];
                goto LAB_01660390;
              }
              ppppuVar21 = (uint ****)*ppuVar14;
              ppppuVar26 = (uint ****)ppuVar8[3];
            } while (ppppuVar21 == ppppuVar35 && ppppuVar26 == local_34);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          ppppuVar35 = ppppuVar21;
          local_34 = ppppuVar26;
        } while ((uint ****)ppuVar8[4] != ppppuVar21);
      }
      puVar38 = ppuVar36[2];
      puVar15 = puVar38 + 0xb;
      if ((char)*puVar15 == '\0') {
        DataMemoryBarrier(0xb);
        do {
          bVar42 = (bool)hasExclusiveAccess(puVar15);
          if (bVar42) {
            *(char *)puVar15 = '\x01';
            DataMemoryBarrier(0xb);
            if (puVar38[2] == 2 || puVar38[2] == 1) {
LAB_01660464:
              if (puVar38[3] == 0x80000000) {
                if (*(int *)(puVar38[4] + 0xc) != 0) {
                  FUN_0127f168(puVar38[4] + 0xc);
                }
              }
              else {
                FUN_0163f090(iVar39 + 0xb8);
              }
            }
            else {
              if (*(undefined1 **)(iVar39 + 0x148) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                             ,0x73,&DAT_018ad3e4);
              }
              DataMemoryBarrier(0xb);
              if (*(char *)(iVar39 + 0x138) == '\0') {
                DataMemoryBarrier(0xb);
                *(undefined1 *)(iVar39 + 0x138) = 1;
                DataMemoryBarrier(0xb);
                FUN_0165bf54(iVar39 + 0x110,iVar39,0xffffffff,0xffffffff);
                goto LAB_01660464;
              }
            }
            DataMemoryBarrier(0xb);
            *(undefined1 *)(puVar38 + 0xb) = 0;
            goto LAB_0166040c;
          }
        } while ((char)*puVar15 == '\0');
      }
      ClearExclusiveLocal();
LAB_0166040c:
      DataMemoryBarrier(0xb);
      if (ppuVar36[4] != (uint *)0x0) {
        FUN_0127f168(ppuVar36 + 4);
      }
      DataMemoryBarrier(0xb);
      do {
        puVar15 = *ppuVar36;
        bVar42 = (bool)hasExclusiveAccess(ppuVar36);
      } while (!bVar42);
      *ppuVar36 = (uint *)((int)puVar15 + -1);
      if (puVar15 == (uint *)0x1) {
        DataMemoryBarrier(0xb);
        FUN_01658b0c(ppuVar36);
      }
      FUN_016392ac(pppuVar13);
    }
    FUN_0164e370(&local_a0);
    while (puVar15 = (uint *)FUN_0163a858(iVar39 + 8), puVar15 != (uint *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        uVar33 = *puVar15;
        bVar42 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar42);
      *puVar15 = uVar33 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar33 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
      }
      if ((uVar33 & 0xffffffc0) == 0x40) {
        (**(code **)(puVar15[2] + 8))();
      }
    }
    FUN_01282570(pcVar30);
    if (*pcVar30 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar42 = (bool)hasExclusiveAccess(pcVar30);
        if (bVar42) {
          *pcVar30 = '\0';
          goto LAB_016605e0;
        }
      } while (*pcVar30 == '\x01');
    }
  }
  else {
    FUN_01282570(pcVar30);
    if (*pcVar30 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar42 = (bool)hasExclusiveAccess(pcVar30);
        if (bVar42) {
          *pcVar30 = '\0';
          goto LAB_016605e0;
        }
      } while (*pcVar30 == '\x01');
    }
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar30);
LAB_016605e0:
  if (local_b0 == 0) {
    unaff_r5 = 0xffffffff;
    do {
      local_b0 = 0xffffffff;
      if (local_a4 == 0) {
        *local_12c = local_130;
        local_b0 = 0;
        FUN_016456d0(&local_c0);
        FUN_00eb5a38(&local_d4);
        DataMemoryBarrier(0xb);
        do {
          iVar39 = *piVar29;
          bVar42 = (bool)hasExclusiveAccess(piVar29);
        } while (!bVar42);
        *piVar29 = iVar39 + -1;
        if (iVar39 == 1) {
          DataMemoryBarrier(0xb);
          FUN_016586fc(piVar29);
        }
LAB_01660690:
        if ((char)piVar27[0xe] == '\x01') {
LAB_016607e8:
          piVar27[6] = local_120;
          piVar27[7] = local_124;
          iVar39 = piVar27[6];
          iVar5 = piVar27[7];
          uVar33 = param_1[0xb];
          piVar27[6] = *puVar4;
          piVar27[7] = uVar33;
        }
        else {
          if ((char)piVar27[0xe] != '\x02') {
            FUN_015e8e6c(piVar27,FUN_01655ec4);
            *(undefined1 *)(piVar27 + 0xe) = 1;
            goto LAB_016607e8;
          }
          iVar39 = 0;
          iVar5 = 0;
        }
        local_a0 = (uint ****)0x2;
        if (*puVar10 == 1) {
          bVar42 = *puVar18 == 0 && param_1[0xf] == 0;
          if (*puVar18 != 0 || param_1[0xf] != 0) {
            unaff_r5 = param_1[0x10];
            bVar42 = unaff_r5 == 0;
          }
          if (!bVar42) {
            puVar28 = (undefined4 *)param_1[0x11];
            pcVar16 = (code *)*puVar28;
            if (pcVar16 != (code *)0x0) {
              (*pcVar16)(unaff_r5);
            }
            if (puVar28[1] != 0) {
              thunk_FUN_016d3fb4(unaff_r5);
            }
          }
        }
        else if ((*puVar10 == 0) && (piVar34 = (int *)*puVar18, piVar34 != (int *)0x0)) {
          DataMemoryBarrier(0xb);
          do {
            iVar11 = *piVar34;
            bVar42 = (bool)hasExclusiveAccess(piVar34);
          } while (!bVar42);
          *piVar34 = iVar11 + -1;
          if (iVar11 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01659540(*puVar18);
          }
        }
        *puVar10 = (uint)local_a0;
        param_1[0xd] = (uint)local_9c;
        param_1[0xe] = (uint)local_98;
        param_1[0xf] = local_94;
        param_1[0x10] = local_90;
        param_1[0x11] = local_8c;
        local_e0 = (uint)*(byte *)(piVar27 + 0xe);
        local_dc = local_a0;
        if (local_e0 != 1) {
          if (local_e0 == 2) goto LAB_016608c4;
          FUN_015e8e6c(piVar27,FUN_01655ec4);
          local_e0 = 1;
          *(undefined1 *)(piVar27 + 0xe) = 1;
          local_dc = extraout_r1_03;
        }
        piVar27[6] = iVar39;
        piVar27[7] = iVar5;
LAB_016608c4:
        local_e4 = 0;
        local_e8 = 0;
        local_f0[0] = 1;
        FUN_016531b0(param_1 + 6,local_f0);
LAB_01660fa4:
        FUN_016354e0(param_1);
switchD_0165e858_caseD_2:
        return;
      }
      local_a4 = local_a4 + -1;
      piVar34 = (int *)(local_a8 + local_a4 * 8);
      (**(code **)(*piVar34 + 4))(piVar34[1]);
      bVar42 = 0xfffffffe < local_b0;
      local_b0 = local_b0 + 1;
    } while (bVar42);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb715c(&DAT_018ad0cc);
}

