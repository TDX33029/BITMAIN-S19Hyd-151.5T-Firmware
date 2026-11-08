// FUN_017fed90 @ 017fed90 size=9356 calls_out=33 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::proto::h2::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:326event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:291event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:198event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:170event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:158 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_017fed90(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined1 uVar3;
  int ****ppppiVar4;
  int ****ppppiVar5;
  int ****ppppiVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int **ppiVar12;
  int ****ppppiVar13;
  char *pcVar14;
  int ****ppppiVar15;
  undefined4 extraout_r1;
  undefined4 *puVar16;
  uint uVar17;
  undefined *puVar18;
  int ****ppppiVar19;
  uint *puVar20;
  int ****ppppiVar21;
  int ***pppiVar22;
  int ****ppppiVar23;
  int iVar24;
  int ***pppiVar25;
  uint in_fpscr;
  double dVar26;
  double dVar27;
  double dVar28;
  int ****ppppiVar29;
  int ****local_150;
  int ****local_14c;
  undefined1 *local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int ****local_138;
  int ****local_134;
  int ****local_130;
  int ****local_12c;
  int ****local_128;
  int iStack_124;
  int ****local_120;
  int ****local_11c;
  int ****local_118;
  int ****local_110;
  int ****local_10c;
  int ****local_108;
  int ***local_104;
  int ****local_100;
  int ****local_fc;
  int ****local_f8;
  int ****local_f0;
  int ****local_ec;
  int ****local_e8;
  double local_e0;
  int ****local_d8;
  int ****local_d4;
  int ****local_d0;
  int ***local_c8;
  int ****local_c4;
  int ****local_c0;
  int ****local_bc;
  int ****local_b8;
  int ****local_b4;
  int ****local_b0;
  code *local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int ****local_a0;
  int ****local_9c;
  int ****local_98;
  int ****local_90;
  int ****local_8c;
  int ****local_88;
  int ****local_84;
  int ****local_80;
  int local_7c;
  int local_78;
  int ***local_74;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  uint local_58;
  int ****local_50;
  int ****local_4c;
  int ****local_48;
  int ****local_40;
  int ****local_3c;
  int ****local_38;
  
  if (*param_1 == 4 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    piVar2 = param_1 + 2;
    goto LAB_017ff1f8;
  }
  FUN_019ac130(&local_90,1);
  ppppiVar6 = local_88;
  ppppiVar4 = local_8c;
  ppppiVar29 = local_90;
  puVar20 = (uint *)param_1[0xe0];
  FUN_01933ff0(&local_90,puVar20 + 2);
  ppppiVar5 = local_8c;
  if (local_90 == (int ****)&DAT_00000001) {
    local_b4 = (int ****)CONCAT31(local_b4._1_3_,local_88._0_1_);
    local_b8 = local_8c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_b8,&DAT_01cf5538,&DAT_01cf56c0);
  }
  uVar8 = (uint)local_88 & 0xff;
  ppppiVar19 = (int ****)(param_1 + 0xd6);
  uVar17 = *puVar20;
  ppppiVar15 = local_8c + 4;
  if ((undefined1 *)param_1[0xd8] != &DAT_3b9aca00) {
    ppppiVar13 = local_8c + 2;
    FUN_01430c8c(ppppiVar19,uVar17 < 3,ppppiVar13);
    if ((*(char *)((int)param_1 + 0x37d) != '\x01') ||
       (iVar9 = FUN_019e84a0(param_1[0xde],*param_2), iVar9 != 0)) goto LAB_017ff1e0;
    if (ppppiVar5[0xe] == (int ***)&DAT_3b9aca00) {
      uVar10 = 0x1f;
      puVar18 = &DAT_01cf5720;
      pcVar14 = 
      "keep_alive expects last_read_atevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:377event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:380"
      ;
      goto LAB_01801318;
    }
    FUN_019fa158(&local_90,param_1[0xd7],ppppiVar5[0xc],ppppiVar5[0xd],ppppiVar5[0xe]);
    iVar9 = param_1[0xde];
    ppppiVar23 = *(int *****)(iVar9 + 0x38);
    ppppiVar21 = *(int *****)(iVar9 + 0x3c);
    bVar1 = (int)ppppiVar21 - (int)((int)local_8c + (uint)(ppppiVar23 < local_90)) < 0 !=
            (SBORROW4((int)ppppiVar21,(int)local_8c) !=
            SBORROW4((int)ppppiVar21 - (int)local_8c,(uint)(ppppiVar23 < local_90)));
    if (local_90 == ppppiVar23 && local_8c == ppppiVar21) {
      bVar1 = *(int *****)(iVar9 + 0x40) < local_88;
    }
    if (bVar1) {
      *(undefined1 *)((int)param_1 + 0x37d) = 0;
      (**(code **)(*(int *)*param_2 + 8))(((int *)*param_2)[1]);
      goto LAB_017ff1e0;
    }
    if ((DAT_01d50f88 != 0) ||
       (((1 < DAT_01d4ea08 - 1 &&
         ((DAT_01d4ea08 == 0 || (cVar7 = FUN_01aaafa8(&DAT_01d4ea00), cVar7 == '\0')))) ||
        (iVar9 = FUN_01aaa278(DAT_01d4ea00), iVar9 == 0)))) {
      iVar9 = DAT_01d4ea00;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_3c = *(int *****)(DAT_01d4ea00 + 0x14);
        local_38 = *(int *****)(DAT_01d4ea00 + 0x18);
        local_40 = (int ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar16 = DAT_01d4edc8;
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar16 = &DAT_01cfc5e0;
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar16[3])();
        if (iVar11 != 0) {
          if (*(int *****)(DAT_01d4ea00 + 0x20) == (int ****)0x0) goto LAB_01801400;
          local_134 = (int ****)&local_d8;
          local_88 = *(int *****)(DAT_01d4ea00 + 0x24);
          local_84 = *(int *****)(DAT_01d4ea00 + 0x28);
          local_138 = (int ****)&local_90;
          local_a0 = (int ****)&local_138;
          local_9c = (int ****)&DAT_00000001;
          local_d4 = (int ****)&local_50;
          local_130 = (int ****)&DAT_01d2ea4c;
          local_80 = (int ****)0x0;
          local_d8 = (int ****)&DAT_005a3c42;
          local_4c = (int ****)FUN_01307ea0;
          local_b8 = local_40;
          local_b4 = local_3c;
          local_b0 = local_38;
          local_98 = (int ****)(DAT_01d4ea00 + 0x1c);
          local_90 = *(int *****)(DAT_01d4ea00 + 0x1c);
          local_8c = *(int *****)(DAT_01d4ea00 + 0x20);
          local_50 = ppppiVar19;
          FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_b8,&local_a0);
        }
      }
