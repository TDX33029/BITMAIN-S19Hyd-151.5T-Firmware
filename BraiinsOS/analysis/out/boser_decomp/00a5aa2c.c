// FUN_00a5aa2c @ 00a5aa2c size=6172 calls_out=21 calls_in=2
// strings: 

void FUN_00a5aa2c(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint ****ppppuVar4;
  uint *****pppppuVar5;
  int **ppiVar6;
  int **ppiVar7;
  uint *****pppppuVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint ****ppppuVar12;
  uint ***pppuVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint ****ppppuVar17;
  uint uVar18;
  uint uVar19;
  int extraout_r2;
  uint uVar20;
  int iVar21;
  uint ****ppppuVar22;
  uint uVar23;
  undefined1 uVar24;
  uint *puVar25;
  uint ****ppppuVar26;
  uint ****ppppuVar27;
  uint ****ppppuVar28;
  uint ****ppppuVar29;
  int *piVar30;
  uint ****ppppuVar31;
  uint *****pppppuVar32;
  uint *****pppppuVar33;
  uint *****pppppuVar34;
  bool bVar35;
  undefined8 uVar36;
  uint local_1024;
  int local_1018;
  uint *****local_1000;
  undefined4 local_fc8;
  undefined4 uStack_fc4;
  undefined4 uStack_fc0;
  undefined1 auStack_fb8 [68];
  undefined1 auStack_f74 [84];
  undefined4 local_f20;
  uint *****pppppuStack_f1c;
  undefined4 uStack_f18;
  uint local_f14;
  undefined4 local_f10;
  uint *puStack_f0c;
  uint *****pppppuStack_f08;
  uint local_f00;
  int local_efc;
  uint *****local_ef8;
  uint ****local_ef4;
  int **local_ef0;
  undefined4 uStack_eec;
  undefined4 uStack_ee8;
  undefined4 local_ee4;
  undefined4 uStack_ee0;
  undefined4 uStack_edc;
  undefined4 uStack_ed8;
  undefined4 uStack_ed4;
  undefined4 local_ed0;
  undefined4 uStack_ecc;
  uint *****local_ec8;
  uint ****local_ec4;
  int **local_ec0;
  undefined4 local_ebc;
  uint *****local_eb8;
  undefined4 uStack_eb4;
  uint local_eb0;
  undefined4 uStack_eac;
  uint *local_ea8;
  uint *****local_ea4;
  undefined1 local_ea0;
  uint *local_e98;
  undefined1 *local_e94;
  undefined1 local_e60;
  undefined1 local_e00;
  uint *local_df8;
  undefined1 *local_df4;
  uint *local_cf0;
  undefined1 *local_cec;
  undefined1 auStack_ce8 [528];
  uint local_ad8;
  uint local_ad4;
  uint local_ad0;
  uint local_acc;
  undefined4 *local_a88;
  undefined4 *local_a78;
  undefined4 *local_9d8;
  undefined4 *local_8d0;
  undefined1 auStack_8c8 [520];
  uint *****local_6c0;
  uint ****local_6bc;
  int **local_6b8;
  int local_6b4;
  uint local_6b0;
  uint uStack_6ac;
  uint *****local_6a8;
  uint local_6a4;
  undefined4 local_698;
  undefined1 auStack_694 [84];
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  uint ****local_630;
  uint *****local_62c;
  undefined4 local_628;
  uint ****local_620;
  uint *****local_61c;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  uint ****local_580;
  uint ****local_57c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  int *local_478;
  uint *****local_474;
  undefined1 auStack_448 [528];
  int *local_238 [132];
  undefined1 uStack_25;
  
  uVar36 = thunk_FUN_01bee35a(param_1,param_2,0x2c0);
  puVar15 = (undefined4 *)((ulonglong)uVar36 >> 0x20);
  puVar25 = (uint *)((int)uVar36 + extraout_r2);
  ppppuVar31 = (uint ****)puVar15[0x27];
  iVar21 = puVar15[0x26];
  if ((char)puVar25[4] == '\0') {
    FUN_019ae6ac(&local_ad8);
    *puVar25 = local_ad8;
    puVar25[1] = local_ad4;
    puVar25[2] = local_ad0;
    puVar25[3] = local_acc;
    *(undefined1 *)(puVar25 + 4) = 1;
  }
  local_6b0 = *puVar25;
  uStack_6ac = puVar25[1];
  local_6a8 = (uint *****)puVar25[2];
  local_6a4 = puVar25[3];
  *puVar25 = local_6b0 + 1;
  puVar25[1] = uStack_6ac + (0xfffffffe < local_6b0);
  local_6c0 = (uint *****)&DAT_0056d238;
  local_6bc = (uint ****)0x0;
  local_6b8 = (int **)0x0;
  local_6b4 = 0;
  if (ppppuVar31 != (uint ****)0x0) {
    FUN_009462b0(&local_6c0,ppppuVar31,&local_6b0);
    ppppuVar17 = (uint ****)0x0;
LAB_00a5ac28:
    ppppuVar29 = *(uint *****)(iVar21 + (int)ppppuVar17 * 4);
    do {
      pppuVar13 = *ppppuVar29;
      bVar3 = (bool)hasExclusiveAccess(ppppuVar29);
    } while (!bVar3);
    *ppppuVar29 = (uint ***)((int)pppuVar13 + 1);
    if (-1 < (int)pppuVar13) {
      ppppuVar12 = (uint ****)ppppuVar29[0xf];
      ppppuVar22 = (uint ****)ppppuVar29[0xe];
      ppppuVar28 = (uint ****)ppppuVar29[0xc];
      ppppuVar26 = (uint ****)ppppuVar29[0xd];
      uVar11 = FUN_00b06a38(local_6b0,uStack_6ac,local_6a8,local_6a4,ppppuVar28,ppppuVar26,
                            ppppuVar22);
      if (local_6b8 == (int **)0x0) {
        FUN_009462b0(&local_6c0,1,&local_6b0);
      }
      bVar3 = false;
      local_1018 = 0;
      uVar23 = uVar11;
      do {
        uVar23 = (uint)local_6bc & uVar23;
        uVar20 = *(uint *)((int)local_6c0 + uVar23);
        uVar18 = uVar20 ^ (uVar11 >> 0x19) * 0x1010101;
        uVar18 = ~uVar18 & 0x80808080 & uVar18 + 0xfefefeff;
LAB_00a5acf4:
        if (uVar18 != 0) {
          uVar19 = uVar23 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                           (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) &
                   (uint)local_6bc;
          ppppuVar27 = (uint ****)
                       ((uint)ppppuVar28 ^ (uint)local_6c0[uVar19 * -6 + -6] |
                       (uint)ppppuVar26 ^ (uint)local_6c0[uVar19 * -6 + -5]);
          bVar35 = ppppuVar27 == (uint ****)0x0;
          ppppuVar4 = ppppuVar28;
          if (bVar35) {
            ppppuVar27 = local_6c0[uVar19 * -6 + -4];
            ppppuVar4 = ppppuVar22;
          }
          if (!bVar35 || ppppuVar4 != ppppuVar27) goto code_r0x00a5ad4c;
          ppppuVar12 = local_6c0[uVar19 * -6 + -2];
          local_6c0[uVar19 * -6 + -2] = ppppuVar29;
          DataMemoryBarrier(0xb);
          do {
            pppuVar13 = *ppppuVar12;
            bVar3 = (bool)hasExclusiveAccess(ppppuVar12);
          } while (!bVar3);
          *ppppuVar12 = (uint ***)((int)pppuVar13 + -1);
          if (pppuVar13 == (uint ***)0x1) {
            DataMemoryBarrier(0xb);
            FUN_00a96290();
          }
          goto LAB_00a5ae04;
        }
        uVar18 = uVar20 & 0x80808080;
        if (bVar3) {
LAB_00a5ad98:
          if ((uVar18 & uVar20 << 1) != 0) goto LAB_00a5ae18;
          bVar3 = true;
        }
        else {
          if (uVar18 != 0) {
            local_1024 = uVar23 + ((uint)LZCOUNT((uVar20 & 0x80) << 0x18 |
                                                 (uVar18 >> 8 & 0xff) << 0x10 |
                                                 (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3
                                  ) & (uint)local_6bc;
            goto LAB_00a5ad98;
          }
          bVar3 = false;
        }
        local_1018 = local_1018 + 4;
        uVar23 = local_1018 + uVar23;
      } while( true );
    }
    goto LAB_00a5c210;
  }
LAB_00a5aab8:
  uVar18 = local_6a4;
  pppppuVar8 = local_6a8;
  uVar23 = uStack_6ac;
  uVar11 = local_6b0;
  iVar21 = local_6b4;
  ppiVar6 = local_6b8;
  ppppuVar17 = local_6bc;
  pppppuVar5 = local_6c0;
  puVar9 = (undefined4 *)((uint)&local_6c0 | 0x10);
  piVar16 = (int *)puVar15[0x28];
  do {
    iVar10 = *piVar16;
    bVar3 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar3);
  *piVar16 = iVar10 + 1;
  if (iVar10 < 0) goto LAB_00a5c210;
  FUN_009d4768(&local_fc8);
  FUN_009d4d4c(&local_6c0,puVar15[0xf]);
  ppiVar7 = local_6b8;
  ppppuVar29 = local_6bc;
  pppppuVar32 = local_6c0;
  FUN_01bed4e2(auStack_f74,puVar15 + 0x10,0x54);
  do {
    do {
      local_f00 = DAT_01d50470;
      local_efc = DAT_01d50474;
      uVar20 = DAT_01d50470 + 1;
      iVar10 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar3 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar3);
    bVar3 = DAT_01d50470 == 0;
    bVar35 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar20;
    DAT_01d50474 = iVar10;
  } while (bVar3 && bVar35);
  FUN_01bed4e2(&uStack_eec,auStack_fb8,0x98);
  local_df4 = &uStack_25;
  local_df8 = &local_f00;
  local_ef4 = ppppuVar29;
  local_ef8 = pppppuVar32;
  uVar36 = thunk_FUN_01bee35a(local_df8,0x20);
  puVar25 = (uint *)((int)uVar36 + (int)((ulonglong)uVar36 >> 0x20));
  local_e00 = 0;
  local_ef0 = ppiVar7;
  if ((char)puVar25[0xe] != '\x01') {
    if ((char)puVar25[0xe] == '\x02') {
      uVar24 = 1;
      FUN_009df648(&local_ef8);
      goto LAB_00a5abd0;
    }
    FUN_019a2bcc(puVar25,&LAB_019efb68);
    *(undefined1 *)(puVar25 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_ce8,&local_ef8,0x108);
  if (0x7ffffffe < *puVar25) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar25 = *puVar25 + 1;
  uVar20 = puVar25[1];
  FUN_01bed4e2(&local_ad8,&local_ef8,0x108);
  if (uVar20 == 2) {
    FUN_009df648(&local_ad8);
    uVar24 = 0;
    *puVar25 = *puVar25 - 1;
LAB_00a5abd0:
    local_6c0 = (uint *****)CONCAT31(local_6c0._1_3_,uVar24);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_6c0,&DAT_01c0edd0);
  }
  local_1000 = (uint *****)*local_9d8;
  ppppuVar12 = (uint ****)local_9d8[1];
  if ((uVar20 & 1) == 0) {
    pppppuVar32 = (uint *****)puVar25[2];
    do {
      ppppuVar29 = *pppppuVar32;
      bVar3 = (bool)hasExclusiveAccess(pppppuVar32);
    } while (!bVar3);
    *pppppuVar32 = (uint ****)((int)ppppuVar29 + 1);
    if ((int)ppppuVar29 < 0) goto LAB_00a5c210;
    ppppuVar29 = pppppuVar32[0x82];
    if (ppppuVar29 != (uint ****)0x0) {
      do {
        pppuVar13 = *ppppuVar29;
        bVar3 = (bool)hasExclusiveAccess(ppppuVar29);
      } while (!bVar3);
      *ppppuVar29 = (uint ***)((int)pppuVar13 + 1);
      if ((int)pppuVar13 < 0) goto LAB_00a5c210;
      ppppuVar31 = pppppuVar32[0x83];
    }
    FUN_01bed4e2((uint)local_238 | 4,&local_ef8,0x100);
    FUN_01bed4e2(auStack_448,local_238,0x104);
    local_698 = 0;
    FUN_01bed4e2(auStack_694,auStack_448,0x104);
    local_6b8 = (int **)&PTR_FUN_01c0f144;
    local_6c0 = (uint *****)0xcc;
    puVar9[4] = local_1000;
    puVar9[5] = ppppuVar12;
    *puVar9 = 0;
    puVar9[1] = 0;
    local_6bc = (uint ****)0x0;
    local_588 = 0;
    local_58c = 0;
    local_590 = 0;
    local_238[0] = (int *)0x0;
    local_6a8 = pppppuVar32;
    local_580 = ppppuVar29;
    local_57c = ppppuVar31;
    iVar10 = FUN_01be5878(local_238,0x20,0x160);
    piVar16 = local_238[0];
    if ((iVar10 != 0) || (local_238[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x160);
    }
    FUN_01bed4e2(local_238[0],&local_6c0,0x160);
    iVar10 = FUN_01a88f0c(pppppuVar32 + 0x40,piVar16,piVar16);
    local_6c0 = local_1000;
    local_6bc = ppppuVar12;
    if (pppppuVar32[0x80] != (uint ****)0x0) {
      (*(code *)pppppuVar32[0x81][5])
                ((int)pppppuVar32[0x80] + ((int)pppppuVar32[0x81][2] - 1U & 0xfffffff8) + 8,
                 &local_6c0);
    }
    if (iVar10 != 0) {
      FUN_019dc904(puVar25[2],iVar10);
    }
  }
  else {
    pppppuVar32 = (uint *****)puVar25[2];
    do {
      ppppuVar31 = *pppppuVar32;
      bVar3 = (bool)hasExclusiveAccess(pppppuVar32);
    } while (!bVar3);
    *pppppuVar32 = (uint ****)((int)ppppuVar31 + 1);
    if ((int)ppppuVar31 < 0) goto LAB_00a5c210;
    ppppuVar31 = pppppuVar32[0x50];
    if (ppppuVar31 != (uint ****)0x0) {
      do {
        pppuVar13 = *ppppuVar31;
        bVar3 = (bool)hasExclusiveAccess(ppppuVar31);
      } while (!bVar3);
      *ppppuVar31 = (uint ***)((int)pppuVar13 + 1);
      if ((int)pppuVar13 < 0) goto LAB_00a5c210;
      ppppuVar29 = pppppuVar32[0x51];
    }
    FUN_01bed4e2((uint)local_238 | 4,&local_ef8,0x100);
    FUN_01bed4e2(auStack_448,local_238,0x104);
    local_698 = 0;
    FUN_01bed4e2(auStack_694,auStack_448,0x104);
    local_6b8 = (int **)&PTR_LAB_01c0f3ec;
    puVar9[4] = local_1000;
    puVar9[5] = ppppuVar12;
    local_6c0 = (uint *****)0xcc;
    *puVar9 = 0;
    puVar9[1] = 0;
    local_6bc = (uint ****)0x0;
    local_588 = 0;
    local_58c = 0;
    local_590 = 0;
    local_238[0] = (int *)0x0;
    local_6a8 = pppppuVar32;
    local_580 = ppppuVar31;
    local_57c = ppppuVar29;
    iVar10 = FUN_01be5878(local_238,0x20,0x160);
    piVar16 = local_238[0];
    if ((iVar10 != 0) || (local_238[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x160);
    }
    FUN_01bed4e2(local_238[0],&local_6c0,0x160);
    ppppuVar31 = (uint ****)FUN_01a89190(pppppuVar32 + 0x14,piVar16,piVar16);
    local_6c0 = local_1000;
    local_6bc = ppppuVar12;
    if (pppppuVar32[0x4e] != (uint ****)0x0) {
      (*(code *)pppppuVar32[0x4f][5])
                ((int)pppppuVar32[0x4e] + ((int)pppppuVar32[0x4f][2] - 1U & 0xfffffff8) + 8,
                 &local_6c0);
    }
    if (ppppuVar31 != (uint ****)0x0) {
      local_238[0] = (int *)((uint)local_238[0] & 0xffffff00);
      local_6c0 = pppppuVar32 + 2;
      local_6bc = ppppuVar31;
      local_6b8 = local_238;
      FUN_019ee860(&local_6c0);
    }
  }
  *puVar25 = *puVar25 - 1;
  if (*piVar16 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar3 = (bool)hasExclusiveAccess(piVar16);
    if (!bVar3) goto LAB_00a5b2cc;
    *piVar16 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00a5b2cc:
    (**(code **)(piVar16[2] + 0x10))(piVar16);
  }
  pppppuVar34 = (uint *****)&local_6c0;
  FUN_009d4d4c(pppppuVar34,puVar15[0xf]);
  local_f10 = puVar15[0x25];
  puStack_f0c = (uint *)puVar15[0x26];
  pppppuVar32 = (uint *****)puVar15[0x27];
  do {
    do {
      local_f00 = DAT_01d50470;
      local_efc = DAT_01d50474;
      uVar20 = DAT_01d50470 + 1;
      iVar10 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar3 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar3);
    bVar3 = DAT_01d50470 == 0;
    bVar35 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar20;
    DAT_01d50474 = iVar10;
  } while (bVar3 && bVar35);
  local_ebc = local_f20;
  local_eb8 = pppppuStack_f1c;
  uStack_eb4 = uStack_f18;
  local_eb0 = local_f14;
  local_e94 = &uStack_25;
  local_ec8 = local_6c0;
  local_e98 = &local_f00;
  local_ec4 = local_6bc;
  local_ea0 = 0;
  local_ec0 = local_6b8;
  pppppuStack_f08 = pppppuVar32;
  uStack_eac = local_f10;
  local_ea8 = puStack_f0c;
  local_ea4 = pppppuVar32;
  if ((char)puVar25[0xe] != '\x01') {
    if ((char)puVar25[0xe] == '\x02') {
      uVar24 = 1;
      FUN_009df0d4(&local_ef8);
      goto LAB_00a5b394;
    }
    FUN_019a2bcc(puVar25,&LAB_019efb68);
    *(undefined1 *)(puVar25 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_ce8,&local_ef8,0x68);
  if (0x7ffffffe < *puVar25) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar25 = *puVar25 + 1;
  uVar20 = puVar25[1];
  FUN_01bed4e2(&local_ad8,&local_ef8,0x68);
  if (uVar20 == 2) {
    FUN_009df0d4(&local_ad8);
    uVar24 = 0;
    *puVar25 = *puVar25 - 1;
LAB_00a5b394:
    local_6c0 = (uint *****)CONCAT31(local_6c0._1_3_,uVar24);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_6c0,&DAT_01c0fa30);
  }
  pppppuVar33 = (uint *****)*local_a78;
  ppppuVar31 = (uint ****)local_a78[1];
  if ((uVar20 & 1) == 0) {
    pppppuVar32 = (uint *****)puVar25[2];
    do {
      ppppuVar29 = *pppppuVar32;
      bVar3 = (bool)hasExclusiveAccess(pppppuVar32);
    } while (!bVar3);
    *pppppuVar32 = (uint ****)((int)ppppuVar29 + 1);
    if ((int)ppppuVar29 < 0) goto LAB_00a5c210;
    ppppuVar29 = pppppuVar32[0x82];
    if (ppppuVar29 != (uint ****)0x0) {
      do {
        pppuVar13 = *ppppuVar29;
        bVar3 = (bool)hasExclusiveAccess(ppppuVar29);
      } while (!bVar3);
      *ppppuVar29 = (uint ***)((int)pppuVar13 + 1);
      if ((int)pppuVar13 < 0) goto LAB_00a5c210;
      local_1000 = (uint *****)pppppuVar32[0x83];
    }
    FUN_01bed4e2((uint)local_238 | 4,&local_ef8,0x60);
    FUN_01bed4e2(auStack_448,local_238,100);
    local_698 = 0;
    FUN_01bed4e2(auStack_694,auStack_448,100);
    local_6b8 = (int **)&PTR_FUN_01c0f324;
    local_6c0 = (uint *****)0xcc;
    local_61c = local_1000;
    puVar9[4] = pppppuVar33;
    puVar9[5] = ppppuVar31;
    *puVar9 = 0;
    puVar9[1] = 0;
    local_6bc = (uint ****)0x0;
    local_628 = 0;
    local_62c = (uint *****)0x0;
    local_630 = (uint ****)0x0;
    local_238[0] = (int *)0x0;
    local_6a8 = pppppuVar32;
    local_620 = ppppuVar29;
    iVar10 = FUN_01be5878(local_238,0x20,0xc0);
    piVar16 = local_238[0];
    if ((iVar10 != 0) || (local_238[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xc0);
    }
    FUN_01bed4e2(local_238[0],&local_6c0,0xc0);
    iVar10 = FUN_01a88f0c(pppppuVar32 + 0x40,piVar16,piVar16);
    local_6c0 = pppppuVar33;
    local_6bc = ppppuVar31;
    if (pppppuVar32[0x80] != (uint ****)0x0) {
      (*(code *)pppppuVar32[0x81][5])
                ((int)pppppuVar32[0x80] + ((int)pppppuVar32[0x81][2] - 1U & 0xfffffff8) + 8,
                 &local_6c0);
    }
    if (iVar10 != 0) {
      FUN_019dc904(puVar25[2],iVar10);
    }
  }
  else {
    pppppuVar34 = (uint *****)puVar25[2];
    do {
      ppppuVar29 = *pppppuVar34;
      bVar3 = (bool)hasExclusiveAccess(pppppuVar34);
    } while (!bVar3);
    *pppppuVar34 = (uint ****)((int)ppppuVar29 + 1);
    if ((int)ppppuVar29 < 0) goto LAB_00a5c210;
    ppppuVar29 = pppppuVar34[0x50];
    if (ppppuVar29 != (uint ****)0x0) {
      do {
        pppuVar13 = *ppppuVar29;
        bVar3 = (bool)hasExclusiveAccess(ppppuVar29);
      } while (!bVar3);
      *ppppuVar29 = (uint ***)((int)pppuVar13 + 1);
      if ((int)pppuVar13 < 0) goto LAB_00a5c210;
      pppppuVar32 = (uint *****)pppppuVar34[0x51];
    }
    FUN_01bed4e2((uint)local_238 | 4,&local_ef8,0x60);
    FUN_01bed4e2(auStack_448,local_238,100);
    local_698 = 0;
    FUN_01bed4e2(auStack_694,auStack_448,100);
    local_6bc = (uint ****)0x0;
    local_628 = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    local_62c = (uint *****)0x0;
    local_630 = (uint ****)0x0;
    local_238[0] = (int *)0x0;
    local_6b8 = (int **)&PTR_FUN_01c0f2d4;
    puVar9[4] = pppppuVar33;
    puVar9[5] = ppppuVar31;
    local_6c0 = (uint *****)0xcc;
    local_6a8 = pppppuVar34;
    local_620 = ppppuVar29;
    local_61c = pppppuVar32;
    iVar10 = FUN_01be5878(local_238,0x20,0xc0);
    piVar16 = local_238[0];
    if ((iVar10 != 0) || (local_238[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xc0);
    }
    FUN_01bed4e2(local_238[0],&local_6c0,0xc0);
    ppppuVar29 = (uint ****)FUN_01a89190(pppppuVar34 + 0x14,piVar16,piVar16);
    local_6c0 = pppppuVar33;
    local_6bc = ppppuVar31;
    if (pppppuVar34[0x4e] != (uint ****)0x0) {
      (*(code *)pppppuVar34[0x4f][5])
                ((int)pppppuVar34[0x4e] + ((int)pppppuVar34[0x4f][2] - 1U & 0xfffffff8) + 8,
                 &local_6c0);
    }
    if (ppppuVar29 != (uint ****)0x0) {
      local_238[0] = (int *)((uint)local_238[0] & 0xffffff00);
      local_6c0 = pppppuVar34 + 2;
      local_6bc = ppppuVar29;
      local_6b8 = local_238;
      FUN_019ee860(&local_6c0);
    }
  }
  *puVar25 = *puVar25 - 1;
  if (*piVar16 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar3 = (bool)hasExclusiveAccess(piVar16);
    if (!bVar3) goto LAB_00a5b7cc;
    *piVar16 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00a5b7cc:
    (**(code **)(piVar16[2] + 0x10))(piVar16);
  }
  pppppuVar32 = (uint *****)puVar15[0x28];
  FUN_009d4d4c(&local_6c0,puVar15[0xf]);
  do {
    do {
      local_f00 = DAT_01d50470;
      local_efc = DAT_01d50474;
      uVar20 = DAT_01d50470 + 1;
      iVar10 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar3 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar3);
    bVar3 = DAT_01d50470 == 0;
    bVar35 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar20;
    DAT_01d50474 = iVar10;
  } while (bVar3 && bVar35);
  local_ef8 = local_6c0;
  local_ea4 = (uint *****)&uStack_25;
  local_ea8 = &local_f00;
  local_eb0 = local_eb0 & 0xffffff00;
  local_ef4 = local_6bc;
  local_ef0 = local_6b8;
  local_eb8 = pppppuVar32;
  if ((char)puVar25[0xe] != '\x01') {
    if ((char)puVar25[0xe] == '\x02') {
      uVar24 = 1;
      FUN_009df38c(&local_ef8);
      goto LAB_00a5b874;
    }
    FUN_019a2bcc(puVar25,&LAB_019efb68);
    *(undefined1 *)(puVar25 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_ce8,&local_ef8,0x58);
  if (0x7ffffffe < *puVar25) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar25 = *puVar25 + 1;
  uVar20 = puVar25[1];
  FUN_01bed4e2(&local_ad8,&local_ef8,0x58);
  if (uVar20 == 2) {
    FUN_009df38c(&local_ad8);
    uVar24 = 0;
    *puVar25 = *puVar25 - 1;
LAB_00a5b874:
    local_6c0 = (uint *****)CONCAT31(local_6c0._1_3_,uVar24);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_6c0,&DAT_01c12838);
  }
  pppppuVar33 = (uint *****)*local_a88;
  ppppuVar31 = (uint ****)local_a88[1];
  if ((uVar20 & 1) == 0) {
    pppppuVar34 = (uint *****)puVar25[2];
    do {
      ppppuVar29 = *pppppuVar34;
      bVar3 = (bool)hasExclusiveAccess(pppppuVar34);
    } while (!bVar3);
    *pppppuVar34 = (uint ****)((int)ppppuVar29 + 1);
    if ((int)ppppuVar29 < 0) goto LAB_00a5c210;
    ppppuVar29 = pppppuVar34[0x82];
    if (ppppuVar29 != (uint ****)0x0) {
      do {
        pppuVar13 = *ppppuVar29;
        bVar3 = (bool)hasExclusiveAccess(ppppuVar29);
      } while (!bVar3);
      *ppppuVar29 = (uint ***)((int)pppuVar13 + 1);
      if ((int)pppuVar13 < 0) goto LAB_00a5c210;
      pppppuVar32 = (uint *****)pppppuVar34[0x83];
    }
    FUN_01bed4e2((uint)local_238 | 4,&local_ef8,0x50);
    FUN_01bed4e2(auStack_448,local_238,0x54);
    local_698 = 0;
    FUN_01bed4e2(auStack_694,auStack_448,0x54);
    local_6b8 = (int **)&PTR_LAB_01c0f414;
    local_6c0 = (uint *****)0xcc;
    puVar9[4] = pppppuVar33;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[5] = ppppuVar31;
    local_6bc = (uint ****)0x0;
    local_638 = 0;
    local_63c = 0;
    local_640 = 0;
    local_238[0] = (int *)0x0;
    local_6a8 = pppppuVar34;
    local_630 = ppppuVar29;
    local_62c = pppppuVar32;
    iVar10 = FUN_01be5878(local_238,0x20,0xa0);
    piVar16 = local_238[0];
    if ((iVar10 != 0) || (local_238[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_238[0],&local_6c0,0xa0);
    iVar10 = FUN_01a88f0c(pppppuVar34 + 0x40,piVar16,piVar16);
    local_6c0 = pppppuVar33;
    local_6bc = ppppuVar31;
    if (pppppuVar34[0x80] != (uint ****)0x0) {
      (*(code *)pppppuVar34[0x81][5])
                ((int)pppppuVar34[0x80] + ((int)pppppuVar34[0x81][2] - 1U & 0xfffffff8) + 8,
                 &local_6c0);
    }
    if (iVar10 != 0) {
      FUN_019dc904(puVar25[2],iVar10);
    }
  }
  else {
    pppppuVar32 = (uint *****)puVar25[2];
    do {
      ppppuVar29 = *pppppuVar32;
      bVar3 = (bool)hasExclusiveAccess(pppppuVar32);
    } while (!bVar3);
    *pppppuVar32 = (uint ****)((int)ppppuVar29 + 1);
    if ((int)ppppuVar29 < 0) goto LAB_00a5c210;
    ppppuVar29 = pppppuVar32[0x50];
    if (ppppuVar29 != (uint ****)0x0) {
      do {
        pppuVar13 = *ppppuVar29;
        bVar3 = (bool)hasExclusiveAccess(ppppuVar29);
      } while (!bVar3);
      *ppppuVar29 = (uint ***)((int)pppuVar13 + 1);
      if ((int)pppuVar13 < 0) goto LAB_00a5c210;
      pppppuVar34 = (uint *****)pppppuVar32[0x51];
    }
    FUN_01bed4e2((uint)local_238 | 4,&local_ef8,0x50);
    FUN_01bed4e2(auStack_448,local_238,0x54);
    local_698 = 0;
    FUN_01bed4e2(auStack_694,auStack_448,0x54);
    local_6b8 = (int **)&PTR_FUN_01c0f374;
    puVar9[4] = pppppuVar33;
    local_6c0 = (uint *****)0xcc;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[5] = ppppuVar31;
    local_6bc = (uint ****)0x0;
    local_638 = 0;
    local_63c = 0;
    local_640 = 0;
    local_238[0] = (int *)0x0;
    local_6a8 = pppppuVar32;
    local_630 = ppppuVar29;
    local_62c = pppppuVar34;
    iVar10 = FUN_01be5878(local_238,0x20,0xa0);
    piVar16 = local_238[0];
    if ((iVar10 != 0) || (local_238[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_238[0],&local_6c0,0xa0);
    ppppuVar29 = (uint ****)FUN_01a89190(pppppuVar32 + 0x14,piVar16,piVar16);
    local_6c0 = pppppuVar33;
    local_6bc = ppppuVar31;
    if (pppppuVar32[0x4e] != (uint ****)0x0) {
      (*(code *)pppppuVar32[0x4f][5])
                ((int)pppppuVar32[0x4e] + ((int)pppppuVar32[0x4f][2] - 1U & 0xfffffff8) + 8,
                 &local_6c0);
    }
    if (ppppuVar29 != (uint ****)0x0) {
      local_238[0] = (int *)((uint)local_238[0] & 0xffffff00);
      local_6c0 = pppppuVar32 + 2;
      local_6bc = ppppuVar29;
      local_6b8 = local_238;
      FUN_019ee860(&local_6c0);
    }
  }
  *puVar25 = *puVar25 - 1;
  if (*piVar16 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar3 = (bool)hasExclusiveAccess(piVar16);
    if (!bVar3) goto LAB_00a5bccc;
    *piVar16 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00a5bccc:
    (**(code **)(piVar16[2] + 0x10))(piVar16);
  }
  do {
    do {
      local_f00 = DAT_01d50470;
      local_efc = DAT_01d50474;
      uVar20 = DAT_01d50470 + 1;
      iVar10 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar3 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar3);
    bVar3 = DAT_01d50470 == 0;
    bVar35 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar20;
    DAT_01d50474 = iVar10;
  } while (bVar3 && bVar35);
  local_ef8 = (uint *****)*puVar15;
  local_ef4 = (uint ****)puVar15[1];
  local_ef0 = (int **)puVar15[2];
  uStack_eec = puVar15[3];
  uStack_ee8 = puVar15[4];
  local_ee4 = puVar15[5];
  uStack_ee0 = puVar15[6];
  uStack_edc = puVar15[7];
  uStack_ed8 = puVar15[8];
  uStack_ed4 = puVar15[9];
  local_ed0 = puVar15[10];
  uStack_ecc = puVar15[0xb];
  local_ec8 = (uint *****)puVar15[0xc];
  local_ec4 = (uint ****)puVar15[0xd];
  local_ec0 = (int **)puVar15[0xe];
  local_ebc = puVar15[0xf];
  local_cec = &uStack_25;
  local_cf0 = &local_f00;
  local_e60 = 0;
  if ((char)puVar25[0xe] != '\x01') {
    if ((char)puVar25[0xe] == '\x02') {
      uVar24 = 1;
      FUN_009deb3c(&local_ef8);
      goto LAB_00a5bd5c;
    }
    FUN_019a2bcc(puVar25,&LAB_019efb68);
    *(undefined1 *)(puVar25 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_ce8,&local_ef8,0x210);
  if (0x7ffffffe < *puVar25) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar25 = *puVar25 + 1;
  uVar20 = puVar25[1];
  FUN_01bed4e2(&local_ad8,&local_ef8,0x210);
  if (uVar20 == 2) {
    FUN_009deb3c(&local_ad8);
    uVar24 = 0;
    *puVar25 = *puVar25 - 1;
LAB_00a5bd5c:
    local_6c0 = (uint *****)CONCAT31(local_6c0._1_3_,uVar24);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_6c0,&DAT_01c0ecc8);
  }
  FUN_01bed4e2(auStack_8c8,&local_ef8,0x208);
  ppppuVar31 = (uint ****)*local_8d0;
  iVar10 = local_8d0[1];
  if ((uVar20 & 1) == 0) {
    piVar16 = (int *)puVar25[2];
    do {
      iVar14 = *piVar16;
      bVar3 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar3);
    *piVar16 = iVar14 + 1;
    if (iVar14 < 0) goto LAB_00a5c210;
    piVar30 = (int *)piVar16[0x82];
    if (piVar30 != (int *)0x0) {
      do {
        iVar14 = *piVar30;
        bVar3 = (bool)hasExclusiveAccess(piVar30);
      } while (!bVar3);
      *piVar30 = iVar14 + 1;
      if (iVar14 < 0) goto LAB_00a5c210;
      pppppuVar34 = (uint *****)piVar16[0x83];
    }
    FUN_01bed4e2((uint)local_238 | 4,auStack_8c8,0x208);
    FUN_01bed4e2(auStack_448,local_238,0x20c);
    local_698 = 0;
    FUN_01bed4e2(auStack_694,auStack_448,0x20c);
    local_6b8 = (int **)&PTR_LAB_01c0f34c;
    local_6bc = (uint ****)0x0;
    local_6c0 = (uint *****)0xcc;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[4] = ppppuVar31;
    puVar9[5] = iVar10;
    local_480 = 0;
    local_484 = 0;
    local_488 = 0;
    local_238[0] = (int *)0x0;
    local_6a8 = (uint *****)piVar16;
    local_478 = piVar30;
    local_474 = pppppuVar34;
    iVar14 = FUN_01be5878(local_238,0x20,0x260);
    piVar30 = local_238[0];
    if ((iVar14 != 0) || (local_238[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x260);
    }
    FUN_01bed4e2(local_238[0],&local_6c0,0x260);
    iVar14 = FUN_01a88f0c(piVar16 + 0x40,piVar30,piVar30);
    local_6c0 = (uint *****)ppppuVar31;
    local_6bc = (uint ****)iVar10;
    if (piVar16[0x80] != 0) {
      (**(code **)(piVar16[0x81] + 0x14))
                (piVar16[0x80] + (*(int *)(piVar16[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_6c0);
    }
    if (iVar14 != 0) {
      FUN_019dc904(puVar25[2],iVar14);
    }
  }
  else {
    piVar16 = (int *)puVar25[2];
    do {
      iVar14 = *piVar16;
      bVar3 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar3);
    *piVar16 = iVar14 + 1;
    if (iVar14 < 0) {
LAB_00a5c210:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xa5c210);
      (*pcVar1)();
    }
    piVar30 = (int *)piVar16[0x50];
    if (piVar30 != (int *)0x0) {
      do {
        iVar14 = *piVar30;
        bVar3 = (bool)hasExclusiveAccess(piVar30);
      } while (!bVar3);
      *piVar30 = iVar14 + 1;
      if (iVar14 < 0) goto LAB_00a5c210;
      pppppuVar34 = (uint *****)piVar16[0x51];
    }
    FUN_01bed4e2((uint)local_238 | 4,auStack_8c8,0x208);
    FUN_01bed4e2(auStack_448,local_238,0x20c);
    local_698 = 0;
    FUN_01bed4e2(auStack_694,auStack_448,0x20c);
    local_6b8 = (int **)&PTR_FUN_01c0f16c;
    *puVar9 = 0;
    local_6c0 = (uint *****)0xcc;
    puVar9[1] = 0;
    puVar9[4] = ppppuVar31;
    puVar9[5] = iVar10;
    local_6bc = (uint ****)0x0;
    local_480 = 0;
    local_484 = 0;
    local_488 = 0;
    local_238[0] = (int *)0x0;
    local_6a8 = (uint *****)piVar16;
    local_478 = piVar30;
    local_474 = pppppuVar34;
    iVar14 = FUN_01be5878(local_238,0x20,0x260);
    piVar30 = local_238[0];
    if ((iVar14 != 0) || (local_238[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x260);
    }
    FUN_01bed4e2(local_238[0],&local_6c0,0x260);
    iVar14 = FUN_01a89190(piVar16 + 0x14,piVar30,piVar30);
    local_6c0 = (uint *****)ppppuVar31;
    local_6bc = (uint ****)iVar10;
    if (piVar16[0x4e] != 0) {
      (**(code **)(piVar16[0x4f] + 0x14))
                (piVar16[0x4e] + (*(int *)(piVar16[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_6c0);
    }
    if (iVar14 != 0) {
      local_238[0] = (int *)((uint)local_238[0] & 0xffffff00);
      local_6c0 = (uint *****)(piVar16 + 2);
      local_6bc = (uint ****)iVar14;
      local_6b8 = local_238;
      FUN_019ee860(&local_6c0);
    }
  }
  *puVar25 = *puVar25 - 1;
  if (*piVar30 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar3 = (bool)hasExclusiveAccess(piVar30);
    if (bVar3) {
      *piVar30 = 0x84;
      goto LAB_00a5c1b4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar30[2] + 0x10))(piVar30);
LAB_00a5c1b4:
  *param_1 = pppppuVar5;
  param_1[1] = ppppuVar17;
  param_1[2] = ppiVar6;
  param_1[3] = iVar21;
  param_1[4] = uVar11;
  param_1[5] = uVar23;
  param_1[6] = pppppuVar8;
  param_1[7] = uVar18;
  param_1[8] = local_fc8;
  param_1[9] = uStack_fc4;
  param_1[10] = uStack_fc0;
  return;
code_r0x00a5ad4c:
  uVar18 = uVar18 - 1 & uVar18;
  goto LAB_00a5acf4;
LAB_00a5ae18:
  uVar18 = (uint)*(char *)((int)local_6c0 + local_1024);
  uVar23 = local_1024;
  if (-1 < (int)uVar18) {
    uVar23 = (uint)*local_6c0 & 0x80808080;
    uVar23 = LZCOUNT(((uint)*local_6c0 & 0x80) << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                     (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18);
    uVar18 = (uint)*(byte *)((int)local_6c0 + (uVar23 >> 3));
    uVar23 = uVar23 >> 3;
  }
  bVar2 = (byte)(uVar11 >> 0x19);
  *(byte *)((int)local_6c0 + uVar23) = bVar2;
  *(byte *)((int)local_6c0 + ((uint)local_6bc & uVar23 - 4) + 4) = bVar2;
  local_6c0[uVar23 * -6 + -6] = ppppuVar28;
  local_6c0[uVar23 * -6 + -5] = ppppuVar26;
  local_6c0[uVar23 * -6 + -4] = ppppuVar22;
  local_6c0[uVar23 * -6 + -3] = ppppuVar12;
  local_6c0[uVar23 * -6 + -2] = ppppuVar29;
  local_6b8 = (int **)((int)local_6b8 - (uVar18 & 1));
  local_6b4 = local_6b4 + 1;
LAB_00a5ae04:
  ppppuVar17 = (uint ****)((int)ppppuVar17 + 1);
  if (ppppuVar17 == ppppuVar31) goto LAB_00a5aab8;
  goto LAB_00a5ac28;
}

