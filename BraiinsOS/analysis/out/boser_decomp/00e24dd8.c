// FUN_00e24dd8 @ 00e24dd8 size=5244 calls_out=52 calls_in=1
// strings: save_action | no cooling mode provided | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffff9c8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e24dd8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint3 uVar1;
  char *pcVar2;
  uint ****ppppuVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint ****ppppuVar18;
  int *piVar19;
  int iVar20;
  uint ***pppuVar21;
  int iVar22;
  undefined4 uVar23;
  undefined1 uVar24;
  int iVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint ****ppppuVar28;
  int iVar29;
  uint extraout_r12;
  uint extraout_r12_00;
  int iVar30;
  int *piVar31;
  bool bVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  uint ****local_6f8;
  uint ****local_6f4;
  uint ****local_6f0;
  undefined4 local_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 local_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined1 auStack_6a0 [88];
  uint ****local_648;
  uint ****local_644;
  uint ****local_640;
  undefined4 local_63c;
  uint ****local_638;
  uint ****local_634;
  uint ****local_630;
  uint ****local_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined1 auStack_608 [48];
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 local_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 local_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  int local_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  int local_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  uint ****local_570;
  uint ****local_56c;
  uint ****local_568;
  uint ****local_540;
  uint ****local_53c;
  uint ****local_538;
  uint ****local_534;
  uint ****local_530;
  uint ****local_52c;
  uint ****local_528;
  uint ****ppppuStack_524;
  uint ****local_398;
  undefined4 local_394;
  undefined4 *local_390;
  undefined1 auStack_220 [88];
  undefined1 auStack_1c8 [8];
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  uint ****local_160;
  uint ****local_15c;
  uint ****local_158;
  uint ****local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint ***local_f8;
  uint ****local_f4;
  uint ****local_f0;
  undefined4 local_ec;
  uint ****local_e0;
  uint ****local_dc;
  uint ****ppppuStack_d8;
  undefined1 auStack_c8 [12];
  int local_bc;
  uint ****local_a4;
  uint ****local_a0;
  uint ****local_9c;
  undefined1 local_98 [36];
  undefined2 local_74;
  undefined1 local_72;
  
  piVar19 = (int *)(param_2 + 0xf8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x350)) {
  case 0:
    *(undefined4 *)(param_2 + 0x2fc) = *(undefined4 *)(param_2 + 0x2f8);
    *(undefined2 *)(param_2 + 0x353) = 0x100;
    FUN_01bed4e2(param_2 + 0xb8,param_2,0xb8);
    piVar10 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x168));
    if (piVar10 != (int *)0x0) {
      local_530 = (uint ****)0x80000000;
      local_534 = (uint ****)0x0;
      local_53c = (uint ****)0x0;
      local_540 = (uint ****)0x0;
      ppppuVar18 = (uint ****)
                   FUN_014a7b90(&local_540,"save_action",0xb,*(undefined4 *)(param_2 + 0x160));
      if (ppppuVar18 == (uint ****)0x0) {
        if (local_540 == (uint ****)&DAT_00000001) {
          local_648 = (uint ****)&DAT_0000000a;
          ppppuVar18 = (uint ****)FUN_01966fbc(&local_648,0,0);
          goto LAB_00e24f8c;
        }
        ppppuVar18 = (uint ****)FUN_007025b0(&local_540,&DAT_0056d358,4);
        ppppuVar28 = local_530;
        if (ppppuVar18 != (uint ****)0x0) goto LAB_00e24f8c;
        if (local_540 == (uint ****)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
        }
        bVar32 = local_530 == (uint ****)0x80000000;
        local_530 = (uint ****)0x80000000;
        if (bVar32) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
        }
        local_9c = local_528;
        local_a0 = local_52c;
        local_a4 = ppppuVar28;
        if (*piVar19 != 4 || *(int *)(param_2 + 0xfc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e26518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00e2651c + *(int *)(&DAT_00e2651c + *piVar19 * 4)))();
          return;
        }
        local_98[0] = 0;
        FUN_0196b484(&local_570,(uint)&local_540 | 4,&local_a4,local_98);
        if ((char)local_570 != '\x06') {
          FUN_00db4764(&local_570);
        }
        local_648 = local_540;
        local_644 = local_53c;
        local_640 = local_538;
        local_63c = local_534;
        local_638 = local_530;
        local_634 = local_52c;
        local_630 = local_528;
        local_62c = ppppuStack_524;
        FUN_0196ac88();
        uVar24 = local_e0._0_1_;
        uVar9 = (uint)local_e0 & 0xff;
        if (uVar9 != 6) {
          FUN_01bed4e2((uint)&local_f8 | 1,(uint)&local_e0 | 1,0x17);
          local_f8 = (uint ***)CONCAT31(local_f8._1_3_,uVar24);
          if (uVar9 == 5) {
            if (local_f4 == (uint ****)0x0) {
              local_ec = 0;
            }
            local_630 = local_f4;
            local_640 = local_f4;
            local_648 = (uint ****)(uint)(local_f4 != (uint ****)0x0);
            local_62c = local_f0;
            local_634 = (uint ****)0x0;
            local_63c = local_f0;
            local_644 = (uint ****)0x0;
            local_638 = local_648;
            local_628 = local_ec;
            FUN_00fea674(auStack_c8,&local_648);
            if (local_bc != 0) {
              FUN_0067b1ac(&local_648,auStack_c8);
              local_e0 = local_648;
              local_dc = local_644;
              ppppuStack_d8 = local_640;
              cVar4 = (char)local_63c;
              local_74 = local_63c._1_2_;
              local_72 = local_63c._3_1_;
              FUN_00e0febc(&local_f8);
              if (cVar4 != '\x02') {
                local_648 = local_e0;
                local_644 = local_dc;
                local_640 = ppppuStack_d8;
                local_63c = (uint ****)CONCAT31(CONCAT12(local_72,local_74),cVar4);
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar10 + 0x18) != 0) {
                  FUN_00b065ec(*piVar10 + 8,&local_648);
                }
                if (((uint)local_63c & 0xff) != 2) {
                  local_160 = local_648;
                  local_15c = local_644;
                  local_158 = local_640;
                  local_154 = local_63c;
                  FUN_019cf348(&local_160);
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0')))
                       ) && (iVar6 = FUN_01aaa278(DAT_01d4c480), iVar6 != 0)))) {
                    local_538 = (uint ****)(DAT_01d4c480 + 0x1c);
                    if (*(uint *****)(DAT_01d4c480 + 0x20) == (uint ****)0x0) {
LAB_00e28128:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_15c = (uint ****)&local_398;
                    local_640 = *(uint *****)(DAT_01d4c480 + 0x24);
                    local_63c = *(uint *****)(DAT_01d4c480 + 0x28);
                    local_160 = (uint ****)&local_648;
                    local_53c = (uint ****)&DAT_00000001;
                    local_638 = (uint ****)0x0;
                    local_158 = (uint ****)&DAT_01d2ea4c;
                    local_394 = 0x6b;
                    local_398 = (uint ****)0x3fe987;
                    local_648 = (uint ****)*local_538;
                    local_644 = *(uint *****)(DAT_01d4c480 + 0x20);
                    local_540 = (uint ****)&local_160;
                    FUN_00e0ff40(&local_540);
                  }
                  else {
                    iVar6 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_56c = *(uint *****)(DAT_01d4c480 + 0x14);
                      local_568 = *(uint *****)(DAT_01d4c480 + 0x18);
                      local_570 = (uint ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar26 = DAT_01d4edc8;
                      pcVar2 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar26 = &DAT_01cfc5e0;
                        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar8 = (*(code *)puVar26[3])(pcVar2,&local_570);
                      if (iVar8 != 0) {
                        local_390 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                        if (*(uint *****)(DAT_01d4c480 + 0x20) == (uint ****)0x0) goto LAB_00e28128;
                        local_53c = &local_f8;
                        local_640 = *(uint *****)(DAT_01d4c480 + 0x24);
                        local_63c = *(uint *****)(DAT_01d4c480 + 0x28);
                        local_540 = (uint ****)&local_648;
                        local_398 = (uint ****)&local_540;
                        local_638 = (uint ****)0x0;
                        local_394 = 1;
                        local_f4 = (uint ****)&DAT_0000006b;
                        local_538 = (uint ****)&DAT_01d2ea4c;
                        local_f8 = (uint ***)0x3fe987;
                        local_160 = local_570;
                        local_15c = local_56c;
                        local_158 = local_568;
                        local_648 = (uint ****)*local_390;
                        local_644 = *(uint *****)(DAT_01d4c480 + 0x20);
                        FUN_01aaa328(iVar6,pcVar2,puVar26[4],&local_160,&local_398);
                      }
                    }
                  }
                }
              }
              goto LAB_00e24fa8;
            }
            FUN_0165a1f4(auStack_c8);
          }
          FUN_00e0febc(&local_f8);
          goto LAB_00e24fa8;
        }
        ppppuVar18 = local_dc;
      }
      else {
LAB_00e24f8c:
        local_e0 = (uint ****)CONCAT31(local_e0._1_3_,6);
        local_dc = ppppuVar18;
        FUN_01276d58(&local_540);
      }
      FUN_00e0fe5c(ppppuVar18);
    }
