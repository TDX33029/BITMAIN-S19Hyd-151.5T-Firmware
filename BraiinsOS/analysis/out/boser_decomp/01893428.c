// FUN_01893428 @ 01893428 size=3536 calls_out=33 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_01893428(undefined4 *param_1,undefined4 param_2,code *param_3,code *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            uint param_10)

{
  code *pcVar1;
  undefined4 *******pppppppuVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *******pppppppuVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 ******ppppppuVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 ******ppppppuVar18;
  undefined4 ******ppppppuVar19;
  undefined4 ******ppppppuVar20;
  undefined4 *******pppppppuVar21;
  int iVar22;
  uint uVar23;
  undefined4 ******ppppppuVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 ******ppppppuVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  undefined4 *******pppppppuVar31;
  undefined4 ******ppppppuVar32;
  undefined4 ******ppppppuVar33;
  bool bVar34;
  ulonglong uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  longlong lVar38;
  longlong lVar39;
  uint *puVar40;
  undefined4 local_4c4;
  int local_4c0;
  undefined4 *******local_4bc;
  undefined1 auStack_4b8 [68];
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 uStack_468;
  undefined4 ******ppppppuStack_464;
  undefined4 ******local_460;
  undefined4 ******local_45c;
  uint local_458;
  undefined4 local_454;
  undefined4 ******local_450;
  undefined4 ******local_44c;
  undefined4 ******local_448;
  undefined4 *******local_444;
  int local_440;
  undefined4 *******local_43c;
  undefined4 *******local_438;
  undefined8 local_434;
  undefined4 local_42c;
  undefined4 ******local_428;
  undefined4 ******local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  ppppppuVar32 = (undefined4 ******)param_1[8];
  uVar3 = (uint)ppppppuVar32 >> 3;
  if (((uint)ppppppuVar32 & 7) != 0) {
    uVar3 = ((uint)ppppppuVar32 >> 3) + 1;
  }
  if (param_10 != uVar3) {
    return 1;
  }
  uVar4 = (*param_3)(param_2);
  FUN_0188fef8(auStack_4b8,uVar4,param_7,param_8);
  iVar5 = (*param_4)(param_2,auStack_4b8,param_9,param_10,ppppppuVar32,param_5,param_6);
  if (iVar5 != 0) {
    return 1;
  }
  uVar4 = param_1[4];
  uVar17 = param_1[5];
  local_46c = param_1[6];
  uStack_468 = param_1[7];
  local_474 = uVar4;
  local_470 = uVar17;
  ppppppuStack_464 = ppppppuVar32;
  uVar35 = FUN_01895d9c(param_9,param_10);
  ppppppuVar12 = (undefined4 ******)(uVar35 >> 0x20);
  iVar5 = (int)uVar35;
  if (iVar5 == 0) {
    return 1;
  }
  ppppppuVar20 = (undefined4 ******)param_1[0xe];
  ppppppuVar33 = (undefined4 ******)param_1[0xf];
  ppppppuVar24 = (undefined4 ******)param_1[0x12];
  uVar15 = param_1[0x10];
  uVar26 = param_1[0x11];
  ppppppuVar18 = (undefined4 ******)param_1[0x1b];
  local_460 = ppppppuVar20;
  local_45c = ppppppuVar33;
  local_458 = uVar15;
  local_454 = uVar26;
  local_450 = ppppppuVar24;
  uVar36 = FUN_01892f84(iVar5,ppppppuVar12,&local_460);
  iVar11 = (int)((ulonglong)uVar36 >> 0x20);
  uVar10 = (undefined4)uVar36;
  puVar40 = &local_458;
  FUN_01bda5e0(uVar10,uVar10,param_1[0x13],ppppppuVar20,puVar40,iVar11);
  pppppppuVar6 = (undefined4 *******)param_1[0x15];
  uVar3 = param_1[0x16];
  FUN_0189ba04(&local_444,(int)ppppppuVar33 << 5);
  uVar37 = FUN_018945c8(local_440,local_43c,0,ppppppuVar33);
  FUN_0188f728(&local_460,(int)uVar37,(int)((ulonglong)uVar37 >> 0x20));
  uVar37 = FUN_018945c8(local_440,local_43c,1,ppppppuVar33);
  iVar13 = (int)((ulonglong)uVar37 >> 0x20);
  if (iVar13 != iVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(iVar13,iVar11,&DAT_01d21714);
  }
  FUN_01bed4e2((int)uVar37,uVar10,iVar11 << 2);
  pppppppuVar21 = (undefined4 *******)((int)ppppppuVar33 << 1);
  local_4bc = (undefined4 *******)((int)ppppppuVar33 * -2);
  local_4c0 = (int)ppppppuVar33 << 3;
  pppppppuVar31 = &local_460;
  for (uVar7 = 2; pppppppuVar2 = local_43c, iVar13 = local_440, uVar7 != 0x20; uVar7 = uVar7 + 1) {
    uVar25 = 1;
    if ((uVar7 & 1) == 0) {
      uVar25 = uVar7 >> 1;
    }
    if (local_43c < pppppppuVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d21724);
    }
    uVar29 = uVar7 - 1;
    if ((uVar7 & 1) == 0) {
      uVar29 = uVar7 >> 1;
    }
    uVar8 = FUN_01894620(local_440,pppppppuVar21,uVar29,ppppppuVar33);
    uVar9 = FUN_01894620(iVar13,pppppppuVar21,uVar25,ppppppuVar33);
    uVar37 = FUN_018945c8(iVar13 + local_4c0,(int)local_4bc + (int)pppppppuVar2,0,ppppppuVar33);
    FUN_01bda5e0((int)uVar37,uVar8,uVar9,ppppppuVar20,puVar40,(int)((ulonglong)uVar37 >> 0x20));
    pppppppuVar21 = (undefined4 *******)((int)pppppppuVar21 + (int)ppppppuVar33);
    local_4c0 = local_4c0 + (int)ppppppuVar33 * 4;
    local_4bc = (undefined4 *******)((int)local_4bc - (int)ppppppuVar33);
    pppppppuVar31 = pppppppuVar2;
  }
  FUN_0189ba04(&local_438,ppppppuVar33);
  uVar37 = FUN_0189b9a4(&local_438);
  local_42c = (int)uVar37;
  bVar34 = uVar3 == 0;
  local_438 = &local_444;
  pppppppuVar21 = &local_444;
  if (!bVar34) {
    pppppppuVar21 = pppppppuVar6;
  }
  local_428 = (undefined4 ******)(int)((ulonglong)uVar37 >> 0x20);
  if (!bVar34) {
    pppppppuVar31 = pppppppuVar21 + uVar3;
  }
  local_434._4_4_ = iVar11;
  if (!bVar34) {
    pppppppuVar21 = pppppppuVar31 + -1;
    bVar34 = pppppppuVar21 == (undefined4 *******)0x0;
  }
  local_434._0_4_ = (undefined4 ******)uVar10;
  if (bVar34) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2181c);
  }
  iVar13 = uVar3 * 0x20 + ((uVar3 << 5) / 5) * -5;
  iVar22 = 0x20 - iVar13;
  if (iVar13 == 0) {
    iVar22 = 0x1b;
  }
  uVar8 = FUN_01bd54ac(*pppppppuVar21,0,iVar22);
  FUN_0189472c(local_440,uVar10,iVar11,uVar8);
  if ((uVar3 & 0x3fffffff) != 0) {
    uVar3 = iVar22 - 5;
    ppppppuVar19 = (undefined4 ******)0x0;
    do {
      local_4c4 = (undefined4)uVar36;
      pppppppuVar31 = pppppppuVar31 + -1;
      ppppppuVar27 = *pppppppuVar31;
      if (uVar3 < 0x1c) goto LAB_01893838;
      uVar10 = FUN_01bd54ac(ppppppuVar27,ppppppuVar19,uVar3);
      FUN_01894674(&local_34,local_440,local_4c4,(int)((ulonglong)uVar36 >> 0x20),&local_460,uVar10,
                   uVar37);
      uVar36 = CONCAT44(local_30,local_34);
      uVar37 = CONCAT44(local_28,local_2c);
      uVar7 = uVar3;
      while (uVar3 = uVar7 - 5, uVar3 < 0x20) {
LAB_01893838:
        uVar10 = FUN_01bd54d4(ppppppuVar27,uVar3);
        FUN_01894674(&local_34,local_440,(int)uVar36,(int)((ulonglong)uVar36 >> 0x20),&local_460,
                     uVar10,uVar37);
        uVar36 = CONCAT44(local_30,local_34);
        uVar37 = CONCAT44(local_28,local_2c);
        uVar7 = uVar3;
      }
      uVar37 = CONCAT44(local_28,local_2c);
      uVar36 = CONCAT44(local_30,local_34);
      uVar3 = uVar7 + 0x1b;
      ppppppuVar19 = ppppppuVar27;
    } while (pppppppuVar6 != pppppppuVar31);
  }
  uVar3 = (uint)((ulonglong)uVar36 >> 0x20);
  local_4c4 = (undefined4)uVar36;
  if ((int)((ulonglong)uVar37 >> 0x20) != 0) {
    thunk_FUN_01be4678((int)uVar37);
  }
  FUN_01bed93e(&local_434,0,0x3fc);
  local_438 = (undefined4 *******)0x1;
  if ((undefined4 ******)0x100 < ppppppuVar33) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,ppppppuVar33,0x100,&DAT_01d21784);
  }
  FUN_01bda5e0(local_4c4,local_4c4,&local_438,ppppppuVar20,puVar40,uVar3);
  FUN_0134aee0(local_444,local_440,4,4);
  ppppppuVar19 = (undefined4 ******)param_1[0x17];
  uVar7 = param_1[0x18];
  local_458 = param_1[0x19];
  local_454 = param_1[0x1a];
  local_460 = ppppppuVar19;
  local_45c = (undefined4 ******)uVar7;
  local_450 = ppppppuVar18;
  local_44c = ppppppuVar24;
  local_438 = (undefined4 *******)ppppppuVar18;
  if (ppppppuVar24 != ppppppuVar18) {
    FUN_0189b5f0(&local_44c,&local_438,&DAT_01d216b4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1894228);
    (*pcVar1)();
  }
  pppppppuVar6 = (undefined4 *******)(uVar7 << 1);
  local_448 = ppppppuVar12;
  local_444 = pppppppuVar6;
  if (ppppppuVar12 != (undefined4 ******)(uVar7 * 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_448,&local_444,0,puVar40,&DAT_01d216c4);
  }
  FUN_01bed93e(&local_438,0,0x400);
  if (0x100ffffffff < uVar35) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,ppppppuVar12,0x100,&DAT_01d216d4);
  }
  FUN_01bed4e2(&local_438,iVar5,(int)ppppppuVar12 << 2);
  FUN_0189ba04(&local_34,uVar7);
  uVar36 = FUN_0189b9a4(&local_34);
  iVar11 = (int)((ulonglong)uVar36 >> 0x20);
  uVar10 = (undefined4)uVar36;
  puVar40 = &local_458;
  FUN_01896900(uVar10,iVar11,&local_438,ppppppuVar12,ppppppuVar19,uVar7,puVar40);
  FUN_01bda5e0(uVar10,uVar10,param_1[0x1c],ppppppuVar19,puVar40,iVar11);
  pppppppuVar21 = (undefined4 *******)param_1[0x1e];
  uVar25 = param_1[0x1f];
  FUN_0189ba04(&local_444,uVar7 << 5);
  uVar37 = FUN_018945c8(local_440,local_43c,0,uVar7);
  FUN_0188f728(&local_460,(int)uVar37,(int)((ulonglong)uVar37 >> 0x20));
  uVar37 = FUN_018945c8(local_440,local_43c,1,uVar7);
  iVar13 = (int)((ulonglong)uVar37 >> 0x20);
  if (iVar13 != iVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(iVar13,iVar11,&DAT_01d21714);
  }
  FUN_01bed4e2((int)uVar37,uVar10,iVar11 << 2);
  local_4bc = (undefined4 *******)(uVar7 * -2);
  local_4c0 = uVar7 << 3;
  for (uVar29 = 2; pppppppuVar31 = local_43c, iVar13 = local_440, uVar29 != 0x20;
      uVar29 = uVar29 + 1) {
    uVar23 = 1;
    if ((uVar29 & 1) == 0) {
      uVar23 = uVar29 >> 1;
    }
    if (local_43c < pppppppuVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d21724);
    }
    uVar16 = uVar29 - 1;
    if ((uVar29 & 1) == 0) {
      uVar16 = uVar29 >> 1;
    }
    uVar8 = FUN_01894620(local_440,pppppppuVar6,uVar16);
    uVar9 = FUN_01894620(iVar13,pppppppuVar6,uVar23,uVar7);
    uVar37 = FUN_018945c8(iVar13 + local_4c0,(int)local_4bc + (int)pppppppuVar31,0,uVar7);
    FUN_01bda5e0((int)uVar37,uVar8,uVar9,ppppppuVar19,puVar40,(int)((ulonglong)uVar37 >> 0x20));
    local_4c0 = local_4c0 + uVar7 * 4;
    pppppppuVar6 = (undefined4 *******)((int)pppppppuVar6 + uVar7);
    local_4bc = (undefined4 *******)((int)local_4bc - uVar7);
  }
  FUN_0189ba04(&local_438,uVar7);
  uVar37 = FUN_0189b9a4(&local_438);
  local_42c = (int)uVar37;
  bVar34 = uVar25 == 0;
  local_438 = &local_444;
  pppppppuVar6 = &local_444;
  if (!bVar34) {
    pppppppuVar6 = pppppppuVar21;
  }
  local_428 = (undefined4 ******)(int)((ulonglong)uVar37 >> 0x20);
  if (!bVar34) {
    local_4bc = pppppppuVar6 + uVar25;
    pppppppuVar6 = local_4bc + -1;
    bVar34 = pppppppuVar6 == (undefined4 *******)0x0;
  }
  local_434 = uVar36;
  if (bVar34) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2181c);
  }
  iVar13 = uVar25 * 0x20 + ((uVar25 << 5) / 5) * -5;
  iVar22 = 0x20 - iVar13;
  if (iVar13 == 0) {
    iVar22 = 0x1b;
  }
  uVar8 = FUN_01bd54ac(*pppppppuVar6,0,iVar22);
  FUN_0189472c(local_440,uVar10,iVar11,uVar8);
  if ((uVar25 & 0x3fffffff) != 0) {
    uVar25 = iVar22 - 5;
    ppppppuVar24 = (undefined4 ******)0x0;
    do {
      local_4bc = local_4bc + -1;
      ppppppuVar27 = *local_4bc;
      if (uVar25 < 0x1c) goto LAB_01893c78;
      uVar10 = FUN_01bd54ac(ppppppuVar27,ppppppuVar24,uVar25);
      FUN_01894674(&local_34,local_440,(int)uVar36,(int)((ulonglong)uVar36 >> 0x20),&local_460,
                   uVar10,uVar37);
      uVar29 = uVar25;
      while( true ) {
        uVar37 = CONCAT44(local_28,local_2c);
        uVar36 = CONCAT44(local_30,local_34);
        uVar25 = uVar29 - 5;
        if (0x1f < uVar25) break;
LAB_01893c78:
        uVar10 = FUN_01bd54d4(ppppppuVar27,uVar25);
        FUN_01894674(&local_34,local_440,(int)uVar36,(int)((ulonglong)uVar36 >> 0x20),&local_460,
                     uVar10,uVar37);
        uVar29 = uVar25;
      }
      uVar25 = uVar29 + 0x1b;
      ppppppuVar24 = ppppppuVar27;
    } while (pppppppuVar21 != local_4bc);
  }
  uVar25 = (uint)((ulonglong)uVar36 >> 0x20);
  uVar10 = (undefined4)uVar36;
  if ((int)((ulonglong)uVar37 >> 0x20) != 0) {
    thunk_FUN_01be4678((int)uVar37);
  }
  FUN_01bed93e(&local_434,0,0x3fc);
  local_438 = (undefined4 *******)0x1;
  if (0x100 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar7,0x100,&DAT_01d21784);
  }
  FUN_01bda5e0(uVar10,uVar10,&local_438,ppppppuVar19,puVar40,uVar25);
  FUN_0134aee0(local_444,local_440,4,4);
  local_438 = (undefined4 *******)ppppppuVar20;
  local_434._0_4_ = ppppppuVar33;
  local_434._4_4_ = uVar15;
  local_42c = uVar26;
  local_428 = ppppppuVar18;
  lVar38 = FUN_0189ba6c(uVar10,uVar25);
  local_34 = (undefined4 ******)((ulonglong)lVar38 >> 0x20);
  uVar26 = (undefined4)lVar38;
  local_460 = ppppppuVar33;
  if (local_34 != ppppppuVar33) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_34,&local_460,0,puVar40,&DAT_01d21794);
  }
  FUN_01bd50d4(uVar26,ppppppuVar20,ppppppuVar33);
  FUN_01bd524c(local_4c4,local_4c4,uVar26,ppppppuVar20,ppppppuVar33);
  FUN_01bda5e0(local_4c4,local_4c4,*param_1,ppppppuVar20,(int)&local_434 + 4,uVar3);
  if (ppppppuVar33 != (undefined4 ******)0x0) {
    thunk_FUN_01be4678(uVar26);
  }
  uVar37 = uVar36;
  if (ppppppuVar18 < ppppppuVar32) {
    FUN_0189ba04(&local_438,uVar17);
    lVar38 = FUN_0189b9a4(&local_438);
    uVar15 = (uint)((ulonglong)lVar38 >> 0x20);
    if (uVar15 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar3,uVar15,&DAT_01d21704);
    }
    FUN_01bed4e2((int)lVar38,local_4c4,uVar3 << 2);
    if (uVar3 != 0) goto LAB_01893e54;
  }
  else {
    if (uVar3 == 0) goto joined_r0x01893f28;
    lVar38 = lVar38 << 0x20;
LAB_01893e54:
    thunk_FUN_01be4678(local_4c4);
  }
  iVar13 = (int)((ulonglong)lVar38 >> 0x20);
  iVar11 = (int)lVar38;
  if (iVar11 == 0) goto joined_r0x01893f28;
  uVar37 = FUN_0188f9b8(param_1 + 0x17,&local_474);
  iVar14 = (int)((ulonglong)uVar37 >> 0x20);
  iVar22 = (int)uVar37;
  if (iVar22 == 0) {
    uVar37 = uVar36;
    if (iVar13 != 0) {
      thunk_FUN_01be4678(iVar11);
    }
    goto joined_r0x01893f28;
  }
  FUN_01bda5e0(iVar22,iVar22,param_1[9],uVar4,&local_46c,iVar14);
  FUN_01bda5e0(iVar11,iVar11,iVar22,uVar4,&local_46c,iVar13);
  if (ppppppuVar18 < ppppppuVar32) {
    FUN_0189ba04(&local_438,uVar17);
    lVar39 = FUN_0189b9a4(&local_438);
    uVar3 = (uint)((ulonglong)lVar39 >> 0x20);
    if (uVar3 < uVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar25,uVar3,&DAT_01d21704);
    }
    FUN_01bed4e2((int)lVar39,uVar10,uVar25 << 2);
    if (uVar25 != 0) {
LAB_01893f68:
      thunk_FUN_01be4678(uVar10);
    }
    iVar30 = (int)((ulonglong)lVar39 >> 0x20);
    iVar28 = (int)lVar39;
    if (iVar28 != 0) {
      FUN_01bd5160(iVar28,iVar28,iVar11,uVar4,uVar17);
      if (iVar13 != 0) {
        thunk_FUN_01be4678(iVar11);
      }
      uVar36 = FUN_01899178(param_1 + 2,iVar28,iVar30);
      local_460 = (undefined4 ******)((ulonglong)uVar36 >> 0x20);
      uVar4 = (undefined4)uVar36;
      local_438 = (undefined4 *******)ppppppuVar12;
      if (local_460 != ppppppuVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(0,&local_460,&local_438,0,uVar17,&DAT_01d216e4);
      }
      iVar11 = FUN_01bd4f04(uVar4,iVar5,ppppppuVar12);
      if (iVar11 == -1) {
        if (ppppppuVar12 != (undefined4 ******)0x0) {
          thunk_FUN_01be4678(uVar4);
        }
        if (iVar14 != 0) {
          thunk_FUN_01be4678(iVar22);
        }
        if (ppppppuVar12 != (undefined4 ******)0x0) {
          thunk_FUN_01be4678(iVar5);
        }
        FUN_01896024(iVar28,iVar30,param_9,param_10);
        if (iVar30 == 0) {
          return 0;
        }
        thunk_FUN_01be4678(iVar28);
        return 0;
      }
      lVar38 = lVar39;
      if (ppppppuVar12 != (undefined4 ******)0x0) {
        thunk_FUN_01be4678(uVar4);
      }
    }
  }
  else if (uVar25 != 0) {
    lVar39 = ZEXT48(ppppppuVar32) << 0x20;
    goto LAB_01893f68;
  }
  if ((int)((ulonglong)lVar38 >> 0x20) != 0) {
    thunk_FUN_01be4678((int)lVar38);
  }
joined_r0x01893f28:
  if ((int)((ulonglong)uVar37 >> 0x20) != 0) {
    thunk_FUN_01be4678((int)uVar37);
  }
  if (ppppppuVar12 != (undefined4 ******)0x0) {
    thunk_FUN_01be4678(iVar5);
  }
  return 1;
}

