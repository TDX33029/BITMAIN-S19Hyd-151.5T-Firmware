// FUN_00e2bd3c @ 00e2bd3c size=2664 calls_out=34 calls_in=1
// strings: power-cutevent open/boser/boser/src/bos.rs:152 | Bosminer.try_pause | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e2bd3c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  int ****ppppiVar7;
  int iVar8;
  int iVar9;
  int ****ppppiVar10;
  int ****ppppiVar11;
  uint uVar12;
  int ****ppppiVar13;
  undefined4 *puVar14;
  undefined1 uVar15;
  undefined1 *puVar16;
  bool bVar17;
  int local_aa4;
  int ****local_a98;
  int ****local_a94;
  int ****local_a90;
  int ****ppppiStack_a8c;
  int ****ppppiStack_a88;
  undefined1 auStack_a84 [52];
  undefined4 local_a50;
  undefined1 local_a4c;
  undefined1 auStack_a30 [88];
  int ****local_9d8;
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
  int ****ppppiStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  int ****local_8b0;
  int ****local_8ac;
  int ****local_8a8;
  int ****local_8a4;
  int ****local_8a0;
  int ****local_89c;
  int ****ppppiStack_898;
  int ****ppppiStack_894;
  int ****local_5d0;
  int ****local_5cc;
  int ****local_5c8;
  undefined4 local_5c4;
  int ****local_5c0;
  int ****local_5bc;
  int ****local_5b8;
  int ****local_5b4;
  int ****local_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  int ****local_2f0;
  int ****local_2ec;
  int ****local_2e8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xa4)) {
  case 0:
    uVar5 = *(undefined4 *)(param_2 + 0xa0);
    *(undefined1 *)(param_2 + 0xa6) = 0;
    FUN_01bed4e2(param_2 + 0x50,param_2,0x50);
    piVar6 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x9c));
    if (piVar6 != (int *)0x0) {
      local_8a0 = (int ****)&DAT_80000000;
      local_8a4 = (int ****)0x0;
      local_8ac = (int ****)0x0;
      local_8b0 = (int ****)0x0;
      ppppiVar7 = (int ****)FUN_01272340(&local_8b0,&DAT_004742ca,3,param_2 + 0x90);
      if (ppppiVar7 == (int ****)0x0) {
        local_5d0 = local_8b0;
        local_5cc = local_8ac;
        local_5c8 = local_8a8;
        local_5c4 = local_8a4;
        local_5c0 = local_8a0;
        local_5bc = local_89c;
        local_5b8 = ppppiStack_898;
        local_5b4 = ppppiStack_894;
        FUN_0196ac88(&local_2f0);
        uVar15 = local_2f0._0_1_;
        uVar12 = (uint)local_2f0 & 0xff;
        if (uVar12 != 6) {
          FUN_01bed4e2((uint)&local_9c8 | 1,(uint)&local_2f0 | 1,0x17);
          local_9c8 = (int ****)CONCAT31(local_9c8._1_3_,uVar15);
          if (uVar12 == 5) {
            local_5bc = (int ****)0x0;
            local_5b8 = local_9c4;
            local_5b0 = local_9bc;
            if (local_9c4 == (int ****)0x0) {
              local_5b0 = (int ****)0x0;
            }
            local_5c8 = local_9c4;
            local_5d0 = local_9c4;
            if (local_9c4 != (int ****)0x0) {
              local_5d0 = (int ****)&DAT_00000001;
            }
            local_5b4 = local_9c0;
            local_5c4 = local_9c0;
            local_5cc = (int ****)0x0;
            local_5c0 = local_5d0;
            FUN_00fea674(auStack_900,&local_5d0);
            if (local_8f4 != 0) {
              FUN_0067b1ac(&local_5d0,auStack_900);
              local_8e0 = local_5d0;
              ppppiStack_8dc = local_5cc;
              ppppiStack_8d8 = local_5c8;
              cVar4 = (char)local_5c4;
              local_90c = local_5c4._1_2_;
              local_90a = local_5c4._3_1_;
              FUN_00e0febc(&local_9c8);
              if (cVar4 != '\x02') {
                local_5d0 = local_8e0;
                local_5cc = ppppiStack_8dc;
                local_5c8 = ppppiStack_8d8;
                local_5c4 = (int ****)CONCAT31(CONCAT12(local_90a,local_90c),cVar4);
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
                       ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0')))
                       ) && (iVar8 = FUN_01aaa278(DAT_01d4c480), iVar8 != 0)))) {
                    local_2e8 = (int ****)(DAT_01d4c480 + 0x1c);
                    if (*(int *****)(DAT_01d4c480 + 0x20) == (int ****)0x0) {
LAB_00e2c7d8:
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
                    iVar8 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_95c = *(int *****)(DAT_01d4c480 + 0x14);
                      local_958 = *(int *****)(DAT_01d4c480 + 0x18);
                      local_960 = (int ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar14 = DAT_01d4edc8;
                      pcVar1 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar14 = &DAT_01cfc5e0;
                        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar9 = (*(code *)puVar14[3])(pcVar1,&local_960);
                      if (iVar9 != 0) {
                        local_9c0 = (int ****)(DAT_01d4c480 + 0x1c);
                        if (*(int *****)(DAT_01d4c480 + 0x20) == (int ****)0x0) goto LAB_00e2c7d8;
                        local_2ec = &local_908;
                        local_5c8 = *(int *****)(DAT_01d4c480 + 0x24);
                        local_5c4 = *(int *****)(DAT_01d4c480 + 0x28);
                        local_2f0 = (int ****)&local_5d0;
                        local_9c4 = (int ****)&DAT_00000001;
                        local_5c0 = (int ****)0x0;
                        local_2e8 = (int ****)&DAT_01d2ea4c;
                        local_904 = 0x6b;
                        local_908 = (int ***)0x3fe987;
                        local_8b0 = local_960;
                        local_8ac = local_95c;
                        local_8a8 = local_958;
                        local_9c8 = (int ****)&local_2f0;
                        local_5d0 = (int ****)*local_9c0;
                        local_5cc = *(int *****)(DAT_01d4c480 + 0x20);
                        FUN_01aaa328(iVar8,pcVar1,puVar14[4],&local_8b0,&local_9c8);
                      }
                    }
                  }
                }
              }
              goto LAB_00e2bea4;
            }
            FUN_0165a1f4(auStack_900);
          }
          FUN_00e0febc(&local_9c8);
          goto LAB_00e2bea4;
        }
        ppppiVar7 = local_2ec;
      }
      else {
        local_2f0 = (int ****)CONCAT31(local_2f0._1_3_,6);
        local_2ec = ppppiVar7;
        FUN_01276d58(&local_8b0);
      }
      FUN_00e0fe5c(ppppiVar7);
    }