LAB_00e24fa8:
    *(undefined1 *)(param_2 + 0x354) = 0;
    FUN_01bed4e2(&local_648,param_2 + 0xb8,0xb8);
    FUN_01bed4e2(param_2 + 0x170,piVar19,0x70);
    FUN_0142e6dc(&local_648);
    FUN_0178e884(local_598);
    FUN_00a21428(&local_648,*(undefined4 *)(param_2 + 0x1d8));
    local_6f8 = local_63c;
    ppppuVar18 = local_640;
    local_6f4 = local_648;
    uVar24 = local_640._0_1_;
    if (local_648 == (uint ****)&DAT_00000003 && local_644 == (uint ****)0x0) {
      *(undefined1 *)(param_2 + 0x351) = local_640._0_1_;
      iVar6 = **(int **)(param_2 + 0x2fc);
      *(undefined1 *)(param_2 + 0x38c) = 0;
      *(int *)(param_2 + 0x358) = iVar6 + 0x44;
      goto switchD_00e24e54_caseD_3;
    }
    local_6f0 = local_644;
    FUN_01bed4e2(auStack_6a0,&local_638,0x58);
    uVar1 = (uint3)((uint)ppppuVar18 >> 8);
    goto LAB_00e274a4;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c16ed4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16ed4);
  case 3:
switchD_00e24e54_caseD_3:
    uVar33 = FUN_00df39fc(param_2 + 0x358,param_3);
    iVar6 = (int)((ulonglong)uVar33 >> 0x20);
    if ((int)uVar33 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar24 = 3;
      goto LAB_00e27ad0;
    }
    *(undefined8 *)(param_2 + 0x1e0) = uVar33;
    if (*(char *)(param_2 + 0x38c) == '\x03') {
      cVar4 = *(char *)(param_2 + 0x388);
      bVar32 = cVar4 == '\x03';
      if (bVar32) {
        cVar4 = *(char *)(param_2 + 900);
      }
      if (bVar32 && cVar4 == '\x03') {
        FUN_0193c3cc(param_2 + 0x364);
        iVar6 = *(int *)(param_2 + 0x1e4);
      }
    }
    *(undefined1 *)(param_2 + 0x38c) = 0;
    *(int *)(param_2 + 0x358) = iVar6 + 0x40;
    break;
  case 5:
    goto switchD_00e24e54_caseD_5;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x364)) {
    case 0:
      iVar6 = *(int *)(param_2 + 0x358);
      goto LAB_00e2514c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c201d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c201d4);
    case 3:
      uVar23 = *(undefined4 *)(param_2 + 0x35c);
      puVar7 = *(undefined **)(param_2 + 0x360);
    }
    goto LAB_00e25170;
  case 7:
    FUN_00e100c8(&local_648,param_2 + 0x38c,param_3);
    ppppuVar3 = local_640;
    ppppuVar28 = local_644;
    ppppuVar18 = local_648;
    if (local_648 == (uint ****)&SUB_00000004 && local_644 == (uint ****)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar24 = 7;
      goto LAB_00e27ad0;
    }
    local_6f8 = local_63c;
    local_6f4 = local_648;
    uVar17 = (uint)local_640 >> 8 & 0xffff;
    local_6f0 = local_644;
    uVar24 = local_640._0_1_;
    uVar27 = (uint)local_640 & 0xff;
    uVar9 = (uint)local_640 >> 0x18;
    FUN_01bed4e2(auStack_220,&local_638,0x58);
    uVar16 = extraout_r12;
    if (*(char *)(param_2 + 0x3e0) == '\x03') {
      FUN_00e1003c(param_2 + 0x38c);
      uVar16 = extraout_r12_00;
    }
    if (ppppuVar18 == (uint ****)&DAT_00000003 && ppppuVar28 == (uint ****)0x0) {
      piVar10 = *(int **)(param_2 + 0x2ec);
      iVar6 = *piVar10;
      iVar8 = piVar10[1];
      if (iVar6 == 2 && iVar8 == 0) {
        iVar12 = 0;
        iVar22 = param_2;
      }
      else {
        in_d19 = *(undefined8 *)(piVar10 + 2);
        in_d18 = *(undefined8 *)(piVar10 + 6);
        uVar16 = piVar10[4];
        uVar9 = piVar10[5];
        uVar17 = piVar10[8];
        iVar12 = piVar10[9];
        in_d17 = *(undefined8 *)(piVar10 + 10);
        in_d16 = *(undefined8 *)(piVar10 + 0xe);
        piVar19 = (int *)piVar10[0xc];
        iVar22 = piVar10[0xd];
        piVar10 = (int *)(uint)*(byte *)(piVar10 + 0x10);
      }
      piVar31 = *(int **)(param_2 + 0x2f4);
      piVar14 = *(int **)(*(int *)(param_2 + 0x2e8) + 8);
      piVar14[8] = uVar17;
      piVar14[4] = uVar16;
      *(char *)(piVar14 + 0x10) = (char)piVar10;
      *(undefined8 *)(piVar14 + 0xe) = in_d16;
      piVar14[0xc] = (int)piVar19;
      piVar14[0xd] = iVar22;
      *(undefined8 *)(piVar14 + 10) = in_d17;
      piVar14[9] = iVar12;
      *(undefined8 *)(piVar14 + 6) = in_d18;
      piVar14[5] = uVar9;
      *(undefined8 *)(piVar14 + 2) = in_d19;
      *piVar14 = iVar6;
      piVar14[1] = iVar8;
      iVar5 = *piVar31;
      iVar6 = param_2;
      puVar26 = param_1 + 2;
      if (iVar5 != 2) {
        local_6f0 = (uint ****)piVar31[2];
        iVar8 = piVar31[3];
        uVar9 = piVar31[5];
        uVar16 = (uint)*(byte *)(piVar31 + 0xc);
        uVar27 = piVar31[9];
        iVar22 = piVar31[10];
        piVar10 = (int *)piVar31[6];
        iVar12 = piVar31[7];
        piVar19 = (int *)piVar31[8];
        iVar6 = piVar31[4];
        puVar26 = (undefined4 *)piVar31[1];
        piVar31 = (int *)piVar31[0xb];
      }
      piVar14 = *(int **)(*(int *)(param_2 + 0x2f0) + 8);
      *piVar14 = iVar5;
      piVar14[1] = (int)puVar26;
      *(char *)(piVar14 + 0xc) = (char)uVar16;
      piVar14[8] = (int)piVar19;
      piVar14[2] = (int)local_6f0;
      piVar14[3] = iVar8;
      piVar14[4] = iVar6;
      uVar16 = 0;
      piVar14[9] = uVar27;
      piVar14[10] = iVar22;
      piVar14[0xb] = (int)piVar31;
      piVar14[5] = uVar9;
      piVar14[6] = (int)piVar10;
      piVar14[7] = iVar12;
      if (*(uint *****)(param_2 + 0x31c) != (uint ****)0x2) {
        local_648 = *(uint *****)(param_2 + 0x358);
        local_15c = *(uint *****)(param_2 + 800);
        local_158 = *(uint *****)(param_2 + 0x324);
        local_154 = *(uint *****)(param_2 + 0x328);
        uStack_150 = *(undefined4 *)(param_2 + 0x32c);
        uStack_14c = *(undefined4 *)(param_2 + 0x330);
        uStack_148 = *(undefined4 *)(param_2 + 0x334);
        local_144 = *(undefined4 *)(param_2 + 0x338);
        uStack_140 = *(undefined4 *)(param_2 + 0x33c);
        uStack_13c = *(undefined4 *)(param_2 + 0x340);
        uStack_138 = *(undefined4 *)(param_2 + 0x344);
        uStack_134 = *(undefined4 *)(param_2 + 0x348);
        uStack_130 = *(undefined4 *)(param_2 + 0x34c);
        if (local_648 == (uint ****)0x2) {
          local_648 = (uint ****)0x0;
          local_620 = 2;
          local_628 = 0;
          local_630 = (uint ****)0x0;
          local_638 = (uint ****)0x0;
          local_640 = (uint ****)0x0;
        }
        else {
          local_644 = *(uint *****)(param_2 + 0x35c);
          local_640 = *(uint *****)(param_2 + 0x360);
          local_63c = *(uint *****)(param_2 + 0x364);
          local_638 = *(uint *****)(param_2 + 0x368);
          local_634 = *(uint *****)(param_2 + 0x36c);
          local_630 = *(uint *****)(param_2 + 0x370);
          local_62c = *(uint *****)(param_2 + 0x374);
          local_628 = *(undefined4 *)(param_2 + 0x378);
          uStack_624 = *(undefined4 *)(param_2 + 0x37c);
          local_620 = *(undefined4 *)(param_2 + 0x380);
          uStack_61c = *(undefined4 *)(param_2 + 900);
          uStack_618 = *(undefined4 *)(param_2 + 0x388);
        }
        local_160 = *(uint *****)(param_2 + 0x31c);
        uVar16 = FUN_00b517fc(&local_648,&local_160);
      }
      *(undefined1 *)(param_2 + 0x352) = 1;
      uVar17 = *(uint *)(param_2 + 0x230);
      uVar27 = *(uint *)(param_2 + 0x1e8) ^ 2;
      uVar9 = (uint)((uVar27 == 0 && *(int *)(param_2 + 0x1ec) == 0) &&
                    ((uVar17 ^ 2) == 0 && *(int *)(param_2 + 0x234) == 0));
      if ((uVar27 == 0 && *(int *)(param_2 + 0x1ec) == 0) ||
         ((uVar17 ^ 2) == 0 && *(int *)(param_2 + 0x234) == 0)) goto LAB_00e276e4;
      if (*(char *)(param_2 + 0x270) == *(char *)(param_2 + 0x228)) {
        if ((*(uint *)(param_2 + 0x1e8) & 1) == 0) {
          if ((uVar17 & 1) == 0) goto LAB_00e27b00;
        }
        else if (((uVar17 & 1) != 0) &&
                (*(double *)(param_2 + 0x1f0) == *(double *)(param_2 + 0x238))) {
LAB_00e27b00:
          if ((*(uint *)(param_2 + 0x1f8) & 1) == 0) {
            if (*(int *)(param_2 + 0x240) == 0) goto LAB_00e27b44;
          }
          else if ((*(int *)(param_2 + 0x240) != 0) &&
                  (*(double *)(param_2 + 0x200) == *(double *)(param_2 + 0x248))) {
LAB_00e27b44:
            if ((*(uint *)(param_2 + 0x208) & 1) == 0) {
              if (*(int *)(param_2 + 0x250) == 0) goto LAB_00e27b88;
            }
            else if ((*(int *)(param_2 + 0x250) != 0) &&
                    (*(double *)(param_2 + 0x210) == *(double *)(param_2 + 600))) {
LAB_00e27b88:
              if ((*(uint *)(param_2 + 0x218) & 1) == 0) {
                uVar9 = *(uint *)(param_2 + 0x260) ^ 1;
              }
              else {
                if (*(uint *)(param_2 + 0x260) == 0) goto LAB_00e27914;
                uVar9 = (uint)(*(double *)(param_2 + 0x220) == *(double *)(param_2 + 0x268));
              }
LAB_00e276e4:
              if ((uVar16 & uVar9) != 0) {
                *(undefined1 *)(param_2 + 0x420) = 0;
                *(undefined4 *)(param_2 + 0x358) = *(undefined4 *)(param_2 + 0x2fc);
                goto switchD_00e24e54_caseD_8;
              }
            }
          }
        }
      }
      goto LAB_00e27914;
    }
    uVar1 = (uint3)((uint)ppppuVar3 >> 8);
    FUN_01bed4e2(auStack_6a0,auStack_220,0x58);
    goto LAB_00e27444;
  case 8:
switchD_00e24e54_caseD_8:
    puVar26 = (undefined4 *)(param_2 + 0x358);
    FUN_00e101ec(&local_648,puVar26,param_3);
    if (local_648 == (uint ****)&SUB_00000004 && local_644 == (uint ****)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar24 = 8;
      goto LAB_00e27ad0;
    }
    FUN_01bed4e2(auStack_1c8,&local_648,0x68);
    cVar4 = *(char *)(param_2 + 0x420);
    bVar32 = cVar4 == '\x03';
    if (bVar32) {
      cVar4 = *(char *)(param_2 + 0x41c);
    }
    if (bVar32 && cVar4 == '\x03') {
      FUN_00df984c(param_2 + 0x360);
    }
    uVar16 = *(uint *)(param_2 + 0x278);
    uVar23 = *(undefined4 *)(param_2 + 0x27c);
    *(uint *)(param_2 + 0x910) = uVar16;
    *(undefined4 *)(param_2 + 0x914) = uVar23;
    FUN_01bed4e2(param_2 + 0x918,auStack_1c8,0x68);
    uVar9 = *(uint *)(param_2 + 0x918) ^ 3;
    if ((uVar16 & 0xff) == 2) {
      if (uVar9 == 0 && *(int *)(param_2 + 0x91c) == 0) {
        FUN_0084ec48(param_2 + 0x920);
        goto LAB_00e27914;
      }
    }
    else if (uVar9 == 0 && *(int *)(param_2 + 0x91c) == 0) {
      *puVar26 = local_1c0;
      *(undefined4 *)(param_2 + 0x35c) = uStack_1bc;
      *(undefined4 *)(param_2 + 0x360) = uStack_1b8;
      *(undefined4 *)(param_2 + 0x36c) = uVar23;
      *(undefined4 **)(param_2 + 0x908) = puVar26;
      *(uint *)(param_2 + 0x368) = uVar16;
      *(undefined1 *)(param_2 + 0x90c) = 0;
      goto switchD_00e24e54_caseD_9;
    }