LAB_017ff168:
      FUN_01430e98(ppppiVar13);
      *(undefined1 *)((int)param_1 + 0x37d) = 2;
      FUN_019ac130(&local_90,1);
      iVar9 = param_1[0xda];
      iVar24 = param_1[0xdb];
      iVar11 = param_1[0xdc];
      FUN_019fa158(&local_90,iVar9,local_90,local_8c,local_88);
      FUN_019f598c(param_1[0xde],extraout_r1,local_90,local_8c,local_88,1,iVar9,iVar24,iVar11);
      goto LAB_017ff1e0;
    }
    if (*(int *****)(DAT_01d4ea00 + 0x20) != (int ****)0x0) {
      local_88 = *(int *****)(DAT_01d4ea00 + 0x24);
      local_84 = *(int *****)(DAT_01d4ea00 + 0x28);
      local_b4 = (int ****)&local_40;
      local_134 = (int ****)&DAT_00000001;
      local_3c = (int ****)&local_a0;
      local_b8 = (int ****)&local_90;
      local_138 = (int ****)&local_b8;
      local_80 = (int ****)0x0;
      local_b0 = (int ****)&DAT_01d2ea4c;
      local_40 = (int ****)&DAT_005a3c42;
      local_9c = (int ****)FUN_01307ea0;
      local_130 = (int ****)(DAT_01d4ea00 + 0x1c);
      local_a0 = ppppiVar19;
      local_90 = *(int *****)(DAT_01d4ea00 + 0x1c);
      local_8c = *(int *****)(DAT_01d4ea00 + 0x20);
      FUN_01430da0(&local_138);
      goto LAB_017ff168;
    }
LAB_01801400:
    puVar18 = &UNK_01cf5850;
LAB_01801480:
    pcVar14 = "FieldSet corrupted (this is a bug)";
LAB_018012dc:
    uVar10 = 0x22;
LAB_01801318:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(pcVar14,uVar10,puVar18);
  }
LAB_017ff1e0:
  piVar2 = param_1;
  if (ppppiVar5[6] == (int ***)&DAT_3b9aca00) {
LAB_017ff1ec:
    FUN_00a97e8c(ppppiVar5,uVar8);
    goto LAB_017ff1f8;
  }
  pppiVar22 = ppppiVar5[0x10];
  FUN_01348e78(pppiVar22 + 6,*param_2);
  pppiVar22 = pppiVar22 + 2;
  ppiVar12 = *pppiVar22;
  if (ppiVar12 == (int **)0x3) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pppiVar22);
      if (bVar1) {
        *pppiVar22 = (int **)0x0;
        goto LAB_017ff444;
      }
      ppiVar12 = *pppiVar22;
    } while (ppiVar12 == (int **)0x3);
  }
  ClearExclusiveLocal();
