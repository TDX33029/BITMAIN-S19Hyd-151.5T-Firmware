// FUN_00e34d68 @ 00e34d68 size=3500 calls_out=42 calls_in=2
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffff994 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e34d68(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined *puVar11;
  uint *puVar12;
  undefined4 *******pppppppuVar13;
  undefined4 *puVar14;
  undefined4 *******pppppppuVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined4 *******pppppppuVar18;
  undefined4 *******pppppppuVar19;
  bool bVar20;
  undefined8 unaff_d8;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 local_830;
  undefined4 *******local_82c;
  undefined4 *******local_828;
  undefined4 *******local_824;
  undefined4 local_820;
  uint *local_81c;
  uint local_818;
  undefined4 local_814;
  undefined4 *******local_810;
  undefined4 *******local_80c;
  undefined4 local_808;
  undefined4 local_804;
  uint local_800;
  undefined4 local_7fc;
  undefined4 local_7f8;
  uint local_7e0;
  undefined4 uStack_7dc;
  uint *puStack_7d8;
  undefined4 uStack_7d4;
  undefined4 *******pppppppuStack_7d0;
  undefined4 *******local_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined1 auStack_7a0 [96];
  undefined1 auStack_740 [88];
  undefined4 *******pppppppuStack_6e8;
  undefined4 *******pppppppuStack_6e4;
  undefined4 *******pppppppuStack_6e0;
  undefined4 *******pppppppuStack_6d8;
  undefined4 *******pppppppuStack_6d4;
  undefined4 *******pppppppuStack_6d0;
  undefined1 auStack_6cc [84];
  undefined4 *******local_678;
  undefined4 *******local_674;
  undefined4 *******local_670;
  undefined4 uStack_66c;
  undefined4 *******local_668;
  undefined4 local_664;
  undefined4 *******local_660;
  undefined4 *******local_65c;
  undefined4 local_658;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined8 local_628;
  uint local_620;
  undefined4 local_61c;
  undefined4 *******local_618;
  undefined4 *******local_614;
  undefined4 *******local_610;
  uint local_608;
  undefined4 local_604;
  uint *local_600;
  undefined4 local_5fc;
  undefined4 *******local_5f8;
  undefined4 *******local_5f4;
  undefined8 local_5f0;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  undefined1 auStack_398 [624];
  undefined1 auStack_128 [100];
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 *******local_c0;
  undefined4 *******pppppppuStack_bc;
  undefined4 *******pppppppuStack_b8;
  undefined4 *******local_b0;
  undefined4 *******local_ac;
  undefined4 *******local_a8;
  undefined4 *******local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 ******local_98;
  undefined4 local_94;
  undefined4 *******local_90;
  undefined4 *******local_8c;
  undefined4 *******local_88;
  undefined4 local_84;
  undefined4 *******local_78;
  undefined4 *******local_74;
  undefined4 *******local_70;
  char local_6c;
  undefined2 local_6b;
  undefined1 local_69;
  undefined1 auStack_60 [12];
  int local_54;
  
  uVar23 = CONCAT44(local_7f8,local_7fc);
  uStack_66c = (undefined4 *******)
               CONCAT13(uStack_66c._3_1_,CONCAT21(uStack_66c._1_2_,(char)uStack_66c));
  puVar17 = (undefined4 *)(param_2 + 0x90);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x394)) {
  case 0:
    *(undefined4 *)(param_2 + 900) = *(undefined4 *)(param_2 + 0x380);
    *(undefined1 *)(param_2 + 0x395) = 0;
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar6 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar6 != (int *)0x0) {
      local_668 = (undefined4 *******)&DAT_80000000;
      uStack_66c = (undefined4 *******)0x0;
      local_674 = (undefined4 *******)0x0;
      local_678 = (undefined4 *******)0x0;
      FUN_0196ac88(&local_78,&local_678);
      uVar2 = local_78._0_1_;
      uVar8 = (uint)local_78 & 0xff;
      if (uVar8 == 6) {
        FUN_00e0fe5c(local_74);
      }
      else {
        FUN_01bed4e2((uint)&local_90 | 1,(uint)&local_78 | 1,0x17);
        local_90 = (undefined4 *******)CONCAT31(local_90._1_3_,uVar2);
        if (uVar8 == 5) {
          if (local_8c == (undefined4 *******)0x0) {
            local_84 = 0;
          }
          local_660 = local_8c;
          local_670 = local_8c;
          local_678 = local_8c;
          if (local_8c != (undefined4 *******)0x0) {
            local_678 = (undefined4 *******)&DAT_00000001;
          }
          local_65c = local_88;
          local_664 = 0;
          uStack_66c = local_88;
          local_674 = (undefined4 *******)0x0;
          local_668 = local_678;
          local_658 = local_84;
          FUN_00fea674(auStack_60,&local_678);
          if (local_54 != 0) {
            FUN_0067b1ac(&local_678,auStack_60);
            cVar3 = (char)uStack_66c;
            local_c0 = local_678;
            pppppppuStack_bc = local_674;
            pppppppuStack_b8 = local_670;
            local_c4 = uStack_66c._1_2_;
            local_c2 = uStack_66c._3_1_;
            FUN_00e0febc(&local_90);
            if (cVar3 != '\x02') {
              local_678 = local_c0;
              local_674 = pppppppuStack_bc;
              local_670 = pppppppuStack_b8;
              uStack_66c = (undefined4 *******)CONCAT31(CONCAT12(local_c2,local_c4),cVar3);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar6 + 0x18) != 0) {
                FUN_00b065ec(*piVar6 + 8,&local_678);
              }
              if ((char)uStack_66c != '\x02') {
                local_78 = local_678;
                local_74 = local_674;
                local_70 = local_670;
                local_69 = uStack_66c._3_1_;
                local_6b = uStack_66c._1_2_;
                local_6c = (char)uStack_66c;
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar4 = FUN_01aaa278(DAT_01d4c480), iVar4 != 0)))) {
                  local_88 = (undefined4 *******)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 ********)(DAT_01d4c480 + 0x20) == (undefined4 *******)0x0) {
LAB_00e35bb8:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_670 = *(undefined4 ********)(DAT_01d4c480 + 0x24);
                  uStack_66c = *(undefined4 ********)(DAT_01d4c480 + 0x28);
                  local_74 = &local_a4;
                  local_78 = &local_678;
                  local_90 = &local_78;
                  local_8c = (undefined4 *******)&DAT_00000001;
                  local_668 = (undefined4 *******)0x0;
                  local_70 = (undefined4 *******)&DAT_01d2ea4c;
                  local_a0 = 0x6b;
                  local_a4 = (undefined4 *******)0x3fe987;
                  local_678 = (undefined4 *******)*local_88;
                  local_674 = *(undefined4 ********)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_90);
                }
                else {
                  iVar4 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_ac = *(undefined4 ********)(DAT_01d4c480 + 0x14);
                    local_a8 = *(undefined4 ********)(DAT_01d4c480 + 0x18);
                    local_b0 = (undefined4 *******)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar14 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar14 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar10 = (*(code *)puVar14[3])(pcVar1,&local_b0);
                    if (iVar10 != 0) {
                      local_9c = (undefined4 *)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 ********)(DAT_01d4c480 + 0x20) == (undefined4 *******)0x0)
                      goto LAB_00e35bb8;
                      local_8c = &local_98;
                      local_670 = *(undefined4 ********)(DAT_01d4c480 + 0x24);
                      uStack_66c = *(undefined4 ********)(DAT_01d4c480 + 0x28);
                      local_90 = &local_678;
                      local_a4 = &local_90;
                      local_668 = (undefined4 *******)0x0;
                      local_a0 = 1;
                      local_88 = (undefined4 *******)&DAT_01d2ea4c;
                      local_94 = 0x6b;
                      local_98 = (undefined4 ******)0x3fe987;
                      local_78 = local_b0;
                      local_74 = local_ac;
                      local_70 = local_a8;
                      local_678 = (undefined4 *******)*local_9c;
                      local_674 = *(undefined4 ********)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar4,pcVar1,puVar14[4],&local_78,&local_a4);
                    }
                  }
                }
              }
            }
            goto LAB_00e350d4;
          }
          FUN_0165a1f4(auStack_60);
        }
        FUN_00e0febc(&local_90);
      }
    }