LAB_00e2790c:
    FUN_00e28fcc(param_2 + 0x918);
    goto LAB_00e27914;
  case 9:
switchD_00e24e54_caseD_9:
    FUN_00e0df08(&local_648,param_2 + 0x368,param_3);
    if (local_648 == (uint ****)0x80000006) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar24 = 9;
      goto LAB_00e27ad0;
    }
    local_160 = local_648;
    local_15c = local_644;
    local_158 = local_640;
    local_154 = local_63c;
    if (*(char *)(param_2 + 0x90c) == '\x03') {
      if (*(char *)(param_2 + 0x900) == '\x03') {
        iVar6 = param_2 + 0x638;
      }
      else {
        if (*(char *)(param_2 + 0x900) != '\0') goto LAB_00e278a8;
        iVar6 = param_2 + 0x370;
      }
      FUN_00df9ef8(iVar6);
    }
LAB_00e278a8:
    *(bool *)(param_2 + 0x352) = local_160 != (uint ****)&DAT_80000005;
    if (local_160 == (uint ****)&DAT_80000005) {
      if (local_15c != (uint ****)&DAT_80000000) {
        FUN_019bb7e0(local_15c,local_158);
      }
    }
    else {
      FUN_00dfb5e8(&local_160);
    }
    FUN_0084ec48(param_2 + 0x358);
    if (*(int *)(param_2 + 0x918) != 3 || *(int *)(param_2 + 0x91c) != 0) goto LAB_00e2790c;
