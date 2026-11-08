// FUN_00e2d618 @ 00e2d618 size=2460 calls_out=31 calls_in=2
// strings: BUG: request parameters cell was already initialized. | Bosminer.try_resume | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e2d618(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  int ****ppppiVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int ****ppppiVar9;
  int ****ppppiVar10;
  undefined1 uVar11;
  uint uVar12;
  int ****ppppiVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  bool bVar17;
  int local_aa4;
  int ****local_a98;
  int ****local_a94;
  int ****ppppiStack_a90;
  int ****ppppiStack_a8c;
  int ****ppppiStack_a88;
  undefined1 auStack_a84 [52];
  undefined4 local_a50;
  undefined1 local_a4c;
  undefined1 auStack_a30 [88];
  int ****ppppiStack_9d8;
  int ****ppppiStack_9d4;
  int ****ppppiStack_9d0;
  int ****local_9c8;
  int ****local_9c4;
  int ****local_9c0;
  int ****local_9bc;
  int ****local_9b8;
  undefined1 auStack_9b4 [84];
  int ****local_960;
  int ****local_95c;
  int ****local_958;
  undefined2 local_90c;
  undefined1 local_90a;
  int ***local_908;
  undefined4 local_904;
  undefined1 auStack_900 [12];
  int local_8f4;
  int ****local_8e0;
  int ****ppppiStack_8dc;
  int ****ppppiStack_8d8;
  int ****ppppiStack_8d4;
  int ****ppppiStack_8d0;
  int ****ppppiStack_8cc;
  int ****local_8c8;
  int ****ppppiStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  int ****local_8b0;
  int ****local_8ac;
  int ****local_8a8;
  int ****local_8a4;
  int ****local_8a0;
  int ****local_89c;
  undefined1 auStack_898 [712];
  int ****local_5d0;
  int ****local_5cc;
  int ****local_5c8;
  undefined4 local_5c4;
  int ****local_5c0;
  int ****local_5bc;
  int ****local_5b8;
  int ****local_5b4;
  undefined4 local_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  int ****local_2f0;
  int ****local_2ec;
  int ****local_2e8;
  undefined4 local_2e4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x94)) {
  case 0:
    *(undefined1 *)(param_2 + 0x95) = 0;
    uVar14 = *(undefined4 *)(param_2 + 0x90);
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar6 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar6 != (int *)0x0) {
      local_5c0 = (int ****)&DAT_80000000;
      local_5c4 = (int ****)0x0;
      local_5cc = (int ****)0x0;
      local_5d0 = (int ****)0x0;
      FUN_0196ac88(&local_8b0,&local_5d0);
      uVar11 = local_8b0._0_1_;
      uVar12 = (uint)local_8b0 & 0xff;
      if (uVar12 == 6) {
        FUN_00e0fe5c(local_8ac);
      }
      else {
        FUN_01bed4e2((uint)&local_2f0 | 1,(uint)&local_8b0 | 1,0x17);
        local_2f0 = (int ****)CONCAT31(local_2f0._1_3_,uVar11);
        if (uVar12 == 5) {
          if (local_2ec == (int ****)0x0) {
            local_2e4 = 0;
          }
          local_5b8 = local_2ec;
          local_5c8 = local_2ec;
          local_5d0 = local_2ec;
          if (local_2ec != (int ****)0x0) {
            local_5d0 = (int ****)&DAT_00000001;
          }
          local_5b4 = local_2e8;
          local_5bc = (int ****)0x0;
          local_5c4 = local_2e8;
          local_5cc = (int ****)0x0;
          local_5c0 = local_5d0;
          local_5b0 = local_2e4;
          FUN_00fea674(auStack_900,&local_5d0);
          if (local_8f4 != 0) {
            FUN_0067b1ac(&local_5d0,auStack_900);
            local_8e0 = local_5d0;
            ppppiStack_8dc = local_5cc;
            ppppiStack_8d8 = local_5c8;
            cVar5 = (char)local_5c4;
            local_90c = local_5c4._1_2_;
            local_90a = local_5c4._3_1_;
            FUN_00e0febc(&local_2f0);
            if (cVar5 != '\x02') {
              local_5d0 = local_8e0;
              local_5cc = ppppiStack_8dc;
              local_5c8 = ppppiStack_8d8;
              local_5c4 = (int ****)CONCAT31(CONCAT12(local_90a,local_90c),cVar5);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar6 + 0x18) != 0) {
                FUN_00b065ec(*piVar6 + 8,&local_5d0);
              }
              if (((uint)local_5c4 & 0xff) != 2) {
                local_8b0 = local_5d0;
                local_8ac = local_5cc;
                local_8a8 = local_5c8;
                local_8a4 = local_5c4;
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c480), cVar5 != '\0'))))
                    && (iVar7 = FUN_01aaa278(DAT_01d4c480), iVar7 != 0)))) {
                  local_2e8 = (int ****)(DAT_01d4c480 + 0x1c);
                  if (*(int *****)(DAT_01d4c480 + 0x20) == (int ****)0x0) {
LAB_00e2dfe8:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_8ac = (int ****)&local_9c8;
                  local_5c8 = *(int *****)(DAT_01d4c480 + 0x24);
                  local_5c4 = *(int *****)(DAT_01d4c480 + 0x28);
                  local_8b0 = (int ****)&local_5d0;
                  local_2f0 = (int ****)&local_8b0;
                  local_2ec = (int ****)&DAT_00000001;
                  local_5c0 = (int ****)0x0;
                  local_8a8 = (int ****)&DAT_01d2ea4c;
                  local_9c4 = (int ****)&DAT_0000006b;
                  local_9c8 = (int ****)0x3fe987;
                  local_5d0 = (int ****)*local_2e8;
                  local_5cc = *(int *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_2f0);
                }
                else {
                  iVar7 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_95c = *(int *****)(DAT_01d4c480 + 0x14);
                    local_958 = *(int *****)(DAT_01d4c480 + 0x18);
                    local_960 = (int ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar15 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar15 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar8 = (*(code *)puVar15[3])(pcVar1,&local_960);
                    if (iVar8 != 0) {
                      local_9c0 = (int ****)(DAT_01d4c480 + 0x1c);
                      if (*(int *****)(DAT_01d4c480 + 0x20) == (int ****)0x0) goto LAB_00e2dfe8;
                      local_2ec = &local_908;
                      local_5c8 = *(int *****)(DAT_01d4c480 + 0x24);
                      local_5c4 = *(int *****)(DAT_01d4c480 + 0x28);
                      local_2f0 = (int ****)&local_5d0;
                      local_9c8 = (int ****)&local_2f0;
                      local_9c4 = (int ****)&DAT_00000001;
                      local_5c0 = (int ****)0x0;
                      local_2e8 = (int ****)&DAT_01d2ea4c;
                      local_904 = 0x6b;
                      local_908 = (int ***)0x3fe987;
                      local_8b0 = local_960;
                      local_8ac = local_95c;
                      local_8a8 = local_958;
                      local_5d0 = (int ****)*local_9c0;
                      local_5cc = *(int *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar7,pcVar1,puVar15[4],&local_8b0,&local_9c8);
                    }
                  }
                }
              }
            }
            goto LAB_00e2d93c;
          }
          FUN_0165a1f4(auStack_900);
        }
        FUN_00e0febc(&local_2f0);
      }
    }
