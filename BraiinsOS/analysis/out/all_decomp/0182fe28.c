// FUN_0182fe28 @ 0182fe28 size=8968 calls_out=12 calls_in=1
// strings: 

undefined8 FUN_0182fe28(int *param_1,int *param_2,int param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int *piVar24;
  int *piVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  uint *puVar45;
  uint uVar46;
  int iVar47;
  bool bVar48;
  int *local_590;
  int *local_58c;
  uint local_588;
  uint local_584;
  uint local_580;
  uint local_57c;
  int *local_578;
  int *local_574;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  int local_500;
  int local_4fc;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  int local_4ec;
  int local_4e8;
  int local_4e4;
  int local_4e0;
  uint local_4dc;
  int local_4d8;
  int local_4d4;
  int local_4d0;
  int local_4cc;
  int local_4c8;
  int local_4c4;
  int local_4c0;
  int local_4bc;
  int local_4b8;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  int local_4a4;
  int local_4a0;
  int local_49c;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  uint local_488;
  uint local_484;
  uint local_480;
  uint local_47c;
  uint local_478;
  uint local_474;
  uint local_470;
  uint local_46c;
  uint local_468;
  uint local_464;
  uint local_460;
  uint local_45c;
  uint local_458;
  uint local_454;
  uint local_450;
  uint local_44c;
  uint local_448;
  uint local_444;
  uint local_440;
  uint local_43c;
  int local_438 [129];
  int aiStack_234 [130];
  int local_2c;
  
  local_528 = 1;
  local_2c = DAT_018ddaf8;
  local_504 = 0;
  local_508 = 0;
  local_50c = 0;
  local_510 = 0;
  local_514 = 0;
  local_518 = 0;
  local_51c = 0;
  local_520 = 0;
  local_524 = 0;
  if ((((((((param_4[1] == 0 && *param_4 == 0) && param_4[2] == 0) && param_4[3] == 0) &&
         param_4[4] == 0) && param_4[5] == 0) && param_4[6] == 0) && param_4[7] == 0) ||
     (*(int *)(param_3 + 0x78) != 0)) {
    uVar43 = 0;
    bVar48 = false;
  }
  else {
    piVar25 = local_438 + 1;
    FUN_01829054(&local_488,piVar25,param_4);
    iVar28 = param_1[2];
    uVar20 = FUN_01825428(iVar28,&local_488);
    *(undefined4 *)(iVar28 + 0x408) = uVar20;
    iVar32 = param_1[2];
    uVar20 = FUN_01825428(iVar32 + 0x204,piVar25);
    iVar28 = param_1[2];
    *(undefined4 *)(iVar32 + 0x40c) = uVar20;
    piVar24 = aiStack_234 + 1;
    uVar17 = *(uint *)(iVar28 + 0x408);
    uVar43 = *(uint *)(iVar28 + 0x40c);
    if ((int)uVar43 <= (int)uVar17) {
      uVar43 = uVar17;
    }
    FUN_016dd1aa(piVar24,param_3,0x7c);
    iVar28 = *param_1;
    iVar27 = param_1[1];
    FUN_01829ed0(iVar27,iVar28,&local_528,piVar24);
    FUN_0181e958(iVar27 + 0x274);
    uVar43 = uVar43 & ~((int)uVar43 >> 0x1f);
    local_488 = *(uint *)(iVar28 + 0x118);
    local_484 = *(uint *)(iVar28 + 0x11c);
    local_480 = *(uint *)(iVar28 + 0x120);
    local_47c = *(uint *)(iVar28 + 0x124);
    local_478 = *(uint *)(iVar28 + 0x128);
    local_474 = *(uint *)(iVar28 + 300);
    local_470 = *(uint *)(iVar28 + 0x130);
    local_46c = *(uint *)(iVar28 + 0x134);
    local_468 = *(uint *)(iVar28 + 0x138);
    local_464 = *(uint *)(iVar28 + 0x13c);
    FUN_0181f914(piVar25,&local_488);
    FUN_0181f130(piVar24,piVar25,&local_488);
    FUN_0181f130(iVar27 + 0x1f8,iVar27 + 0x1f8,piVar25);
    iVar39 = iVar27 + 0x1a4;
    FUN_0181f130(iVar27 + 0x220,iVar27 + 0x220,piVar24);
    iVar32 = 6;
    iVar42 = iVar28 + 0xf0;
    do {
      iVar32 = iVar32 + -1;
      FUN_0181f130(&local_488,&local_488,iVar42);
      iVar42 = iVar42 + -0x28;
      FUN_0181f914(piVar25,&local_488);
      FUN_0181f130(piVar24,piVar25,&local_488);
      FUN_0181f130(iVar39,iVar39,piVar25);
      FUN_0181f130(iVar39 + 0x28,iVar39 + 0x28,piVar24);
      iVar39 = iVar39 + -0x54;
    } while (iVar32 != 0);
    iVar32 = iVar28;
    do {
      iVar39 = iVar32 + 0x28;
      FUN_0181f130(iVar32,iVar27,&DAT_00563cac);
      iVar27 = iVar27 + 0x54;
      iVar32 = iVar39;
    } while (iVar28 + 0x140 != iVar39);
    bVar48 = true;
  }
  local_574 = aiStack_234 + 1;
  local_578 = local_438 + 1;
  local_564 = param_5[1];
  local_560 = param_5[2];
  local_55c = param_5[3];
  local_568 = *param_5;
  local_544 = param_5[5];
  local_540 = param_5[6];
  local_53c = param_5[7];
  local_548 = param_5[4];
  local_558 = 0;
  local_554 = 0;
  local_550 = 0;
  local_54c = 0;
  local_538 = 0;
  local_534 = 0;
  local_530 = 0;
  local_52c = 0;
  uVar17 = FUN_01823e6c(local_578,&local_568);
  uVar18 = FUN_01823e6c(local_574,&local_548);
  if ((int)uVar17 < (int)uVar43) {
  }
  else {
    uVar43 = uVar17;
  }
  if ((int)uVar43 < (int)uVar18) {
    uVar43 = uVar18;
  }
  param_2[0x1e] = 1;
  FUN_016dd606(param_2,0,0x28);
  piVar24 = param_2 + 10;
  FUN_016dd606(piVar24,0,0x28);
  piVar25 = param_2 + 0x14;
  iVar28 = uVar43 - 1;
  FUN_016dd606(piVar25,0,0x28);
  if (uVar43 != 0) {
    if (bVar48) {
      local_590 = local_438 + uVar43;
      local_58c = aiStack_234 + uVar43;
      do {
        if (param_2[0x1e] == 0) {
          FUN_0181f130(piVar25,piVar25,piVar24);
          FUN_0181f914(&local_4d8,piVar24);
          iVar7 = local_4b4;
          iVar6 = local_4b8;
          iVar5 = local_4bc;
          iVar4 = local_4c0;
          iVar3 = local_4c4;
          iVar2 = local_4c8;
          iVar1 = local_4cc;
          iVar42 = local_4d0;
          iVar39 = local_4d4;
          iVar27 = local_4d8;
          FUN_0181f914(&local_500,param_2);
          uVar43 = (local_500 << 0x1f) >> 0x1f;
          uVar40 = local_4dc * 3 + (uVar43 >> 10);
          uVar43 = uVar43 >> 6;
          uVar46 = local_4f0 * 3 + uVar43;
          uVar44 = local_4ec * 3 + uVar43;
          uVar19 = local_4e8 * 3 + uVar43;
          uVar21 = local_4e4 * 3 + uVar43;
          uVar22 = local_4e0 * 3 + uVar43;
          uVar33 = local_4f8 * 3 + uVar43;
          uVar29 = local_4f4 * 3 + uVar43;
          uVar36 = local_4fc * 3 + (uVar43 & 0xffffffbf);
          iVar32 = local_500 * 3;
          local_4b0 = 0xffff0bc - iVar27;
          local_4ac = 0xffffefc - iVar39;
          local_48c = 0xfffffc - iVar7;
          local_4a8 = 0xffffffc - iVar42;
          local_4a4 = 0xffffffc - iVar1;
          local_4a0 = 0xffffffc - iVar2;
          local_49c = 0xffffffc - iVar3;
          local_498 = 0xffffffc - iVar4;
          local_494 = 0xffffffc - iVar5;
          local_490 = 0xffffffc - iVar6;
          FUN_0181f130(&local_4b0,&local_4b0,param_2);
          iVar16 = local_48c;
          iVar15 = local_490;
          iVar14 = local_494;
          iVar13 = local_498;
          iVar12 = local_49c;
          iVar11 = local_4a0;
          iVar10 = local_4a4;
          iVar9 = local_4a8;
          iVar8 = local_4ac;
          iVar7 = local_4b0;
          local_4dc = uVar40 >> 1;
          local_500 = (uVar36 * 0x2000000 & 0x2000000) + ((uVar43 & 0xfffffc2f) + iVar32 >> 1);
          local_4fc = (uVar33 * 0x2000000 & 0x2000000) + (uVar36 >> 1);
          local_4f8 = (uVar29 * 0x2000000 & 0x2000000) + (uVar33 >> 1);
          local_4f4 = (uVar46 * 0x2000000 & 0x2000000) + (uVar29 >> 1);
          local_4f0 = (uVar44 * 0x2000000 & 0x2000000) + (uVar46 >> 1);
          local_4ec = (uVar19 * 0x2000000 & 0x2000000) + (uVar44 >> 1);
          local_4e8 = (uVar21 * 0x2000000 & 0x2000000) + (uVar19 >> 1);
          local_4e4 = (uVar22 * 0x2000000 & 0x2000000) + (uVar21 >> 1);
          local_4e0 = (uVar40 & 1) * 0x2000000 + (uVar22 >> 1);
          FUN_0181f914(param_2,&local_500);
          iVar47 = param_2[1] + iVar8 * 2;
          iVar23 = param_2[2] + iVar9 * 2;
          param_2[2] = iVar23;
          iVar30 = param_2[3] + iVar10 * 2;
          iVar34 = param_2[4] + iVar11 * 2;
          param_2[1] = iVar47;
          iVar41 = param_2[5] + iVar12 * 2;
          iVar38 = param_2[6] + iVar13 * 2;
          param_2[3] = iVar30;
          iVar37 = param_2[7] + iVar14 * 2;
          param_2[4] = iVar34;
          iVar31 = param_2[9] + iVar16 * 2;
          param_2[5] = iVar41;
          param_2[6] = iVar38;
          iVar35 = param_2[8] + iVar15 * 2;
          param_2[7] = iVar37;
          param_2[8] = iVar35;
          param_2[9] = iVar31;
          iVar26 = *param_2 + iVar7 * 2;
          *param_2 = iVar26;
          FUN_0181f914(&local_4d8);
          iVar6 = local_4b4;
          iVar5 = local_4b8;
          iVar4 = local_4bc;
          iVar3 = local_4c0;
          iVar2 = local_4c4;
          iVar1 = local_4c8;
          iVar42 = local_4cc;
          iVar39 = local_4d0;
          iVar27 = local_4d4;
          iVar32 = local_4d8;
          local_4b0 = iVar7 + iVar26;
          local_4ac = iVar8 + iVar47;
          local_4a8 = iVar9 + iVar23;
          local_4a4 = iVar10 + iVar30;
          local_4a0 = iVar11 + iVar34;
          local_49c = iVar12 + iVar41;
          local_498 = iVar38 + iVar13;
          local_494 = iVar37 + iVar14;
          local_490 = iVar35 + iVar15;
          local_48c = iVar31 + iVar16;
          FUN_0181f130(piVar24,&local_4b0,&local_500);
          param_2[10] = (0x17ffe91a - iVar32) - param_2[10];
          param_2[0xb] = (0x17fffe7a - iVar27) - param_2[0xb];
          param_2[0x10] = (0x17fffffa - iVar3) - param_2[0x10];
          param_2[0x11] = (0x17fffffa - iVar4) - param_2[0x11];
          param_2[0x12] = (0x17fffffa - iVar5) - param_2[0x12];
          param_2[0xc] = (0x17fffffa - iVar39) - param_2[0xc];
          param_2[0xd] = (0x17fffffa - iVar42) - param_2[0xd];
          param_2[0xe] = (0x17fffffa - iVar1) - param_2[0xe];
          param_2[0xf] = (0x17fffffa - iVar2) - param_2[0xf];
          param_2[0x13] = (int)(&UNK_017ffffa + (-param_2[0x13] - iVar6));
        }
        else {
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          param_2[8] = 0;
          param_2[9] = 0;
          param_2[10] = 0;
          param_2[0xb] = 0;
          param_2[0xc] = 0;
          param_2[0xd] = 0;
          param_2[0xe] = 0;
          param_2[0xf] = 0;
          param_2[0x10] = 0;
          param_2[0x11] = 0;
          param_2[0x12] = 0;
          param_2[0x13] = 0;
          param_2[0x14] = 0;
          param_2[0x15] = 0;
          param_2[0x16] = 0;
          param_2[0x17] = 0;
          param_2[0x18] = 0;
          param_2[0x19] = 0;
          param_2[0x1a] = 0;
          param_2[0x1b] = 0;
          param_2[0x1c] = 0;
          param_2[0x1d] = 0;
          param_2[0x1e] = 1;
        }
        iVar32 = param_1[2];
        if ((iVar28 < *(int *)(iVar32 + 0x408)) &&
           (iVar27 = *(int *)(iVar32 + iVar28 * 4), iVar27 != 0)) {
          if (iVar27 < 1) {
            iVar27 = ~(iVar27 >> 1) * 0x54 + param_1[1];
            FUN_016dd1aa(&local_488,iVar27);
            local_574 = (int *)(0xffff0bc - *(int *)(iVar27 + 0x28));
            local_45c = 0xffffefc - *(int *)(iVar27 + 0x2c);
            local_43c = 0xfffffc - *(int *)(iVar27 + 0x4c);
            local_578 = (int *)(0xffffffc - *(int *)(iVar27 + 0x44));
            local_458 = 0xffffffc - *(int *)(iVar27 + 0x30);
            local_454 = 0xffffffc - *(int *)(iVar27 + 0x34);
            local_450 = 0xffffffc - *(int *)(iVar27 + 0x38);
            local_44c = 0xffffffc - *(int *)(iVar27 + 0x3c);
            local_448 = 0xffffffc - *(int *)(iVar27 + 0x40);
            local_440 = 0xffffffc - *(int *)(iVar27 + 0x48);
          }
          else {
            iVar27 = (iVar27 + -1 >> 1) * 0x54 + param_1[1];
            FUN_016dd1aa(&local_488,iVar27);
            local_574 = *(int **)(iVar27 + 0x28);
            local_45c = *(uint *)(iVar27 + 0x2c);
            local_458 = *(uint *)(iVar27 + 0x30);
            local_454 = *(uint *)(iVar27 + 0x34);
            local_578 = *(int **)(iVar27 + 0x44);
            local_450 = *(uint *)(iVar27 + 0x38);
            local_44c = *(uint *)(iVar27 + 0x3c);
            local_448 = *(uint *)(iVar27 + 0x40);
            local_440 = *(uint *)(iVar27 + 0x48);
            local_43c = *(uint *)(iVar27 + 0x4c);
          }
          local_460 = (uint)local_574;
          local_444 = (uint)local_578;
          FUN_018294ac(param_2,param_2,&local_488,0);
        }
        if ((iVar28 < *(int *)(iVar32 + 0x40c)) &&
           (iVar32 = *(int *)(iVar32 + iVar28 * 4 + 0x204), iVar32 != 0)) {
          if (iVar32 < 1) {
            puVar45 = (uint *)(~(iVar32 >> 1) * 0x28 + *param_1);
            iVar32 = ~(iVar32 >> 1) * 0x54 + param_1[1];
            local_460 = 0xffff0bc - *(int *)(iVar32 + 0x28);
            local_588 = 0xffffefc - *(int *)(iVar32 + 0x2c);
            local_43c = 0xfffffc - *(int *)(iVar32 + 0x4c);
            local_578 = (int *)(0xffffffc - *(int *)(iVar32 + 0x30));
            local_44c = 0xffffffc - *(int *)(iVar32 + 0x3c);
            local_574 = (int *)(0xffffffc - *(int *)(iVar32 + 0x34));
            local_57c = 0xffffffc - *(int *)(iVar32 + 0x38);
            local_584 = 0xffffffc - *(int *)(iVar32 + 0x40);
            local_580 = 0xffffffc - *(int *)(iVar32 + 0x44);
            local_440 = 0xffffffc - *(int *)(iVar32 + 0x48);
            local_488 = *puVar45;
            local_484 = puVar45[1];
            local_480 = puVar45[2];
            local_47c = puVar45[3];
            local_478 = puVar45[4];
            local_474 = puVar45[5];
            local_470 = puVar45[6];
            local_46c = puVar45[7];
            local_468 = puVar45[8];
            local_464 = puVar45[9];
          }
          else {
            iVar32 = iVar32 + -1 >> 1;
            puVar45 = (uint *)(iVar32 * 0x28 + *param_1);
            iVar32 = iVar32 * 0x54 + param_1[1];
            local_588 = *(uint *)(iVar32 + 0x2c);
            local_578 = *(int **)(iVar32 + 0x30);
            local_574 = *(int **)(iVar32 + 0x34);
            local_57c = *(uint *)(iVar32 + 0x38);
            local_584 = *(uint *)(iVar32 + 0x40);
            local_580 = *(uint *)(iVar32 + 0x44);
            local_460 = *(uint *)(iVar32 + 0x28);
            local_44c = *(uint *)(iVar32 + 0x3c);
            local_440 = *(uint *)(iVar32 + 0x48);
            local_43c = *(uint *)(iVar32 + 0x4c);
            local_488 = *puVar45;
            local_484 = puVar45[1];
            local_480 = puVar45[2];
            local_47c = puVar45[3];
            local_478 = puVar45[4];
            local_474 = puVar45[5];
            local_470 = puVar45[6];
            local_46c = puVar45[7];
            local_468 = puVar45[8];
            local_464 = puVar45[9];
          }
          local_438[0] = 0;
          local_45c = local_588;
          local_458 = (uint)local_578;
          local_454 = (uint)local_574;
          local_450 = local_57c;
          local_448 = local_584;
          local_444 = local_580;
          FUN_018294ac(param_2,param_2,&local_488,0);
        }
        if ((iVar28 < (int)uVar17) && (iVar32 = *local_590, iVar32 != 0)) {
          if (iVar32 < 1) {
            iVar27 = ~(iVar32 >> 1) * 0x40;
            local_488 = *(uint *)(&DAT_004e39e4 + ~(iVar32 >> 1) * 0x40);
            local_43c = 0xfffffc - (*(uint *)(&DAT_004e3a20 + iVar27) >> 10);
            uVar19 = *(uint *)(&DAT_004e3a14 + iVar27);
            local_440 = 0xffffffc -
                        ((*(uint *)(&DAT_004e3a20 + iVar27) & 0x3ff) << 0x10 |
                        *(uint *)(&DAT_004e3a1c + iVar27) >> 0x10);
            local_574 = (int *)(0xffffffc -
                               ((*(uint *)(&DAT_004e3a1c + iVar27) & 0xffff) << 10 |
                               *(uint *)(&DAT_004e3a18 + iVar27) >> 0x16));
            local_578 = (int *)(0xffffffc -
                               ((*(uint *)(&DAT_004e3a18 + iVar27) & 0x3fffff) << 4 | uVar19 >> 0x1c
                               ));
            uVar43 = *(uint *)(&DAT_004e39f4 + iVar27);
            local_464 = *(uint *)(&DAT_004e3a00 + iVar27);
            local_45c = 0xffffefc -
                        ((*(uint *)(&DAT_004e3a08 + iVar27) & 0xfffff) << 6 |
                        *(uint *)(&DAT_004e3a04 + iVar27) >> 0x1a);
            local_460 = 0xffff0bc - (*(uint *)(&DAT_004e3a04 + iVar27) & 0x3ffffff);
            local_458 = 0xffffffc -
                        ((*(uint *)(&DAT_004e3a0c + iVar27) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004e3a08 + iVar27) >> 0x14);
            local_454 = 0xffffffc -
                        ((*(uint *)(&DAT_004e3a10 + iVar27) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004e3a0c + iVar27) >> 0xe);
            local_450 = 0xffffffc - ((uVar19 & 3) << 0x18 | *(uint *)(&DAT_004e3a10 + iVar27) >> 8);
            local_44c = 0xffffffc - ((uVar19 & 0xfffffff) >> 2);
            local_484 = (*(uint *)(&DAT_004e39e8 + iVar27) & 0xfffff) << 6 | local_488 >> 0x1a;
            local_480 = (*(uint *)(&DAT_004e39ec + iVar27) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004e39e8 + iVar27) >> 0x14;
            local_47c = (*(uint *)(&DAT_004e39f0 + iVar27) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004e39ec + iVar27) >> 0xe;
            local_478 = (uVar43 & 3) << 0x18 | *(uint *)(&DAT_004e39f0 + iVar27) >> 8;
            local_470 = (*(uint *)(&DAT_004e39f8 + iVar27) & 0x3fffff) << 4 | uVar43 >> 0x1c;
            local_46c = (*(uint *)(&DAT_004e39fc + iVar27) & 0xffff) << 10 |
                        *(uint *)(&DAT_004e39f8 + iVar27) >> 0x16;
            local_468 = (local_464 & 0x3ff) << 0x10 | *(uint *)(&DAT_004e39fc + iVar27) >> 0x10;
          }
          else {
            iVar27 = iVar32 + -1 >> 1;
            iVar32 = iVar27 * 0x40;
            local_488 = *(uint *)(&DAT_004e39e4 + iVar27 * 0x40);
            local_464 = *(uint *)(&DAT_004e3a00 + iVar32);
            uVar43 = *(uint *)(&DAT_004e39f4 + iVar32);
            local_484 = (*(uint *)(&DAT_004e39e8 + iVar32) & 0xfffff) << 6 | local_488 >> 0x1a;
            local_480 = (*(uint *)(&DAT_004e39ec + iVar32) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004e39e8 + iVar32) >> 0x14;
            local_47c = (*(uint *)(&DAT_004e39f0 + iVar32) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004e39ec + iVar32) >> 0xe;
            local_478 = (uVar43 & 3) << 0x18 | *(uint *)(&DAT_004e39f0 + iVar32) >> 8;
            uVar19 = *(uint *)(&DAT_004e3a14 + iVar32);
            local_470 = (*(uint *)(&DAT_004e39f8 + iVar32) & 0x3fffff) << 4 | uVar43 >> 0x1c;
            local_46c = (*(uint *)(&DAT_004e39fc + iVar32) & 0xffff) << 10 |
                        *(uint *)(&DAT_004e39f8 + iVar32) >> 0x16;
            local_468 = (local_464 & 0x3ff) << 0x10 | *(uint *)(&DAT_004e39fc + iVar32) >> 0x10;
            local_458 = (*(uint *)(&DAT_004e3a0c + iVar32) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004e3a08 + iVar32) >> 0x14;
            local_45c = (*(uint *)(&DAT_004e3a08 + iVar32) & 0xfffff) << 6 |
                        *(uint *)(&DAT_004e3a04 + iVar32) >> 0x1a;
            local_460 = *(uint *)(&DAT_004e3a04 + iVar32) & 0x3ffffff;
            local_454 = (*(uint *)(&DAT_004e3a10 + iVar32) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004e3a0c + iVar32) >> 0xe;
            local_450 = (uVar19 & 3) << 0x18 | *(uint *)(&DAT_004e3a10 + iVar32) >> 8;
            local_578 = (int *)((*(uint *)(&DAT_004e3a18 + iVar32) & 0x3fffff) << 4 | uVar19 >> 0x1c
                               );
            local_44c = (uVar19 & 0xfffffff) >> 2;
            local_574 = (int *)((*(uint *)(&DAT_004e3a1c + iVar32) & 0xffff) << 10 |
                               *(uint *)(&DAT_004e3a18 + iVar32) >> 0x16);
            local_43c = *(uint *)(&DAT_004e3a20 + iVar32) >> 10;
            local_440 = (*(uint *)(&DAT_004e3a20 + iVar32) & 0x3ff) << 0x10 |
                        *(uint *)(&DAT_004e3a1c + iVar32) >> 0x10;
          }
          local_464 = local_464 >> 10;
          local_474 = (uVar43 & 0xfffffff) >> 2;
          local_488 = local_488 & 0x3ffffff;
          local_448 = (uint)local_578;
          local_444 = (uint)local_574;
          local_438[0] = 0;
          FUN_01828760(param_2,param_2,&local_488,&local_528);
        }
        if ((iVar28 < (int)uVar18) && (iVar32 = *local_58c, iVar32 != 0)) {
          if (iVar32 < 1) {
            iVar27 = ~(iVar32 >> 1) * 0x40;
            local_488 = *(uint *)(&DAT_004639e4 + ~(iVar32 >> 1) * 0x40);
            local_43c = 0xfffffc - (*(uint *)(&DAT_00463a20 + iVar27) >> 10);
            uVar19 = *(uint *)(&DAT_00463a14 + iVar27);
            local_440 = 0xffffffc -
                        ((*(uint *)(&DAT_00463a20 + iVar27) & 0x3ff) << 0x10 |
                        *(uint *)(&DAT_00463a1c + iVar27) >> 0x10);
            local_574 = (int *)(0xffffffc -
                               ((*(uint *)(&DAT_00463a1c + iVar27) & 0xffff) << 10 |
                               *(uint *)(&DAT_00463a18 + iVar27) >> 0x16));
            local_578 = (int *)(0xffffffc -
                               ((*(uint *)(&DAT_00463a18 + iVar27) & 0x3fffff) << 4 | uVar19 >> 0x1c
                               ));
            uVar43 = *(uint *)(&DAT_004639f4 + iVar27);
            local_464 = *(uint *)(&DAT_00463a00 + iVar27);
            local_45c = 0xffffefc -
                        ((*(uint *)(&DAT_00463a08 + iVar27) & 0xfffff) << 6 |
                        *(uint *)(&DAT_00463a04 + iVar27) >> 0x1a);
            local_460 = 0xffff0bc - (*(uint *)(&DAT_00463a04 + iVar27) & 0x3ffffff);
            local_458 = 0xffffffc -
                        ((*(uint *)(&DAT_00463a0c + iVar27) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_00463a08 + iVar27) >> 0x14);
            local_454 = 0xffffffc -
                        ((*(uint *)(&DAT_00463a10 + iVar27) & 0xff) << 0x12 |
                        *(uint *)(&DAT_00463a0c + iVar27) >> 0xe);
            local_450 = 0xffffffc - ((uVar19 & 3) << 0x18 | *(uint *)(&DAT_00463a10 + iVar27) >> 8);
            local_44c = 0xffffffc - ((uVar19 & 0xfffffff) >> 2);
            local_484 = (*(uint *)(&DAT_004639e8 + iVar27) & 0xfffff) << 6 | local_488 >> 0x1a;
            local_480 = (*(uint *)(&DAT_004639ec + iVar27) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004639e8 + iVar27) >> 0x14;
            local_47c = (*(uint *)(&DAT_004639f0 + iVar27) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004639ec + iVar27) >> 0xe;
            local_478 = (uVar43 & 3) << 0x18 | *(uint *)(&DAT_004639f0 + iVar27) >> 8;
            local_470 = (*(uint *)(&DAT_004639f8 + iVar27) & 0x3fffff) << 4 | uVar43 >> 0x1c;
            local_46c = (*(uint *)(&DAT_004639fc + iVar27) & 0xffff) << 10 |
                        *(uint *)(&DAT_004639f8 + iVar27) >> 0x16;
            local_468 = (local_464 & 0x3ff) << 0x10 | *(uint *)(&DAT_004639fc + iVar27) >> 0x10;
          }
          else {
            iVar27 = iVar32 + -1 >> 1;
            iVar32 = iVar27 * 0x40;
            local_488 = *(uint *)(&DAT_004639e4 + iVar27 * 0x40);
            local_464 = *(uint *)(&DAT_00463a00 + iVar32);
            uVar43 = *(uint *)(&DAT_004639f4 + iVar32);
            local_484 = (*(uint *)(&DAT_004639e8 + iVar32) & 0xfffff) << 6 | local_488 >> 0x1a;
            local_480 = (*(uint *)(&DAT_004639ec + iVar32) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004639e8 + iVar32) >> 0x14;
            local_47c = (*(uint *)(&DAT_004639f0 + iVar32) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004639ec + iVar32) >> 0xe;
            local_478 = (uVar43 & 3) << 0x18 | *(uint *)(&DAT_004639f0 + iVar32) >> 8;
            uVar19 = *(uint *)(&DAT_00463a14 + iVar32);
            local_470 = (*(uint *)(&DAT_004639f8 + iVar32) & 0x3fffff) << 4 | uVar43 >> 0x1c;
            local_46c = (*(uint *)(&DAT_004639fc + iVar32) & 0xffff) << 10 |
                        *(uint *)(&DAT_004639f8 + iVar32) >> 0x16;
            local_468 = (local_464 & 0x3ff) << 0x10 | *(uint *)(&DAT_004639fc + iVar32) >> 0x10;
            local_458 = (*(uint *)(&DAT_00463a0c + iVar32) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_00463a08 + iVar32) >> 0x14;
            local_45c = (*(uint *)(&DAT_00463a08 + iVar32) & 0xfffff) << 6 |
                        *(uint *)(&DAT_00463a04 + iVar32) >> 0x1a;
            local_460 = *(uint *)(&DAT_00463a04 + iVar32) & 0x3ffffff;
            local_454 = (*(uint *)(&DAT_00463a10 + iVar32) & 0xff) << 0x12 |
                        *(uint *)(&DAT_00463a0c + iVar32) >> 0xe;
            local_450 = (uVar19 & 3) << 0x18 | *(uint *)(&DAT_00463a10 + iVar32) >> 8;
            local_578 = (int *)((*(uint *)(&DAT_00463a18 + iVar32) & 0x3fffff) << 4 | uVar19 >> 0x1c
                               );
            local_44c = (uVar19 & 0xfffffff) >> 2;
            local_574 = (int *)((*(uint *)(&DAT_00463a1c + iVar32) & 0xffff) << 10 |
                               *(uint *)(&DAT_00463a18 + iVar32) >> 0x16);
            local_43c = *(uint *)(&DAT_00463a20 + iVar32) >> 10;
            local_440 = (*(uint *)(&DAT_00463a20 + iVar32) & 0x3ff) << 0x10 |
                        *(uint *)(&DAT_00463a1c + iVar32) >> 0x10;
          }
          local_464 = local_464 >> 10;
          local_474 = (uVar43 & 0xfffffff) >> 2;
          local_488 = local_488 & 0x3ffffff;
          local_448 = (uint)local_578;
          local_444 = (uint)local_574;
          local_438[0] = 0;
          FUN_01828760(param_2,param_2,&local_488,&local_528);
        }
        bVar48 = iVar28 != 0;
        local_590 = local_590 + -1;
        local_58c = local_58c + -1;
        iVar28 = iVar28 + -1;
      } while (bVar48);
    }
    else {
      do {
        if (param_2[0x1e] == 0) {
          FUN_0181f130(piVar25,piVar25,piVar24);
          FUN_0181f914(&local_4d8,piVar24);
          iVar7 = local_4b4;
          iVar6 = local_4b8;
          iVar5 = local_4bc;
          iVar4 = local_4c0;
          iVar3 = local_4c4;
          iVar2 = local_4c8;
          iVar1 = local_4cc;
          iVar42 = local_4d0;
          iVar39 = local_4d4;
          iVar27 = local_4d8;
          FUN_0181f914(&local_500,param_2);
          uVar43 = (local_500 << 0x1f) >> 0x1f;
          uVar40 = local_4dc * 3 + (uVar43 >> 10);
          uVar43 = uVar43 >> 6;
          uVar46 = local_4f0 * 3 + uVar43;
          uVar44 = local_4ec * 3 + uVar43;
          uVar19 = local_4e8 * 3 + uVar43;
          uVar33 = local_4f8 * 3 + uVar43;
          uVar29 = local_4f4 * 3 + uVar43;
          uVar21 = local_4e4 * 3 + uVar43;
          uVar22 = local_4e0 * 3 + uVar43;
          uVar36 = local_4fc * 3 + (uVar43 & 0xffffffbf);
          iVar32 = local_500 * 3;
          local_4b0 = 0xffff0bc - iVar27;
          local_4ac = 0xffffefc - iVar39;
          local_48c = 0xfffffc - iVar7;
          local_4a8 = 0xffffffc - iVar42;
          local_4a4 = 0xffffffc - iVar1;
          local_4a0 = 0xffffffc - iVar2;
          local_49c = 0xffffffc - iVar3;
          local_498 = 0xffffffc - iVar4;
          local_494 = 0xffffffc - iVar5;
          local_490 = 0xffffffc - iVar6;
          FUN_0181f130(&local_4b0,&local_4b0,param_2);
          iVar16 = local_48c;
          iVar15 = local_490;
          iVar14 = local_494;
          iVar13 = local_498;
          iVar12 = local_49c;
          iVar11 = local_4a0;
          iVar10 = local_4a4;
          iVar9 = local_4a8;
          iVar8 = local_4ac;
          iVar7 = local_4b0;
          local_4dc = uVar40 >> 1;
          local_500 = (uVar36 * 0x2000000 & 0x2000000) + ((uVar43 & 0xfffffc2f) + iVar32 >> 1);
          local_4fc = (uVar33 * 0x2000000 & 0x2000000) + (uVar36 >> 1);
          local_4f8 = (uVar29 * 0x2000000 & 0x2000000) + (uVar33 >> 1);
          local_4f4 = (uVar46 * 0x2000000 & 0x2000000) + (uVar29 >> 1);
          local_4f0 = (uVar44 * 0x2000000 & 0x2000000) + (uVar46 >> 1);
          local_4ec = (uVar19 * 0x2000000 & 0x2000000) + (uVar44 >> 1);
          local_4e8 = (uVar21 * 0x2000000 & 0x2000000) + (uVar19 >> 1);
          local_4e4 = (uVar22 * 0x2000000 & 0x2000000) + (uVar21 >> 1);
          local_4e0 = (uVar40 & 1) * 0x2000000 + (uVar22 >> 1);
          FUN_0181f914(param_2,&local_500);
          iVar47 = param_2[1] + iVar8 * 2;
          iVar31 = param_2[2] + iVar9 * 2;
          iVar26 = param_2[3] + iVar10 * 2;
          iVar35 = param_2[4] + iVar11 * 2;
          param_2[2] = iVar31;
          iVar38 = param_2[6] + iVar13 * 2;
          param_2[4] = iVar35;
          iVar34 = param_2[8] + iVar15 * 2;
          iVar37 = param_2[7] + iVar14 * 2;
          iVar41 = param_2[5] + iVar12 * 2;
          param_2[1] = iVar47;
          iVar30 = param_2[9] + iVar16 * 2;
          param_2[5] = iVar41;
          param_2[6] = iVar38;
          param_2[7] = iVar37;
          param_2[8] = iVar34;
          param_2[9] = iVar30;
          param_2[3] = iVar26;
          iVar23 = *param_2 + iVar7 * 2;
          *param_2 = iVar23;
          FUN_0181f914(&local_4d8);
          iVar6 = local_4b4;
          iVar5 = local_4b8;
          iVar4 = local_4bc;
          iVar3 = local_4c0;
          iVar2 = local_4c4;
          iVar1 = local_4c8;
          iVar42 = local_4cc;
          iVar39 = local_4d0;
          iVar27 = local_4d4;
          iVar32 = local_4d8;
          local_4b0 = iVar23 + iVar7;
          local_4ac = iVar47 + iVar8;
          local_4a8 = iVar31 + iVar9;
          local_4a4 = iVar26 + iVar10;
          local_4a0 = iVar35 + iVar11;
          local_49c = iVar41 + iVar12;
          local_498 = iVar38 + iVar13;
          local_494 = iVar37 + iVar14;
          local_490 = iVar34 + iVar15;
          local_48c = iVar30 + iVar16;
          FUN_0181f130(piVar24,&local_4b0,&local_500);
          param_2[10] = (0x17ffe91a - iVar32) - param_2[10];
          param_2[0xb] = (0x17fffe7a - iVar27) - param_2[0xb];
          param_2[0xc] = (0x17fffffa - iVar39) - param_2[0xc];
          param_2[0x11] = (0x17fffffa - iVar4) - param_2[0x11];
          param_2[0x12] = (0x17fffffa - iVar5) - param_2[0x12];
          param_2[0xd] = (0x17fffffa - iVar42) - param_2[0xd];
          param_2[0xe] = (0x17fffffa - iVar1) - param_2[0xe];
          param_2[0xf] = (0x17fffffa - iVar2) - param_2[0xf];
          param_2[0x10] = (0x17fffffa - iVar3) - param_2[0x10];
          param_2[0x13] = (int)(&UNK_017ffffa + (-param_2[0x13] - iVar6));
        }
        else {
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          param_2[8] = 0;
          param_2[9] = 0;
          param_2[10] = 0;
          param_2[0xb] = 0;
          param_2[0xc] = 0;
          param_2[0xd] = 0;
          param_2[0xe] = 0;
          param_2[0xf] = 0;
          param_2[0x10] = 0;
          param_2[0x11] = 0;
          param_2[0x12] = 0;
          param_2[0x13] = 0;
          param_2[0x14] = 0;
          param_2[0x15] = 0;
          param_2[0x16] = 0;
          param_2[0x17] = 0;
          param_2[0x18] = 0;
          param_2[0x19] = 0;
          param_2[0x1a] = 0;
          param_2[0x1b] = 0;
          param_2[0x1c] = 0;
          param_2[0x1d] = 0;
          param_2[0x1e] = 1;
        }
        if ((iVar28 < (int)uVar17) && (iVar32 = local_578[iVar28], iVar32 != 0)) {
          if (iVar32 < 1) {
            iVar27 = ~(iVar32 >> 1) * 0x40;
            local_488 = *(uint *)(&DAT_004e39e4 + ~(iVar32 >> 1) * 0x40);
            local_580 = 0xfffffc - (*(uint *)(&DAT_004e3a20 + iVar27) >> 10);
            uVar19 = *(uint *)(&DAT_004e3a14 + iVar27);
            local_57c = 0xffffffc -
                        ((*(uint *)(&DAT_004e3a20 + iVar27) & 0x3ff) << 0x10 |
                        *(uint *)(&DAT_004e3a1c + iVar27) >> 0x10);
            local_448 = 0xffffffc -
                        ((*(uint *)(&DAT_004e3a18 + iVar27) & 0x3fffff) << 4 | uVar19 >> 0x1c);
            local_444 = 0xffffffc -
                        ((*(uint *)(&DAT_004e3a1c + iVar27) & 0xffff) << 10 |
                        *(uint *)(&DAT_004e3a18 + iVar27) >> 0x16);
            local_464 = *(uint *)(&DAT_004e3a00 + iVar27);
            uVar43 = *(uint *)(&DAT_004e39f4 + iVar27);
            local_460 = 0xffff0bc - (*(uint *)(&DAT_004e3a04 + iVar27) & 0x3ffffff);
            local_45c = 0xffffefc -
                        ((*(uint *)(&DAT_004e3a08 + iVar27) & 0xfffff) << 6 |
                        *(uint *)(&DAT_004e3a04 + iVar27) >> 0x1a);
            local_458 = 0xffffffc -
                        ((*(uint *)(&DAT_004e3a0c + iVar27) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004e3a08 + iVar27) >> 0x14);
            local_454 = 0xffffffc -
                        ((*(uint *)(&DAT_004e3a10 + iVar27) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004e3a0c + iVar27) >> 0xe);
            local_450 = 0xffffffc - ((uVar19 & 3) << 0x18 | *(uint *)(&DAT_004e3a10 + iVar27) >> 8);
            local_44c = 0xffffffc - ((uVar19 & 0xfffffff) >> 2);
            local_484 = (*(uint *)(&DAT_004e39e8 + iVar27) & 0xfffff) << 6 | local_488 >> 0x1a;
            local_480 = (*(uint *)(&DAT_004e39ec + iVar27) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004e39e8 + iVar27) >> 0x14;
            local_47c = (*(uint *)(&DAT_004e39f0 + iVar27) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004e39ec + iVar27) >> 0xe;
            local_478 = (uVar43 & 3) << 0x18 | *(uint *)(&DAT_004e39f0 + iVar27) >> 8;
            local_470 = (*(uint *)(&DAT_004e39f8 + iVar27) & 0x3fffff) << 4 | uVar43 >> 0x1c;
            local_46c = (*(uint *)(&DAT_004e39fc + iVar27) & 0xffff) << 10 |
                        *(uint *)(&DAT_004e39f8 + iVar27) >> 0x16;
            local_468 = (local_464 & 0x3ff) << 0x10 | *(uint *)(&DAT_004e39fc + iVar27) >> 0x10;
          }
          else {
            iVar27 = iVar32 + -1 >> 1;
            iVar32 = iVar27 * 0x40;
            local_488 = *(uint *)(&DAT_004e39e4 + iVar27 * 0x40);
            uVar19 = *(uint *)(&DAT_004e3a14 + iVar32);
            uVar43 = *(uint *)(&DAT_004e39f4 + iVar32);
            local_464 = *(uint *)(&DAT_004e3a00 + iVar32);
            local_484 = (*(uint *)(&DAT_004e39e8 + iVar32) & 0xfffff) << 6 | local_488 >> 0x1a;
            local_480 = (*(uint *)(&DAT_004e39ec + iVar32) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004e39e8 + iVar32) >> 0x14;
            local_47c = (*(uint *)(&DAT_004e39f0 + iVar32) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004e39ec + iVar32) >> 0xe;
            local_478 = (uVar43 & 3) << 0x18 | *(uint *)(&DAT_004e39f0 + iVar32) >> 8;
            local_470 = (*(uint *)(&DAT_004e39f8 + iVar32) & 0x3fffff) << 4 | uVar43 >> 0x1c;
            local_46c = (*(uint *)(&DAT_004e39fc + iVar32) & 0xffff) << 10 |
                        *(uint *)(&DAT_004e39f8 + iVar32) >> 0x16;
            local_468 = (local_464 & 0x3ff) << 0x10 | *(uint *)(&DAT_004e39fc + iVar32) >> 0x10;
            local_458 = (*(uint *)(&DAT_004e3a0c + iVar32) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004e3a08 + iVar32) >> 0x14;
            local_454 = (*(uint *)(&DAT_004e3a10 + iVar32) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004e3a0c + iVar32) >> 0xe;
            local_45c = (*(uint *)(&DAT_004e3a08 + iVar32) & 0xfffff) << 6 |
                        *(uint *)(&DAT_004e3a04 + iVar32) >> 0x1a;
            local_450 = (uVar19 & 3) << 0x18 | *(uint *)(&DAT_004e3a10 + iVar32) >> 8;
            local_44c = (uVar19 & 0xfffffff) >> 2;
            local_448 = (*(uint *)(&DAT_004e3a18 + iVar32) & 0x3fffff) << 4 | uVar19 >> 0x1c;
            local_460 = *(uint *)(&DAT_004e3a04 + iVar32) & 0x3ffffff;
            local_444 = (*(uint *)(&DAT_004e3a1c + iVar32) & 0xffff) << 10 |
                        *(uint *)(&DAT_004e3a18 + iVar32) >> 0x16;
            local_57c = (*(uint *)(&DAT_004e3a20 + iVar32) & 0x3ff) << 0x10 |
                        *(uint *)(&DAT_004e3a1c + iVar32) >> 0x10;
            local_580 = *(uint *)(&DAT_004e3a20 + iVar32) >> 10;
          }
          local_464 = local_464 >> 10;
          local_474 = (uVar43 & 0xfffffff) >> 2;
          local_488 = local_488 & 0x3ffffff;
          local_440 = local_57c;
          local_43c = local_580;
          local_438[0] = 0;
          FUN_01828760(param_2,param_2,&local_488,&local_528);
        }
        if ((iVar28 < (int)uVar18) && (iVar32 = local_574[iVar28], iVar32 != 0)) {
          if (iVar32 < 1) {
            iVar27 = ~(iVar32 >> 1) * 0x40;
            local_488 = *(uint *)(&DAT_004639e4 + ~(iVar32 >> 1) * 0x40);
            local_580 = 0xfffffc - (*(uint *)(&DAT_00463a20 + iVar27) >> 10);
            uVar19 = *(uint *)(&DAT_00463a14 + iVar27);
            local_57c = 0xffffffc -
                        ((*(uint *)(&DAT_00463a20 + iVar27) & 0x3ff) << 0x10 |
                        *(uint *)(&DAT_00463a1c + iVar27) >> 0x10);
            local_448 = 0xffffffc -
                        ((*(uint *)(&DAT_00463a18 + iVar27) & 0x3fffff) << 4 | uVar19 >> 0x1c);
            local_444 = 0xffffffc -
                        ((*(uint *)(&DAT_00463a1c + iVar27) & 0xffff) << 10 |
                        *(uint *)(&DAT_00463a18 + iVar27) >> 0x16);
            local_464 = *(uint *)(&DAT_00463a00 + iVar27);
            uVar43 = *(uint *)(&DAT_004639f4 + iVar27);
            local_460 = 0xffff0bc - (*(uint *)(&DAT_00463a04 + iVar27) & 0x3ffffff);
            local_45c = 0xffffefc -
                        ((*(uint *)(&DAT_00463a08 + iVar27) & 0xfffff) << 6 |
                        *(uint *)(&DAT_00463a04 + iVar27) >> 0x1a);
            local_458 = 0xffffffc -
                        ((*(uint *)(&DAT_00463a0c + iVar27) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_00463a08 + iVar27) >> 0x14);
            local_454 = 0xffffffc -
                        ((*(uint *)(&DAT_00463a10 + iVar27) & 0xff) << 0x12 |
                        *(uint *)(&DAT_00463a0c + iVar27) >> 0xe);
            local_450 = 0xffffffc - ((uVar19 & 3) << 0x18 | *(uint *)(&DAT_00463a10 + iVar27) >> 8);
            local_44c = 0xffffffc - ((uVar19 & 0xfffffff) >> 2);
            local_484 = (*(uint *)(&DAT_004639e8 + iVar27) & 0xfffff) << 6 | local_488 >> 0x1a;
            local_480 = (*(uint *)(&DAT_004639ec + iVar27) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004639e8 + iVar27) >> 0x14;
            local_47c = (*(uint *)(&DAT_004639f0 + iVar27) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004639ec + iVar27) >> 0xe;
            local_478 = (uVar43 & 3) << 0x18 | *(uint *)(&DAT_004639f0 + iVar27) >> 8;
            local_470 = (*(uint *)(&DAT_004639f8 + iVar27) & 0x3fffff) << 4 | uVar43 >> 0x1c;
            local_46c = (*(uint *)(&DAT_004639fc + iVar27) & 0xffff) << 10 |
                        *(uint *)(&DAT_004639f8 + iVar27) >> 0x16;
            local_468 = (local_464 & 0x3ff) << 0x10 | *(uint *)(&DAT_004639fc + iVar27) >> 0x10;
          }
          else {
            iVar27 = iVar32 + -1 >> 1;
            iVar32 = iVar27 * 0x40;
            local_488 = *(uint *)(&DAT_004639e4 + iVar27 * 0x40);
            uVar19 = *(uint *)(&DAT_00463a14 + iVar32);
            uVar43 = *(uint *)(&DAT_004639f4 + iVar32);
            local_464 = *(uint *)(&DAT_00463a00 + iVar32);
            local_484 = (*(uint *)(&DAT_004639e8 + iVar32) & 0xfffff) << 6 | local_488 >> 0x1a;
            local_480 = (*(uint *)(&DAT_004639ec + iVar32) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_004639e8 + iVar32) >> 0x14;
            local_47c = (*(uint *)(&DAT_004639f0 + iVar32) & 0xff) << 0x12 |
                        *(uint *)(&DAT_004639ec + iVar32) >> 0xe;
            local_478 = (uVar43 & 3) << 0x18 | *(uint *)(&DAT_004639f0 + iVar32) >> 8;
            local_470 = (*(uint *)(&DAT_004639f8 + iVar32) & 0x3fffff) << 4 | uVar43 >> 0x1c;
            local_46c = (*(uint *)(&DAT_004639fc + iVar32) & 0xffff) << 10 |
                        *(uint *)(&DAT_004639f8 + iVar32) >> 0x16;
            local_468 = (local_464 & 0x3ff) << 0x10 | *(uint *)(&DAT_004639fc + iVar32) >> 0x10;
            local_458 = (*(uint *)(&DAT_00463a0c + iVar32) & 0x3fff) << 0xc |
                        *(uint *)(&DAT_00463a08 + iVar32) >> 0x14;
            local_454 = (*(uint *)(&DAT_00463a10 + iVar32) & 0xff) << 0x12 |
                        *(uint *)(&DAT_00463a0c + iVar32) >> 0xe;
            local_45c = (*(uint *)(&DAT_00463a08 + iVar32) & 0xfffff) << 6 |
                        *(uint *)(&DAT_00463a04 + iVar32) >> 0x1a;
            local_450 = (uVar19 & 3) << 0x18 | *(uint *)(&DAT_00463a10 + iVar32) >> 8;
            local_44c = (uVar19 & 0xfffffff) >> 2;
            local_448 = (*(uint *)(&DAT_00463a18 + iVar32) & 0x3fffff) << 4 | uVar19 >> 0x1c;
            local_460 = *(uint *)(&DAT_00463a04 + iVar32) & 0x3ffffff;
            local_444 = (*(uint *)(&DAT_00463a1c + iVar32) & 0xffff) << 10 |
                        *(uint *)(&DAT_00463a18 + iVar32) >> 0x16;
            local_57c = (*(uint *)(&DAT_00463a20 + iVar32) & 0x3ff) << 0x10 |
                        *(uint *)(&DAT_00463a1c + iVar32) >> 0x10;
            local_580 = *(uint *)(&DAT_00463a20 + iVar32) >> 10;
          }
          local_464 = local_464 >> 10;
          local_474 = (uVar43 & 0xfffffff) >> 2;
          local_488 = local_488 & 0x3ffffff;
          local_440 = local_57c;
          local_43c = local_580;
          local_438[0] = 0;
          FUN_01828760(param_2,param_2,&local_488,&local_528);
        }
        bVar48 = iVar28 != 0;
        iVar28 = iVar28 + -1;
      } while (bVar48);
    }
    if (param_2[0x1e] == 0) {
      FUN_0181f130(piVar25,piVar25,&local_528);
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

