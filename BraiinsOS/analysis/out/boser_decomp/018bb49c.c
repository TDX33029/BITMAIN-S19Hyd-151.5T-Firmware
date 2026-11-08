// FUN_018bb49c @ 018bb49c size=2676 calls_out=21 calls_in=1
// strings: 

void FUN_018bb49c(char *param_1,int *param_2,int param_3,int param_4,short *param_5,int param_6,
                 undefined4 *param_7,char *param_8,undefined4 param_9,short *param_10,int param_11,
                 int param_12,undefined4 *param_13,undefined4 *param_14,int param_15)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 *puVar9;
  short *psVar10;
  int iVar11;
  uint uVar12;
  short *psVar13;
  short *psVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined *local_988;
  undefined4 local_984;
  undefined1 auStack_968 [168];
  undefined4 local_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined2 local_8b4;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined2 local_814;
  undefined1 local_780;
  undefined1 local_77f;
  short *local_6e0;
  undefined4 local_6dc;
  int local_6d4;
  undefined1 auStack_6d0 [64];
  undefined1 auStack_690 [160];
  int local_5f0;
  undefined1 auStack_5e8 [160];
  undefined1 auStack_548 [160];
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 *local_4a0;
  undefined4 local_49c;
  undefined *local_498;
  undefined4 local_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 local_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 local_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  short *local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3d8;
  undefined1 auStack_240 [232];
  int *local_158;
  short *local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [160];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *local_5c;
  undefined1 auStack_58 [52];
  
  if (param_6 != 0) {
    iVar8 = param_6 * 0x14;
    psVar14 = param_5;
    do {
      uVar18 = FUN_018a82b8(psVar14);
      iVar11 = 0;
      while ((uVar12 = (uint)uVar18 & 0xffff, *(ushort *)((int)&DAT_0051dca4 + iVar11) != uVar12 ||
             ((uVar12 == 0x25 &&
              ((uint)*(ushort *)((int)&DAT_0051dca6 + iVar11) !=
               ((uint)((ulonglong)uVar18 >> 0x20) & 0xffff)))))) {
        iVar11 = iVar11 + 4;
        if (iVar11 == 0xc) {
          local_42c = CONCAT22(local_42c._2_2_,4);
          local_4a4 = 0x1a0001;
          local_4a8 = (undefined *)0x80000000;
          FUN_018e077c(param_3,&local_4a8,*(char *)(param_3 + 0x28) == '\x02');
          *(undefined1 *)(param_3 + 0xb1) = 1;
          uVar7 = 0x3c08;
          goto LAB_018bb698;
        }
      }
      psVar14 = psVar14 + 10;
    } while (psVar14 != param_5 + param_6 * 10);
    iVar11 = iVar8;
    psVar14 = param_5;
    do {
      sVar6 = FUN_018a82b8(psVar14);
      if (sVar6 == 0x1f) {
        if (*psVar14 == 5) {
          psVar13 = (short *)*param_14;
          if ((*psVar13 == psVar14[8]) && ((*psVar13 != 10 || (psVar13[1] == psVar14[9]))))
          goto LAB_018bb624;
          local_42c = CONCAT22(local_42c._2_2_,4);
          local_4a4 = 0xd0001;
          local_4a8 = (undefined *)0x80000000;
          FUN_018e077c(param_3,&local_4a8,*(char *)(param_3 + 0x28) == '\x02');
          uVar7 = 0x4108;
          goto LAB_018bb768;
        }
        break;
      }
      psVar14 = psVar14 + 10;
      iVar11 = iVar11 + -0x14;
    } while (iVar11 != 0);
  }
  local_42c = CONCAT22(local_42c._2_2_,4);
  local_4a4 = 0x190001;
  local_4a8 = (undefined *)0x80000000;
  FUN_018e077c(param_3,&local_4a8,*(char *)(param_3 + 0x28) == '\x02');
  *(undefined1 *)(param_3 + 0xb1) = 1;
  uVar7 = 0x1e08;
LAB_018bb698:
  *(undefined2 *)param_1 = uVar7;
  goto LAB_018bb6a0;