LAB_00e2d93c:
    *(undefined4 *)(param_2 + 0x98) = uVar14;
    *(undefined1 *)(param_2 + 0x160) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c16f74);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16f74);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x644)) {
    case 0:
      puVar15 = *(undefined4 **)(param_2 + 0x640);
      goto LAB_00e2d9fc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c19d4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c19d4c);
    }
    goto switchD_00e2d6f8_caseD_3;
  }
  puVar15 = (undefined4 *)(param_2 + 0x98);
  FUN_00e2ca00(&local_5d0,puVar15,param_3);
  ppppiVar3 = local_5cc;
  ppppiVar2 = local_5d0;
  if (local_5d0 == (int ****)&SUB_00000004 && local_5cc == (int ****)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar11 = 3;
    goto LAB_00e2ddb4;
  }
  ppppiStack_9d8 = local_5c8;
  ppppiStack_9d4 = local_5c4;
  ppppiStack_9d0 = local_5c0;
  FUN_01bed4e2(auStack_a30,&local_5bc,0x54);
  cVar5 = *(char *)(param_2 + 0x160);
  bVar17 = cVar5 == '\x03';
  if (bVar17) {
    cVar5 = *(char *)(param_2 + 0x15c);
  }
  if (bVar17 && cVar5 == '\x03') {
    FUN_00df984c(param_2 + 0xa0);
  }
  if (ppppiVar2 == (int ****)&DAT_00000003 && ppppiVar3 == (int ****)0x0) {
    *puVar15 = ppppiStack_9d8;
    *(int *****)(param_2 + 0x9c) = ppppiStack_9d4;
    *(int *****)(param_2 + 0xa0) = ppppiStack_9d0;
    *(undefined1 *)(param_2 + 0x644) = 0;
    *(undefined4 **)(param_2 + 0x640) = puVar15;
LAB_00e2d9fc:
    FUN_019cfcf0(&local_5d0);
    local_8e0 = local_5d0;
    ppppiStack_8dc = local_5cc;
    ppppiStack_8d8 = local_5c8;
    ppppiStack_8d4 = local_5c4;
    ppppiStack_8d0 = local_5c0;
    ppppiStack_8cc = local_5bc;
    local_8c8 = local_5b8;
    ppppiStack_8c4 = local_5b4;
    uStack_8c0 = local_5b0;
    uStack_8bc = uStack_5ac;
    uStack_8b8 = uStack_5a8;
    uStack_8b4 = uStack_5a4;
    *(undefined4 *)(param_2 + 0x104) = 0x13;
    *(undefined4 *)(param_2 + 200) = 0x80000006;
    *(char **)(param_2 + 0x100) = "Bosminer.try_resume";
    *(int *****)(param_2 + 0x108) = local_5d0;
    *(int *****)(param_2 + 0x10c) = local_5cc;
    *(int *****)(param_2 + 0x110) = local_5c8;
    *(int *****)(param_2 + 0x114) = local_5c4;
    *(int *****)(param_2 + 0x118) = local_5c0;
    *(int *****)(param_2 + 0x11c) = local_5bc;
    *(int *****)(param_2 + 0x120) = local_5b8;
    *(int *****)(param_2 + 0x124) = local_5b4;
    *(undefined4 *)(param_2 + 0x128) = local_5b0;
    *(undefined4 *)(param_2 + 300) = uStack_5ac;
    *(undefined4 *)(param_2 + 0x130) = uStack_5a8;
    *(undefined4 *)(param_2 + 0x134) = uStack_5a4;
    *(undefined1 *)(param_2 + 0x638) = 0;
    *(undefined1 *)(param_2 + 0x13f) = 0;
    *(undefined4 **)(param_2 + 0x138) = puVar15;
switchD_00e2d6f8_caseD_3:
    local_aa4 = param_2 + 0xa8;
    puVar16 = (undefined1 *)(param_2 + 0x644);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x638)) {
    case 0:
      FUN_01bed4e2(param_2 + 0x370,local_aa4,0x2c8);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
    FUN_00df9fa8(&local_5d0,param_2 + 0x370,param_3);
    ppppiVar9 = local_5bc;
    ppppiVar10 = local_5c0;
    ppppiVar4 = local_5c4;
    ppppiVar13 = local_5c8;
    ppppiVar3 = local_5cc;
    ppppiVar2 = local_5d0;
    if (local_5d0 == (int ****)&DAT_0000001e && local_5cc == (int ****)0x0) {
      *(undefined1 *)(param_2 + 0x638) = 3;
LAB_00e2dacc:
      *puVar16 = 3;
LAB_00e2dad4:
      uVar11 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e2ddb4;
    }
    FUN_01bed4e2(&local_2f0,&local_5b8,0x2c8);
    FUN_00df9ef8(param_2 + 0x370);
    if (ppppiVar2 == (int ****)&DAT_0000001d && ppppiVar3 == (int ****)0x0) {
      *(undefined1 *)(param_2 + 0x638) = 1;
      if (ppppiVar13 == (int ****)&DAT_80000004) {
        ppppiVar13 = ppppiVar4;
        goto LAB_00e2dcd4;
      }
      if (ppppiVar13 == (int ****)&DAT_80000005) goto LAB_00e2dacc;
      *puVar16 = 1;
      if (ppppiVar13 == (int ****)0x80000006) goto LAB_00e2dad4;
      local_8a8 = ppppiVar10;
      local_2ec = (int ****)&DAT_00000001;
      local_8ac = ppppiVar4;
      local_8a4 = ppppiVar9;
      local_8b0 = ppppiVar13;
      local_2e8 = (int ****)0x0;
      local_2f0 = (int ****)0x0;
      local_5c4 = (int ****)0x0;
      local_5c8 = (int ****)0x60000020;
      local_5cc = (int ****)&DAT_01c17420;
      local_5d0 = (int ****)&local_2f0;
      iVar7 = FUN_00aeeb78(&local_8b0,&local_5d0);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_8e0,&DAT_01c17458,&DAT_01d30334);
      }
      local_8e0 = local_2f0;
      ppppiStack_8dc = local_2ec;
      ppppiStack_8d8 = local_2e8;
      FUN_01a70fd4(&local_5d0,0xd);
      FUN_00dfb5e8(&local_8b0);
      ppppiVar9 = local_5c0;
      ppppiVar10 = local_5c4;
      ppppiVar13 = local_5c8;
      ppppiVar3 = local_5cc;
      ppppiVar2 = local_5d0;
      FUN_01bed4e2(&local_960,&local_5bc,0x54);
      if (ppppiVar2 == (int ****)&DAT_00000003 && ppppiVar3 == (int ****)0x0) goto LAB_00e2dcd8;
      local_9bc = ppppiVar10;
      local_9c8 = ppppiVar2;
      local_9c0 = ppppiVar13;
      local_9b8 = ppppiVar9;
      local_9c4 = ppppiVar3;
      FUN_01bed4e2(auStack_9b4,&local_960,0x54);