LAB_00e2bea4:
    bVar17 = false;
    if ((*(int *)(param_2 + 0x90) != -0x80000000) && (bVar17 = false, *(int *)(param_2 + 0x98) == 9)
       ) {
      iVar8 = thunk_FUN_01bed842(*(undefined4 *)(param_2 + 0x94),
                                 "power-cutevent open/boser/boser/src/bos.rs:152",9);
      bVar17 = iVar8 == 0;
    }
    *(undefined1 *)(param_2 + 0x170) = 0;
    *(undefined4 *)(param_2 + 0xa8) = uVar5;
    *(bool *)(param_2 + 0xa5) = bVar17;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c16f34);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16f34);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x654)) {
    case 0:
      uVar15 = *(undefined1 *)(param_2 + 0x655);
      puVar14 = *(undefined4 **)(param_2 + 0x650);
      goto LAB_00e2bfb4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c19dac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c19dac);
    }
    goto switchD_00e2be3c_caseD_3;
  }
  puVar14 = (undefined4 *)(param_2 + 0xa8);
  FUN_00e2ca00(&local_5d0,puVar14,param_3);
  ppppiVar2 = local_5cc;
  ppppiVar7 = local_5d0;
  if (local_5d0 == (int ****)&SUB_00000004 && local_5cc == (int ****)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar15 = 3;
    goto LAB_00e2c598;
  }
  local_9d8 = local_5c8;
  ppppiStack_9d4 = local_5c4;
  ppppiStack_9d0 = local_5c0;
  FUN_01bed4e2(auStack_a30,&local_5bc,0x54);
  cVar4 = *(char *)(param_2 + 0x170);
  bVar17 = cVar4 == '\x03';
  if (bVar17) {
    cVar4 = *(char *)(param_2 + 0x16c);
  }
  if (bVar17 && cVar4 == '\x03') {
    FUN_00df984c(param_2 + 0xb0);
  }
  if (ppppiVar7 == (int ****)&DAT_00000003 && ppppiVar2 == (int ****)0x0) {
    *puVar14 = local_9d8;
    *(int *****)(param_2 + 0xac) = ppppiStack_9d4;
    *(int *****)(param_2 + 0xb0) = ppppiStack_9d0;
    *(undefined1 *)(param_2 + 0x654) = 0;
    uVar15 = *(undefined1 *)(param_2 + 0xa5);
    *(undefined4 **)(param_2 + 0x650) = puVar14;
    *(undefined1 *)(param_2 + 0x655) = uVar15;
LAB_00e2bfb4:
    FUN_019cfcf0(&local_5d0);
    local_8e0 = local_5d0;
    ppppiStack_8dc = local_5cc;
    ppppiStack_8d8 = local_5c8;
    ppppiStack_8d4 = local_5c4;
    ppppiStack_8d0 = local_5c0;
    ppppiStack_8cc = local_5bc;
    local_8c8 = local_5b8;
    ppppiStack_8c4 = local_5b4;
    ppppiStack_8c0 = local_5b0;
    uStack_8bc = uStack_5ac;
    uStack_8b8 = uStack_5a8;
    uStack_8b4 = uStack_5a4;
    *(undefined4 *)(param_2 + 0x114) = 0x12;
    *(undefined1 **)(param_2 + 0xd8) = &DAT_80000005;
    *(char **)(param_2 + 0x110) = "Bosminer.try_pause";
    *(undefined1 *)(param_2 + 0xdc) = uVar15;
    *(int *****)(param_2 + 0x118) = local_5d0;
    *(int *****)(param_2 + 0x11c) = local_5cc;
    *(int *****)(param_2 + 0x120) = local_5c8;
    *(int *****)(param_2 + 0x124) = local_5c4;
    *(int *****)(param_2 + 0x128) = local_5c0;
    *(int *****)(param_2 + 300) = local_5bc;
    *(int *****)(param_2 + 0x130) = local_5b8;
    *(int *****)(param_2 + 0x134) = local_5b4;
    *(int *****)(param_2 + 0x138) = local_5b0;
    *(undefined4 *)(param_2 + 0x13c) = uStack_5ac;
    *(undefined4 *)(param_2 + 0x140) = uStack_5a8;
    *(undefined4 *)(param_2 + 0x144) = uStack_5a4;
    *(undefined1 *)(param_2 + 0x648) = 0;
    *(undefined1 *)(param_2 + 0x14f) = 0;
    *(undefined4 **)(param_2 + 0x148) = puVar14;
switchD_00e2be3c_caseD_3:
    local_aa4 = param_2 + 0xb8;
    puVar16 = (undefined1 *)(param_2 + 0x654);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x648)) {
    case 0:
      FUN_01bed4e2(param_2 + 0x380,local_aa4,0x2c8);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
    FUN_00df9fa8(&local_5d0,param_2 + 0x380,param_3);
    ppppiVar10 = local_5bc;
    ppppiVar11 = local_5c0;
    ppppiVar3 = local_5c4;
    ppppiVar13 = local_5c8;
    ppppiVar2 = local_5cc;
    ppppiVar7 = local_5d0;
    if (local_5d0 == (int ****)&DAT_0000001e && local_5cc == (int ****)0x0) {
      *(undefined1 *)(param_2 + 0x648) = 3;
LAB_00e2c098:
      *puVar16 = 3;
LAB_00e2c0a0:
      uVar15 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e2c598;
    }
    FUN_01bed4e2(&local_2f0,&local_5b8,0x2c8);
    FUN_00df9ef8(param_2 + 0x380);
    if (ppppiVar7 == (int ****)&DAT_0000001d && ppppiVar2 == (int ****)0x0) {
      *(undefined1 *)(param_2 + 0x648) = 1;
      if (ppppiVar13 == (int ****)&DAT_80000004) {
        ppppiVar13 = ppppiVar3;
        goto LAB_00e2c2b4;
      }
      if (ppppiVar13 == (int ****)&DAT_80000005) goto LAB_00e2c098;
      *puVar16 = 1;
      if (ppppiVar13 == (int ****)0x80000006) goto LAB_00e2c0a0;
      local_8a4 = ppppiVar10;
      local_8a8 = ppppiVar11;
      local_2ec = (int ****)&DAT_00000001;
      local_8ac = ppppiVar3;
      local_8b0 = ppppiVar13;
      local_2e8 = (int ****)0x0;
      local_2f0 = (int ****)0x0;
      local_5c4 = (int ****)0x0;
      local_5c8 = (int ****)0x60000020;
      local_5cc = (int ****)&DAT_01c17420;
      local_5d0 = (int ****)&local_2f0;
      iVar8 = FUN_00aeeb78(&local_8b0,&local_5d0);
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_8e0,&DAT_01c17458,&DAT_01d30334);
      }
      local_8e0 = local_2f0;
      ppppiStack_8dc = local_2ec;
      ppppiStack_8d8 = local_2e8;
      FUN_01a70fd4(&local_5d0,0xd);
      FUN_00dfb5e8(&local_8b0);
      ppppiVar10 = local_5c0;
      ppppiVar11 = local_5c4;
      ppppiVar13 = local_5c8;
      ppppiVar2 = local_5cc;
      ppppiVar7 = local_5d0;
      FUN_01bed4e2(&local_960,&local_5bc,0x54);
      if (ppppiVar7 == (int ****)&DAT_00000003 && ppppiVar2 == (int ****)0x0) goto LAB_00e2c2b8;
      local_9bc = ppppiVar11;
      local_9c8 = ppppiVar7;
      local_9c0 = ppppiVar13;
      local_9b8 = ppppiVar10;
      local_9c4 = ppppiVar2;
      FUN_01bed4e2(auStack_9b4,&local_960,0x54);
