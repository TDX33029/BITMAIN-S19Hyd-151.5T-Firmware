// FUN_018daebc @ 018daebc size=3108 calls_out=27 calls_in=0
// strings: 

void FUN_018daebc(char *param_1,ulonglong *param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong **ppuVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  ulonglong *extraout_r1;
  ulonglong *puVar10;
  ulonglong *puVar11;
  uint uVar12;
  uint *puVar13;
  char cVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong *puVar19;
  int iVar20;
  undefined *puVar21;
  uint uVar22;
  undefined1 *puVar23;
  bool bVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong *local_4bc;
  ulonglong *local_498;
  undefined2 local_494 [2];
  undefined8 local_490;
  ulonglong **local_488;
  code *local_484;
  int iStack_480;
  int iStack_47c;
  uint local_3a0;
  int iStack_39c;
  int iStack_398;
  int iStack_394;
  int local_390;
  int local_38c;
  int iStack_388;
  int iStack_384;
  int local_380;
  int iStack_37c;
  int local_378;
  int iStack_374;
  uint local_370;
  int iStack_36c;
  int iStack_368;
  int iStack_364;
  int local_360;
  int iStack_35c;
  int iStack_358;
  int iStack_354;
  int local_350;
  int iStack_34c;
  int iStack_348;
  int iStack_344;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  int iStack_330;
  undefined8 uStack_328;
  int iStack_320;
  int local_31c;
  int iStack_318;
  int iStack_314;
  int iStack_310;
  int local_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  int local_2fc;
  int iStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  uint local_2e8;
  int iStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  int iStack_2d8;
  uint local_2d0;
  undefined1 auStack_2cc [164];
  undefined1 auStack_228 [88];
  undefined4 local_1d0;
  ulonglong *local_1cc;
  undefined *local_1c8;
  ulonglong *local_1c4;
  undefined *local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int local_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int local_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  uint local_170;
  int local_16c;
  undefined1 *local_168;
  int local_164;
  undefined2 local_154;
  uint local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  undefined1 local_30;
  
  if ((*param_4 < 0) || (param_4[3] != -0x7ffffffe)) {
    FUN_018c5504(&local_1d0,param_4,&DAT_0052389f,1,&DAT_0052389f,1);
    local_488._0_3_ = (undefined3)((uint)local_1d0 >> 8);
    ppuVar3 = local_488;
    puVar10 = local_1c4;
    puVar19 = local_1cc;
    if ((char)local_1d0 == '\x14') goto LAB_018daf44;
    local_488._0_2_ = (undefined2)((uint)local_1d0 >> 8);
    param_1[3] = local_1d0._3_1_;
    *(undefined2 *)(param_1 + 1) = local_488._0_2_;
    *(ulonglong **)(param_1 + 4) = local_1cc;
    *(undefined **)(param_1 + 8) = local_1c8;
    *(ulonglong **)(param_1 + 0xc) = local_1c4;
    *param_1 = (char)local_1d0;
    local_488 = ppuVar3;
  }
  else {
    puVar10 = param_2;
    puVar19 = (ulonglong *)(param_4 + 4);
LAB_018daf44:
    local_498 = puVar19;
    if (4 < DAT_01d51b00) {
      local_488 = &local_498;
      local_484 = FUN_018af970;
      local_1c0 = &DAT_01d23130;
      local_1c4 = (ulonglong *)&DAT_00000012;
      local_1c8 = &DAT_00520ced;
      local_1cc = (ulonglong *)&DAT_00000012;
      local_1d0 = (uint *)&DAT_00520ced;
      FUN_0193b350(&DAT_00520cd3,&local_488,5,&local_1d0);
      puVar10 = extraout_r1;
    }
    iVar17 = *(int *)((int)param_2 + 0xbc);
    uVar22 = 0;
    bVar24 = *(int *)(iVar17 + 0x5c) != 0;
    if (bVar24) {
      puVar10 = *(ulonglong **)(iVar17 + 0x18);
    }
    if (bVar24 && puVar10 != (ulonglong *)0x0) {
      puVar13 = *(uint **)(iVar17 + 0x14);
      puVar11 = (ulonglong *)((int)puVar10 * 8 + -8);
      do {
        uVar22 = *puVar13;
        puVar10 = puVar11;
        if (uVar22 != 0) break;
        puVar10 = puVar11 + -1;
        bVar24 = puVar11 != (ulonglong *)0x0;
        puVar13 = puVar13 + 2;
        puVar11 = puVar10;
      } while (bVar24);
    }
    uVar6 = (uint)*(ushort *)((int)puVar19 + 0xc);
    if (uVar6 == 4) {
      uVar25 = FUN_018b3fac(*(int *)((int)puVar19 + 4),(int)puVar19[1]);
      puVar10 = (ulonglong *)((ulonglong)uVar25 >> 0x20);
      uVar6 = (uint)uVar25 & 0xffff;
      uVar12 = 4;
      if (uVar6 != 10) goto LAB_018daff0;
LAB_018db0c8:
      uVar6 = uVar12;
      cVar14 = '\v';
      bVar24 = *(int *)(iVar17 + 0x58) != 0;
      if (bVar24) {
        puVar10 = *(ulonglong **)(iVar17 + 0x18);
      }
      if (bVar24 && puVar10 != (ulonglong *)0x0) {
        piVar15 = *(int **)(iVar17 + 0x14);
        iVar18 = (int)puVar10 << 3;
        do {
          if (*piVar15 != 1) {
            if ((*(byte *)(param_3[1] + 0xc) - 1 < 2) && (*(char *)(*param_3 + 0xb0) != '\0')) {
              uVar5 = 0x2208;
              goto LAB_018db1b4;
            }
            sVar4 = FUN_018b3fac(*(int *)((int)puVar19 + 4),(int)puVar19[1]);
            if (sVar4 == 10) goto LAB_018db014;
            iVar17 = *param_3;
            local_154 = 4;
            local_1cc = (ulonglong *)0xd0001;
            local_1d0 = (uint *)&DAT_80000000;
            FUN_018e077c(iVar17,&local_1d0,*(char *)(iVar17 + 0x28) == '\x02');
            uVar5 = 0x2f08;
            goto LAB_018db3a4;
          }
          piVar15 = piVar15 + 2;
          iVar18 = iVar18 + -8;
        } while (iVar18 != 0);
      }
LAB_018db0e0:
      iVar17 = *param_3;
      local_154 = 4;
      local_1cc = (ulonglong *)0x130001;
      local_1d0 = (uint *)&DAT_80000000;
      FUN_018e077c(iVar17,&local_1d0,*(char *)(iVar17 + 0x28) == '\x02');
      param_1[1] = cVar14;
      *param_1 = '\a';
    }
    else {
LAB_018daff0:
      if (uVar6 == 4) {
        uVar12 = uVar6;
        goto LAB_018db0c8;
      }
      cVar14 = '\t';
      if ((uVar6 != 5) || (cVar14 = '\v', (uVar22 & 1) == 0)) goto LAB_018db0e0;
LAB_018db014:
      if ((char)puVar19[0xb] == '\0') {
        uVar25 = thunk_FUN_01bee35a(0,0x2c0);
        piVar15 = (int *)((int)uVar25 + (int)((ulonglong)uVar25 >> 0x20));
        iVar18 = *(int *)((int)puVar19 + 4);
        uVar2 = puVar19[1];
        if ((char)piVar15[4] == '\0') {
          FUN_019ae6ac(&local_488);
          *piVar15 = (int)local_488;
          piVar15[1] = (int)local_484;
          piVar15[2] = iStack_480;
          piVar15[3] = iStack_47c;
          *(undefined1 *)(piVar15 + 4) = 1;
        }
        local_4bc = param_2 + 5;
        local_1b8 = piVar15[2];
        local_1b4 = piVar15[3];
        local_1c0 = (undefined *)*piVar15;
        local_1bc = piVar15[1];
        *piVar15 = (int)(local_1c0 + 1);
        piVar15[1] = local_1bc + (uint)((undefined *)0xfffffffe < local_1c0);
        local_1d0 = &DAT_0056d238;
        local_1cc = (ulonglong *)0x0;
        local_1c8 = (undefined *)0x0;
        local_1c4 = (ulonglong *)0x0;
        for (iVar20 = (int)uVar2 * 0x14; iVar20 != 0; iVar20 = iVar20 + -0x14) {
          FUN_018a82b8(iVar18);
          uVar7 = FUN_018bd358();
          iVar8 = FUN_018ca3a0(&local_1d0,uVar7);
          if (iVar8 != 0) break;
          iVar18 = iVar18 + 0x14;
          FUN_018ca480(&local_1d0,uVar7);
        }
        if ((local_1cc != (ulonglong *)0x0) &&
           (uVar12 = (int)local_1cc * 2 + 5U & 0xfffffffc,
           (undefined1 *)((int)local_1cc + uVar12) != (undefined1 *)0xfffffffb)) {
          thunk_FUN_01be4678((int)local_1d0 - uVar12);
        }
        if (iVar20 == 0) {
          local_494[0] = 0x23;
          uVar2 = param_2[0x1b];
          iVar18 = FUN_018ced50((int)uVar2,*(int *)((int)param_2 + 0xdc),*(int *)((int)puVar19 + 4),
                                (int)puVar19[1],local_494,1);
          iVar20 = *param_3;
          if (iVar18 == 0) {
            *(short *)(iVar20 + 0xa4) = (short)uVar6;
            if (uVar6 != 5) {
              uVar25 = FUN_018b4000(*(int *)((int)puVar19 + 4),(int)puVar19[1]);
              FUN_018dbddc(&local_1d0,iVar20,*(undefined4 *)(iVar17 + 0x2c),
                           *(undefined4 *)(iVar17 + 0x30),uVar25);
              cVar14 = (char)local_1d0;
              if ((char)local_1d0 != '\x14') {
                FUN_01bed4e2(param_1 + 1,(uint)&local_1d0 | 1,0xf);
                *param_1 = cVar14;
                goto LAB_018db140;
              }
            }
            uVar25 = FUN_018b3f54(*(int *)((int)puVar19 + 4),(int)puVar19[1]);
            iVar18 = (int)((ulonglong)uVar25 >> 0x20);
            pcVar9 = (char *)uVar25;
            if (pcVar9 == (char *)0x0) {
LAB_018db4f4:
              uVar26 = FUN_018cdc94(*(undefined4 *)(iVar17 + 0x14),*(undefined4 *)(iVar17 + 0x18),
                                    (short)puVar19[2],*(undefined2 *)((int)puVar19 + 0x12));
              iVar18 = (int)(uVar26 >> 0x20);
              if ((int)uVar26 == 2) {
                local_154 = 4;
                local_1cc = (ulonglong *)0x60001;
                local_1d0 = (uint *)&DAT_80000000;
                FUN_018e077c(iVar20,&local_1d0,*(char *)(iVar20 + 0x28) == '\x02');
                *(undefined1 *)(iVar20 + 0xb1) = 1;
                uVar5 = 0x3108;
LAB_018db1b4:
                *(undefined2 *)param_1 = uVar5;
                goto LAB_018db140;
              }
              uVar12 = 4;
              if ((uVar26 & 1) != 0) {
                uVar12 = 5;
              }
              local_490 = uVar26;
              if (uVar6 == uVar12) {
                uVar27 = uVar26;
                if ((int)*param_2 != 2) {
                  iVar8 = FUN_018dbf80((int)*param_2,*(int *)((int)param_2 + 4),(int)uVar26,iVar18);
                  uVar27 = local_490;
                  if (iVar8 != 0) {
                    local_154 = 4;
                    local_1cc = (ulonglong *)0xd0001;
                    local_1d0 = (uint *)&DAT_80000000;
                    FUN_018e077c(iVar20,&local_1d0,*(char *)(iVar20 + 0x28) == '\x02');
                    uVar5 = 0x2d08;
                    goto LAB_018db658;
                  }
                }
                local_490._4_4_ = iVar18;
                if (3 < DAT_01d51b00) {
                  local_488 = (ulonglong **)&local_490;
                  local_484 = FUN_018cf324;
                  local_1c0 = &DAT_01d23140;
                  local_1c4 = (ulonglong *)&DAT_00000012;
                  local_1c8 = &DAT_00520ced;
                  local_1cc = (ulonglong *)&DAT_00000012;
                  local_1d0 = (uint *)&DAT_00520ced;
                  local_490 = uVar27;
                  FUN_0193b350(&DAT_0058e9d1,&local_488,4,&local_1d0);
                  uVar27 = local_490;
                }
                *(ulonglong *)(iVar20 + 0x78) = uVar26;
                *param_2 = uVar26;
                puVar1 = (undefined4 *)(local_490._4_4_ + 0xc);
                local_490 = uVar27;
                FUN_018dbfd0(&local_488,param_2 + 0x1d,*puVar1);
                if (-1 < *param_4) {
                  FUN_018dc0bc(&local_488,param_4[1],param_4[2]);
                }
                puVar13 = &local_3a0;
                local_3a0 = (uint)param_2[1];
                iStack_39c = *(int *)((int)param_2 + 0xc);
                iStack_398 = (int)param_2[2];
                iStack_394 = *(int *)((int)param_2 + 0x14);
                local_390 = (int)param_2[3];
                local_38c = *(int *)((int)param_2 + 0x1c);
                iStack_388 = (int)param_2[4];
                iStack_384 = *(int *)((int)param_2 + 0x24);
                local_380 = *(int *)((int)puVar19 + 0x14);
                iStack_37c = (int)puVar19[3];
                local_378 = *(int *)((int)puVar19 + 0x1c);
                iStack_374 = (int)puVar19[4];
                local_370 = *(uint *)((int)puVar19 + 0x24);
                iStack_36c = (int)puVar19[5];
                iStack_368 = *(int *)((int)puVar19 + 0x2c);
                iStack_364 = (int)puVar19[6];
                uVar27 = CONCAT44(&local_370,&DAT_3b9aca00);
                if ((uVar26 & 1) == 0) {
                  puVar23 = *(undefined1 **)(param_2 + 0x12);
                  if (puVar23 == &DAT_3b9aca00) {
                    puVar21 = (undefined *)0x80000000;
                  }
                  else {
                    puVar21 = *(undefined **)(param_2 + 6);
                    puVar13 = *(uint **)local_4bc;
                    local_4bc = *(ulonglong **)((int)param_2 + 0x2c);
                    uVar26 = param_2[0x11];
                    iVar16 = *(int *)((int)param_2 + 0x8c);
                    iVar8 = *(int *)((int)param_2 + 0x94);
                    local_1d0 = puVar13;
                    local_1cc = local_4bc;
                    local_1c8 = puVar21;
                    FUN_01bed4e2(&local_1c4,(int *)((int)param_2 + 0x34),0x54);
                    local_170 = (uint)uVar26;
                    local_16c = iVar16;
                    local_168 = puVar23;
                    local_164 = iVar8;
                    if (puVar21 == (undefined *)0x80000000) {
                      FUN_018c4448(&local_1c0);
                    }
                    else {
                      FUN_01bed4e2(auStack_228,(int *)((int)param_2 + 0x34),0x54);
                    }
                  }
                  local_48 = (int)param_2[0x18];
                  iStack_44 = *(int *)((int)param_2 + 0xc4);
                  iStack_40 = (int)param_2[0x19];
                  iStack_3c = *(int *)((int)param_2 + 0xcc);
                  iStack_38 = (int)param_2[0x1a];
                  uVar26 = param_2[0x1c];
                  FUN_01bed4e2(&local_170,&local_488,0xe8);
                  local_1cc = local_4bc;
                  local_1d0 = puVar13;
                  local_1c8 = puVar21;
                  local_34 = iVar17;
                  FUN_01bed4e2(&local_1c4,auStack_228,0x54);
                  local_88 = local_3a0;
                  iStack_84 = iStack_39c;
                  iStack_80 = iStack_398;
                  iStack_7c = iStack_394;
                  iStack_78 = local_390;
                  local_74 = local_38c;
                  iStack_70 = iStack_388;
                  iStack_6c = iStack_384;
                  iStack_68 = local_380;
                  iStack_64 = iStack_37c;
                  local_60 = local_378;
                  iStack_5c = iStack_374;
                  uStack_58 = local_370;
                  iStack_54 = iStack_36c;
                  iStack_50 = iStack_368;
                  iStack_4c = iStack_364;
                  local_30 = (char)uVar26;
                  FUN_018d9fec(param_1,&local_1d0,iVar20,iVar18,puVar19,uVar22 & 1);
                  FUN_018dbd70(param_4);
                  FUN_0134aee0(*(int *)((int)param_2 + 0xd4),(int)uVar2,2,4);
                }
                else {
                  puVar23 = *(undefined1 **)(param_2 + 0x12);
                  iStack_320 = -0x80000000;
                  if (puVar23 != &DAT_3b9aca00) {
                    local_164 = *(int *)((int)param_2 + 0x94);
                    local_1c0 = *(undefined **)(param_2 + 7);
                    local_1bc = *(int *)((int)param_2 + 0x3c);
                    uVar27 = param_2[7];
                    iStack_320 = (int)param_2[8];
                    local_1d0 = *(uint **)local_4bc;
                    local_1cc = *(ulonglong **)((int)param_2 + 0x2c);
                    local_1c8 = *(undefined **)(param_2 + 6);
                    local_1c4 = *(ulonglong **)((int)param_2 + 0x34);
                    local_1b4 = *(int *)((int)param_2 + 0x44);
                    iStack_1b0 = (int)param_2[9];
                    iStack_1ac = *(int *)((int)param_2 + 0x4c);
                    iStack_1a8 = (int)param_2[10];
                    local_1a4 = *(int *)((int)param_2 + 0x54);
                    iStack_1a0 = (int)param_2[0xb];
                    iStack_19c = *(int *)((int)param_2 + 0x5c);
                    iStack_198 = (int)param_2[0xc];
                    local_194 = *(int *)((int)param_2 + 100);
                    iStack_190 = (int)param_2[0xd];
                    iStack_18c = *(int *)((int)param_2 + 0x6c);
                    iStack_188 = (int)param_2[0xe];
                    iStack_184 = *(int *)((int)param_2 + 0x74);
                    local_180 = (int)param_2[0xf];
                    iStack_17c = *(int *)((int)param_2 + 0x7c);
                    iStack_178 = (int)param_2[0x10];
                    iStack_174 = *(int *)((int)param_2 + 0x84);
                    local_170 = (uint)param_2[0x11];
                    local_16c = *(int *)((int)param_2 + 0x8c);
                    local_1b8 = iStack_320;
                    local_168 = puVar23;
                    if (local_1c8 == (undefined *)0x80000000) {
                      local_360 = *(int *)((int)param_2 + 0x44);
                      iStack_35c = (int)param_2[9];
                      iStack_358 = *(int *)((int)param_2 + 0x4c);
                      iStack_354 = (int)param_2[10];
                      local_350 = *(int *)((int)param_2 + 0x54);
                      iStack_34c = (int)param_2[0xb];
                      iStack_348 = *(int *)((int)param_2 + 0x5c);
                      iStack_344 = (int)param_2[0xc];
                      local_340 = *(int *)((int)param_2 + 100);
                      iStack_33c = (int)param_2[0xd];
                      iStack_338 = *(int *)((int)param_2 + 0x6c);
                      iStack_334 = (int)param_2[0xe];
                      iStack_330 = *(int *)((int)param_2 + 0x74);
                    }
                    else {
                      uVar27 = FUN_018c4448(&local_1d0);
                      iStack_320 = -0x80000000;
                    }
                  }
                  local_31c = local_360;
                  iStack_318 = iStack_35c;
                  iStack_314 = iStack_358;
                  iStack_310 = iStack_354;
                  local_30c = local_350;
                  iStack_308 = iStack_34c;
                  iStack_304 = iStack_348;
                  iStack_300 = iStack_344;
                  local_2fc = local_340;
                  iStack_2f8 = iStack_33c;
                  iStack_2f4 = iStack_338;
                  iStack_2f0 = iStack_334;
                  iStack_2ec = iStack_330;
                  local_2e8 = (uint)param_2[0x18];
                  iStack_2e4 = *(int *)((int)param_2 + 0xc4);
                  iStack_2e0 = (int)param_2[0x19];
                  iStack_2dc = *(int *)((int)param_2 + 0xcc);
                  iStack_2d8 = (int)param_2[0x1a];
                  uStack_328 = uVar27;
                  FUN_01bed4e2(&local_1d0,&local_488,0xe8);
                  local_2d0 = (uint)param_2[0x34];
                  if (local_2d0 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb0cc(&DAT_01d23150);
                  }
                  FUN_01bed4e2(auStack_2cc,(int *)((int)param_2 + 0x1a4),0xa4);
                  FUN_018bb49c(param_1,iVar17,iVar20,param_3[1],*(int *)((int)puVar19 + 4),
                               (int)puVar19[1],&uStack_328,&local_2e8,&local_3a0,iVar18,&local_1d0,
                               param_2 + 0x1f,(int *)((int)param_2 + 0xd4),&local_2d0,
                               *(undefined1 *)((int)param_2 + 0xe1));
                  FUN_018dbd70(param_4);
                }
                goto LAB_018db150;
              }
              local_154 = 4;
              local_1cc = (ulonglong *)0xd0001;
              local_1d0 = (uint *)&DAT_80000000;
              FUN_018e077c(iVar20,&local_1d0,*(char *)(iVar20 + 0x28) == '\x02');
              uVar5 = 0x3508;
            }
            else {
              if (iVar18 != 0) {
                iVar18 = iVar18 << 1;
                do {
                  if (*pcVar9 == '\0') goto LAB_018db4f4;
                  pcVar9 = pcVar9 + 2;
                  iVar18 = iVar18 + -2;
                } while (iVar18 != 0);
              }
              local_154 = 4;
              local_1cc = (ulonglong *)0x60001;
              local_1d0 = (uint *)&DAT_80000000;
              FUN_018e077c(iVar20,&local_1d0,*(char *)(iVar20 + 0x28) == '\x02');
              uVar5 = 0x3608;
            }
          }
          else {
            local_154 = 4;
            local_1cc = (ulonglong *)0x1a0001;
            local_1d0 = (uint *)&DAT_80000000;
            FUN_018e077c(iVar20,&local_1d0,*(char *)(iVar20 + 0x28) == '\x02');
            uVar5 = 0x4008;
          }
LAB_018db658:
          *(undefined2 *)param_1 = uVar5;
          *(undefined1 *)(iVar20 + 0xb1) = 1;
          goto LAB_018db140;
        }
        iVar17 = *param_3;
        local_154 = 4;
        local_1cc = (ulonglong *)0x100001;
        local_1d0 = (uint *)&DAT_80000000;
        FUN_018e077c(iVar17,&local_1d0,*(char *)(iVar17 + 0x28) == '\x02');
        uVar5 = 0x708;
      }
      else {
        iVar17 = *param_3;
        local_154 = 4;
        local_1cc = (ulonglong *)0xd0001;
        local_1d0 = (uint *)&DAT_80000000;
        FUN_018e077c(iVar17,&local_1d0,*(char *)(iVar17 + 0x28) == '\x02');
        uVar5 = 0x3208;
      }
LAB_018db3a4:
      *(undefined2 *)param_1 = uVar5;
    }
    *(undefined1 *)(iVar17 + 0xb1) = 1;
  }
LAB_018db140:
  FUN_018dbd70(param_4);
  FUN_018dc0f4(param_2);
LAB_018db150:
  thunk_FUN_01be4678(param_2);
  return;
}