LAB_00e2dd80:
      FUN_01bed4e2(&local_a98,&local_9c8,0x68);
    }
    else {
      FUN_01bed4e2(auStack_898,&local_2f0,0x2c8);
      local_8ac = ppppiVar3;
      local_8a0 = ppppiVar10;
      local_8a4 = ppppiVar4;
      local_89c = ppppiVar9;
      local_8b0 = ppppiVar2;
      local_8a8 = ppppiVar13;
      if (ppppiVar2 != (int ****)&DAT_0000000a || ppppiVar3 != (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      *(undefined1 *)(param_2 + 0x638) = 1;
      ppppiVar9 = ppppiVar10;
      ppppiVar10 = ppppiVar4;
LAB_00e2dcd4:
      *puVar16 = 1;
LAB_00e2dcd8:
      if (ppppiVar13 == (int ****)&DAT_80000000) {
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
        if (ppppiVar13 != (int ****)&DAT_80000001) {
          local_5d0 = ppppiVar13;
          local_5cc = ppppiVar10;
          local_5c8 = ppppiVar9;
          FUN_01a70fd4(&local_9c8,0xd,&local_5d0);
          if (local_9c8 != (int ****)&DAT_00000003 || local_9c4 != (int ****)0x0) goto LAB_00e2dd80;
          uVar11 = local_9c0._0_1_;
        }
      }
      FUN_0160aaa4(&ppppiStack_a90,0);
      local_a94 = (int ****)0x0;
      local_a98 = (int ****)&DAT_00000003;
      local_a50 = 0;
      local_a4c = uVar11;
    }
    FUN_0084ec48(param_2 + 0x98);
    FUN_00f9604c(param_2 + 0x48);
  }
  else {
    FUN_01bed4e2(auStack_a84,auStack_a30,0x54);
    ppppiStack_a90 = ppppiStack_9d8;
    ppppiStack_a8c = ppppiStack_9d4;
    ppppiStack_a88 = ppppiStack_9d0;
    local_a94 = ppppiVar3;
    local_a98 = ppppiVar2;
    FUN_00f9604c(param_2 + 0x48);
    if (*(char *)(param_2 + 0x95) != '\0') {
      FUN_00f9604c(param_2);
    }
  }
  FUN_01bed4e2(param_1,&local_a98,0x68);
  uVar11 = 1;
LAB_00e2ddb4:
  *(undefined1 *)(param_2 + 0x94) = uVar11;
  return;
}

