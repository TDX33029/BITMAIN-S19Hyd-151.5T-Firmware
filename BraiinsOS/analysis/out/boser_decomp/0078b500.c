// FUN_0078b500 @ 0078b500 size=1908 calls_out=11 calls_in=2
// strings: 

void FUN_0078b500(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  short sVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  int *piVar33;
  short *psVar34;
  undefined4 uVar35;
  int *piVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  int *piVar41;
  int iVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  int *piVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  int *piVar50;
  undefined4 uVar51;
  int *piVar52;
  undefined4 uVar53;
  undefined4 local_660;
  undefined4 local_65c;
  undefined1 *local_658;
  undefined4 local_654;
  undefined4 uStack_650;
  int local_64c;
  undefined1 auStack_648 [80];
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  int *piStack_5e0;
  int *piStack_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 local_5d0;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 local_5c0;
  undefined4 local_5b8;
  undefined2 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 local_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  int *local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined1 local_568;
  undefined1 local_567;
  undefined1 local_566;
  undefined1 local_565;
  undefined1 local_564;
  undefined1 local_563;
  undefined1 local_562;
  undefined1 local_561;
  undefined1 local_560;
  undefined1 local_55f;
  undefined1 local_55e;
  int *local_558;
  undefined4 local_554;
  int *local_550;
  undefined4 local_54c;
  int *local_548;
  int *piStack_544;
  undefined4 uStack_540;
  undefined1 local_538;
  undefined4 local_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  int *local_524;
  undefined4 local_514;
  undefined1 auStack_448 [68];
  undefined1 local_404;
  undefined1 local_403;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  int *piStack_108;
  int *piStack_104;
  undefined1 auStack_100 [104];
  short local_98 [32];
  undefined1 local_58;
  undefined2 local_54;
  undefined2 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int *local_30;
  int *local_2c;
  
  puVar21 = (undefined4 *)((uint)&local_120 | 4);
  do {
    (**(code **)(*(int *)(param_2 + 0xcc) + 0xc))(&local_660,*(undefined4 *)(param_2 + 200),param_3)
    ;
    psVar34 = (short *)&DAT_3b9aca00;
    if (local_658 != &DAT_3b9aca00) {
      if (local_658 == (undefined1 *)0x3b9aca01) {
        param_1[2] = 0x3b9aca01;
        return;
      }
      psVar34 = (short *)0x0;
      if (local_64c != 0) {
        FUN_01bed4e2(&local_5f8,auStack_648,0x50);
        *param_1 = local_660;
        param_1[1] = local_65c;
        param_1[2] = local_658;
        param_1[3] = local_654;
        param_1[4] = uStack_650;
        param_1[5] = local_64c;
        goto LAB_0078bb54;
      }
    }
    iVar42 = *(int *)(param_2 + 0xd8);
    sVar15 = 0;
    if (iVar42 != 0) {
      psVar34 = (short *)(*(int *)(param_2 + 0xd4) + (iVar42 + -1) * 0x44);
      sVar15 = *psVar34;
      *(int *)(param_2 + 0xd8) = iVar42 + -1;
    }
    if (iVar42 == 0 || sVar15 == 2) {
      sVar15 = *(short *)(param_2 + 0xdc);
      *(undefined2 *)(param_2 + 0xdc) = 0x1b;
      if (sVar15 != 0x1b) {
        FUN_01bed93e(&local_5f8,0,0x41);
        local_5b0 = CONCAT22(local_5b0._2_2_,sVar15);
        FUN_01bed4e2((int)&local_5b0 + 2,param_2 + 0xde,0x9a);
        local_514 = 0x15180;
        local_5b4 = 0;
        FUN_01bed93e(local_98,0,0x40);
        local_50 = 0;
        local_58 = 1;
        local_54 = 0;
        uVar35 = FUN_0140aeb4(&local_5f8);
        FUN_014059bc(auStack_100,local_98,uVar35,1);
        FUN_01bed4e2(param_1,auStack_100,0x68);
        FUN_0078bed0(&local_660);
        return;
      }
      if (local_658 != &DAT_3b9aca00) {
        FUN_01bed4e2(&local_5f8,auStack_648,0x50);
      }
      *param_1 = local_660;
      param_1[1] = local_65c;
      param_1[2] = local_658;
      param_1[3] = local_654;
      param_1[4] = uStack_650;
      param_1[5] = local_64c;
LAB_0078bb54:
      FUN_01bed4e2(param_1 + 6,&local_5f8,0x50);
      return;
    }
    local_98[0] = sVar15;
    FUN_01bed4e2((uint)local_98 | 2,psVar34 + 1,0x42);
    FUN_0078bd94(&local_48,param_2);
    piVar52 = *(int **)(param_2 + 0x18);
    do {
      iVar42 = *piVar52;
      bVar16 = (bool)hasExclusiveAccess(piVar52);
    } while (!bVar16);
    *piVar52 = iVar42 + 1;
    uVar35 = local_48;
    uVar47 = uStack_44;
    uVar49 = uStack_40;
    if (iVar42 < 0) {
LAB_0078bc70:
      uStack_40 = uVar49;
      uStack_44 = uVar47;
      local_48 = uVar35;
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x78bc70);
      (*pcVar1)();
    }
    local_120 = local_48;
    uStack_11c = uStack_44;
    uStack_118 = uStack_40;
    uStack_114 = uStack_3c;
    local_110 = local_38;
    uStack_10c = uStack_34;
    piVar36 = *(int **)(param_2 + 0x1c);
    do {
      iVar42 = *piVar36;
      bVar16 = (bool)hasExclusiveAccess(piVar36);
    } while (!bVar16);
    *piVar36 = iVar42 + 1;
    if (iVar42 < 0) goto LAB_0078bc70;
    piVar50 = *(int **)(param_2 + 0xa0);
    do {
      iVar42 = *piVar50;
      bVar16 = (bool)hasExclusiveAccess(piVar50);
    } while (!bVar16);
    *piVar50 = iVar42 + 1;
    local_30 = piVar52;
    local_2c = piVar36;
    if (iVar42 < 0) goto LAB_0078bc70;
    uVar51 = *(undefined4 *)(param_2 + 0xa4);
    piVar52 = *(int **)(param_2 + 0xa8);
    do {
      iVar42 = *piVar52;
      bVar16 = (bool)hasExclusiveAccess(piVar52);
    } while (!bVar16);
    *piVar52 = iVar42 + 1;
    if (iVar42 < 0) goto LAB_0078bc70;
    uVar53 = *(undefined4 *)(param_2 + 0xac);
    piVar36 = *(int **)(param_2 + 0x7c);
    uVar22 = *(undefined4 *)(param_2 + 0x60);
    uVar37 = *(undefined4 *)(param_2 + 100);
    uVar44 = *(undefined4 *)(param_2 + 0x8c);
    uVar23 = *(undefined4 *)(param_2 + 0x50);
    uVar38 = *(undefined4 *)(param_2 + 0x54);
    uVar48 = *(undefined4 *)(param_2 + 0x68);
    uVar24 = *(undefined4 *)(param_2 + 0x40);
    uVar46 = *(undefined4 *)(param_2 + 0x88);
    uVar25 = *(undefined4 *)(param_2 + 0x30);
    uVar39 = *(undefined4 *)(param_2 + 0x34);
    uVar26 = *(undefined4 *)(param_2 + 0x20);
    uVar40 = *(undefined4 *)(param_2 + 0x24);
    uVar27 = *(undefined4 *)(param_2 + 0x28);
    uVar28 = *(undefined4 *)(param_2 + 0x38);
    uVar29 = *(undefined4 *)(param_2 + 0x48);
    uVar30 = *(undefined4 *)(param_2 + 0x58);
    uVar2 = *(undefined1 *)(param_2 + 0x95);
    uVar3 = *(undefined1 *)(param_2 + 0x99);
    uVar4 = *(undefined1 *)(param_2 + 0x94);
    uVar5 = *(undefined1 *)(param_2 + 0x93);
    uVar6 = *(undefined1 *)(param_2 + 0x98);
    uVar7 = *(undefined1 *)(param_2 + 0x9a);
    uVar8 = *(undefined1 *)(param_2 + 0x92);
    uVar9 = *(undefined1 *)(param_2 + 0x91);
    uVar10 = *(undefined1 *)(param_2 + 0x90);
    uVar31 = *(undefined4 *)(param_2 + 0x84);
    uVar32 = *(undefined4 *)(param_2 + 0x80);
    do {
      iVar42 = *piVar36;
      bVar16 = (bool)hasExclusiveAccess(piVar36);
    } while (!bVar16);
    *piVar36 = iVar42 + 1;
    if (iVar42 < 0) goto LAB_0078bc70;
    uVar11 = *(undefined1 *)(param_2 + 0x96);
    uVar12 = *(undefined1 *)(param_2 + 0x97);
    if (*(int *)(param_2 + 0x70) == -0x80000000) {
      local_130 = 0x80000000;
    }
    else {
      FUN_015e8ad4(&local_130,*(undefined4 *)(param_2 + 0x74),*(undefined4 *)(param_2 + 0x78));
    }
    uVar20 = uStack_114;
    uVar19 = uStack_118;
    uVar18 = uStack_11c;
    uVar17 = local_120;
    *puVar21 = local_130;
    puVar21[1] = uStack_12c;
    puVar21[2] = uStack_128;
    piVar33 = *(int **)(param_2 + 0xb0);
    do {
      iVar42 = *piVar33;
      bVar16 = (bool)hasExclusiveAccess(piVar33);
    } while (!bVar16);
    *piVar33 = iVar42 + 1;
    uVar35 = local_48;
    uVar47 = uStack_44;
    uVar49 = uStack_40;
    if (iVar42 < 0) goto LAB_0078bc70;
    piVar41 = *(int **)(param_2 + 0xb4);
    do {
      iVar42 = *piVar41;
      bVar16 = (bool)hasExclusiveAccess(piVar41);
    } while (!bVar16);
    *piVar41 = iVar42 + 1;
    if (iVar42 < 0) goto LAB_0078bc70;
    local_130 = local_120;
    uStack_12c = uStack_11c;
    uStack_128 = uStack_118;
    uStack_124 = uStack_114;
    uVar13 = *(undefined1 *)(param_2 + 0xc0);
    uVar43 = *(undefined4 *)(param_2 + 0xb8);
    local_120 = local_48;
    uStack_11c = uStack_44;
    uStack_118 = uStack_40;
    uStack_114 = uStack_3c;
    local_110 = local_38;
    uStack_10c = uStack_34;
    piStack_108 = local_30;
    piStack_104 = local_2c;
    uVar35 = *(undefined4 *)(param_2 + 0x178);
    uVar47 = *(undefined4 *)(param_2 + 0x17c);
    uVar49 = *(undefined4 *)(param_2 + 0x180);
    piVar45 = *(int **)(param_2 + 0x184);
    do {
      iVar42 = *piVar45;
      bVar16 = (bool)hasExclusiveAccess(piVar45);
    } while (!bVar16);
    *piVar45 = iVar42 + 1;
    if (iVar42 < 0) goto LAB_0078bc70;
    local_5f8 = local_48;
    uStack_5f4 = uStack_44;
    uStack_5f0 = uStack_40;
    uStack_5ec = uStack_3c;
    local_5e8 = local_38;
    uStack_5e4 = uStack_34;
    piStack_5e0 = local_30;
    piStack_5dc = local_2c;
    local_58c = uVar17;
    uStack_588 = uVar18;
    uStack_584 = uVar19;
    uStack_580 = uVar20;
    uVar14 = *(undefined1 *)(param_2 + 0x188);
    local_5d0 = uVar27;
    local_5c0 = uVar28;
    local_5b0 = uVar29;
    local_5a0 = uVar30;
    local_590 = uVar48;
    local_57c = piVar36;
    local_578 = uVar32;
    local_574 = uVar31;
    local_570 = uVar46;
    local_56c = uVar44;
    local_568 = uVar10;
    local_567 = uVar9;
    local_566 = uVar8;
    local_565 = uVar5;
    local_564 = uVar4;
    local_563 = uVar2;
    local_562 = uVar11;
    local_561 = uVar12;
    local_560 = uVar6;
    local_55f = uVar3;
    local_55e = uVar7;
    local_558 = piVar50;
    local_554 = uVar51;
    local_550 = piVar52;
    local_54c = uVar53;
    local_548 = piVar33;
    piStack_544 = piVar41;
    uStack_540 = uVar43;
    local_538 = uVar13;
    local_524 = piVar45;
    local_48 = uVar35;
    uStack_44 = uVar47;
    uStack_40 = uVar49;
    local_5d8 = uVar26;
    uStack_5d4 = uVar40;
    local_5c8 = uVar25;
    uStack_5c4 = uVar39;
    local_5b8 = uVar24;
    local_5a8 = uVar23;
    uStack_5a4 = uVar38;
    local_598 = uVar22;
    uStack_594 = uVar37;
    local_530 = uVar35;
    uStack_52c = uVar47;
    uStack_528 = uVar49;
    FUN_01bed4e2(auStack_448,local_98,0x44);
    local_403 = 0;
    local_404 = uVar14;
    iVar42 = thunk_FUN_01be5118(0x4c8);
    if (iVar42 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x4c8);
    }
    FUN_01bed4e2(iVar42,&local_5f8,0x4c8);
    FUN_00fe4378(*(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xcc));
    *(int *)(param_2 + 200) = iVar42;
    *(undefined **)(param_2 + 0xcc) = &DAT_01c08edc;
    FUN_0078bed0(&local_660);
  } while( true );
}

