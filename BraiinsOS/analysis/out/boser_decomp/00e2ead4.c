// FUN_00e2ead4 @ 00e2ead4 size=4120 calls_out=43 calls_in=1
// strings: enable | boser::led_manageropen/boser/boser/src/led_manager.rsevent open/boser/boser/src/led_manager.rs:152event open/boser/boser/src/led_manager.rs:63 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::led_manageropen/boser/boser/src/led_manager.rsevent open/boser/boser/src/led_manager.rs:152event open/boser/boser/src/led_manager.rs:63 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e2ead4(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  char *pcVar2;
  int ****ppppiVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int ***pppiVar13;
  int ****ppppiVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int ****ppppiVar18;
  bool bVar19;
  undefined1 *local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 auStack_238 [72];
  int ****local_1f0;
  int ****local_1ec;
  int ****local_1e8;
  int ****local_1e4;
  int ****local_1e0;
  undefined4 uStack_1dc;
  int ****ppppiStack_1d8;
  int ****ppppiStack_1d4;
  undefined1 auStack_190 [72];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int ****local_130;
  int ****local_12c;
  int ****local_128;
  undefined4 uStack_124;
  int ****local_118;
  int ****local_114;
  int ****local_110;
  undefined1 auStack_100 [12];
  int local_f4;
  int ****local_dc;
  code *local_d8;
  undefined4 *local_d4;
  int ***local_d0;
  int ****local_cc;
  int ****local_c8;
  int ****local_c4;
  int ****local_c0;
  int ****local_b8;
  int ****local_b4;
  int ****local_b0;
  int ****local_a8;
  int ****local_a4;
  int ****local_a0;
  int ****local_9c;
  int ****local_98;
  int ****local_90;
  int ****local_8c;
  int ****local_88;
  int ****local_84;
  int ****local_80;
  undefined4 local_7c;
  int ****local_78;
  int ****local_74;
  undefined4 local_70;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x98)) {
  case 0:
    *(undefined2 *)(param_2 + 0x9a) = 0x100;
    iVar7 = *(int *)(param_2 + 0x90);
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar10 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar10 != (int *)0x0) {
      local_1e0 = (int ****)&DAT_80000000;
      local_1e4 = (int ****)0x0;
      local_1ec = (int ****)0x0;
      local_1f0 = (int ****)0x0;
      ppppiVar18 = (int ****)FUN_014a7e18(&local_1f0,"enable",6,*(undefined1 *)(param_2 + 0x8c));
      if (ppppiVar18 == (int ****)0x0) {
        local_90 = local_1f0;
        local_8c = local_1ec;
        local_88 = local_1e8;
        local_84 = local_1e4;
        local_80 = local_1e0;
        local_7c = uStack_1dc;
        local_78 = ppppiStack_1d8;
        local_74 = ppppiStack_1d4;
        FUN_0196ac88(&local_118);
        uVar5 = local_118._0_1_;
        uVar15 = (uint)local_118 & 0xff;
        if (uVar15 != 6) {
          FUN_01bed4e2((uint)&local_130 | 1,(uint)&local_118 | 1,0x17);
          local_130 = (int ****)CONCAT31(local_130._1_3_,uVar5);
          if (uVar15 == 5) {
            local_7c = 0;
            local_78 = local_12c;
            if (local_12c == (int ****)0x0) {
              uStack_124 = 0;
            }
            local_88 = local_12c;
            local_90 = (int ****)(uint)(local_12c != (int ****)0x0);
            local_74 = local_128;
            local_84 = local_128;
            local_8c = (int ****)0x0;
            local_80 = local_90;
            local_70 = uStack_124;
            FUN_00fea674(auStack_100,&local_90);
            if (local_f4 != 0) {
              FUN_0067b1ac(&local_90,auStack_100);
              local_b8 = local_90;
              local_b4 = local_8c;
              local_b0 = local_88;
              cVar6 = (char)local_84;
              local_dc._0_3_ = (undefined3)((uint)local_84 >> 8);
              FUN_00e0febc(&local_130);
              if (cVar6 != '\x02') {
                local_90 = local_b8;
                local_8c = local_b4;
                local_88 = local_b0;
                local_84 = (int ****)CONCAT31((int3)local_dc,cVar6);
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar10 + 0x18) != 0) {
                  FUN_00b065ec(*piVar10 + 8,&local_90);
                }
                if (((uint)local_84 & 0xff) != 2) {
                  local_1f0 = local_90;
                  local_1ec = local_8c;
                  local_1e8 = local_88;
                  local_1e4 = local_84;
                  FUN_019cf348();
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c480), cVar6 != '\0')))
                       ) && (iVar8 = FUN_01aaa278(DAT_01d4c480), iVar8 != 0)))) {
                    local_110 = (int ****)(DAT_01d4c480 + 0x1c);
                    if (*(int *****)(DAT_01d4c480 + 0x20) == (int ****)0x0) {
LAB_00e2fb7c:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_1ec = (int ****)&local_130;
                    local_88 = *(int *****)(DAT_01d4c480 + 0x24);
                    local_84 = *(int *****)(DAT_01d4c480 + 0x28);
                    local_1f0 = (int ****)&local_90;
                    local_118 = (int ****)&local_1f0;
                    local_114 = (int ****)&DAT_00000001;
                    local_80 = (int ****)0x0;
                    local_1e8 = (int ****)&DAT_01d2ea4c;
                    local_12c = (int ****)&DAT_0000006b;
                    local_130 = (int ****)0x3fe987;
                    local_90 = (int ****)*local_110;
                    local_8c = *(int *****)(DAT_01d4c480 + 0x20);
                    FUN_00e0ff40(&local_118);
                  }
                  else {
                    iVar8 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_9c = *(int *****)(DAT_01d4c480 + 0x14);
                      local_98 = *(int *****)(DAT_01d4c480 + 0x18);
                      local_a0 = (int ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar17 = DAT_01d4edc8;
                      pcVar2 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar17 = &DAT_01cfc5e0;
                        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar11 = (*(code *)puVar17[3])(pcVar2,&local_a0);
                      if (iVar11 != 0) {
                        local_128 = (int ****)(DAT_01d4c480 + 0x1c);
                        if (*(int *****)(DAT_01d4c480 + 0x20) == (int ****)0x0) goto LAB_00e2fb7c;
                        local_118 = (int ****)&local_90;
                        local_88 = *(int *****)(DAT_01d4c480 + 0x24);
                        local_114 = (int ****)&local_c8;
                        local_84 = *(int *****)(DAT_01d4c480 + 0x28);
                        local_80 = (int ****)0x0;
                        local_12c = (int ****)&DAT_00000001;
                        local_110 = (int ****)&DAT_01d2ea4c;
                        local_c4 = (int ****)&DAT_0000006b;
                        local_c8 = (int ****)0x3fe987;
                        local_1f0 = local_a0;
                        local_1ec = local_9c;
                        local_1e8 = local_98;
                        local_130 = (int ****)&local_118;
                        local_90 = (int ****)*local_128;
                        local_8c = *(int *****)(DAT_01d4c480 + 0x20);
                        FUN_01aaa328(iVar8,pcVar2,puVar17[4],&local_1f0,&local_130);
                      }
                    }
                  }
                }
              }
              goto LAB_00e2ec78;
            }
            FUN_0165a1f4(auStack_100);
          }
          FUN_00e0febc(&local_130);
          goto LAB_00e2ec78;
        }
        ppppiVar18 = local_114;
      }
      else {
        local_118 = (int ****)CONCAT31(local_118._1_3_,6);
        local_114 = ppppiVar18;
        FUN_01276d58(&local_1f0);
      }
      FUN_00e0fe5c(ppppiVar18);
    }