LAB_00e27914:
    if (*(char *)(param_2 + 0x352) != '\0') {
      *(undefined1 *)(*(int *)(**(int **)(param_2 + 0x2fc) + 0x58) + 8) = 1;
    }
    FUN_019e0044(*(int *)(**(int **)(param_2 + 0x2fc) + 0x54) + 8);
    FUN_01bed4e2(&local_160,param_2 + 0x280,0x68);
    FUN_0160aaa4(&local_648,0);
    FUN_01bed4e2(auStack_608,&local_160,0x68);
    local_6f8 = local_634;
    local_6f4 = local_640;
    ppppuVar28 = local_644;
    ppppuVar18 = local_648;
    uVar24 = local_638._0_1_;
    local_5a0 = 0;
    local_6f0 = local_63c;
    uVar9 = (uint)local_638 >> 8;
    FUN_01bed4e2(auStack_6a0,&local_630,0x58);
    local_6e0 = local_5d8;
    uStack_6dc = uStack_5d4;
    uStack_6d8 = uStack_5d0;
    uStack_6d4 = uStack_5cc;
    uStack_6d0 = uStack_5c8;
    local_6cc = local_5c4;
    uStack_6c8 = uStack_5c0;
    uStack_6c4 = uStack_5bc;
    uStack_6c0 = uStack_5b8;
    uStack_6bc = uStack_5b4;
    local_6b8 = local_5b0;
    uStack_6b4 = uStack_5ac;
    uStack_6b0 = uStack_5a8;
    uStack_6ac = uStack_5a4;
    uStack_6a8 = local_5a0;
    uStack_6a4 = uStack_59c;
    piVar19 = *(int **)(param_2 + 0x318);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar19;
      bVar32 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar32);
    *piVar19 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_2 + 0x318));
    }
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x30c),*(undefined4 *)(param_2 + 0x310));
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x300),*(undefined4 *)(param_2 + 0x304));
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x1e0),1);
    *(undefined1 *)(param_2 + 0x354) = 0;
    goto LAB_00e27a70;
  }
  FUN_0084fe8c(&local_590,param_2 + 0x358,param_3);
  if (local_590 == 0) {
    uVar24 = 4;
    *param_1 = 4;
    param_1[1] = 0;
  }
  else {
    *(int *)(param_2 + 0x300) = local_590;
    *(undefined4 *)(param_2 + 0x304) = uStack_58c;
    *(undefined4 *)(param_2 + 0x308) = uStack_588;
    if (*(char *)(param_2 + 0x38c) == '\x03') {
      cVar4 = *(char *)(param_2 + 0x388);
      bVar32 = cVar4 == '\x03';
      if (bVar32) {
        cVar4 = *(char *)(param_2 + 900);
      }
      if (bVar32 && cVar4 == '\x03') {
        FUN_0193c3cc(param_2 + 0x364);
      }
    }
    *(undefined1 *)(param_2 + 0x38c) = 0;
    *(int *)(param_2 + 0x358) = *(int *)(param_2 + 0x1e4) + 0x3c;
switchD_00e24e54_caseD_5:
    FUN_00bd2a8c(&local_580,param_2 + 0x358,param_3);
    if (local_580 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar24 = 5;
    }
    else {
      *(int *)(param_2 + 0x30c) = local_580;
      *(undefined4 *)(param_2 + 0x310) = uStack_57c;
      *(undefined4 *)(param_2 + 0x314) = uStack_578;
      if (*(char *)(param_2 + 0x38c) == '\x03') {
        cVar4 = *(char *)(param_2 + 0x388);
        bVar32 = cVar4 == '\x03';
        if (bVar32) {
          cVar4 = *(char *)(param_2 + 900);
        }
        if (bVar32 && cVar4 == '\x03') {
          FUN_0193c3cc(param_2 + 0x364);
        }
      }
      iVar6 = **(int **)(param_2 + 0x2fc);
      *(undefined1 *)(param_2 + 0x364) = 0;
      iVar6 = iVar6 + 8;
      *(int *)(param_2 + 0x358) = iVar6;
LAB_00e2514c:
      uVar23 = FUN_00b8a1bc(*(int *)(iVar6 + 0x34) + 8);
      *(undefined4 *)(param_2 + 0x35c) = uVar23;
      puVar7 = &DAT_01c13d9c;
      *(undefined **)(param_2 + 0x360) = &DAT_01c13d9c;
LAB_00e25170:
      iVar6 = (**(code **)(puVar7 + 0xc))(uVar23,param_3);
      if (iVar6 == 0) {
        *(undefined1 *)(param_2 + 0x364) = 3;
        *param_1 = 4;
        param_1[1] = 0;
        uVar24 = 6;
      }
      else {
        FUN_01139b38(*(undefined4 *)(param_2 + 0x35c),*(undefined4 *)(param_2 + 0x360));
        piVar19 = *(int **)(param_2 + 0x308);
        *(int *)(param_2 + 0x318) = iVar6;
        *(undefined1 *)(param_2 + 0x364) = 1;
        iVar6 = *piVar19;
        if (iVar6 != 2) {
          iVar12 = piVar19[2];
          iVar15 = piVar19[3];
          iVar30 = piVar19[4];
          iVar22 = piVar19[9];
          iVar13 = piVar19[10];
          iVar20 = piVar19[0xb];
          iVar11 = piVar19[5];
          iVar25 = piVar19[6];
          iVar5 = piVar19[7];
          iVar29 = piVar19[8];
          iVar8 = piVar19[0xc];
          *(int *)(param_2 + 0x35c) = piVar19[1];
          *(char *)(param_2 + 0x388) = (char)iVar8;
          *(int *)(param_2 + 0x37c) = iVar22;
          *(int *)(param_2 + 0x380) = iVar13;
          *(int *)(param_2 + 900) = iVar20;
          *(int *)(param_2 + 0x360) = iVar12;
          *(int *)(param_2 + 0x364) = iVar15;
          *(int *)(param_2 + 0x368) = iVar30;
          *(int *)(param_2 + 0x36c) = iVar11;
          *(int *)(param_2 + 0x370) = iVar25;
          *(int *)(param_2 + 0x374) = iVar5;
          *(int *)(param_2 + 0x378) = iVar29;
        }
        piVar19 = *(int **)(param_2 + 0x314);
        *(int *)(param_2 + 0x358) = iVar6;
        iVar6 = *piVar19;
        iVar8 = piVar19[1];
        if (iVar6 != 2 || iVar8 != 0) {
          uVar33 = *(undefined8 *)(piVar19 + 2);
          iVar13 = piVar19[5];
          iVar15 = piVar19[8];
          iVar11 = piVar19[9];
          uVar34 = *(undefined8 *)(piVar19 + 6);
          uVar35 = *(undefined8 *)(piVar19 + 10);
          uVar36 = *(undefined8 *)(piVar19 + 0xe);
          iVar12 = piVar19[0x10];
          iVar22 = piVar19[0xc];
          iVar5 = piVar19[0xd];
          *(int *)(param_2 + 0x1f8) = piVar19[4];
          *(int *)(param_2 + 0x1fc) = iVar13;
          *(int *)(param_2 + 0x208) = iVar15;
          *(int *)(param_2 + 0x20c) = iVar11;
          *(int *)(param_2 + 0x218) = iVar22;
          *(int *)(param_2 + 0x21c) = iVar5;
          *(char *)(param_2 + 0x228) = (char)iVar12;
          *(undefined8 *)(param_2 + 0x220) = uVar36;
          *(undefined8 *)(param_2 + 0x210) = uVar35;
          *(undefined8 *)(param_2 + 0x200) = uVar34;
          *(undefined8 *)(param_2 + 0x1f0) = uVar33;
        }
        pppuVar21 = *(uint ****)(param_2 + 0x170);
        *(int *)(param_2 + 0x1e8) = iVar6;
        *(int *)(param_2 + 0x1ec) = iVar8;
        if (pppuVar21 != (uint ***)0x4 || *(int *)(param_2 + 0x174) != 0) {
          local_640 = (uint ****)pppuVar21;
          local_63c = (uint ****)*(int *)(param_2 + 0x174);
          FUN_01bed4e2(&local_638,param_2 + 0x178,0x60);
                    /* WARNING: Could not recover jumptable at 0x00e25464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00e25468 + *(int *)(&DAT_00e25468 + (int)pppuVar21 * 4)))
                    (param_2 + 0x1c0,param_2 + 0x1b0,*(undefined4 *)(param_2 + 0x1a8),
                     *(undefined4 *)(param_2 + 0x19c));
          return;
        }
        FUN_01a71aac(&local_640,3,"no cooling mode provided",0x18);
        local_6f8 = local_634;
        local_6f4 = local_640;
        local_6f0 = local_63c;
        uVar24 = local_638._0_1_;
        uVar1 = local_638._1_3_;
        FUN_01bed4e2(auStack_6a0,&local_630,0x58);
LAB_00e27444:
        piVar19 = *(int **)(param_2 + 0x318);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar19;
          bVar32 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar32);
        *piVar19 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a967c0(*(undefined4 *)(param_2 + 0x318));
        }
        FUN_019f8c54(*(undefined4 *)(param_2 + 0x30c),*(undefined4 *)(param_2 + 0x310));
        FUN_019f8c54(*(undefined4 *)(param_2 + 0x300),*(undefined4 *)(param_2 + 0x304));
        FUN_019f8c54(*(undefined4 *)(param_2 + 0x1e0),1);
LAB_00e274a4:
        uVar9 = (uint)uVar1;
        ppppuVar28 = (uint ****)0x0;
        ppppuVar18 = (uint ****)&DAT_00000003;
        *(undefined1 *)(param_2 + 0x354) = 0;
        if (*(char *)(param_2 + 0x353) != '\0') {
          FUN_00e28f9c(param_2);
        }
LAB_00e27a70:
        *(char *)((int)param_1 + 0x13) = (char)(uVar9 >> 0x10);
        param_1[2] = local_6f4;
        param_1[3] = local_6f0;
        *(short *)((int)param_1 + 0x11) = (short)uVar9;
        *(undefined1 *)(param_1 + 4) = uVar24;
        param_1[5] = local_6f8;
        *param_1 = ppppuVar18;
        param_1[1] = ppppuVar28;
        FUN_01bed4e2(param_1 + 6,auStack_6a0,0x58);
        param_1[0x1c] = local_6e0;
        param_1[0x1d] = uStack_6dc;
        param_1[0x1e] = uStack_6d8;
        param_1[0x1f] = uStack_6d4;
        param_1[0x20] = uStack_6d0;
        param_1[0x21] = local_6cc;
        param_1[0x22] = uStack_6c8;
        param_1[0x23] = uStack_6c4;
        param_1[0x24] = uStack_6c0;
        param_1[0x25] = uStack_6bc;
        param_1[0x26] = local_6b8;
        param_1[0x27] = uStack_6b4;
        param_1[0x28] = uStack_6b0;
        param_1[0x29] = uStack_6ac;
        param_1[0x2a] = uStack_6a8;
        param_1[0x2b] = uStack_6a4;
        uVar24 = 1;
      }
    }
  }
LAB_00e27ad0:
  *(undefined1 *)(param_2 + 0x350) = uVar24;
  return;
}