LAB_017ff444:
  DataMemoryBarrier(0xb);
  if (ppiVar12 == (int **)0x3) {
LAB_017ff634:
    local_138 = (int ****)CONCAT31(local_138._1_3_,5);
LAB_017ff63c:
    ppppiVar13 = (int ****)ppppiVar5[6];
    if (ppppiVar13 == (int ****)&DAT_3b9aca00) {
      puVar18 = &UNK_01cf56d0;
      pcVar14 = "pong received implies ping_sent_at";
      goto LAB_018012dc;
    }
    ppppiVar5[6] = (int ***)&DAT_3b9aca00;
    local_b8 = (int ****)*ppppiVar15;
    local_b4 = (int ****)ppppiVar5[5];
    local_9c = ppppiVar4;
    local_a0 = ppppiVar29;
    local_98 = ppppiVar6;
    local_b0 = ppppiVar13;
    FUN_019ac248(&local_90,&local_a0,&local_b8);
    local_118 = local_80;
    local_120 = local_88;
    local_11c = local_84;
    if (((uint)local_90 & 1) != 0) {
      local_11c = (int ****)0x0;
      local_120 = (int ****)0x0;
      local_118 = (int ****)0x0;
    }
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4e9e4 - 1 < 2 ||
         ((DAT_01d4e9e4 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4e9dc), cVar7 != '\0')))))) &&
       (iVar9 = FUN_01aaa278(DAT_01d4e9dc), iVar9 != 0)) {
      if (*(int *****)(DAT_01d4e9dc + 0x20) == (int ****)0x0) {
LAB_018013dc:
        puVar18 = &UNK_01cf56e0;
        goto LAB_01801480;
      }
      local_3c = (int ****)&local_d8;
      local_88 = *(int *****)(DAT_01d4e9dc + 0x24);
      local_84 = *(int *****)(DAT_01d4e9dc + 0x28);
      local_48 = (int ****)(DAT_01d4e9dc + 0x1c);
      local_90 = (int ****)*local_48;
      local_40 = (int ****)&local_90;
      local_50 = (int ****)&local_40;
      local_4c = (int ****)&DAT_00000001;
      local_80 = (int ****)0x0;
      local_38 = (int ****)&DAT_01d2ea4c;
      local_d4 = (int ****)&DAT_00000013;
      local_d8 = (int ****)0x478ed8;
      local_8c = *(int *****)(DAT_01d4e9dc + 0x20);
      FUN_01aaaecc(DAT_01d4e9dc,&local_50);
      iVar9 = DAT_01d4e9dc;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_9c = *(int *****)(DAT_01d4e9dc + 0x14);
        local_98 = *(int *****)(DAT_01d4e9dc + 0x18);
        local_a0 = (int ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar16 = DAT_01d4edc8;
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar16 = &DAT_01cfc5e0;
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar16[3])();
        if (iVar11 != 0) {
          local_b8 = local_a0;
          local_b4 = local_9c;
          local_b0 = local_98;
          FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_b8,&local_50);
        }
      }
    }
    else {
      iVar9 = DAT_01d4e9dc;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_10c = *(int *****)(DAT_01d4e9dc + 0x14);
        local_108 = *(int *****)(DAT_01d4e9dc + 0x18);
        local_110 = (int ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar16 = DAT_01d4edc8;
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar16 = &DAT_01cfc5e0;
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar16[3])(pcVar14,&local_110);
        if (iVar11 != 0) {
          if (*(int *****)(DAT_01d4e9dc + 0x20) == (int ****)0x0) goto LAB_018013dc;
          local_9c = (int ****)&local_50;
          local_88 = *(int *****)(DAT_01d4e9dc + 0x24);
          local_84 = *(int *****)(DAT_01d4e9dc + 0x28);
          local_a0 = (int ****)&local_90;
          local_40 = (int ****)&local_a0;
          local_80 = (int ****)0x0;
          local_3c = (int ****)&DAT_00000001;
          local_4c = (int ****)&DAT_00000013;
          local_98 = (int ****)&DAT_01d2ea4c;
          local_50 = (int ****)0x478ed8;
          local_b8 = local_110;
          local_b4 = local_10c;
          local_b0 = local_108;
          local_90 = *(int *****)(DAT_01d4e9dc + 0x1c);
          local_8c = *(int *****)(DAT_01d4e9dc + 0x20);
          local_38 = (int ****)(DAT_01d4e9dc + 0x1c);
          FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_b8,&local_40);
        }
      }
    }
    if ((undefined1 *)param_1[0xd8] != &DAT_3b9aca00) {
      if (ppppiVar5[0xe] != (int ***)&DAT_3b9aca00) {
        FUN_019ac130(&local_90,1);
        ppppiVar5[0xc] = (int ***)local_90;
        ppppiVar5[0xd] = (int ***)local_8c;
        ppppiVar5[0xe] = (int ***)local_88;
      }
      FUN_01430c8c(ppppiVar19,uVar17 < 3,ppppiVar5 + 2);
    }
    if ((undefined1 *)param_1[0xce] == &DAT_3b9aca00) goto LAB_017ff1ec;
    if (ppppiVar5[2] != (int ***)0x1) {
      uVar10 = 0x19;
      puVar18 = &DAT_01cf56f0;
      pcVar14 = "bdp enabled implies bytes";
      goto LAB_01801318;
    }
    pppiVar22 = ppppiVar5[3];
    ppppiVar5[2] = (int ***)0x1;
    ppppiVar5[3] = (int ***)0x0;
    local_104 = pppiVar22;
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4e9cc - 1 < 2 ||
         ((DAT_01d4e9cc != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4e9c4), cVar7 != '\0')))) &&
        (iVar9 = FUN_01aaa278(DAT_01d4e9c4), iVar9 != 0)))) {
      if (*(int *****)(DAT_01d4e9c4 + 0x20) == (int ****)0x0) {
LAB_018013f4:
        puVar18 = &UNK_01cf5700;
        goto LAB_01801480;
      }
      local_9c = (int ****)&local_50;
      local_88 = *(int *****)(DAT_01d4e9c4 + 0x24);
      local_84 = *(int *****)(DAT_01d4e9c4 + 0x28);
      local_a0 = (int ****)&local_90;
      local_40 = (int ****)&local_a0;
      local_3c = (int ****)&DAT_00000001;
      local_4c = (int ****)&local_b8;
      local_b0 = (int ****)&local_120;
      local_80 = (int ****)0x0;
      local_98 = (int ****)&DAT_01d2ea4c;
      local_50 = (int ****)&DAT_005bd282;
      local_ac = FUN_01307ea0;
      local_b4 = (int ****)FUN_012fd02c;
      local_b8 = &local_104;
      local_90 = *(int *****)(DAT_01d4e9c4 + 0x1c);
      local_8c = *(int *****)(DAT_01d4e9c4 + 0x20);
      local_38 = (int ****)(DAT_01d4e9c4 + 0x1c);
      FUN_014316d8(&local_40);
    }
    else {
      iVar9 = DAT_01d4e9c4;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_fc = *(int *****)(DAT_01d4e9c4 + 0x14);
        local_f8 = *(int *****)(DAT_01d4e9c4 + 0x18);
        local_100 = (int ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar16 = DAT_01d4edc8;
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar16 = &DAT_01cfc5e0;
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar16[3])(pcVar14,&local_100);
        if (iVar11 != 0) {
          if (*(int *****)(DAT_01d4e9c4 + 0x20) == (int ****)0x0) goto LAB_018013f4;
          local_40 = (int ****)&local_90;
          local_50 = (int ****)&local_40;
          local_88 = *(int *****)(DAT_01d4e9c4 + 0x24);
          local_80 = (int ****)0x0;
          local_84 = *(int *****)(DAT_01d4e9c4 + 0x28);
          local_3c = (int ****)&local_d8;
          local_4c = (int ****)&DAT_00000001;
          local_38 = (int ****)&DAT_01d2ea4c;
          local_d4 = (int ****)&local_b8;
          local_d8 = (int ****)&DAT_005bd282;
          local_ac = FUN_01307ea0;
          local_b0 = (int ****)&local_120;
          local_b4 = (int ****)FUN_012fd02c;
          local_b8 = &local_104;
          local_a0 = local_100;
          local_9c = local_fc;
          local_98 = local_f8;
          local_90 = *(int *****)(DAT_01d4e9c4 + 0x1c);
          local_8c = *(int *****)(DAT_01d4e9c4 + 0x20);
          local_48 = (int ****)(DAT_01d4e9c4 + 0x1c);
          FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_a0,&local_50);
        }
      }
    }
    ppppiVar15 = local_118;
    puVar20 = (uint *)(param_1 + 0xcc);
    ppppiVar19 = (int ****)(param_1 + 0xd4);
    pppiVar25 = *ppppiVar19;
    if (pppiVar25 == (int ***)0x1000000) {
LAB_018004c4:
      FUN_014317d0(puVar20);
      bVar1 = true;
    }
    else {
      dVar27 = (double)FUN_01bf0e80(local_120,local_11c);
      dVar26 = (double)VectorUnsignedToFloat(ppppiVar15,(byte)(in_fpscr >> 0x16) & 3);
      dVar27 = dVar26 / 1000000000.0 + dVar27;
      dVar28 = *(double *)(param_1 + 0xd2);
      dVar26 = dVar28 + (dVar27 - dVar28) * 0.125;
      if (dVar28 == 0.0) {
        dVar26 = dVar27;
      }
      dVar27 = (double)VectorUnsignedToFloat(pppiVar22,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
      dVar27 = dVar27 / (dVar26 * 1.5);
      *(double *)(param_1 + 0xd2) = dVar26;
      local_e0 = dVar27;
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d4e9c0 - 1 < 2 ||
           ((DAT_01d4e9c0 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4e9b8), cVar7 != '\0')))))) &&
         (iVar9 = FUN_01aaa278(DAT_01d4e9b8), iVar9 != 0)) {
        if (*(int *****)(DAT_01d4e9b8 + 0x20) == (int ****)0x0) {
LAB_0180140c:
          puVar18 = &UNK_01cf55e0;
          goto LAB_01801480;
        }
        local_88 = *(int *****)(DAT_01d4e9b8 + 0x24);
        local_84 = *(int *****)(DAT_01d4e9b8 + 0x28);
        local_40 = (int ****)&local_90;
        local_48 = (int ****)(DAT_01d4e9b8 + 0x1c);
        local_90 = (int ****)*local_48;
        local_3c = (int ****)&local_c0;
        local_50 = (int ****)&local_40;
        local_80 = (int ****)0x0;
        local_4c = (int ****)&DAT_00000001;
        local_c0 = (int ****)&DAT_00478c94;
        local_38 = (int ****)&DAT_01d2ea4c;
        local_bc = (int ****)&local_d8;
        local_d4 = (int ****)FUN_013025ec;
        local_d8 = (int ****)&local_e0;
        local_8c = *(int *****)(DAT_01d4e9b8 + 0x20);
        FUN_01aaaecc(DAT_01d4e9b8,&local_50);
        iVar9 = DAT_01d4e9b8;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_9c = *(int *****)(DAT_01d4e9b8 + 0x14);
          local_98 = *(int *****)(DAT_01d4e9b8 + 0x18);
          local_a0 = (int ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          pcVar14 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
            pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar16[3])();
          if (iVar11 != 0) {
            local_b8 = local_a0;
            local_b4 = local_9c;
            local_b0 = local_98;
            FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_b8,&local_50);
          }
        }
      }
      else {
        iVar9 = DAT_01d4e9b8;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_d4 = *(int *****)(DAT_01d4e9b8 + 0x14);
          local_d0 = *(int *****)(DAT_01d4e9b8 + 0x18);
          local_d8 = (int ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          pcVar14 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
            pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar16[3])();
          if (iVar11 != 0) {
            if (*(int *****)(DAT_01d4e9b8 + 0x20) == (int ****)0x0) goto LAB_0180140c;
            local_a0 = (int ****)&local_90;
            local_88 = *(int *****)(DAT_01d4e9b8 + 0x24);
            local_84 = *(int *****)(DAT_01d4e9b8 + 0x28);
            local_9c = (int ****)&local_c0;
            local_40 = (int ****)&local_a0;
            local_80 = (int ****)0x0;
            local_3c = (int ****)&DAT_00000001;
            local_c0 = (int ****)&DAT_00478c94;
            local_98 = (int ****)&DAT_01d2ea4c;
            local_bc = (int ****)&local_50;
            local_4c = (int ****)FUN_013025ec;
            local_50 = (int ****)&local_e0;
            local_b8 = local_d8;
            local_b4 = local_d4;
            local_b0 = local_d0;
            local_90 = *(int *****)(DAT_01d4e9b8 + 0x1c);
            local_8c = *(int *****)(DAT_01d4e9b8 + 0x20);
            local_38 = (int ****)(DAT_01d4e9b8 + 0x1c);
            FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_b8,&local_40);
          }
        }
      }
      if ((dVar27 < *(double *)(param_1 + 0xd0)) ||
         (*(double *)(param_1 + 0xd0) = dVar27,
         pppiVar22 < (int ***)((uint)((int)pppiVar25 << 1) / 3))) goto LAB_018004c4;
      pppiVar25 = (int ***)0x1000000;
      if ((uint)((int)pppiVar22 << 1) < 0x1000000) {
        pppiVar25 = (int ***)((int)pppiVar22 << 1);
      }
      *ppppiVar19 = pppiVar25;
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d4e9b4 - 1 < 2 ||
           ((DAT_01d4e9b4 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4e9ac), cVar7 != '\0')))))) &&
         (iVar9 = FUN_01aaa278(DAT_01d4e9ac), iVar9 != 0)) {
        if (*(int *****)(DAT_01d4e9ac + 0x20) == (int ****)0x0) {
LAB_01801478:
          puVar18 = &UNK_01cf55f0;
          goto LAB_01801480;
        }
        local_b4 = (int ****)&local_50;
        local_88 = *(int *****)(DAT_01d4e9ac + 0x24);
        local_84 = *(int *****)(DAT_01d4e9ac + 0x28);
        local_b8 = (int ****)&local_90;
        local_a0 = (int ****)&local_b8;
        local_9c = (int ****)&DAT_00000001;
        local_4c = (int ****)&local_40;
        local_80 = (int ****)0x0;
        local_b0 = (int ****)&DAT_01d2ea4c;
        local_3c = (int ****)FUN_012fd02c;
        local_50 = (int ****)&DAT_005a0c4e;
        local_98 = (int ****)(DAT_01d4e9ac + 0x1c);
        local_90 = *(int *****)(DAT_01d4e9ac + 0x1c);
        local_8c = *(int *****)(DAT_01d4e9ac + 0x20);
        local_40 = ppppiVar19;
        FUN_0143185c(&local_a0);
      }
      else {
        iVar9 = DAT_01d4e9ac;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_4c = *(int *****)(DAT_01d4e9ac + 0x14);
          local_48 = *(int *****)(DAT_01d4e9ac + 0x18);
          local_50 = (int ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          pcVar14 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
            pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar16[3])(pcVar14);
          if (iVar11 != 0) {
            if (*(int *****)(DAT_01d4e9ac + 0x20) == (int ****)0x0) goto LAB_01801478;
            local_a0 = (int ****)&local_90;
            local_88 = *(int *****)(DAT_01d4e9ac + 0x24);
            local_84 = *(int *****)(DAT_01d4e9ac + 0x28);
            local_9c = &local_c8;
            local_40 = (int ****)&local_a0;
            local_80 = (int ****)0x0;
            local_3c = (int ****)&DAT_00000001;
            local_c8 = (int ***)&DAT_005a0c4e;
            local_98 = (int ****)&DAT_01d2ea4c;
            local_c4 = (int ****)&local_c0;
            local_bc = (int ****)FUN_012fd02c;
            local_b8 = local_50;
            local_b4 = local_4c;
            local_b0 = local_48;
            local_c0 = ppppiVar19;
            local_90 = *(int *****)(DAT_01d4e9ac + 0x1c);
            local_8c = *(int *****)(DAT_01d4e9ac + 0x20);
            local_38 = (int ****)(DAT_01d4e9ac + 0x1c);
            FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_b8,&local_40);
          }
        }
      }
      pppiVar25 = (int ***)param_1[0xd4];
      bVar1 = false;
      uVar17 = (uint)param_1[0xce] >> 1;
      if ((*puVar20 & 1) != 0) {
        uVar17 = ((uint)param_1[0xce] >> 1) + 500000000;
      }
      param_1[0xd5] = 0;
      param_1[0xce] = uVar17;
      *puVar20 = (uint)((byte)param_1[0xcd] & 1) << 0x1f | *puVar20 >> 1;
      param_1[0xcd] = (uint)param_1[0xcd] >> 1;
    }
    FUN_019fa158(&local_90,param_1[0xcd],ppppiVar29,ppppiVar4,ppppiVar6);
    ppppiVar5[8] = (int ***)local_90;
    ppppiVar5[9] = (int ***)local_8c;
    ppppiVar5[10] = (int ***)local_88;
    FUN_00a97e8c(ppppiVar5,uVar8);
    if (!bVar1) {
      FUN_01776770(param_1[0xa4],pppiVar25);
      if ((int)pppiVar25 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: size <= proto::MAX_WINDOW_SIZE",0x30,&DAT_01d1a260);
      }
      local_58 = local_58 & 0xffffff00;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_80 = (int ****)0x0;
      local_88 = (int ****)0x0;
      local_90 = (int ****)0x0;
      local_78 = 1;
      local_74 = pppiVar25;
      if ((uint)param_1[0xac] < 2) {
        local_150 = (int ****)CONCAT22(local_150._2_2_,0xa03);
        goto LAB_017ff208;
      }
      if ((DAT_01d50f88 == 0) &&
         (((DAT_01d4df1c - 1 < 2 ||
           ((DAT_01d4df1c != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4df14), cVar7 != '\0')))) &&
          (iVar9 = FUN_01aaa278(DAT_01d4df14), iVar9 != 0)))) {
        if (*(int *****)(DAT_01d4df14 + 0x20) == (int ****)0x0) {
LAB_01801444:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf13bc);
        }
        local_11c = (int ****)&local_f0;
        local_b0 = *(int *****)(DAT_01d4df14 + 0x24);
        local_ac = *(code **)(DAT_01d4df14 + 0x28);
        local_48 = (int ****)(DAT_01d4df14 + 0x1c);
        local_b8 = (int ****)*local_48;
        local_120 = (int ****)&local_b8;
        local_50 = (int ****)&local_120;
        local_a8 = 0;
        ppppiVar29 = (int ****)&local_50;
        local_4c = (int ****)&DAT_00000001;
        local_ec = (int ****)&local_d8;
        local_118 = (int ****)&DAT_01d2ea4c;
        local_f0 = (int ****)&DAT_0059e52d;
        local_d4 = (int ****)0x13b8270;
        local_d8 = (int ****)&local_90;
        local_b4 = *(int *****)(DAT_01d4df14 + 0x20);
        FUN_01aaaecc(DAT_01d4df14,ppppiVar29);
        iVar9 = DAT_01d4df14;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_9c = *(int *****)(DAT_01d4df14 + 0x14);
          local_98 = *(int *****)(DAT_01d4df14 + 0x18);
          local_a0 = (int ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
          }
          pcVar14 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar16[3])(pcVar14,&local_a0);
          if (iVar11 != 0) {
            local_138 = local_a0;
            local_134 = local_9c;
            local_130 = local_98;
            uVar10 = puVar16[4];
            goto LAB_018006cc;
          }
        }
      }
      else {
        iVar9 = DAT_01d4df14;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_3c = *(int *****)(DAT_01d4df14 + 0x14);
          local_38 = *(int *****)(DAT_01d4df14 + 0x18);
          local_40 = (int ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
          }
          pcVar14 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar16[3])(pcVar14,&local_40);
          if (iVar11 != 0) {
            if (*(int *****)(DAT_01d4df14 + 0x20) == (int ****)0x0) goto LAB_01801444;
            local_a0 = (int ****)&local_b8;
            local_120 = (int ****)&local_a0;
            local_b0 = *(int *****)(DAT_01d4df14 + 0x24);
            local_a8 = 0;
            local_ac = *(code **)(DAT_01d4df14 + 0x28);
            local_9c = (int ****)&local_d8;
            local_11c = (int ****)&DAT_00000001;
            local_98 = (int ****)&DAT_01d2ea4c;
            local_d4 = (int ****)&local_50;
            local_d8 = (int ****)&DAT_0059e52d;
            local_4c = (int ****)0x13b8270;
            local_138 = local_40;
            local_134 = local_3c;
            local_130 = local_38;
            ppppiVar29 = (int ****)&local_120;
            uVar10 = puVar16[4];
            local_118 = (int ****)(DAT_01d4df14 + 0x1c);
            local_b8 = *(int *****)(DAT_01d4df14 + 0x1c);
            local_b4 = *(int *****)(DAT_01d4df14 + 0x20);
            local_50 = (int ****)&local_90;
LAB_018006cc:
            FUN_01aaa328(iVar9,pcVar14,uVar10,&local_138,ppppiVar29);
          }
        }
      }
      param_1[0xac] = 0;
      param_1[0xad] = (int)local_90;
      param_1[0xae] = (int)local_8c;
      param_1[0xaf] = (int)local_88;
      param_1[0xb0] = (int)local_84;
      param_1[0xb1] = (int)local_80;
      param_1[0xb2] = local_7c;
      param_1[0xb3] = local_78;
      param_1[0xb4] = (int)local_74;
      param_1[0xb5] = local_70;
      param_1[0xb6] = iStack_6c;
      param_1[0xb7] = local_68;
      param_1[0xb8] = iStack_64;
      param_1[0xb9] = local_60;
      param_1[0xba] = iStack_5c;
      param_1[0xbb] = local_58;
    }