LAB_00e2ec78:
    *(undefined1 *)(param_2 + 0x9b) = 0;
    FUN_01bed4e2(&local_90,param_2 + 0x48,0x48);
    uVar5 = local_4c;
    FUN_0142e6dc(&local_90);
    FUN_0178e884(local_50);
    *(undefined1 *)(param_2 + 0x99) = uVar5;
    iVar7 = *(int *)(iVar7 + 4);
    *(undefined1 *)(param_2 + 0xd8) = 0;
    *(int *)(param_2 + 0xa0) = iVar7 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c16fb4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16fb4);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x10e)) {
    case 0:
      cVar6 = *(char *)(param_2 + 0x10d);
      iVar7 = *(int *)(param_2 + 0x108);
      goto LAB_00e2ed24;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f98c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f98c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 200)) {
      case 0:
        iVar7 = *(int *)(param_2 + 0xb0);
        goto LAB_00e2f19c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f99c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f99c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x104)) {
        case 0:
          ppppiVar18 = *(int *****)(param_2 + 0xcc);
          goto LAB_00e2f1e4;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c23280);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c23280);
        case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)(param_2 + 0x100)) {
          case 0:
            ppppiVar18 = *(int *****)(param_2 + 0xd0);
            goto LAB_00e2f1f8;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c23290);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c23290);
          case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(*(undefined1 *)(param_2 + 0xdc)) {
            case 0:
              ppppiVar18 = *(int *****)(param_2 + 0xd4);
              goto LAB_00e2f208;
            case 1:
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01c232a0);
            case 2:
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c232a0);
            case 3:
              ppppiVar18 = *(int *****)(param_2 + 0xd8);
              goto LAB_00e2f20c;
            }
          }
        }
        goto switchD_00e2f830_caseD_4;
      case 4:
        uVar9 = *(undefined4 *)(param_2 + 0xd0);
      }
    }
    goto LAB_00e2f2d8;
  case 5:
    if ((*(byte *)(param_2 + 0xa4) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1ddbc);
    }
    goto LAB_00e2ed54;
  }
  iVar7 = FUN_00ba6b7c(param_2 + 0xa0,param_3);
  if (iVar7 == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar5 = 3;
    goto LAB_00e2f310;
  }
  *(int *)(param_2 + 0x94) = iVar7;
  if (*(char *)(param_2 + 0xd8) == '\x03') {
    cVar6 = *(char *)(param_2 + 0xd4);
    bVar19 = cVar6 == '\x03';
    if (bVar19) {
      cVar6 = *(char *)(param_2 + 0xb0);
    }
    if (bVar19 && cVar6 == '\x04') {
      FUN_0193c3cc(param_2 + 0xb4);
      iVar7 = *(int *)(param_2 + 0x94);
    }
  }
  *(undefined1 *)(param_2 + 0x10e) = 0;
  iVar7 = iVar7 + 0x14;
  cVar6 = *(char *)(param_2 + 0x99);
  *(int *)(param_2 + 0x108) = iVar7;
  *(char *)(param_2 + 0x10d) = cVar6;
