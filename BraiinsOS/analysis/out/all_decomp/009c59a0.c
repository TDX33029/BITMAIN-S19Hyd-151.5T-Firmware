// FUN_009c59a0 @ 009c59a0 size=3804 calls_out=24 calls_in=1
// strings: SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError | BUG: solution queue send failed

/* WARNING: Type propagation algorithm not settling */

uint * FUN_009c59a0(int param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  uint *****pppppuVar5;
  undefined1 *puVar6;
  char cVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint ***pppuVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  char *pcVar24;
  int *piVar25;
  uint ****ppppuVar26;
  uint ****ppppuVar27;
  int iVar28;
  undefined *puVar29;
  uint ****ppppuVar30;
  uint uVar31;
  uint local_400;
  char local_3e8;
  uint *****local_3c8;
  undefined1 *local_3c4;
  uint *local_3c0;
  undefined *local_3bc;
  uint *****local_3b8;
  int local_3b4;
  uint local_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  uint uStack_3a4;
  uint local_3a0;
  uint uStack_39c;
  uint uStack_398;
  uint uStack_394;
  uint *****local_390;
  undefined1 *local_38c;
  int *local_388;
  undefined4 local_384;
  uint *****local_380;
  undefined **local_37c;
  undefined *local_378;
  uint *****local_374;
  undefined1 *puStack_370;
  int *piStack_36c;
  int *local_368;
  int iStack_364;
  int iStack_360;
  int iStack_35c;
  int iStack_358;
  int iStack_354;
  undefined4 *local_350;
  undefined *local_34c;
  undefined4 local_328;
  uint local_320;
  uint uStack_31c;
  uint local_318;
  uint uStack_314;
  uint local_310;
  uint uStack_30c;
  uint local_308;
  uint uStack_304;
  int local_300;
  undefined4 local_2e8;
  uint local_2e0;
  uint uStack_2dc;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint uStack_2cc;
  uint local_2c8;
  uint local_2c4;
  int local_2c0;
  char local_2b8;
  uint *****local_2b0;
  undefined1 *local_2ac;
  int *local_2a8;
  undefined1 *local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  uint *****local_1d8;
  undefined **local_1d4;
  undefined *local_1d0;
  uint ****ppppuStack_1cc;
  uint ******local_1c8;
  int iStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint *****local_108;
  undefined **local_104;
  int *local_100;
  uint *****local_fc;
  uint ******local_f8;
  int *local_f4;
  int *local_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_30;
  
  ppppuVar27 = (uint ****)param_2[4];
  if ((uint)ppppuVar27 >> (*(uint *)(param_1 + 0x188) & 0x1f) == 0) {
    ppppuVar26 = *(uint *****)(*(int *)(param_1 + 0x174) + 8);
    if (*(uint *****)(param_1 + 0x140) != ppppuVar26) {
      local_294 = 0;
      local_29c = 0;
      local_298 = 0xffff0000;
      local_2a0 = 0;
      local_2a4 = (undefined1 *)0x0;
      local_2a8 = (int *)0x0;
      local_2ac = (undefined1 *)0x0;
      local_2b0 = (uint *****)0x0;
      local_38c = (undefined1 *)0x0;
      local_374 = (uint *****)0x0;
      local_378 = (undefined *)0x0;
      local_37c = (undefined **)0x0;
      local_380 = (uint *****)0x0;
      local_384 = 0;
      local_388 = (int *)0x0;
      local_390 = (uint *****)ppppuVar26;
      FUN_01289fbc(&local_108,&local_2b0,&local_390);
      local_1d8 = local_108;
      local_1d4 = local_104;
      local_1d0 = (undefined *)local_100;
      ppppuStack_1cc = (uint ****)local_fc;
      local_1c8 = local_f8;
      iStack_1c4 = (int)local_f4;
      uStack_1c0 = local_f0;
      uStack_1bc = iStack_ec;
      *(uint *)(param_1 + 0x120) = (uint)local_108;
      *(undefined ***)(param_1 + 0x124) = local_104;
      *(int **)(param_1 + 0x128) = local_100;
      *(uint ******)(param_1 + 300) = local_fc;
      *(uint *******)(param_1 + 0x130) = local_f8;
      *(int **)(param_1 + 0x134) = local_f4;
      *(int **)(param_1 + 0x138) = local_f0;
      *(int *)(param_1 + 0x13c) = iStack_ec;
      local_298 = 0xffff0000;
      ppppuVar30 = *(uint *****)(param_1 + 0x184);
      if (*(uint *****)(param_1 + 0x184) < ppppuVar26) {
        ppppuVar30 = ppppuVar26;
      }
      *(uint *****)(param_1 + 0x140) = ppppuVar26;
      local_294 = 0;
      local_29c = 0;
      local_2a0 = 0;
      local_2a4 = (undefined1 *)0x0;
      local_2a8 = (int *)0x0;
      local_2ac = (undefined1 *)0x0;
      local_2b0 = (uint *****)0x0;
      local_38c = (undefined1 *)0x0;
      local_374 = (uint *****)0x0;
      local_378 = (undefined *)0x0;
      local_37c = (undefined **)0x0;
      local_380 = (uint *****)0x0;
      local_384 = 0;
      local_388 = (int *)0x0;
      local_390 = (uint *****)ppppuVar30;
      FUN_01289fbc(&local_108,&local_2b0,&local_390);
      local_1d8 = local_108;
      local_1d4 = local_104;
      local_1d0 = (undefined *)local_100;
      ppppuStack_1cc = (uint ****)local_fc;
      local_1c8 = local_f8;
      iStack_1c4 = (int)local_f4;
      uStack_1c0 = local_f0;
      uStack_1bc = iStack_ec;
      *(uint ******)(param_1 + 0x148) = local_108;
      *(undefined ***)(param_1 + 0x14c) = local_104;
      *(int **)(param_1 + 0x150) = local_100;
      *(uint ******)(param_1 + 0x154) = local_fc;
      *(uint *******)(param_1 + 0x158) = local_f8;
      *(int **)(param_1 + 0x15c) = local_f4;
      *(int **)(param_1 + 0x160) = local_f0;
      *(int *)(param_1 + 0x164) = iStack_ec;
      *(uint *****)(param_1 + 0x168) = ppppuVar30;
    }
    uVar17 = param_2[3];
    uVar9 = param_2[5];
    local_3b0 = *(uint *)(param_1 + 0x148);
    uStack_3ac = *(uint *)(param_1 + 0x14c);
    uStack_3a8 = *(uint *)(param_1 + 0x150);
    uStack_3a4 = *(uint *)(param_1 + 0x154);
    local_3a0 = *(uint *)(param_1 + 0x158);
    uStack_39c = *(uint *)(param_1 + 0x15c);
    uStack_398 = *(uint *)(param_1 + 0x160);
    uStack_394 = *(uint *)(param_1 + 0x164);
    iVar11 = *(int *)(param_1 + 0x170);
    ppppuVar26 = (uint ****)(iVar11 + 8);
    do {
      if (*ppppuVar26 != (uint ***)0x0) {
        ClearExclusiveLocal();
        FUN_015bf680(ppppuVar26);
        goto LAB_009c5c58;
      }
      bVar3 = (bool)hasExclusiveAccess(ppppuVar26);
    } while (!bVar3);
    *ppppuVar26 = (uint ***)0x1;
    DataMemoryBarrier(0xb);
LAB_009c5c58:
    uVar18 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar7 = *(char *)(iVar11 + 0xc);
    }
    else {
      uVar18 = FUN_015bf3f8();
      uVar18 = uVar18 ^ 1;
      cVar7 = *(char *)(iVar11 + 0xc);
    }
    if (cVar7 != '\0') {
      uVar17 = (uint)local_104 >> 8;
      local_104 = (undefined **)CONCAT31((int3)uVar17,(char)uVar18);
      local_108 = (uint *****)ppppuVar26;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0034aad3,0x1c,&local_108,&DAT_0186a36c,&DAT_0186a2e0);
    }
    uVar10 = param_2[2];
    if (*(uint *)(iVar11 + 0x1c) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0034a9a8,0x2e,&DAT_0186a1e8);
    }
    if (*(uint *)(iVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar10,*(uint *)(iVar11 + 0x18),&DAT_0186a1f8);
    }
    piVar20 = (int *)(*(int *)(iVar11 + 0x14) + uVar10 * 0x58);
    if (*piVar20 == -0x80000000) {
      if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
        *(undefined1 *)(iVar11 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        pppuVar14 = *ppppuVar26;
        bVar3 = (bool)hasExclusiveAccess(ppppuVar26);
      } while (!bVar3);
      *ppppuVar26 = (uint ***)0x0;
      if (pppuVar14 == (uint ***)0x2) {
        FUN_016d6968(0xf0,ppppuVar26,0x81,1);
        return (uint *)(uint)DAT_018dd947;
      }
      return (uint *)(uint)DAT_018dd947;
    }
    uVar10 = FUN_009bd960(piVar20[0x10],piVar20[0x11],piVar20[0x12],piVar20[0x13],uVar17,ppppuVar27)
    ;
    if (piVar20[0xe] == 0) {
      FUN_009c06d0(piVar20 + 0xc,piVar20 + 0x10);
    }
    uVar21 = piVar20[0xd];
    puVar12 = (uint *)piVar20[0xc];
    iVar13 = 0;
    bVar3 = false;
    uVar19 = uVar10;
    do {
      uVar19 = uVar21 & uVar19;
      uVar22 = *(uint *)((int)puVar12 + uVar19);
      uVar15 = uVar22 ^ (uVar10 >> 0x19) * 0x1010101;
      uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
      while (uVar15 != 0) {
        uVar31 = uVar15 - 1 & uVar15;
        uVar16 = uVar19 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                         (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                 uVar21;
        uVar15 = uVar31;
        if ((uVar17 == puVar12[uVar16 * -0xe + -0xe]) &&
           (local_3e8 = '\x01', ppppuVar27 == (uint ****)puVar12[uVar16 * -0xe + -0xd]))
        goto LAB_009c60c8;
      }
      uVar15 = uVar22 & 0x80808080;
      if (bVar3) {
LAB_009c5e20:
        if ((uVar15 & uVar22 << 1) != 0) goto LAB_009c6064;
        bVar3 = true;
      }
      else {
        if (uVar15 != 0) {
          local_400 = uVar19 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                              (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                      uVar21;
          goto LAB_009c5e20;
        }
        bVar3 = false;
      }
      iVar13 = iVar13 + 4;
      uVar19 = iVar13 + uVar19;
    } while( true );
  }
  if ((3 < DAT_018d9130) || (DAT_018d983c == '\0')) goto LAB_009c5fc4;
  puVar29 = &DAT_018ae394;
  pcVar24 = s_SetGloba_00414c05;
  if (DAT_018d983c == '\x01') {
LAB_009c5a48:
    DataMemoryBarrier(0xb);
    pcVar8 = pcVar24;
    puVar4 = puVar29;
    if ((DAT_018dd984 == 2) && (pcVar8 = DAT_018daa74, puVar4 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar8 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar11 = (**(code **)(puVar4 + 0x14))(pcVar8,DAT_018d9834);
    if (iVar11 == 0) goto LAB_009c5fc4;
  }
  else if (DAT_018d983c != '\x02') {
    cVar7 = FUN_0169ac90(&DAT_018d9834);
    if (cVar7 == '\0') goto LAB_009c5fc4;
    if (cVar7 != '\x02') goto LAB_009c5a48;
  }
  local_f4 = (int *)DAT_018d9834;
  if (*(int *)(DAT_018d9834 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186a2f0);
  }
  local_384 = *(undefined4 *)(DAT_018d9834 + 0x28);
  local_388 = *(int **)(DAT_018d9834 + 0x24);
  local_38c = *(undefined1 **)(DAT_018d9834 + 0x20);
  local_3c0 = (uint *)(DAT_018d9834 + 0x1c);
  local_390 = (uint *****)*local_3c0;
  local_380 = (uint *****)0x0;
  local_3b4 = 1 << (*(uint *)(param_1 + 0x188) & 0x1f);
  local_3b8 = (uint *****)&local_2b0;
  local_2a8 = &local_3b4;
  local_1d4 = &local_3bc;
  local_3c8 = (uint *****)&local_1d8;
  local_f8 = &local_3c8;
  local_3bc = &DAT_00599018;
  local_2a4 = &LAB_00fac484;
  local_2ac = &LAB_00fac484;
  local_1d0 = &DAT_018abb78;
  local_3c4 = (undefined1 *)0x1;
  local_104 = (undefined **)0x0;
  local_108 = (uint *****)&DAT_00000001;
  DataMemoryBarrier(0xb);
  if ((DAT_018dd984 == 2) && (pcVar24 = DAT_018daa74, puVar29 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar24 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_2b0 = (uint *****)(param_2 + 4);
  local_1d8 = (uint *****)&local_390;
  iVar11 = (**(code **)(puVar29 + 0x28))(pcVar24,&local_108);
  if (iVar11 != 0) {
    (**(code **)(puVar29 + 0x2c))(pcVar24,&local_108);
  }
LAB_009c5fc4:
  iVar11 = *(int *)(param_1 + 0x178);
  uVar17 = *param_2;
  if (uVar17 < *(uint *)(iVar11 + 0x44)) {
    piVar20 = (int *)(iVar11 + 0x28);
    do {
      bVar3 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar3);
    *piVar20 = *piVar20 + 1;
    piVar20 = (int *)(*(int *)(iVar11 + 0x40) + uVar17 * 8 + 4);
    do {
      bVar3 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar3);
    *piVar20 = *piVar20 + 1;
  }
  DataMemoryBarrier(0xb);
  if (DAT_018d8068 == (uint *)0x0) {
    puVar12 = (uint *)FUN_009b00f0(*(undefined4 *)(param_1 + 0x17c),uVar17,
                                   *(undefined4 *)(param_1 + 0x140),&DAT_0034988d,7);
    return puVar12;
  }
  return DAT_018d8068;
LAB_009c6064:
  uVar19 = (uint)*(char *)((int)puVar12 + local_400);
  if (-1 < (int)uVar19) {
    uVar19 = *puVar12 & 0x80808080;
    uVar15 = LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                     uVar19 >> 0x18);
    uVar19 = (uint)*(byte *)((int)puVar12 + (uVar15 >> 3));
    local_400 = uVar15 >> 3;
  }
  iVar13 = piVar20[0xe];
  iVar28 = piVar20[0xf];
  bVar2 = (byte)(uVar10 >> 0x19);
  *(byte *)((int)puVar12 + local_400) = bVar2;
  piVar20[0xe] = iVar13 - (uVar19 & 1);
  piVar20[0xf] = iVar28 + 1;
  *(byte *)((int)puVar12 + (local_400 - 4 & uVar21) + 4) = bVar2;
  puVar12[local_400 * -0xe + -0xe] = uVar17;
  puVar12[local_400 * -0xe + -0xd] = (uint)ppppuVar27;
  local_3e8 = '\0';
  uVar16 = local_400;
LAB_009c60c8:
  puVar12[uVar16 * -0xe + -0xc] = local_3b0;
  puVar12[uVar16 * -0xe + -0xb] = uStack_3ac;
  puVar12[uVar16 * -0xe + -10] = uStack_3a8;
  puVar12[uVar16 * -0xe + -9] = uStack_3a4;
  puVar12[uVar16 * -0xe + -8] = local_3a0;
  puVar12[uVar16 * -0xe + -7] = uStack_39c;
  puVar12[uVar16 * -0xe + -6] = uStack_398;
  puVar12[uVar16 * -0xe + -5] = uStack_394;
  puVar12[uVar16 * -0xe + -4] = uVar17;
  puVar12[uVar16 * -0xe + -3] = (uint)ppppuVar27;
  puVar12[uVar16 * -0xe + -2] = uVar9;
  FUN_009951a4(&local_1d8,piVar20[1],piVar20[2]);
  piVar25 = (int *)piVar20[6];
  do {
    iVar13 = *piVar25;
    bVar3 = (bool)hasExclusiveAccess(piVar25);
  } while (!bVar3);
  *piVar25 = iVar13 + 1;
  if (iVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x9c6890);
    (*pcVar1)();
  }
  iVar13 = piVar20[7];
  iVar28 = piVar20[0xb];
  FUN_009a18b0(&local_2b0,piVar20[4],piVar20[5]);
  iStack_e8 = piVar20[8];
  local_e4 = piVar20[9];
  local_e0 = piVar20[10];
  local_100 = (int *)local_1d0;
  local_108 = local_1d8;
  local_104 = local_1d4;
  local_fc = local_2b0;
  local_f8 = (uint ******)local_2ac;
  local_f4 = local_2a8;
  local_f0 = piVar25;
  iStack_ec = iVar13;
  local_dc = iVar28;
  FUN_015f3b0c(&local_2b0,1);
  piVar20 = local_2a8;
  puVar6 = local_2ac;
  pppppuVar5 = local_2b0;
  local_350 = (undefined4 *)thunk_FUN_016d4a50(0x38);
  if (local_350 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x38);
  }
  *local_350 = 1;
  local_350[1] = 1;
  local_350[2] = local_3b0;
  local_350[3] = uStack_3ac;
  local_350[4] = uStack_3a8;
  local_350[5] = uStack_3a4;
  local_350[6] = local_3a0;
  local_350[7] = uStack_39c;
  local_350[8] = uStack_398;
  local_350[9] = uStack_394;
  local_350[10] = uVar17;
  local_350[0xb] = ppppuVar27;
  local_350[0xc] = uVar9;
  local_38c = puVar6;
  local_390 = pppppuVar5;
  local_388 = piVar20;
  local_380 = local_108;
  local_37c = local_104;
  local_378 = (undefined *)local_100;
  local_374 = local_fc;
  puStack_370 = (undefined1 *)local_f8;
  piStack_36c = local_f4;
  local_368 = local_f0;
  iStack_364 = iStack_ec;
  iStack_360 = iStack_e8;
  iStack_35c = local_e4;
  iStack_358 = local_e0;
  iStack_354 = local_dc;
  local_2b8 = local_3e8;
  local_2c0 = 3;
  local_34c = &DAT_0186a434;
  local_2e8 = 3;
  local_300 = 3;
  local_328 = 3;
  if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
    *(undefined1 *)(iVar11 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    pppuVar14 = *ppppuVar26;
    bVar3 = (bool)hasExclusiveAccess(ppppuVar26);
  } while (!bVar3);
  *ppppuVar26 = (uint ***)0x0;
  if (pppuVar14 == (uint ***)0x2) {
    FUN_016d6968(0xf0,ppppuVar26,0x81,1);
  }
  if (local_2b8 != '\0') {
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == (uint *)0x0) {
      FUN_009b00f0(*(undefined4 *)(param_1 + 0x17c),*param_2,*(undefined4 *)(param_1 + 0x140),
                   &DAT_0034989e,9);
    }
    goto LAB_009c65d0;
  }
  DataMemoryBarrier(0xb);
  if (local_2c0 != 0) {
    FUN_009c6af0(&local_2e0,&local_390);
  }
  uVar18 = *(uint *)(param_1 + 0x138);
  uVar10 = *(uint *)(param_1 + 0x13c);
  uVar17 = local_2c8;
  uVar9 = local_2c4;
  if (uVar18 == local_2c8 && uVar10 == local_2c4) {
    uVar18 = *(uint *)(param_1 + 0x130);
    uVar10 = *(uint *)(param_1 + 0x134);
    uVar17 = local_2d0;
    uVar9 = uStack_2cc;
    if (uVar18 != local_2d0 || uVar10 != uStack_2cc) goto LAB_009c6438;
    uVar18 = *(uint *)(param_1 + 0x128);
    uVar10 = *(uint *)(param_1 + 300);
    uVar17 = local_2d8;
    uVar9 = local_2d4;
    if (uVar18 != local_2d8 || uVar10 != local_2d4) goto LAB_009c6438;
    uVar18 = *(uint *)(param_1 + 0x120);
    uVar10 = *(uint *)(param_1 + 0x124);
    uVar17 = local_2e0;
    uVar9 = uStack_2dc;
    if (uVar18 != local_2e0 || uVar10 != uStack_2dc) goto LAB_009c6438;
LAB_009c64bc:
    iVar11 = *(int *)(param_1 + 0x178);
    uVar17 = *param_2;
    if (uVar17 < *(uint *)(iVar11 + 0x44)) {
      iVar13 = *(int *)(param_1 + 0x140);
      piVar20 = (int *)(iVar11 + 0x24);
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar3);
      *piVar20 = *piVar20 + iVar13;
      piVar20 = (int *)(*(int *)(iVar11 + 0x40) + uVar17 * 8);
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar3);
      *piVar20 = *piVar20 + iVar13;
    }
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == (uint *)0x0) {
      uVar23 = 5;
      puVar29 = &DAT_00349888;
LAB_009c6530:
      FUN_009b00f0(*(undefined4 *)(param_1 + 0x17c),uVar17,*(undefined4 *)(param_1 + 0x140),puVar29,
                   uVar23);
    }
  }
  else {
LAB_009c6438:
    if (uVar9 < uVar10 || uVar10 - uVar9 < (uint)(uVar17 <= uVar18)) goto LAB_009c64bc;
    iVar11 = *(int *)(param_1 + 0x178);
    uVar17 = *param_2;
    if (uVar17 < *(uint *)(iVar11 + 0x44)) {
      piVar20 = (int *)(iVar11 + 0x28);
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar3);
      *piVar20 = *piVar20 + 1;
      piVar20 = (int *)(*(int *)(iVar11 + 0x40) + uVar17 * 8 + 4);
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar3);
      *piVar20 = *piVar20 + 1;
    }
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == (uint *)0x0) {
      uVar23 = 7;
      puVar29 = &DAT_0034988d;
      goto LAB_009c6530;
    }
  }
  DataMemoryBarrier(0xb);
  if (local_300 != 0) {
    FUN_009c6b58(&local_320,&local_390);
  }
  if (((((local_308 == local_2c8 && uStack_304 == local_2c4) &&
        (local_2c8 = local_2d0, local_2c4 = uStack_2cc, local_308 = local_310,
        uStack_304 = uStack_30c, local_310 == local_2d0 && uStack_30c == uStack_2cc)) &&
       (local_2c8 = local_2d8, local_2c4 = local_2d4, local_308 = local_318, uStack_304 = uStack_314
       , local_318 == local_2d8 && uStack_314 == local_2d4)) &&
      (local_2c8 = local_2e0, local_2c4 = uStack_2dc, local_308 = local_320, uStack_304 = uStack_31c
      , local_320 == local_2e0 && uStack_31c == uStack_2dc)) ||
     (local_2c4 < uStack_304 || uStack_304 - local_2c4 < (uint)(local_2c8 <= local_308))) {
    FUN_016dd1aa(&local_2b0,&local_390,0xd8);
    piVar20 = local_2a8;
    iVar11 = *(int *)(param_1 + 0x180);
    if (iVar11 != 0) {
      uVar17 = *(uint *)(iVar11 + 0x10);
      puVar12 = (uint *)(iVar11 + 0x10);
      DataMemoryBarrier(0xb);
      while (0x7fffffff < uVar17) {
        if ((~uVar17 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
        }
        uVar9 = *puVar12;
        if (*puVar12 == uVar17) {
          DataMemoryBarrier(0xb);
          do {
            bVar3 = (bool)hasExclusiveAccess(puVar12);
            if (bVar3) {
              *puVar12 = uVar17 + 1 | 0x80000000;
              DataMemoryBarrier(0xb);
              FUN_016dd1aa(&local_108,&local_2b0,0xd8);
              local_30 = 0;
              iVar13 = thunk_FUN_016d4a50(0xe0);
              if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(8,0xe0);
              }
              FUN_016dd1aa(iVar13,&local_108,0xe0);
              piVar20 = (int *)(iVar11 + 8);
              DataMemoryBarrier(0xb);
              do {
                iVar28 = *piVar20;
                bVar3 = (bool)hasExclusiveAccess(piVar20);
              } while (!bVar3);
              *piVar20 = iVar13;
              DataMemoryBarrier(0xb);
              *(int *)(iVar28 + 0xd8) = iVar13;
              puVar12 = (uint *)(iVar11 + 0x20);
              DataMemoryBarrier(0xb);
              do {
                uVar17 = *puVar12;
                bVar3 = (bool)hasExclusiveAccess(puVar12);
              } while (!bVar3);
              *puVar12 = uVar17 | 2;
              DataMemoryBarrier(0xb);
              if (uVar17 != 0) {
                return puVar12;
              }
              iVar13 = *(int *)(iVar11 + 0x18);
              *(undefined4 *)(iVar11 + 0x18) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar3 = (bool)hasExclusiveAccess(puVar12);
              } while (!bVar3);
              *puVar12 = *puVar12 & 0xfffffffd;
              if (iVar13 == 0) {
                return puVar12;
              }
              puVar12 = (uint *)(**(code **)(iVar13 + 4))(*(undefined4 *)(iVar11 + 0x1c));
              return puVar12;
            }
            uVar9 = *puVar12;
          } while (*puVar12 == uVar17);
        }
        uVar17 = uVar9;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
    }
    local_3c4 = local_2ac;
    local_3c8 = local_2b0;
    FUN_016dd1aa(&local_1d8,&local_2a4,0xcc);
    if (piVar20 != (int *)&DAT_3b9aca00) {
      local_108 = local_3c8;
      local_104 = (undefined **)local_3c4;
      local_100 = piVar20;
      FUN_016dd1aa(&local_fc,&local_1d8,0xcc);
      local_30 = CONCAT31(local_30._1_3_,1);
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: solution queue send failed",0x1f,&local_108,&DAT_0185b7e0,&DAT_0185b8a4);
    }
    return (uint *)&DAT_3b9aca00;
  }
LAB_009c65d0:
  puVar12 = (uint *)FUN_009c6bc0(&local_390);
  return puVar12;
}