LAB_00e350d4:
    *(undefined1 *)(param_2 + 0x3ec) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c170c4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c170c4);
  case 4:
    goto switchD_00e34db4_caseD_4;
  case 5:
    goto switchD_00e34db4_caseD_5;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x3d4)) {
    case 0:
      iVar4 = *(int *)(param_2 + 0x398);
      goto LAB_00e35378;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c183ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c183ac);
    }
    goto switchD_00e34e90_caseD_3;
  case 7:
    goto switchD_00e34db4_caseD_7;
  case 8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x3a4)) {
    case 0:
      iVar4 = *(int *)(param_2 + 0x398);
      goto LAB_00e35478;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c201d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c201d4);
    case 3:
      uVar5 = *(undefined4 *)(param_2 + 0x39c);
      puVar11 = *(undefined **)(param_2 + 0x3a0);
    }
    goto LAB_00e35498;
  }
  FUN_00e100c8(&local_678,param_2 + 0x398,param_3);
  pppppppuVar19 = local_674;
  pppppppuVar18 = local_678;
  if (local_678 == (undefined4 *******)&SUB_00000004 && local_674 == (undefined4 *******)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
    goto LAB_00e35808;
  }
  FUN_01bed4e2(auStack_7a0,&local_670,0x60);
  if (*(char *)(param_2 + 0x3ec) == '\x03') {
    FUN_00e1003c(param_2 + 0x398);
  }
  if (pppppppuVar18 == (undefined4 *******)&DAT_00000003 && pppppppuVar19 == (undefined4 *******)0x0
     ) {
    *(undefined1 *)(param_2 + 0x460) = 0;
    *(undefined4 *)(param_2 + 0x398) = *(undefined4 *)(param_2 + 900);
switchD_00e34db4_caseD_4:
    FUN_00e101ec(&local_678,param_2 + 0x398,param_3);
    pppppppuVar19 = local_674;
    pppppppuVar18 = local_678;
    if (local_678 == (undefined4 *******)&SUB_00000004 && local_674 == (undefined4 *******)0x0) {
      uVar2 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e35808;
    }
    pppppppuStack_6e4 = uStack_66c;
    pppppppuStack_6e8 = local_670;
    pppppppuStack_6e0 = local_668;
    FUN_01bed4e2(auStack_740,&local_664,0x54);
    cVar3 = *(char *)(param_2 + 0x460);
    bVar20 = cVar3 == '\x03';
    if (bVar20) {
      cVar3 = *(char *)(param_2 + 0x45c);
    }
    if (bVar20 && cVar3 == '\x03') {
      FUN_00df984c(param_2 + 0x3a0);
    }
    if (pppppppuVar18 != (undefined4 *******)&DAT_00000003 ||
        pppppppuVar19 != (undefined4 *******)0x0) {
      FUN_01bed4e2(auStack_6cc,auStack_740,0x54);
      pppppppuStack_6d8 = pppppppuStack_6e8;
      pppppppuStack_6d4 = pppppppuStack_6e4;
      pppppppuStack_6d0 = pppppppuStack_6e0;
      goto LAB_00e35300;
    }
    *(undefined4 *)(param_2 + 0x388) = pppppppuStack_6e8;
    *(undefined4 ********)(param_2 + 0x38c) = pppppppuStack_6e4;
    *(undefined4 ********)(param_2 + 0x390) = pppppppuStack_6e0;
    *(undefined1 *)(param_2 + 0x93c) = 0;
    *(undefined4 **)(param_2 + 0x938) = (undefined4 *)(param_2 + 0x388);
switchD_00e34db4_caseD_5:
    FUN_00e2a168(&local_678,param_2 + 0x398);
    pppppppuVar19 = uStack_66c;
    pppppppuVar18 = local_670;
    pppppppuVar13 = local_674;
    pppppppuVar15 = local_678;
    if (local_678 == (undefined4 *******)&SUB_00000004 && local_674 == (undefined4 *******)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 5;
      goto LAB_00e35808;
    }
    FUN_01bed4e2(auStack_128,&local_668,0x60);
    FUN_01bed4e2(auStack_398,&local_608,0x270);
    if (*(char *)(param_2 + 0x93c) == '\x03') {
      FUN_00e7a7b0(param_2 + 0x398);
    }
    if (pppppppuVar15 == (undefined4 *******)&DAT_00000003 &&
        pppppppuVar13 == (undefined4 *******)0x0) {
      FUN_01bed4e2(&pppppppuStack_6d8,auStack_128,0x60);
      FUN_0084ec48(param_2 + 0x388);
      goto LAB_00e35300;
    }
    *puVar17 = pppppppuVar15;
    *(undefined4 ********)(param_2 + 0x94) = pppppppuVar13;
    *(undefined4 ********)(param_2 + 0x98) = pppppppuVar18;
    *(undefined4 ********)(param_2 + 0x9c) = pppppppuVar19;
    FUN_01bed4e2(param_2 + 0xa0,auStack_128,0x60);
    FUN_01bed4e2(param_2 + 0x100,auStack_398,0x270);
    iVar4 = **(int **)(param_2 + 900);
    *(undefined1 *)(param_2 + 0x3d4) = 0;
    iVar4 = iVar4 + 8;
    *(int *)(param_2 + 0x398) = iVar4;
LAB_00e35378:
    *(undefined1 *)(param_2 + 0x3d0) = 0;
    *(int *)(param_2 + 0x39c) = iVar4 + 0x3c;
switchD_00e34e90_caseD_3:
    uVar22 = FUN_00df39fc(param_2 + 0x39c,param_3);
    iVar4 = (int)uVar22;
    if (iVar4 == 0) {
      iVar4 = 0;
      *(undefined1 *)(param_2 + 0x3d4) = 3;
    }
    else {
      if (*(char *)(param_2 + 0x3d0) == '\x03') {
        cVar3 = *(char *)(param_2 + 0x3cc);
        bVar20 = cVar3 == '\x03';
        if (bVar20) {
          cVar3 = *(char *)(param_2 + 0x3c8);
        }
        if (bVar20 && cVar3 == '\x03') {
          FUN_0193c3cc(param_2 + 0x3a8);
        }
      }
      *(undefined1 *)(param_2 + 0x3d4) = 1;
    }
    if (iVar4 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 6;
      goto LAB_00e35808;
    }
    *(int *)(param_2 + 0x370) = iVar4;
    *(int *)(param_2 + 0x374) = (int)((ulonglong)uVar22 >> 0x20);
    FUN_00bba254(param_2 + 0x398);
    *(undefined1 *)(param_2 + 0x3cc) = 0;
    *(int *)(param_2 + 0x398) = *(int *)(param_2 + 0x374) + 0x44;
switchD_00e34db4_caseD_7:
    uVar22 = FUN_00e06fc8(param_2 + 0x398,param_3);
    if ((int)uVar22 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 7;
      goto LAB_00e35808;
    }
    *(undefined8 *)(param_2 + 0x378) = uVar22;
    if (*(char *)(param_2 + 0x3cc) == '\x03') {
      cVar3 = *(char *)(param_2 + 0x3c8);
      bVar20 = cVar3 == '\x03';
      if (bVar20) {
        cVar3 = *(char *)(param_2 + 0x3c4);
      }
      if (bVar20 && cVar3 == '\x03') {
        FUN_0193c3cc(param_2 + 0x3a4);
      }
    }
    iVar4 = **(int **)(param_2 + 900);
    *(undefined1 *)(param_2 + 0x3a4) = 0;
    iVar4 = iVar4 + 8;
    *(int *)(param_2 + 0x398) = iVar4;
LAB_00e35478:
    uVar5 = FUN_00b8a1bc(*(int *)(iVar4 + 0x34) + 8);
    *(undefined4 *)(param_2 + 0x39c) = uVar5;
    puVar11 = &DAT_01c13d9c;
    *(undefined **)(param_2 + 0x3a0) = &DAT_01c13d9c;
LAB_00e35498:
    piVar6 = (int *)(**(code **)(puVar11 + 0xc))(uVar5,param_3);
    if (piVar6 == (int *)0x0) {
      *(undefined1 *)(param_2 + 0x3a4) = 3;
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 8;
      goto LAB_00e35808;
    }
    FUN_01139b38(*(undefined4 *)(param_2 + 0x39c),*(undefined4 *)(param_2 + 0x3a0));
    puVar16 = (uint *)(param_2 + 0x2c8);
    *(undefined1 *)(param_2 + 0x3a4) = 1;
    if (*puVar16 == 7 && *(int *)(param_2 + 0x2cc) == 0) {
      local_638 = 2;
      uVar23 = CONCAT44(local_7f8,local_7fc);
    }
    else {
      puVar7 = *(undefined1 **)(param_2 + 0x308);
      if (puVar7 != &DAT_3b9aca00) {
        FUN_01495f30(&local_678,&DAT_3b9aca00,*(undefined4 *)(param_2 + 0x300),
                     *(undefined4 *)(param_2 + 0x304),puVar7);
        local_828 = local_678;
        local_82c = local_674;
        local_824 = local_670;
      }
      local_800 = (uint)(puVar7 != &DAT_3b9aca00);
      if (*(int *)(param_2 + 0x110) == 2 && *(int *)(param_2 + 0x114) == 0) {
        local_804 = 0;
      }
      else {
        if (*(int *)(param_2 + 0x1a8) == 2 && *(int *)(param_2 + 0x1ac) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("BUG: missing work solver statistics",0x23,&DAT_01c1f160);
        }
        FUN_00b60b28(&local_678);
        local_804 = local_650;
        local_830 = local_64c;
      }
      local_808 = 0;
      FUN_00a40c30(&local_678,puVar17);
      local_638 = 2;
      local_80c = local_674;
      local_810 = local_678;
      uVar8 = *puVar16;
      iVar4 = 2;
      if ((uint)(uVar8 < 5) <= (uint)-*(int *)(param_2 + 0x2cc)) {
        iVar4 = uVar8 - 5;
      }
      if (iVar4 != 0) {
        unaff_d8 = CONCAT17(uStack_66c._3_1_,
                            CONCAT25(uStack_66c._1_2_,CONCAT14((char)uStack_66c,local_670)));
        local_814 = 0;
        if (iVar4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00e358bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00e358c0 + *(int *)(&DAT_00e358c0 + uVar8 * 4)))
                    (*(int *)(&DAT_00e358c0 + uVar8 * 4),&DAT_00e358c0,
                     *(undefined4 *)(param_2 + 0x2d8),*(undefined4 *)(param_2 + 0x2dc));
          return;
        }
        piVar9 = *(int **)(param_2 + 0x37c);
        puVar12 = (uint *)piVar9[1];
        if (*piVar9 == 2 && puVar12 == (uint *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = piVar9[4];
          puVar12 = (uint *)piVar9[5];
        }
        dVar21 = *(double *)(param_2 + 0x2d0);
        if ((piVar6[0x6c] ^ 2U) != 0 || piVar6[0x6d] != 0) {
          puVar16 = (uint *)piVar6[0x85];
        }
        local_81c = puVar16;
        if (uVar8 != 0) {
          local_81c = puVar12;
        }
        local_818 = uVar8 | ((piVar6[0x6c] ^ 2U) != 0 || piVar6[0x6d] != 0);
        uVar23 = FUN_01bf0b64(SUB84(dVar21,0),(int)((ulonglong)dVar21 >> 0x20));
        local_638 = 0;
        if (dVar21 < 0.0) {
          uVar23 = 0;
        }
        if (1.844674407370955e+19 < dVar21) {
          uVar23 = 0xffffffffffffffff;
        }
        local_820 = 0;
      }
    }
    uVar8 = FUN_01220aac(puVar17);
    uVar5 = *(undefined4 *)(&DAT_0056c168 + (uVar8 & 0xff) * 4);
    FUN_0160aaa4(&local_678,0);
    pppppppuVar19 = uStack_66c;
    pppppppuVar18 = local_670;
    pppppppuVar13 = local_674;
    pppppppuVar15 = local_678;
    local_618 = local_828;
    local_630 = 1;
    local_620 = local_800;
    local_61c = local_814;
    local_608 = local_818;
    local_600 = local_81c;
    local_5fc = local_820;
    local_5f8 = local_810;
    local_5f4 = local_80c;
    local_5e8 = local_804;
    local_614 = local_82c;
    local_5e4 = local_808;
    local_5dc = local_808;
    local_5e0 = local_830;
    local_610 = local_824;
    local_634 = 0;
    local_62c = 0;
    local_604 = 0;
    local_5d0 = 0;
    local_5f0 = unaff_d8;
    local_5d8 = uVar5;
    local_628 = uVar23;
    FUN_01bed4e2(&pppppppuStack_6d8,&local_668,0x60);
    local_7e0 = local_608;
    uStack_7dc = local_604;
    puStack_7d8 = local_600;
    uStack_7d4 = local_5fc;
    pppppppuStack_7d0 = local_5f8;
    local_7cc = local_5f4;
    uStack_7c8 = (undefined4)local_5f0;
    uStack_7c4 = local_5f0._4_4_;
    uStack_7c0 = local_5e8;
    uStack_7bc = local_5e4;
    local_7b8 = local_5e0;
    uStack_7b4 = local_5dc;
    uStack_7b0 = local_5d8;
    uStack_7ac = uStack_5d4;
    uStack_7a8 = local_5d0;
    uStack_7a4 = uStack_5cc;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar20 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar20);
    *piVar6 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(piVar6);
    }
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x378),1);
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x370),1);
    FUN_00a57438(puVar17);
    FUN_0084ec48(param_2 + 0x388);
    FUN_00f9604c(param_2 + 0x48);
  }
  else {
    FUN_01bed4e2(&pppppppuStack_6d8,auStack_7a0,0x60);
LAB_00e35300:
    FUN_00f9604c(param_2 + 0x48);
    pppppppuVar13 = (undefined4 *******)0x0;
    pppppppuVar15 = (undefined4 *******)&DAT_00000003;
    if (*(char *)(param_2 + 0x395) != '\0') {
      FUN_00f9604c(param_2);
    }
  }
  *param_1 = pppppppuVar15;
  param_1[1] = pppppppuVar13;
  param_1[2] = pppppppuVar18;
  param_1[3] = pppppppuVar19;
  FUN_01bed4e2(param_1 + 4,&pppppppuStack_6d8,0x60);
  param_1[0x1c] = local_7e0;
  param_1[0x1d] = uStack_7dc;
  param_1[0x1e] = puStack_7d8;
  param_1[0x1f] = uStack_7d4;
  param_1[0x20] = pppppppuStack_7d0;
  param_1[0x21] = local_7cc;
  param_1[0x22] = uStack_7c8;
  param_1[0x23] = uStack_7c4;
  param_1[0x24] = uStack_7c0;
  param_1[0x25] = uStack_7bc;
  param_1[0x26] = local_7b8;
  param_1[0x27] = uStack_7b4;
  param_1[0x28] = uStack_7b0;
  param_1[0x29] = uStack_7ac;
  param_1[0x2a] = uStack_7a8;
  param_1[0x2b] = uStack_7a4;
  uVar2 = 1;
LAB_00e35808:
  *(undefined1 *)(param_2 + 0x394) = uVar2;
  return;
}