LAB_00e2c564:
      FUN_01bed4e2(&local_a98,&local_9c8,0x68);
    }
    else {
      FUN_01bed4e2(&ppppiStack_898,&local_2f0,0x2c8);
      local_8a0 = ppppiVar11;
      local_8a4 = ppppiVar3;
      local_8ac = ppppiVar2;
      local_8b0 = ppppiVar7;
      local_8a8 = ppppiVar13;
      if (ppppiVar7 != (int ****)&DAT_00000009 || ppppiVar2 != (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      *(undefined1 *)(param_2 + 0x648) = 1;
      ppppiVar10 = ppppiVar11;
      ppppiVar11 = ppppiVar3;
LAB_00e2c2b4:
      *puVar16 = 1;
LAB_00e2c2b8:
      if (ppppiVar13 == (int ****)&DAT_80000000) {
        uVar15 = 1;
      }
      else {
        uVar15 = 0;
        if (ppppiVar13 != (int ****)&DAT_80000001) {
          local_5d0 = ppppiVar13;
          local_5cc = ppppiVar11;
          local_5c8 = ppppiVar10;
          FUN_01a70fd4(&local_9c8,0xd,&local_5d0);
          if (local_9c8 != (int ****)&DAT_00000003 || local_9c4 != (int ****)0x0) goto LAB_00e2c564;
          uVar15 = local_9c0._0_1_;
        }
      }
      FUN_0160aaa4(&local_a90,0);
      local_a94 = (int ****)0x0;
      local_a98 = (int ****)&DAT_00000003;
      local_a50 = 0;
      local_a4c = uVar15;
    }
    FUN_0084ec48(param_2 + 0xa8);
    FUN_005f11d4(param_2 + 0x50);
  }
  else {
    FUN_01bed4e2(auStack_a84,auStack_a30,0x54);
    local_a90 = local_9d8;
    ppppiStack_a8c = ppppiStack_9d4;
    ppppiStack_a88 = ppppiStack_9d0;
    local_a94 = ppppiVar2;
    local_a98 = ppppiVar7;
    FUN_005f11d4(param_2 + 0x50);
    if (*(char *)(param_2 + 0xa6) != '\0') {
      FUN_005f11d4(param_2);
    }
  }
  FUN_01bed4e2(param_1,&local_a98,0x68);
  uVar15 = 1;
LAB_00e2c598:
  *(undefined1 *)(param_2 + 0xa4) = uVar15;
  return;
}