LAB_00e2ed24:
  ppppiVar18 = (int ****)(param_2 + 0x10c);
  *(char *)ppppiVar18 = cVar6;
  *(int *)(param_2 + 0xa0) = iVar7;
  if (*(char *)(iVar7 + 0x30) == cVar6) {
LAB_00e2ed3c:
    *(undefined1 *)(param_2 + 0x10e) = 1;
LAB_00e2ed44:
    *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0x94) + 0x14;
    *(undefined4 *)(param_2 + 0xa4) = 0;
LAB_00e2ed54:
    cVar6 = *(char *)(*(int *)(param_2 + 0xa0) + 0x30);
    *(undefined1 *)(param_2 + 0xa4) = 1;
    FUN_0160aaa4(&local_90,0);
    local_50 = 0;
    local_4c = cVar6 == '\x01';
    FUN_01bed4e2(auStack_238,&local_90,0x48);
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x94),1);
    ppppiVar14 = (int ****)0x0;
    ppppiVar18 = (int ****)&DAT_00000003;
    *(undefined1 *)(param_2 + 0x9b) = 0;
LAB_00e2edb0:
    *param_1 = ppppiVar18;
    param_1[1] = ppppiVar14;
    FUN_01bed4e2(param_1 + 2,auStack_238,0x48);
    param_1[0x14] = local_250;
    param_1[0x15] = uStack_24c;
    param_1[0x16] = uStack_248;
    param_1[0x17] = uStack_244;
    param_1[0x18] = uStack_240;
    param_1[0x19] = uStack_23c;
    uVar5 = 1;
    goto LAB_00e2f310;
  }
  if (((DAT_01d50f88 < 3) &&
      ((DAT_01d4c7c0 - 1 < 2 ||
       ((DAT_01d4c7c0 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c7b8), cVar6 != '\0')))))) &&
     (iVar7 = FUN_01aaa278(DAT_01d4c7b8), iVar7 != 0)) {
    if (*(int *****)(DAT_01d4c7b8 + 0x20) == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f97c);
    }
    local_b4 = &local_d0;
    local_88 = *(int *****)(DAT_01d4c7b8 + 0x24);
    local_84 = *(int *****)(DAT_01d4c7b8 + 0x28);
    local_d4 = (undefined4 *)(DAT_01d4c7b8 + 0x1c);
    local_90 = (int ****)*local_d4;
    local_b8 = (int ****)&local_90;
    local_dc = (int ****)&local_b8;
    local_d8 = (code *)0x1;
    local_cc = (int ****)&local_a8;
    local_80 = (int ****)0x0;
    local_b0 = (int ****)&DAT_01d2ea4c;
    local_d0 = (int ***)&DAT_005b0b55;
    local_a4 = (int ****)FUN_00ba809c;
    local_a8 = ppppiVar18;
    local_8c = *(int *****)(DAT_01d4c7b8 + 0x20);
    FUN_01aaaecc(DAT_01d4c7b8,&local_dc);
    iVar7 = DAT_01d4c7b8;
    if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
      local_12c = *(int *****)(DAT_01d4c7b8 + 0x14);
      local_128 = *(int *****)(DAT_01d4c7b8 + 0x18);
      local_130 = (int ****)&DAT_00000003;
      DataMemoryBarrier(0xb);
      puVar17 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar17 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)puVar17[3])(pcVar2,&local_130);
      if (iVar8 != 0) {
        local_118 = local_130;
        local_114 = local_12c;
        local_110 = local_128;
        FUN_01aaa328(iVar7,pcVar2,puVar17[4],&local_118,&local_dc);
      }
    }
  }
  else {
    iVar7 = DAT_01d4c7b8;
    if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
      local_c4 = *(int *****)(DAT_01d4c7b8 + 0x14);
      local_c0 = *(int *****)(DAT_01d4c7b8 + 0x18);
      local_c8 = (int ****)&DAT_00000003;
      DataMemoryBarrier(0xb);
      puVar17 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar17 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)puVar17[3])(pcVar2,&local_c8);
      if (iVar8 != 0) {
        if (*(int *****)(DAT_01d4c7b8 + 0x20) == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f97c);
        }
        local_130 = (int ****)&local_90;
        local_88 = *(int *****)(DAT_01d4c7b8 + 0x24);
        local_84 = *(int *****)(DAT_01d4c7b8 + 0x28);
        local_12c = (int ****)&local_a8;
        local_b8 = (int ****)&local_130;
        local_80 = (int ****)0x0;
        local_b4 = (int ****)&DAT_00000001;
        local_128 = (int ****)&DAT_01d2ea4c;
        local_a8 = (int ****)&DAT_005b0b55;
        local_d8 = FUN_00ba809c;
        local_118 = local_c8;
        local_114 = local_c4;
        local_110 = local_c0;
        local_dc = ppppiVar18;
        local_b0 = (int ****)(DAT_01d4c7b8 + 0x1c);
        local_a4 = (int ****)&local_dc;
        local_90 = *(int *****)(DAT_01d4c7b8 + 0x1c);
        local_8c = *(int *****)(DAT_01d4c7b8 + 0x20);
        FUN_01aaa328(iVar7,pcVar2,puVar17[4],&local_118,&local_b8);
      }
    }
  }
  FUN_00ada164(&local_a0,*(char *)ppppiVar18,**(undefined4 **)(param_2 + 0xa0));
  iVar7 = *(int *)(param_2 + 0xa0);
  *(int *****)(param_2 + 0xa4) = local_a0;
  *(int *****)(param_2 + 0xa8) = local_9c;
  *(int *****)(param_2 + 0xac) = local_98;
  *(undefined1 *)(param_2 + 200) = 0;
  *(int *)(param_2 + 0xb0) = iVar7;