LAB_017ff1f8:
    FUN_0177abb4(&local_150,piVar2,param_2);
  }
  else {
    if (ppiVar12 == (int **)0x4) {
      local_a0 = (int ****)CONCAT22(local_a0._2_2_,0xb01);
      FUN_013bc5a0(&local_b8,&local_a0);
      uVar3 = local_b8._0_1_;
      if (((uint)local_b8 & 0xff) == 3) goto LAB_017ff634;
      if (((uint)local_b8 & 0xff) == 4) goto LAB_017ff484;
      FUN_01bed4e2((uint)&local_90 | 1,(uint)&local_b8 | 1,0x17);
      local_90 = (int ****)CONCAT31(local_90._1_3_,uVar3);
      FUN_013b8db0(&local_138,&local_90);
      if (((uint)local_138 & 0xff) != 5) {
        if (((uint)local_138 & 0xff) != 6) {
          local_90 = local_138;
          local_8c = local_134;
          local_88 = local_130;
          local_84 = local_12c;
          local_80 = local_128;
          local_7c = iStack_124;
          if (((DAT_01d50f88 < 2) &&
              ((DAT_01d4e9d8 - 1 < 2 ||
               ((DAT_01d4e9d8 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4e9d0), cVar7 != '\0')))))) &&
             (iVar9 = FUN_01aaa278(DAT_01d4e9d0), iVar9 != 0)) {
            if (*(int *****)(DAT_01d4e9d0 + 0x20) == (int ****)0x0) {
LAB_0180145c:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf5710);
            }
            local_4c = &local_c8;
            local_b0 = *(int *****)(DAT_01d4e9d0 + 0x24);
            local_ac = *(code **)(DAT_01d4e9d0 + 0x28);
            local_d0 = (int ****)(DAT_01d4e9d0 + 0x1c);
            local_b8 = (int ****)*local_d0;
            local_d8 = (int ****)&local_50;
            local_a8 = 0;
            local_d4 = (int ****)&DAT_00000001;
            local_c4 = (int ****)&local_c0;
            local_c0 = (int ****)&local_90;
            local_48 = (int ****)&DAT_01d2ea4c;
            local_c8 = (int ***)&DAT_005afc77;
            local_bc = (int ****)&LAB_013ba9ac;
            local_b4 = *(int *****)(DAT_01d4e9d0 + 0x20);
            local_50 = (int ****)&local_b8;
            FUN_01aaaecc(DAT_01d4e9d0,&local_d8);
            iVar9 = DAT_01d4e9d0;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_3c = *(int *****)(DAT_01d4e9d0 + 0x14);
              local_38 = *(int *****)(DAT_01d4e9d0 + 0x18);
              local_40 = (int ****)&SUB_00000004;
              DataMemoryBarrier(0xb);
              puVar16 = DAT_01d4edc8;
              pcVar14 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar16 = &DAT_01cfc5e0;
                pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar11 = (*(code *)puVar16[3])(pcVar14,&local_40);
              if (iVar11 != 0) {
                local_a0 = local_40;
                local_9c = local_3c;
                local_98 = local_38;
                FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_a0,&local_d8);
              }
            }
          }
          else {
            iVar9 = DAT_01d4e9d0;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_ec = *(int *****)(DAT_01d4e9d0 + 0x14);
              local_e8 = *(int *****)(DAT_01d4e9d0 + 0x18);
              local_f0 = (int ****)&SUB_00000004;
              DataMemoryBarrier(0xb);
              puVar16 = DAT_01d4edc8;
              pcVar14 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar16 = &DAT_01cfc5e0;
                pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar11 = (*(code *)puVar16[3])(pcVar14,&local_f0);
              if (iVar11 != 0) {
                local_48 = (int ****)(DAT_01d4e9d0 + 0x1c);
                if (*(int *****)(DAT_01d4e9d0 + 0x20) == (int ****)0x0) goto LAB_0180145c;
                local_3c = (int ****)&local_c0;
                local_50 = (int ****)&local_40;
                local_b0 = *(int *****)(DAT_01d4e9d0 + 0x24);
                local_ac = *(code **)(DAT_01d4e9d0 + 0x28);
                local_a8 = 0;
                local_4c = (int ****)&DAT_00000001;
                local_38 = (int ****)&DAT_01d2ea4c;
                local_bc = (int ****)&local_d8;
                local_c0 = (int ****)&DAT_005afc77;
                local_d4 = (int ****)&LAB_013ba9ac;
                local_d8 = (int ****)&local_90;
                local_a0 = local_f0;
                local_9c = local_ec;
                local_98 = local_e8;
                local_b8 = (int ****)*local_48;
                local_b4 = *(int *****)(DAT_01d4e9d0 + 0x20);
                local_40 = (int ****)&local_b8;
                FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_a0,&local_50);
              }
            }
          }
          FUN_01431954(&local_90);
          goto LAB_017ff1ec;
        }
        goto LAB_017ff48c;
      }
      goto LAB_017ff63c;
    }
