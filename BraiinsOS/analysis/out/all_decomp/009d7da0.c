// FUN_009d7da0 @ 009d7da0 size=2108 calls_out=18 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_009d7da0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *****pppppuVar3;
  undefined4 *****pppppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 *****pppppuVar7;
  undefined4 *****pppppuVar8;
  undefined4 *****pppppuVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined **ppuVar19;
  uint uVar20;
  undefined4 ****ppppuVar21;
  undefined4 *****pppppuVar22;
  char *pcVar23;
  int iVar24;
  undefined **ppuVar25;
  uint uVar26;
  int iVar27;
  undefined4 *****pppppuVar28;
  uint uVar29;
  int *piVar30;
  int *piVar32;
  int *piVar31;
  undefined4 *puVar33;
  int iVar34;
  bool bVar35;
  bool bVar36;
  uint in_fpscr;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined **local_b0;
  undefined **local_a8;
  undefined4 *****local_a4;
  undefined4 local_a0;
  int *local_9c;
  undefined4 ****local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined *local_80;
  undefined ****local_7c;
  undefined ***local_78;
  code *local_74;
  undefined4 *****local_70;
  undefined **local_6c;
  undefined4 *****local_68;
  int local_64;
  undefined4 *****local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 *****local_50;
  undefined **local_4c;
  undefined4 *****local_48;
  
  ppppuVar21 = (undefined4 ****)param_2[8];
  iVar24 = param_2[9];
  iVar27 = param_2[10];
  FUN_015f3b0c(&local_70,1);
  local_50 = local_70;
  local_4c = local_6c;
  local_48 = local_68;
  local_98 = ppppuVar21;
  local_94 = iVar24;
  local_90 = iVar27;
  FUN_015f3c24(&local_70,&local_50,&local_98);
  pppppuVar28 = local_60;
  pppppuVar22 = local_68;
  iVar24 = local_64;
  if (((uint)local_70 & 1) != 0) {
    iVar24 = 0;
    pppppuVar22 = (undefined4 *****)0x0;
    pppppuVar28 = (undefined4 *****)0x0;
  }
  if ((pppppuVar22 == (undefined4 *****)0x0 && iVar24 == 0) &&
     (pppppuVar28 < (undefined4 *****)0x389fd980)) {
    ppuVar25 = (undefined **)param_2[0x13];
    pppppuVar22 = (undefined4 *****)param_2[0x14];
    goto LAB_009d8554;
  }
  FUN_009d86b0(&local_70);
  iVar27 = local_5c;
  pppppuVar9 = local_60;
  pppppuVar7 = local_68;
  ppuVar5 = local_6c;
  pppppuVar3 = local_70;
  ppuVar25 = local_6c;
  if (local_70 == (undefined4 *****)0x0) {
LAB_009d823c:
    local_a8 = ppuVar25;
    if ((DAT_018d9130 < 4) && (DAT_018d986c != '\0')) {
      if (DAT_018d986c == '\x01') {
LAB_009d82ac:
        DataMemoryBarrier(0xb);
        pcVar23 = s_SetGloba_00414c05;
        puVar2 = &DAT_018ae394;
        if (DAT_018dd984 == 2) {
          pcVar23 = DAT_018daa74;
          puVar2 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar24 = (**(code **)(puVar2 + 0x14))(pcVar23,DAT_018d9864);
        if (iVar24 == 0) goto LAB_009d8434;
      }
      else if (DAT_018d986c != '\x02') {
        cVar10 = FUN_0169ac90(&DAT_018d9864);
        if (cVar10 == '\0') goto LAB_009d8434;
        if (cVar10 != '\x02') goto LAB_009d82ac;
      }
      local_5c = DAT_018d9864;
      if (*(int *)(DAT_018d9864 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186ae78);
      }
      local_94 = *(int *)(DAT_018d9864 + 0x20);
      local_90 = *(int *)(DAT_018d9864 + 0x24);
      local_8c = *(undefined4 *)(DAT_018d9864 + 0x28);
      local_50 = &local_98;
      local_4c = &local_80;
      local_7c = &local_78;
      local_9c = (int *)(DAT_018d9864 + 0x1c);
      local_98 = (undefined4 ****)*local_9c;
      local_78 = &local_a8;
      local_a4 = &local_50;
      local_60 = &local_a4;
      local_88 = 0;
      local_48 = (undefined4 *****)&DAT_018abb78;
      local_80 = &DAT_005895a6;
      local_74 = FUN_00604528;
      local_a0 = 1;
      local_6c = (undefined **)0x0;
      local_70 = (undefined4 *****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      pcVar23 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar23 = DAT_018daa74;
        puVar2 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar24 = (**(code **)(puVar2 + 0x28))(pcVar23,&local_70);
      if (iVar24 != 0) {
        (**(code **)(puVar2 + 0x2c))(pcVar23,&local_70);
      }
      pppppuVar28 = (undefined4 *****)param_2[0x11];
      pppppuVar22 = pppppuVar28;
      if (pppppuVar28 == (undefined4 *****)0x0) goto LAB_009d8428;
LAB_009d844c:
      ppuVar25 = (undefined **)FUN_016d38c8((int)pppppuVar28 << 2,1);
      if (ppuVar25 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,(int)pppppuVar28 << 2);
      }
      pppppuVar22 = pppppuVar28;
    }
    else {
LAB_009d8434:
      pppppuVar28 = (undefined4 *****)param_2[0x11];
      pppppuVar22 = pppppuVar28;
      if (pppppuVar28 != (undefined4 *****)0x0) goto LAB_009d844c;
LAB_009d8428:
      ppuVar25 = (undefined **)&DAT_00000004;
      pppppuVar28 = (undefined4 *****)0x0;
    }
    (**(code **)*local_a8)();
    if (param_2[0x12] != 0) {
      thunk_FUN_016d3fb4(param_2[0x13]);
    }
    param_2[0x12] = (int)pppppuVar28;
  }
  else {
    FUN_015f3b0c(&local_70,1);
    dVar39 = (double)FUN_01845f30(pppppuVar22,iVar24);
    pppppuVar8 = local_68;
    ppuVar6 = local_6c;
    pppppuVar4 = local_70;
    iVar24 = param_2[0x11];
    piVar30 = (int *)param_2[0x10];
    local_68 = (undefined4 *****)0x0;
    local_b0 = (undefined **)&DAT_00000004;
    local_6c = (undefined **)&DAT_00000004;
    local_70 = (undefined4 *****)0x0;
    ppuVar19 = (undefined **)((ulonglong)dVar39 >> 0x20);
    if (iVar24 != 0) {
      dVar37 = (double)VectorUnsignedToFloat(pppppuVar28,(byte)(in_fpscr >> 0x16) & 3);
      uVar11 = param_2[4];
      iVar12 = param_2[5];
      iVar13 = param_2[6];
      iVar14 = param_2[7];
      iVar18 = *param_2;
      uVar15 = param_2[1];
      iVar16 = param_2[3];
      piVar31 = piVar30;
      puVar33 = param_1;
LAB_009d7fc8:
      pppppuVar22 = local_68;
      piVar32 = piVar31 + 1;
      pppppuVar28 = (undefined4 *****)*piVar31;
      bVar35 = false;
      local_a4 = pppppuVar28;
      if (iVar16 != 0) {
        uVar17 = FUN_009bd354(uVar11,iVar12,iVar13,iVar14,pppppuVar28);
        uVar1 = uVar17 >> 0x19;
        iVar34 = 0;
        while( true ) {
          uVar17 = uVar15 & uVar17;
          uVar20 = *(uint *)(iVar18 + uVar17);
          uVar29 = uVar20 ^ uVar1 * 0x1010101;
          uVar29 = ~uVar29 & 0x80808080 & uVar29 + 0xfefefeff;
          while (uVar29 != 0) {
            uVar26 = uVar17 + ((uint)LZCOUNT(uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 |
                                             (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >> 3) &
                     uVar15;
            uVar29 = uVar29 - 1 & uVar29;
            if (pppppuVar28 == *(undefined4 ******)(iVar18 + -8 + uVar26 * -8)) {
              bVar35 = true;
              puVar33 = *(undefined4 **)(iVar18 + -4 + uVar26 * -8);
              goto LAB_009d80b0;
            }
          }
          bVar35 = false;
          if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) break;
          iVar34 = iVar34 + 4;
          uVar17 = uVar17 + iVar34;
        }
      }
LAB_009d80b0:
      if (local_64 != 0) {
        uVar17 = FUN_009bd354(pppppuVar9,iVar27,local_58,local_54,pppppuVar28);
        uVar1 = uVar17 >> 0x19;
        iVar34 = 0;
        while( true ) {
          uVar17 = (uint)ppuVar5 & uVar17;
          uVar20 = *(uint *)((int)pppppuVar3 + uVar17);
          uVar29 = uVar20 ^ uVar1 * 0x1010101;
          uVar29 = ~uVar29 & 0x80808080 & uVar29 + 0xfefefeff;
          while (uVar29 != 0) {
            uVar26 = uVar17 + ((uint)LZCOUNT(uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 |
                                             (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >> 3) &
                     (uint)ppuVar5;
            uVar29 = uVar29 - 1 & uVar29;
            if (pppppuVar28 == (undefined4 *****)pppppuVar3[uVar26 * -2 + -2]) {
              if (!bVar35) goto LAB_009d81c0;
              ppppuVar21 = pppppuVar3[uVar26 * -2 + -1];
              if (pppppuVar22 == local_70) {
                FUN_00fbbfac(&local_70);
                local_b0 = local_6c;
              }
              dVar38 = (double)VectorUnsignedToFloat
                                         ((int)ppppuVar21 - (int)puVar33,
                                          (byte)(in_fpscr >> 0x16) & 3);
              dVar38 = (dVar38 * 60.0 * 0.5) / (dVar37 / 1000000000.0 + dVar39);
              local_b0[(int)pppppuVar22] =
                   (undefined *)((uint)(0.0 < dVar38) * (int)(longlong)dVar38);
              local_68 = (undefined4 *****)((int)pppppuVar22 + 1);
              ppuVar19 = local_b0;
              piVar31 = piVar32;
              if (piVar32 != piVar30 + iVar24) goto LAB_009d7fc8;
              goto LAB_009d84a4;
            }
          }
          if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) break;
          iVar34 = iVar34 + 4;
          uVar17 = uVar17 + iVar34;
        }
      }
LAB_009d81c0:
      local_50 = &local_a4;
      local_4c = (undefined **)&LAB_00fac484;
      FUN_00600d2c(&local_98,&DAT_00571677,&local_50);
      ppuVar25 = (undefined **)FUN_009cc4c8(&local_98);
      iVar24 = 0;
      if (local_70 != (undefined4 *****)0x0) {
        iVar24 = thunk_FUN_016d3fb4(local_6c);
      }
      if (ppuVar5 != (undefined **)0x0) {
        iVar24 = (int)ppuVar5 * 9;
      }
      if (ppuVar5 != (undefined **)0x0 && iVar24 != -0xd) {
        thunk_FUN_016d3fb4(pppppuVar3 + (int)ppuVar5 * -2 + -2);
      }
      goto LAB_009d823c;
    }
LAB_009d84a4:
    pppppuVar22 = local_68;
    ppuVar25 = local_6c;
    pppppuVar28 = local_70;
    iVar24 = param_2[1];
    if (iVar24 != 0) {
      ppuVar19 = (undefined **)(iVar24 * 9);
    }
    if (iVar24 != 0 && ppuVar19 != (undefined **)0xfffffff3) {
      thunk_FUN_016d3fb4(*param_2 + iVar24 * -8 + -8);
    }
    param_2[8] = (int)pppppuVar4;
    *param_2 = (int)pppppuVar3;
    param_2[1] = (int)ppuVar5;
    param_2[2] = (int)pppppuVar7;
    param_2[4] = (int)pppppuVar9;
    param_2[3] = local_64;
    param_2[5] = iVar27;
    param_2[10] = (int)pppppuVar8;
    param_2[6] = local_58;
    param_2[7] = local_54;
    param_2[9] = (int)ppuVar6;
    if (param_2[0x12] != 0) {
      thunk_FUN_016d3fb4(param_2[0x13]);
    }
    param_2[0x12] = (int)pppppuVar28;
  }
  param_2[0x13] = (int)ppuVar25;
  param_2[0x14] = (int)pppppuVar22;
LAB_009d8554:
  uVar11 = (int)pppppuVar22 * 4;
  bVar36 = (undefined4 *****)0x3ffffffe < pppppuVar22;
  bVar35 = pppppuVar22 == (undefined4 *****)0x3fffffff;
  pppppuVar28 = (undefined4 *****)0x0;
  if (pppppuVar22 < (undefined4 *****)0x40000000) {
    bVar36 = 0x7ffffffb < uVar11;
    bVar35 = uVar11 == 0x7ffffffc;
  }
  if (!(bVar36 && !bVar35)) {
    if (uVar11 == 0) {
      iVar24 = 4;
    }
    else {
      iVar24 = thunk_FUN_016d4a50(uVar11);
      pppppuVar28 = pppppuVar22;
      if (iVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar11);
      }
    }
    *param_1 = pppppuVar28;
    param_1[1] = iVar24;
    FUN_016dd1aa(iVar24,ppuVar25,uVar11);
    param_1[2] = pppppuVar22;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(0,uVar11);
}