LAB_00e2f19c:
  *(int *)(param_2 + 0xb4) = iVar7;
  *(undefined2 *)(param_2 + 0xc9) = 0x100;
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_2 + 0xac);
  ppppiVar18 = (int ****)(iVar7 + 0x14);
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar7 + 0x2c) != 0) {
    local_90 = (int ****)&local_118;
    local_118 = ppppiVar18;
    FUN_019a768c(iVar7 + 0x2c,1,&local_90,&DAT_01c1740c,&DAT_01d293e0);
  }
  *(int *****)(param_2 + 0xcc) = ppppiVar18;
  *(undefined1 *)(param_2 + 0x104) = 0;
LAB_00e2f1e4:
  *(undefined1 *)(param_2 + 0x100) = 0;
  *(int *****)(param_2 + 0xd0) = ppppiVar18;
LAB_00e2f1f8:
  *(undefined1 *)(param_2 + 0xdc) = 0;
  *(int *****)(param_2 + 0xd4) = ppppiVar18;
LAB_00e2f208:
  *(int *****)(param_2 + 0xd8) = ppppiVar18;
LAB_00e2f20c:
  *(int *****)(param_2 + 0xe0) = ppppiVar18;
  *(undefined1 *)(param_2 + 0xfc) = 0;
  *(undefined4 *)(param_2 + 0xec) = 0;
  *(undefined4 *)(param_2 + 0xf0) = 0;
  *(undefined4 *)(param_2 + 0xf4) = 1;
  *(undefined4 *)(param_2 + 0xf8) = 1;
  *(undefined4 *)(param_2 + 0xe4) = 0;