LAB_018bb7ac:
  if (3 < DAT_01d51b00) {
    local_49c = 0x15;
    local_4a4 = 0x15;
    local_498 = &DAT_01d226c8;
    local_4a0 = (undefined4 *)&DAT_0051dc34;
    local_4a8 = &DAT_0051dc34;
    FUN_0193b350(&DAT_0051dc98,0x19,4,&local_4a8);
  }
  FUN_018ce9cc(param_4 + 8);
  *(undefined1 *)(param_3 + 0xb0) = 0;
  local_4a8 = (undefined *)*param_7;
  local_4a4 = param_7[1];
  local_4a0 = (undefined4 *)param_7[2];
  local_49c = param_7[3];
  local_498 = (undefined *)param_7[4];
  local_494 = param_7[5];
  uStack_490 = param_7[6];
  uStack_48c = param_7[7];
  uStack_488 = param_7[8];
  uStack_484 = param_7[9];
  local_480 = param_7[10];
  uStack_47c = param_7[0xb];
  uStack_478 = param_7[0xc];
  uStack_474 = param_7[0xd];
  uStack_470 = param_7[0xe];
  uStack_46c = param_7[0xf];
  puVar9 = local_4a0;
  if (local_4a0 != (undefined4 *)&DAT_80000000) {
    puVar9 = &local_4a8;
  }
  param_7[2] = 0x80000000;
  if (local_4a0 != (undefined4 *)&DAT_80000000) {
    FUN_018ba49c(puVar9);
  }
  FUN_01bed93e(&local_4a8,0,0x40);
  uVar12 = *(uint *)(*(int *)(param_10 + 6) + 0x48);
  if (0x40 < uVar12) {
    local_984 = 0x40;
    local_988 = &DAT_01d22c2c;
LAB_018bbeec:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar12,local_984,local_988);
  }
  FUN_018cb9c0(auStack_968,param_10,&local_4a8,uVar12);