LAB_017ff484:
    local_138 = (int ****)CONCAT31(local_138._1_3_,6);
LAB_017ff48c:
    if ((((undefined1 *)param_1[0xd8] == &DAT_3b9aca00) || (*(byte *)((int)param_1 + 0x37d) < 2)) ||
       (iVar9 = FUN_019e84a0(param_1[0xde],*param_2), iVar9 != 0)) goto LAB_017ff1ec;
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4ea14 - 1 < 2 ||
         ((DAT_01d4ea14 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4ea0c), cVar7 != '\0')))))) &&
       (iVar9 = FUN_01aaa278(DAT_01d4ea0c), iVar9 != 0)) {
      if (*(int *****)(DAT_01d4ea0c + 0x20) == (int ****)0x0) {
LAB_01801438:
        puVar18 = &DAT_01cf58a0;
        goto LAB_01801480;
      }
      local_88 = *(int *****)(DAT_01d4ea0c + 0x24);
      local_84 = *(int *****)(DAT_01d4ea0c + 0x28);
      local_b4 = (int ****)&local_d8;
      local_9c = (int ****)&DAT_00000001;
      local_d4 = (int ****)&local_40;
      local_a0 = (int ****)&local_b8;
      local_40 = (int ****)(param_1 + 0xda);
      local_80 = (int ****)0x0;
      local_b0 = (int ****)&DAT_01d2ea4c;
      local_d8 = (int ****)&DAT_0058df3d;
      local_3c = (int ****)FUN_01307ea0;
      local_b8 = (int ****)&local_90;
      local_98 = (int ****)(DAT_01d4ea0c + 0x1c);
      local_90 = *(int *****)(DAT_01d4ea0c + 0x1c);
      local_8c = *(int *****)(DAT_01d4ea0c + 0x20);
      FUN_01431a08(&local_a0);
    }
    else {
      iVar9 = DAT_01d4ea0c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_4c = *(int *****)(DAT_01d4ea0c + 0x14);
        local_48 = *(int *****)(DAT_01d4ea0c + 0x18);
        local_50 = (int ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar16 = DAT_01d4edc8;
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar16 = &DAT_01cfc5e0;
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar16[3])(pcVar14,&local_50);
        if (iVar11 != 0) {
          if (*(int *****)(DAT_01d4ea0c + 0x20) == (int ****)0x0) goto LAB_01801438;
          local_40 = (int ****)&local_a0;
          local_9c = (int ****)&local_c0;
          local_80 = (int ****)0x0;
          local_88 = *(int *****)(DAT_01d4ea0c + 0x24);
          local_84 = *(int *****)(DAT_01d4ea0c + 0x28);
          local_a0 = (int ****)&local_90;
          local_3c = (int ****)&DAT_00000001;
          local_98 = (int ****)&DAT_01d2ea4c;
          local_bc = (int ****)&local_d8;
          local_c0 = (int ****)&DAT_0058df3d;
          local_d4 = (int ****)FUN_01307ea0;
          local_d8 = (int ****)(param_1 + 0xda);
          local_b8 = local_50;
          local_b4 = local_4c;
          local_b0 = local_48;
          local_90 = *(int *****)(DAT_01d4ea0c + 0x1c);
          local_8c = *(int *****)(DAT_01d4ea0c + 0x20);
          local_38 = (int ****)(DAT_01d4ea0c + 0x1c);
          FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_b8,&local_40);
        }
      }
    }
    FUN_01431b00(param_1[0xd8],param_1[0xde]);
    param_1[0xd8] = (int)&DAT_3b9aca00;
    *(undefined1 *)(ppppiVar5 + 0x11) = 1;
    FUN_00a97e8c(ppppiVar5,uVar8);
    if (((DAT_01d50f88 < 2) &&
        ((DAT_01d4f8e0 - 1 < 2 ||
         ((DAT_01d4f8e0 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4f8d8), cVar7 != '\0')))))) &&
       (iVar9 = FUN_01aaa278(DAT_01d4f8d8), iVar9 != 0)) {
      if (*(int *****)(DAT_01d4f8d8 + 0x20) == (int ****)0x0) {
LAB_01801420:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1d770);
      }
      local_9c = (int ****)&local_40;
      local_88 = *(int *****)(DAT_01d4f8d8 + 0x24);
      local_84 = *(int *****)(DAT_01d4f8d8 + 0x28);
      local_118 = (int ****)(DAT_01d4f8d8 + 0x1c);
      local_90 = (int ****)*local_118;
      ppppiVar29 = (int ****)&local_120;
      local_120 = (int ****)&local_a0;
      local_80 = (int ****)0x0;
      local_11c = (int ****)&DAT_00000001;
      local_3c = (int ****)&DAT_0000003f;
      local_98 = (int ****)&DAT_01d2ea4c;
      local_40 = (int ****)&DAT_0050c52b;
      local_a0 = (int ****)&local_90;
      local_8c = *(int *****)(DAT_01d4f8d8 + 0x20);
      FUN_01aaaecc(DAT_01d4f8d8,ppppiVar29);
      iVar9 = DAT_01d4f8d8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_134 = *(int *****)(DAT_01d4f8d8 + 0x14);
        local_130 = *(int *****)(DAT_01d4f8d8 + 0x18);
        local_138 = (int ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar16 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar16 = &DAT_01cfc5e0;
        }
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar16[3])(pcVar14,&local_138);
        if (iVar11 != 0) {
          local_b8 = local_138;
          local_b4 = local_134;
          local_b0 = local_130;
          uVar10 = puVar16[4];
          goto LAB_0180105c;
        }
      }
    }
    else {
      iVar9 = DAT_01d4f8d8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_11c = *(int *****)(DAT_01d4f8d8 + 0x14);
        local_118 = *(int *****)(DAT_01d4f8d8 + 0x18);
        local_120 = (int ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar16 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar16 = &DAT_01cfc5e0;
        }
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar16[3])(pcVar14,&local_120);
        if (iVar11 != 0) {
          if (*(int *****)(DAT_01d4f8d8 + 0x20) == (int ****)0x0) goto LAB_01801420;
          local_134 = (int ****)&local_40;
          local_88 = *(int *****)(DAT_01d4f8d8 + 0x24);
          local_84 = *(int *****)(DAT_01d4f8d8 + 0x28);
          local_a0 = (int ****)&local_138;
          local_9c = (int ****)&DAT_00000001;
          local_3c = (int ****)&DAT_0000003f;
          local_80 = (int ****)0x0;
          local_130 = (int ****)&DAT_01d2ea4c;
          local_40 = (int ****)&DAT_0050c52b;
          local_b8 = local_120;
          local_b4 = local_11c;
          local_b0 = local_118;
          ppppiVar29 = (int ****)&local_a0;
          uVar10 = puVar16[4];
          local_138 = (int ****)&local_90;
          local_98 = (int ****)(DAT_01d4f8d8 + 0x1c);
          local_90 = *(int *****)(DAT_01d4f8d8 + 0x1c);
          local_8c = *(int *****)(DAT_01d4f8d8 + 0x20);
LAB_0180105c:
          FUN_01aaa328(iVar9,pcVar14,uVar10,&local_b8,ppppiVar29);
        }
      }
    }
    local_150 = (int ****)CONCAT31(local_150._1_3_,5);
  }