switchD_00e2f830_caseD_4:
  bVar4 = FUN_019f9bc4(param_2 + 0xe0,param_3);
  if (bVar4 == 2) {
    *(undefined1 *)(param_2 + 0xdc) = 4;
    uVar5 = 3;
    *(undefined1 *)(param_2 + 0x100) = 3;
    *(undefined1 *)(param_2 + 0x104) = 3;
LAB_00e2f2f4:
    *(undefined1 *)(param_2 + 200) = uVar5;
  }
  else {
    FUN_0193c3cc(param_2 + 0xe0);
    if ((bVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c232b0);
    }
    iVar7 = *(int *)(param_2 + 0xd0);
    *(undefined1 *)(param_2 + 0xdc) = 1;
    *(undefined1 *)(param_2 + 0x104) = 1;
    *(undefined1 *)(param_2 + 0x100) = 1;
    *(int *)(param_2 + 0xc4) = iVar7;
    uVar9 = FUN_0120e1e8(&DAT_01c1f9ac);
    uVar12 = *(undefined4 *)(iVar7 + 0x14);
    *(undefined4 *)(iVar7 + 0x14) = uVar9;
    *(undefined1 *)(param_2 + 0xc9) = 1;
    *(undefined4 *)(param_2 + 0xcc) = uVar12;
    FUN_019f5854(uVar12);
    uVar9 = *(undefined4 *)(param_2 + 0xcc);
    *(undefined1 *)(param_2 + 0xc9) = 0;
    *(undefined4 *)(param_2 + 0xd0) = uVar9;
LAB_00e2f2d8:
    FUN_01209998(&local_90,uVar9,*param_3);
    uVar9 = local_7c;
    ppppiVar3 = local_80;
    ppppiVar14 = local_84;
    ppppiVar18 = local_88;
    if (((uint)local_90 & 1) != 0) {
      uVar5 = 4;
      goto LAB_00e2f2f4;
    }
    piVar10 = *(int **)(param_2 + 0xd0);
    if (*piVar10 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar19 = (bool)hasExclusiveAccess(piVar10);
      if (!bVar19) goto LAB_00e2f360;
      *piVar10 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00e2f360:
      (**(code **)(piVar10[2] + 0x10))();
    }
    bVar19 = ppppiVar18 == (int ****)0x0 && ppppiVar14 == (int ****)0x0;
    if (ppppiVar18 != (int ****)0x0 || ppppiVar14 != (int ****)0x0) {
      bVar19 = ppppiVar3 == (int ****)0x0;
    }
    if (!bVar19) {
      FUN_00b76e0c(ppppiVar3,uVar9);
LAB_00e2fb94:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe2fb94);
      (*pcVar1)();
    }
    FUN_00ada0a8(&local_90,*(undefined4 *)(param_2 + 0xb4));
    ppppiVar14 = local_8c;
    ppppiVar18 = local_90;
    if (((char)local_90 == '\x04') || (uVar15 = (uint)local_90 & 0xff, uVar15 == 4)) {
      iVar7 = *(int *)(param_2 + 0xb4);
      ppppiVar18 = *(int *****)(iVar7 + 0xc);
      do {
        pppiVar13 = *ppppiVar18;
        bVar19 = (bool)hasExclusiveAccess(ppppiVar18);
      } while (!bVar19);
      *ppppiVar18 = (int ***)((int)pppiVar13 + 1);
      if ((int)pppiVar13 < 0) goto LAB_00e2fb94;
      puVar17 = (undefined4 *)(param_2 + 0xb8);
      local_8c = *(int *****)(iVar7 + 0x10);
      *(undefined1 *)(param_2 + 0xca) = 0;
      local_48 = *puVar17;
      uStack_44 = *(undefined4 *)(param_2 + 0xbc);
      uStack_40 = *(undefined4 *)(param_2 + 0xc0);
      local_3c = 0;
      local_90 = ppppiVar18;
      uVar9 = FUN_0120db94(&local_90,&DAT_01c1f9cc);
      iVar7 = *(int *)(param_2 + 0xc4);
      piVar10 = *(int **)(iVar7 + 0x14);
      if (*piVar10 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar19 = (bool)hasExclusiveAccess(piVar10);
        if (!bVar19) goto LAB_00e2f438;
        *piVar10 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00e2f438:
        (**(code **)(piVar10[2] + 0x10))();
      }
      *(undefined4 *)(iVar7 + 0x14) = uVar9;
      *(undefined1 *)(param_2 + 0xc9) = 0;
      uVar16 = 1;
      FUN_019f8c54(*(undefined4 *)(param_2 + 0xc4),1);
      *(undefined1 *)(param_2 + 200) = 1;
      *(undefined1 *)(param_2 + 0xca) = 0;
      uVar15 = 4;
LAB_00e2f46c:
      local_254 = (undefined1 *)(param_2 + 0x10e);
      FUN_00ba6dc4(param_2 + 0xa4);
      if (uVar15 == 4) {
        *(undefined1 *)(*(int *)(param_2 + 0xa0) + 0x30) = *(undefined1 *)(param_2 + 0x10c);
        goto LAB_00e2ed3c;
      }
      *local_254 = 1;
      local_114 = (int ****)FUN_019a7d7c;
      local_118 = (int ****)&local_130;
      local_12c = (int ****)(uVar16 << 8 | (uint)puVar17 >> 0x18);
      local_130 = (int ****)(uVar15 | (int)puVar17 << 8);
      FUN_00664898(&local_90,&DAT_005a0644,&local_118);
      local_118 = local_90;
      local_114 = local_8c;
      local_110 = local_88;
      FUN_01a70fd4(&local_90,0xd,&local_118);
      FUN_00df4bf0((uint)local_130 & 0xff,local_12c);
      ppppiVar14 = local_8c;
      ppppiVar18 = local_90;
      FUN_01bed4e2(&local_1f0,&local_88,0x60);
      if (ppppiVar18 == (int ****)&DAT_00000003 && ppppiVar14 == (int ****)0x0) goto LAB_00e2ed44;
      FUN_01bed4e2(auStack_190,&local_1f0,0x60);
      FUN_01bed4e2(auStack_238,auStack_190,0x48);
      local_250 = local_148;
      uStack_24c = uStack_144;
      uStack_248 = uStack_140;
      uStack_244 = uStack_13c;
      uStack_240 = uStack_138;
      uStack_23c = uStack_134;
      FUN_019f8c54(*(undefined4 *)(param_2 + 0x94),1);
      *(undefined1 *)(param_2 + 0x9b) = 0;
      if (*(char *)(param_2 + 0x9a) != '\0') {
        FUN_00f9604c(param_2);
      }
      goto LAB_00e2edb0;
    }
    *(undefined1 *)(param_2 + 0xc9) = 0;
    FUN_019f8c54(*(undefined4 *)(param_2 + 0xc4),1);
    FUN_00ba80d8(param_2 + 0xb8);
    *(undefined1 *)(param_2 + 200) = 1;
    *(undefined1 *)(param_2 + 0xca) = 0;
    if (uVar15 != 5) {
      puVar17 = (undefined4 *)((uint)ppppiVar18 >> 8 | (int)ppppiVar14 << 0x18);
      uVar16 = (uint)ppppiVar14 >> 8;
      goto LAB_00e2f46c;
    }
  }
  *(undefined1 *)(param_2 + 0x10e) = 3;
  uVar5 = 4;
  *param_1 = 4;
  param_1[1] = 0;
LAB_00e2f310:
  *(undefined1 *)(param_2 + 0x98) = uVar5;
  return;
}