LAB_018bb8a0:
  uVar17 = *(undefined4 *)(psVar14 + 4);
  uVar16 = *(undefined4 *)(psVar14 + 6);
  local_90 = param_14[1];
  uStack_8c = param_14[2];
  uStack_88 = param_14[3];
  uStack_84 = param_14[4];
  local_80 = param_14[5];
  uStack_7c = param_14[6];
  uStack_78 = param_14[7];
  uStack_74 = param_14[8];
  uStack_70 = param_14[9];
  local_6c = param_14[10];
  uStack_68 = param_14[0xb];
  uStack_64 = param_14[0xc];
  uStack_60 = param_14[0xd];
  piVar15 = (int *)param_14[0xe];
  local_5c = piVar15;
  if (*(char *)(**(int **)(psVar13 + 2) + 0x14) == *(char *)(*piVar15 + 0x14)) {
    FUN_01bed93e(auStack_58,0,0x30);
    uVar12 = *(uint *)(*piVar15 + 0x10);
    if (0x30 < uVar12) {
      local_984 = 0x30;
      local_988 = &DAT_01d255f8;
      goto LAB_018bbeec;
    }
    iVar8 = (*(code *)piVar15[1])(auStack_58,uVar12,&local_90,uVar17,uVar16);
    if (iVar8 == 0) {
      FUN_01bed4e2(&local_4a8,auStack_968,0xa8);
      FUN_018cba48(&local_4a8,auStack_58,uVar12);
      uVar3 = (char)local_4a8;
      uVar5 = local_4a8._1_1_;
      FUN_01bed4e2(auStack_130,(uint)&local_4a8 | 2,0x9e);
      if (local_408 != (short *)0x0) {
        FUN_01bed4e2(&local_820,auStack_130,0x9e);
        FUN_01bed4e2(&local_8c0,&local_820,0x9e);
        local_77f = uVar5;
        local_780 = uVar3;
        FUN_01bed4e2((uint)&local_780 | 2,&local_8c0,0x9e);
        local_6dc = local_404;
        local_6e0 = local_408;
        (**(code **)(param_2[0xe] + 0xc))
                  (param_2[0xd] + (*(int *)(param_2[0xe] + 8) - 1U & 0xfffffff8) + 8,param_8,
                   psVar14[8],psVar14[9]);
        FUN_018e1a6c(&local_4a8,param_3);
        cVar4 = (char)local_4a8;
        if ((char)local_4a8 != '\x14') {
          FUN_01bed4e2(param_1 + 1,(uint)&local_4a8 | 1,0xf);
          *param_1 = cVar4;
          goto LAB_018bb6a0;
        }
        local_3e8 = *(undefined4 *)(param_11 + 0xc0);
        local_3e4 = *(undefined4 *)(param_11 + 0xc4);
        local_3e0 = *(undefined4 *)(param_11 + 200);
        local_428 = *(undefined4 *)(param_11 + 0x80);
        uStack_424 = *(undefined4 *)(param_11 + 0x84);
        uStack_420 = *(undefined4 *)(param_11 + 0x88);
        uStack_41c = *(undefined4 *)(param_11 + 0x8c);
        uStack_418 = *(undefined4 *)(param_11 + 0x90);
        local_414 = *(undefined4 *)(param_11 + 0x94);
        uStack_410 = *(undefined4 *)(param_11 + 0x98);
        uStack_40c = *(undefined4 *)(param_11 + 0x9c);
        local_408 = *(short **)(param_11 + 0xa0);
        local_404 = *(undefined4 *)(param_11 + 0xa4);
        local_400 = *(undefined4 *)(param_11 + 0xa8);
        uStack_3fc = *(undefined4 *)(param_11 + 0xac);
        uStack_3f8 = *(undefined4 *)(param_11 + 0xb0);
        uStack_3f4 = *(undefined4 *)(param_11 + 0xb4);
        uStack_3f0 = *(undefined4 *)(param_11 + 0xb8);
        uStack_3ec = *(undefined4 *)(param_11 + 0xbc);
        uVar16 = *(undefined4 *)(param_11 + 0xd0);
        FUN_01bed4e2(&local_4a8,param_11,0x80);
        local_3d8 = uVar16;
        FUN_0189039c(&local_6d4,&local_4a8);
        iVar8 = param_2[0x15];
        local_988 = &DAT_01d2571c;
        uVar16 = *(undefined4 *)(iVar8 + 0xc);
        uVar17 = *(undefined4 *)(iVar8 + 0x10);
        bVar1 = *(byte *)(param_4 + 0xc);
        local_6e0 = param_10;
        uVar12 = *(uint *)(local_6d4 + 0x48);
        local_984 = 0x40;
        if (uVar12 < 0x41) {
          iVar8 = param_2[0x14] + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8;
          FUN_018cb870(&local_4a8,&local_780,2,auStack_6d0,uVar12,iVar8,uVar16,uVar17,param_9);
          uVar12 = *(uint *)(local_6d4 + 0x48);
          if (uVar12 < 0x41) {
            FUN_018cb870(auStack_548,&local_780,3,auStack_6d0,uVar12,iVar8,uVar16,uVar17,param_9);
            FUN_01bed4e2(auStack_690,&local_780,0xa8);
            FUN_01bed4e2(auStack_5e8,&local_4a8,0xa0);
            uVar16 = FUN_018cb154(*(undefined4 *)(local_5f0 + 4),auStack_548);
            FUN_018bf8c4(param_3,uVar16);
            if (1 < bVar1 - 1) {
              FUN_018cb508(*(undefined4 *)(local_5f0 + 4),auStack_5e8,param_3);
            }
            if (param_15 == 0) {
              local_4a8 = (undefined *)0x80000002;
              local_42c = CONCAT22(local_42c._2_2_,4);
              FUN_018e077c(param_3,&local_4a8,0);
            }
            local_468 = *param_7;
            uStack_464 = param_7[1];
            uStack_460 = param_7[2];
            uStack_45c = param_7[3];
            uStack_458 = param_7[4];
            local_454 = param_7[5];
            uStack_450 = param_7[6];
            uStack_44c = param_7[7];
            uStack_448 = param_7[8];
            uStack_444 = param_7[9];
            local_440 = param_7[10];
            uStack_43c = param_7[0xb];
            uStack_438 = param_7[0xc];
            uStack_434 = param_7[0xd];
            uStack_430 = param_7[0xe];
            local_42c = param_7[0xf];
            local_150 = *(undefined4 *)param_8;
            uStack_14c = *(undefined4 *)(param_8 + 4);
            uStack_148 = *(undefined4 *)(param_8 + 8);
            uStack_144 = *(undefined4 *)(param_8 + 0xc);
            uStack_140 = *(undefined4 *)(param_8 + 0x10);
            FUN_01bed4e2(auStack_240,param_11,0xe8);
            local_13c = *param_13;
            uStack_138 = param_13[1];
            uStack_134 = param_13[2];
            local_158 = param_2;
            FUN_01bed4e2(&local_4a8,param_9,0x40);
            local_154 = param_10;
            FUN_01bed4e2(&local_428,auStack_690,0x1e8);
            iVar8 = thunk_FUN_01be5118(0x378);
            if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(8,0x378);
            }
            FUN_01bed4e2(iVar8,&local_4a8,0x378);
            *(int *)(param_1 + 4) = iVar8;
            *(undefined **)(param_1 + 8) = &DAT_01d226d8;
            *param_1 = '\x14';
            return;
          }
        }
        goto LAB_018bbeec;
      }
    }
  }
  local_8c0 = local_820;
  uStack_8bc = uStack_81c;
  uStack_8b8 = uStack_818;
  local_8b4 = local_814;
  param_1[0] = '\b';
  param_1[1] = '\x18';
  FUN_01bed4e2(param_1 + 2,&local_8c0,0xe);
  goto LAB_018bb6a0;