LAB_017ff208:
  if ((char)local_150 == '\x06') {
    uVar10 = 2;
  }
  else {
    local_b8 = local_150;
    local_b4 = local_14c;
    local_b0 = (int ****)local_148;
    local_ac = (code *)uStack_144;
    local_a8 = uStack_140;
    uStack_a4 = uStack_13c;
    if (*param_1 == 4 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
    }
    FUN_017c2d1c(param_1);
    uVar8 = (uint)local_b8 & 0xff;
    *param_1 = 4;
    param_1[1] = 0;
    if (uVar8 != 5) {
      local_90 = (int ****)CONCAT31(local_90._1_3_,local_b8._0_1_);
      FUN_01bed4e2((uint)&local_90 | 1,(uint)&local_b8 | 1,0x17);
      if ((DAT_01d50f88 < 2) &&
         (((DAT_01d4f97c - 1 < 2 ||
           ((DAT_01d4f97c != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4f974), cVar7 != '\0')))) &&
          (iVar9 = FUN_01aaa278(DAT_01d4f974), iVar9 != 0)))) {
        if (*(int *****)(DAT_01d4f974 + 0x20) == (int ****)0x0) {
LAB_018013bc:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1d9a0);
        }
        local_9c = (int ****)&local_50;
        local_130 = *(int *****)(DAT_01d4f974 + 0x24);
        local_12c = *(int *****)(DAT_01d4f974 + 0x28);
        local_118 = (int ****)(DAT_01d4f974 + 0x1c);
        local_138 = (int ****)*local_118;
        local_a0 = (int ****)&local_138;
        local_120 = (int ****)&local_a0;
        local_128 = (int ****)0x0;
        local_11c = (int ****)&DAT_00000001;
        local_4c = (int ****)&local_40;
        local_98 = (int ****)&DAT_01d2ea4c;
        local_50 = (int ****)&DAT_00580fa6;
        local_3c = (int ****)&LAB_013ba9ac;
        local_134 = *(int *****)(DAT_01d4f974 + 0x20);
        local_40 = (int ****)&local_90;
        FUN_01aaaecc(DAT_01d4f974,&local_120);
        iVar9 = DAT_01d4f974;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_14c = *(int *****)(DAT_01d4f974 + 0x14);
          local_148 = *(undefined1 **)(DAT_01d4f974 + 0x18);
          local_150 = (int ****)&SUB_00000004;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          pcVar14 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
            pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar16[3])(pcVar14,&local_150);
          if (iVar11 != 0) {
            FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_150,&local_120);
          }
        }
      }
      else {
        iVar9 = DAT_01d4f974;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_11c = *(int *****)(DAT_01d4f974 + 0x14);
          local_118 = *(int *****)(DAT_01d4f974 + 0x18);
          local_120 = (int ****)&SUB_00000004;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          pcVar14 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
            pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar16[3])(pcVar14,&local_120);
          if (iVar11 != 0) {
            if (*(int *****)(DAT_01d4f974 + 0x20) == (int ****)0x0) goto LAB_018013bc;
            local_130 = *(int *****)(DAT_01d4f974 + 0x24);
            local_150 = (int ****)&local_138;
            local_12c = *(int *****)(DAT_01d4f974 + 0x28);
            local_14c = (int ****)&local_50;
            local_9c = (int ****)&DAT_00000001;
            local_4c = (int ****)&local_40;
            local_128 = (int ****)0x0;
            local_148 = &DAT_01d2ea4c;
            local_50 = (int ****)&DAT_00580fa6;
            local_3c = (int ****)&LAB_013ba9ac;
            local_138 = *(int *****)(DAT_01d4f974 + 0x1c);
            local_134 = *(int *****)(DAT_01d4f974 + 0x20);
            local_a0 = (int ****)&local_150;
            local_98 = (int ****)(DAT_01d4f974 + 0x1c);
            local_40 = (int ****)&local_90;
            FUN_01aaa328(iVar9,pcVar14,puVar16[4],&local_120,&local_a0);
          }
        }
      }
      FUN_01877da0(&local_90);
    }
    uVar10 = 0;
    if (uVar8 != 5) {
      uVar10 = 1;
    }
  }
  return uVar10;
}