LAB_018bb624:
  sVar6 = FUN_018a82b8(param_5);
  if (sVar6 != 0x15) {
    param_5 = param_5 + 10;
    iVar8 = iVar8 + -0x14;
    if (iVar8 == 0) goto LAB_018bb7ac;
    goto LAB_018bb624;
  }
  if ((*param_5 != 6) || (*(int *)(param_12 + 0xa0) == 0)) goto LAB_018bb7ac;
  if (param_7[2] == -0x80000000) {
    uVar7 = 0x3408;
    goto LAB_018bb698;
  }
  psVar10 = (short *)param_7[0xc];
  if (*(char *)(*(int *)(psVar10 + 6) + 0x58) != *(char *)(*(int *)(param_10 + 6) + 0x58)) {
    local_42c = CONCAT22(local_42c._2_2_,4);
    local_4a4 = 0xd0001;
    local_4a8 = (undefined *)0x80000000;
    FUN_018e077c(param_3,&local_4a8,*(char *)(param_3 + 0x28) == '\x02');
    uVar7 = 0x2c08;
    goto LAB_018bb768;
  }
  if ((*(byte *)(param_4 + 0xc) - 1 < 2) &&
     ((*psVar10 != *param_10 || ((*psVar10 == 0x178 && (psVar10[1] != param_10[1])))))) {
    local_42c = CONCAT22(local_42c._2_2_,4);
    local_4a4 = 0xd0001;
    local_4a8 = (undefined *)0x80000000;
    FUN_018e077c(param_3,&local_4a8,*(char *)(param_3 + 0x28) == '\x02');
    uVar7 = 0xb08;
    goto LAB_018bb768;
  }
  if (param_5[1] == 0) {
    if (3 < DAT_01d51b00) {
      local_49c = 0x15;
      local_4a4 = 0x15;
      local_498 = &DAT_01d226b8;
      local_4a0 = (undefined4 *)&DAT_0051dc34;
      local_4a8 = &DAT_0051dc34;
      FUN_0193b350(&DAT_0051dc86,0x25,4,&local_4a8);
    }
    FUN_01bed4e2(auStack_968,param_12,0xa8);
    goto LAB_018bb8a0;
  }
  local_42c = CONCAT22(local_42c._2_2_,4);
  local_4a4 = 0xd0001;
  local_4a8 = (undefined *)0x80000000;
  FUN_018e077c(param_3,&local_4a8,*(char *)(param_3 + 0x28) == '\x02');
  uVar7 = 0x2e08;
LAB_018bb768:
  *(undefined2 *)param_1 = uVar7;
  *(undefined1 *)(param_3 + 0xb1) = 1;
LAB_018bb6a0:
  FUN_0134aee0(*param_13,param_13[1],2,4);
  if (*(int *)(param_11 + 0xd8) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_11 + 0xd8),*(undefined4 *)(param_11 + 0xdc));
  }
  if (*param_8 == '\0') {
    FUN_0134bd64(*(undefined4 *)(param_8 + 4),*(undefined4 *)(param_8 + 8));
  }
  if (param_7[2] != -0x80000000) {
    FUN_018ba49c(param_7);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(param_2);
  }
  return;
}

