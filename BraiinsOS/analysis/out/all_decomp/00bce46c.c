// FUN_00bce46c @ 00bce46c size=6716 calls_out=30 calls_in=0
// strings: hashchain not running | assertion failed: prev

/* WARNING: Removing unreachable block (ram,0x00bce5b8) */
/* WARNING: Removing unreachable block (ram,0x00bce5dc) */
/* WARNING: Removing unreachable block (ram,0x00bcf87c) */
/* WARNING: Removing unreachable block (ram,0x00bcf884) */
/* WARNING: Removing unreachable block (ram,0x00bcf888) */
/* WARNING: Removing unreachable block (ram,0x00bcf8ac) */
/* WARNING: Removing unreachable block (ram,0x00bcf8b4) */
/* WARNING: Removing unreachable block (ram,0x00bcf8bc) */
/* WARNING: Removing unreachable block (ram,0x00bcf938) */
/* WARNING: Removing unreachable block (ram,0x00bcf968) */
/* WARNING: Removing unreachable block (ram,0x00bcf944) */
/* WARNING: Removing unreachable block (ram,0x00bcf94c) */
/* WARNING: Removing unreachable block (ram,0x00bcf958) */
/* WARNING: Removing unreachable block (ram,0x00bcf978) */
/* WARNING: Removing unreachable block (ram,0x00bcf980) */
/* WARNING: Removing unreachable block (ram,0x00bcf988) */
/* WARNING: Removing unreachable block (ram,0x00bcf98c) */
/* WARNING: Removing unreachable block (ram,0x00bcf994) */
/* WARNING: Removing unreachable block (ram,0x00bcf99c) */
/* WARNING: Removing unreachable block (ram,0x00bcf8c0) */
/* WARNING: Removing unreachable block (ram,0x00bcf8d0) */
/* WARNING: Removing unreachable block (ram,0x00bcf8d4) */
/* WARNING: Removing unreachable block (ram,0x00bcf8dc) */
/* WARNING: Removing unreachable block (ram,0x00bcf8e0) */
/* WARNING: Removing unreachable block (ram,0x00bcf8e8) */
/* WARNING: Removing unreachable block (ram,0x00bcf8f0) */
/* WARNING: Removing unreachable block (ram,0x00bcf8fc) */
/* WARNING: Removing unreachable block (ram,0x00bcf908) */
/* WARNING: Removing unreachable block (ram,0x00bcf90c) */
/* WARNING: Removing unreachable block (ram,0x00bcf914) */
/* WARNING: Removing unreachable block (ram,0x00bcf918) */
/* WARNING: Removing unreachable block (ram,0x00bcf920) */
/* WARNING: Removing unreachable block (ram,0x00bcf928) */
/* WARNING: Removing unreachable block (ram,0x00bce90c) */
/* WARNING: Removing unreachable block (ram,0x00bce8f0) */
/* WARNING: Removing unreachable block (ram,0x00bce8fc) */
/* WARNING: Removing unreachable block (ram,0x00bce98c) */

undefined8 FUN_00bce46c(uint *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint **ppuVar8;
  uint **ppuVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint *unaff_r4;
  undefined4 uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  undefined1 uVar24;
  uint uVar25;
  uint unaff_r7;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  uint *unaff_r8;
  uint uVar29;
  uint *puVar30;
  int *piVar31;
  uint *unaff_r10;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 *puVar32;
  undefined4 *extraout_r12_00;
  undefined4 *extraout_r12_01;
  undefined4 *extraout_r12_02;
  undefined4 *extraout_r12_03;
  uint uVar33;
  uint *puVar34;
  bool bVar35;
  bool bVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  uint *local_550;
  uint *local_54c;
  uint **local_548;
  uint **local_544;
  uint *local_528;
  uint *local_524;
  uint *local_520;
  uint local_518;
  uint *local_514;
  uint *local_510;
  uint *local_50c;
  uint *local_508;
  uint *local_504;
  uint *local_500;
  undefined2 local_4fc;
  undefined1 local_4fa;
  uint *local_4f8;
  uint *local_4f4;
  undefined2 local_4ec;
  undefined1 local_4ea;
  uint *local_4e8;
  uint *local_4e4;
  undefined4 local_4e0;
  uint *local_4dc;
  uint *local_4d8;
  uint *puStack_4d4;
  undefined4 *local_4d0;
  uint local_4cc;
  undefined1 local_4c8;
  undefined1 local_4c7 [7];
  uint *local_4c0;
  uint *local_4bc;
  undefined1 auStack_4b8 [352];
  undefined4 *local_358;
  int local_354;
  int local_350;
  undefined1 local_34c;
  uint *local_348;
  uint *local_344;
  undefined1 auStack_340 [368];
  uint *local_1d0;
  uint *local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint *local_1c0;
  uint *local_1bc;
  uint *local_1b8;
  uint *local_1b4;
  uint *local_1b0;
  uint *local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined2 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x6a)) {
  case 0:
    uVar16 = 0;
    uVar25 = param_1[0x19];
    *(undefined2 *)(param_1 + 0x1a) = 0;
    uVar29 = param_1[0x14];
    puVar30 = (uint *)param_1[0x15];
    FUN_00c70aa0(&local_514,*(undefined4 *)(uVar25 + 0x2e4),*(undefined4 *)(uVar25 + 0x2e8));
    *(undefined1 *)((int)param_1 + 0x69) = 1;
    iVar20 = (int)puVar30 * 0xc;
    if ((uint *)0xaaaaaaa < puVar30) {
LAB_00bce4e8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar16,iVar20);
    }
    puVar17 = (uint *)0x0;
    if (iVar20 == 0) {
      local_4dc = (uint *)&DAT_00000004;
      local_4e0 = (uint *)0x0;
    }
    else {
      local_4dc = (uint *)thunk_FUN_016d4a50(iVar20);
      local_4e0 = puVar30;
      if (local_4dc == (uint *)0x0) {
        uVar16 = 4;
        goto LAB_00bce4e8;
      }
    }
    if (puVar30 != (uint *)0x0) {
      puVar34 = local_4dc + 2;
      puVar32 = (undefined4 *)(uVar29 + 0x10);
      puVar17 = (uint *)0x0;
      do {
        FUN_009d42ac(&local_1c8,puVar32[-1],*puVar32);
        puVar5 = local_1c0;
        puVar11 = local_1c4;
        uVar16 = 0;
        bVar35 = (uint *)0x3ffffffe < local_1c0;
        bVar36 = local_1c0 == (uint *)0x3fffffff;
        if (local_1c0 < (uint *)0x40000000) {
          unaff_r7 = (int)local_1c0 << 2;
          bVar35 = 0x7ffffffb < unaff_r7;
          bVar36 = unaff_r7 == 0x7ffffffc;
        }
        if (bVar35 && !bVar36) {
LAB_00bcff48:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar16,local_518);
        }
        if (unaff_r7 == 0) {
          local_524 = (uint *)0x0;
          local_518 = 4;
        }
        else {
          local_518 = thunk_FUN_016d4a50(unaff_r7);
          if (local_518 == 0) {
            uVar16 = 4;
            local_518 = unaff_r7;
            goto LAB_00bcff48;
          }
          local_524 = puVar5;
        }
        FUN_016dd1aa(local_518,puVar11,unaff_r7);
        if (local_1c8 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar11);
        }
        puVar17 = (uint *)((int)puVar17 + 1);
        puVar34[-2] = (uint)local_524;
        puVar32 = puVar32 + 6;
        *puVar34 = (uint)puVar5;
        puVar34[-1] = local_518;
        puVar34 = puVar34 + 3;
      } while (puVar30 != puVar17);
      puVar17 = puVar30;
    }
    unaff_r10 = local_4dc;
    puVar34 = local_4e0;
    *(undefined1 *)(param_1 + 0x1a) = 1;
    puVar32 = *(undefined4 **)(uVar25 + 0x2ec);
    uVar16 = 0;
    *(undefined2 *)(param_1 + 0x1a) = 0;
    puVar11 = local_510 + (int)local_50c;
    puVar30 = local_50c;
    if (puVar17 < local_50c) {
      puVar30 = puVar17;
    }
    puVar5 = local_4dc + (int)puVar17 * 3;
    local_508 = local_4e0;
    local_1c4 = local_510;
    local_1c0 = local_514;
    local_504 = local_4dc;
    local_1a4 = 0;
    local_1a8 = 0;
    local_1b0 = local_4e0;
    local_1b4 = local_4dc;
    local_1b8 = local_4dc;
    local_1c8 = local_510;
    local_500 = puVar17;
    local_1bc = puVar11;
    local_1ac = puVar5;
    if ((uint *)0x7ffffff < puVar30) {
LAB_00bceb68:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar16,(int)puVar30 << 4);
    }
    if (puVar30 == (uint *)0x0) {
      uVar25 = 4;
      puVar17 = (uint *)0x0;
      param_4 = 0;
      unaff_r8 = local_4dc;
      in_r12 = puVar32;
    }
    else {
      uVar25 = thunk_FUN_016d4a50((int)puVar30 << 4);
      if (uVar25 == 0) {
        uVar16 = 4;
        goto LAB_00bceb68;
      }
      puVar3 = (uint *)(uVar25 + 4);
      puVar10 = puVar30;
      param_4 = extraout_r3;
      puVar19 = unaff_r10;
      puVar17 = puVar34;
      puVar18 = local_510;
      unaff_r8 = unaff_r10;
      in_r12 = extraout_r12_00;
      do {
        puVar15 = puVar11;
        if (puVar18 != puVar11) {
          puVar15 = puVar18 + 1;
          puVar17 = (uint *)*puVar18;
        }
        if (puVar19 == puVar5) {
          uVar29 = 0x80000000;
          puVar18 = puVar5;
        }
        else {
          param_4 = puVar19[2];
          puVar18 = puVar19 + 3;
          uVar29 = *puVar19;
          in_r12 = (undefined4 *)puVar19[1];
          unaff_r8 = puVar18;
        }
        puVar3[-1] = (uint)puVar17;
        puVar10 = (uint *)((int)puVar10 + -1);
        *puVar3 = uVar29;
        puVar3[1] = (uint)in_r12;
        puVar3[2] = param_4;
        puVar3 = puVar3 + 4;
        puVar19 = puVar18;
        puVar18 = puVar15;
      } while (puVar10 != (uint *)0x0);
      puVar17 = puVar30;
    }
    if (local_514 != (uint *)0x0) {
      thunk_FUN_016d3fb4(local_510);
      param_4 = extraout_r3_00;
      in_r12 = extraout_r12_01;
    }
    puVar11 = unaff_r8 + 1;
    for (iVar20 = ((uint)((int)puVar5 - (int)unaff_r8) >> 2) * -0x55555555; iVar20 != 0;
        iVar20 = iVar20 + -1) {
      if (puVar11[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar11);
        param_4 = extraout_r3_01;
        in_r12 = extraout_r12_02;
      }
      puVar11 = puVar11 + 3;
    }
    if (puVar34 != (uint *)0x0) {
      thunk_FUN_016d3fb4(unaff_r10);
      param_4 = extraout_r3_02;
      in_r12 = extraout_r12_03;
    }
    puVar32 = puVar32 + 2;
    *param_1 = uVar25;
    param_1[0x18] = (uint)puVar30;
    param_1[1] = (uint)puVar30;
    *(undefined1 *)(param_1 + 0x12) = 0;
    param_1[0x16] = (uint)puVar17;
    param_1[0x17] = uVar25;
    param_1[0x10] = (uint)puVar32;
    param_1[0x11] = (uint)puVar32;
    unaff_r4 = (uint *)0x0;
joined_r0x00bce538:
    if ((uint *)0x1e < puVar30) {
      uStack_2c = 1;
      local_30 = (undefined4 *)0xffffffff;
      local_1bc = (uint *)0x0;
      local_1c0 = (uint *)0x0;
      local_40 = 0;
      local_1c4 = (uint *)0x1;
      local_1c8 = (uint *)0x1;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      puVar17 = (uint *)thunk_FUN_016d4a50(0x1a0);
      if (puVar17 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x1a0);
      }
      FUN_016dd1aa(puVar17,&local_1c8,0x1a0);
      local_1b0 = puVar17 + 2;
      local_544 = &local_1c0;
      local_1b4 = (uint *)0x0;
      local_1bc = (uint *)0x0;
      local_1c4 = (uint *)0x1;
      local_1c8 = (uint *)0x1;
      local_1c0 = puVar17;
      local_1ac = local_1b0;
      puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x20);
      }
      local_4c0 = (uint *)&DAT_00000008;
      local_4c7._3_4_ = (uint *)0x0;
      *puVar4 = local_1c8;
      puVar4[1] = local_1c4;
      puVar4[2] = local_1c0;
      puVar4[3] = local_1bc;
      puVar4[4] = local_1b8;
      puVar4[5] = local_1b4;
      puVar4[6] = local_1b0;
      puVar4[7] = local_1ac;
      local_54c = (uint *)local_4c7;
      local_548 = &local_4d8;
      param_4 = 0;
      local_4bc = (uint *)0x0;
      puVar11 = (uint *)0x0;
      local_4e4 = (uint *)0x0;
      local_4e8 = (uint *)0x0;
      puVar17 = (uint *)0x0;
      puVar34 = (uint *)0x0;
      do {
        local_4d8 = local_4e8;
        puStack_4d4 = local_4e4;
        local_4c8 = 0;
        local_354 = uVar25 + (int)puVar11 * 0x10;
        local_350 = local_354 + 4;
        local_4c7[2] = local_4ea;
        local_4c7._0_2_ = local_4ec;
        local_34c = 0;
        local_4e0 = puVar34;
        local_4dc = puVar17;
        local_4d0 = puVar4;
        local_4cc = param_4;
        local_358 = puVar32;
        FUN_016dd1aa(auStack_340,auStack_4b8,0x170);
        iVar20 = puVar4[2];
        local_344 = (uint *)0x0;
        local_4e0 = (uint *)((int)puVar34 + 1);
        piVar23 = puVar4 + 1;
        local_4dc = (uint *)((int)puVar17 + (uint)((uint *)0xfffffffe < puVar34));
        local_348 = (uint *)&DAT_00000001;
LAB_00bcefe4:
        iVar7 = *piVar23;
        do {
          if (iVar7 == -1) goto LAB_00bcefe0;
          local_1d0 = puVar34;
          local_1cc = puVar17;
          if (iVar7 < 0) {
            local_1c4 = &DAT_0157d360;
            local_1c8 = (uint *)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00590e71,&local_1c8,&DAT_018ae278);
          }
          iVar12 = *piVar23;
          if (iVar12 == iVar7) {
            bVar35 = (bool)hasExclusiveAccess(piVar23);
            if (bVar35) {
              *piVar23 = iVar7 + 1;
            }
            bVar36 = false;
            if (bVar35) {
              DataMemoryBarrier(0xb);
              bVar36 = true;
            }
          }
          else {
            bVar36 = false;
            ClearExclusiveLocal();
          }
          iVar7 = iVar12;
        } while (!bVar36);
        FUN_016dd1aa(local_544,&local_348,0x180);
        uStack_2c = 1;
        local_40 = iVar20 + 8;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_1c4 = (uint *)0x1;
        local_1c8 = (uint *)0x1;
        local_30 = puVar4;
        iVar20 = thunk_FUN_016d4a50(0x1a0);
        if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x1a0);
        }
        FUN_016dd1aa(iVar20,&local_1c8,0x1a0);
        puVar34 = local_4e0;
        param_4 = iVar20 + 8;
        local_4c8 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar36 = (bool)hasExclusiveAccess(&local_4cc);
        } while (!bVar36);
        DataMemoryBarrier(0xb);
        if (local_4cc == 0) {
          *(undefined4 *)(iVar20 + 400) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar20 + 0x188) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(local_4cc + 0x180) == local_4d0[2] + 8);
          *(int *)(iVar20 + 400) = *(int *)(local_4cc + 0x188) + 1;
          DataMemoryBarrier(0xb);
          *(uint *)(iVar20 + 0x188) = local_4cc;
          *(uint *)(local_4cc + 0x184) = param_4;
        }
        *(undefined4 *)(iVar20 + 0x194) = 0;
        puVar17 = local_4d0 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar29 = *puVar17;
          bVar36 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar36);
        *puVar17 = param_4;
        DataMemoryBarrier(0xb);
        *(uint *)(uVar29 + 0x18c) = param_4;
        local_4e8 = local_4d8;
        local_4e4 = puStack_4d4;
        local_4ea = local_4c7[2];
        puVar11 = (uint *)((int)puVar11 + 1);
        local_4ec = local_4c7._0_2_;
        puVar17 = local_4dc;
        puVar4 = local_4d0;
        if (puVar11 == puVar30) {
          uVar25 = 0;
          local_4e0 = (uint *)CONCAT13(local_4e0._3_1_,local_4c7._0_3_);
          local_528 = local_4dc;
          unaff_r4 = (uint *)local_4c7._3_4_;
          unaff_r8 = local_4c0;
          unaff_r10 = local_4bc;
          in_r12 = local_4d0;
          uVar24 = local_4c8;
          local_4cc = param_4;
          local_1c8 = local_4e8;
          local_1c4 = local_4e4;
          goto LAB_00bcf1b8;
        }
      } while( true );
    }
    if (puVar30 == (uint *)0x0) {
      local_1c0 = (uint *)0x0;
      local_1c4 = (uint *)&DAT_00000008;
    }
    else {
      puVar17 = (uint *)thunk_FUN_016d4a50((int)puVar30 * 0x178);
      if (puVar17 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,(int)puVar30 * 0x178);
      }
      puVar11 = puVar17 + 0x5d;
      puVar34 = puVar30;
      do {
        param_4 = param_1[0x11];
        *(undefined1 *)puVar11 = 0;
        puVar34 = (uint *)((int)puVar34 + -1);
        puVar11[-1] = uVar25 + 4;
        puVar11[-2] = uVar25;
        puVar11[-3] = param_4;
        uVar25 = uVar25 + 0x10;
        puVar11[-0x5d] = 0;
        puVar11 = puVar11 + 0x5e;
      } while (puVar34 != (uint *)0x0);
      in_r12 = extraout_r12;
      local_1c4 = puVar17;
      local_1c0 = puVar30;
    }
    uVar24 = (undefined1)uVar25;
    uVar25 = 0x80000000;
    puVar34 = local_1c4;
    local_528 = local_1c0;
    local_1c8 = local_1c0;
LAB_00bcf1b8:
    *(undefined1 *)(param_1 + 8) = uVar24;
    param_1[7] = param_4;
    param_1[4] = (uint)local_1c8;
    param_1[5] = (uint)local_1c4;
    param_1[6] = (uint)in_r12;
    param_1[2] = (uint)puVar34;
    param_1[3] = (uint)local_528;
    *(undefined2 *)((int)param_1 + 0x21) = (undefined2)local_4e0;
    *(undefined1 *)((int)param_1 + 0x23) = local_4e0._2_1_;
    param_1[9] = (uint)unaff_r4;
    param_1[10] = (uint)unaff_r8;
    param_1[0xb] = (uint)unaff_r10;
    param_1[0xc] = uVar25;
    param_1[0xd] = 4;
    param_1[0xe] = 0;
    local_4f4 = local_1c4;
    local_4f8 = local_1c8;
    local_4fa = local_4e0._2_1_;
    local_4fc = (undefined2)local_4e0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871d68);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871d68);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x12]) {
    case '\0':
      uVar25 = *param_1;
      puVar32 = (undefined4 *)param_1[0x10];
      puVar30 = (uint *)param_1[1];
      param_1[0x11] = (uint)puVar32;
      goto joined_r0x00bce538;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018715b0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018715b0);
    case '\x03':
      uVar25 = param_1[0xc];
    }
  }
  if (uVar25 != 0x80000000) {
    puVar17 = param_1 + 4;
    puVar30 = param_1 + 6;
    uVar25 = param_1[0xb];
joined_r0x00bcf254:
    if (uVar25 == 0) {
LAB_00bcf38c:
      uVar25 = param_1[7];
      DataMemoryBarrier(0xb);
      if (uVar25 == 0) {
        iVar20 = 0;
      }
      else {
        do {
          DataMemoryBarrier(0xb);
        } while (*(int *)(uVar25 + 0x180) == *(int *)(*puVar30 + 8) + 8);
        iVar20 = *(int *)(uVar25 + 0x188);
      }
      uVar25 = *puVar30;
      piVar28 = (int *)*param_2;
      piVar23 = (int *)(uVar25 + 0x14);
      do {
        iVar7 = *piVar23;
        if (iVar7 != 0) {
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          if (iVar7 == 0) goto LAB_00bcf430;
          if (iVar7 != 2) goto LAB_00bcf508;
          iVar7 = piVar28[1];
          puVar32 = (undefined4 *)(*piVar28 + 8);
          goto LAB_00bcf4fc;
        }
        bVar36 = (bool)hasExclusiveAccess(piVar23);
      } while (!bVar36);
      *piVar23 = 1;
      DataMemoryBarrier(0xb);
LAB_00bcf430:
      if (*(undefined4 **)(uVar25 + 0xc) == (undefined4 *)0x0) {
        iVar7 = piVar28[1];
      }
      else {
        iVar7 = piVar28[1];
        if (*(int *)(uVar25 + 0x10) == iVar7 &&
            *(undefined4 **)(uVar25 + 0xc) == (undefined4 *)*piVar28) {
          iVar7 = *piVar23;
          goto joined_r0x00bcf4a8;
        }
      }
      uVar37 = (**(code **)*piVar28)(iVar7);
      if (*(int *)(uVar25 + 0xc) != 0) {
        (**(code **)(*(int *)(uVar25 + 0xc) + 0xc))(*(undefined4 *)(uVar25 + 0x10));
      }
      *(undefined8 *)(uVar25 + 0xc) = uVar37;
      iVar7 = *piVar23;
joined_r0x00bcf4a8:
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        do {
          bVar36 = (bool)hasExclusiveAccess(piVar23);
          if (bVar36) {
            *piVar23 = 0;
            DataMemoryBarrier(0xb);
            goto LAB_00bcf508;
          }
        } while (*piVar23 == 1);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      iVar12 = *(int *)(uVar25 + 0xc);
      iVar7 = *(int *)(uVar25 + 0x10);
      *(undefined4 *)(uVar25 + 0xc) = 0;
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01882284);
      }
      DataMemoryBarrier(0xb);
      do {
        bVar36 = (bool)hasExclusiveAccess(piVar23);
      } while (!bVar36);
      *piVar23 = 0;
      DataMemoryBarrier(0xb);
      puVar32 = (undefined4 *)(iVar12 + 4);
LAB_00bcf4fc:
      (*(code *)*puVar32)(iVar7);
LAB_00bcf508:
      uVar25 = 0;
      local_518 = 0;
LAB_00bcf518:
      do {
        uVar29 = *puVar30;
        puVar34 = *(uint **)(uVar29 + 0x1c);
        puVar11 = (uint *)puVar34[99];
        DataMemoryBarrier(0xb);
        if (puVar34 == (uint *)(*(int *)(uVar29 + 8) + 8)) {
          if (puVar11 == (uint *)0x0) {
            if (param_1[7] != 0) goto LAB_00bcfc60;
            puVar30 = (uint *)param_1[0xd];
            puVar17 = (uint *)param_1[0xc];
            unaff_r4 = (uint *)param_1[0xe];
            *(undefined1 *)(param_1 + 8) = 1;
            param_1[0xc] = 0;
            param_1[0xd] = 4;
            param_1[0xe] = 0;
            if (puVar17 == (uint *)&DAT_80000000) goto LAB_00bcfc60;
            goto LAB_00bcfcbc;
          }
          *(uint **)(uVar29 + 0x1c) = puVar11;
          DataMemoryBarrier(0xb);
          puVar34 = puVar11;
          puVar11 = (uint *)puVar11[99];
        }
        if (puVar11 == (uint *)0x0) {
          DataMemoryBarrier(0xb);
          if (*(uint **)(uVar29 + 0x18) == puVar34) {
            iVar7 = *(int *)(uVar29 + 8);
            piVar23 = (int *)(uVar29 + 0x18);
            *(undefined4 *)(iVar7 + 0x194) = 0;
            iVar7 = iVar7 + 8;
            DataMemoryBarrier(0xb);
            do {
              iVar12 = *piVar23;
              bVar36 = (bool)hasExclusiveAccess(piVar23);
            } while (!bVar36);
            *piVar23 = iVar7;
            DataMemoryBarrier(0xb);
            *(int *)(iVar12 + 0x18c) = iVar7;
            puVar11 = (uint *)puVar34[99];
            DataMemoryBarrier(0xb);
            if (puVar11 != (uint *)0x0) goto LAB_00bcf5b8;
          }
          (**(code **)(*piVar28 + 8))(piVar28[1]);
          goto LAB_00bcfc60;
        }
LAB_00bcf5b8:
        *(uint **)(uVar29 + 0x1c) = puVar11;
        if ((*puVar34 & 1) == 0) {
          puVar34 = puVar34 + -2;
          DataMemoryBarrier(0xb);
          do {
            uVar29 = *puVar34;
            bVar36 = (bool)hasExclusiveAccess(puVar34);
          } while (!bVar36);
          *puVar34 = uVar29 - 1;
          if (uVar29 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00ceb798();
          }
          goto LAB_00bcf518;
        }
        uVar29 = param_1[7];
        iVar7 = *(int *)(uVar29 + 0x188);
        uVar21 = puVar34[0x60];
        uVar13 = puVar34[0x61];
        puVar34[0x60] = *(int *)(param_1[6] + 8) + 8;
        puVar34[0x61] = 0;
        if (uVar21 == 0) {
          if (uVar13 != 0) goto LAB_00bcf650;
          param_1[7] = 0;
        }
        else {
          *(uint *)(uVar21 + 0x184) = uVar13;
          if (uVar13 == 0) {
            param_1[7] = uVar21;
            uVar29 = uVar21;
          }
          else {
LAB_00bcf650:
            *(uint *)(uVar13 + 0x180) = uVar21;
          }
          *(int *)(uVar29 + 0x188) = iVar7 + -1;
        }
        unaff_r4 = puVar34 + 2;
        puVar11 = puVar34 + 0x65;
        puVar5 = puVar34 + -2;
        DataMemoryBarrier(0xb);
        do {
          uVar29 = *puVar11;
          bVar36 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar36);
        *(char *)puVar11 = '\0';
        DataMemoryBarrier(0xb);
        if ((char)uVar29 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: prev",0x16,&DAT_0187b5ac);
        }
        *(undefined1 *)((int)puVar34 + 0x195) = 0;
        local_1c0 = (uint *)0x0;
        local_4e0 = (uint *)&DAT_01876f6c;
        ppuVar8 = (uint **)puVar34[0x5e];
        ppuVar9 = (uint **)puVar34[0x5f];
        local_1c8 = &local_4e0;
        local_4dc = puVar34;
        local_348 = puVar30;
        local_344 = puVar5;
        local_1c4 = local_1c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)puVar34[0x5d]) {
        case '\0':
          uVar29 = *(uint *)puVar34[0x5b];
          *(undefined1 *)(puVar34 + 0x58) = 0;
          puVar34[0x54] = puVar34[0x5a];
          puVar34[0x55] = puVar34[0x5c];
          puVar34[0x56] = uVar29;
          break;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018715c0);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018715c0);
        }
        uVar38 = FUN_00bd4ca4(unaff_r4,&local_1c8);
        uVar29 = (uint)uVar38;
        if ((uVar38 & 1) == 0) {
          if ((char)puVar34[0x58] == '\x03') {
            if ((char)puVar34[0xe] == '\x04') {
              FUN_00b9f9bc(puVar34 + 0x10);
              FUN_00c822ec(puVar34[0xd]);
            }
            else if (((char)puVar34[0xe] == '\x03') && (puVar34[0xf] != 0)) {
              FUN_00c8204c(puVar34[0xf],puVar34[0x10],1);
            }
            piVar23 = (int *)puVar34[0x57];
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar23;
              bVar36 = (bool)hasExclusiveAccess(piVar23);
            } while (!bVar36);
            *piVar23 = iVar7 + -1;
            if (iVar7 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f31e8(puVar34[0x57]);
            }
          }
          *(undefined1 *)(puVar34 + 0x5d) = 1;
        }
        else {
          uVar29 = 1;
          *(undefined1 *)(puVar34 + 0x5d) = 3;
        }
        if ((uVar29 & 1) == 0) {
          local_54c = (uint *)(uVar38 >> 0x20);
          local_548 = ppuVar9;
          local_544 = ppuVar8;
          goto LAB_00bcf9e0;
        }
        local_344 = (uint *)0x0;
        DataMemoryBarrier(0xb);
        if (*(char *)((int)puVar34 + 0x195) != '\0') {
          uVar25 = uVar25 + 1;
        }
        puVar11 = local_348 + 1;
        local_518 = local_518 + 1;
        do {
          uVar21 = *puVar11;
          bVar36 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar36);
        *puVar11 = (uint)puVar34;
        DataMemoryBarrier(0xb);
        if (uVar21 == 0) {
          puVar34[0x62] = 1;
          DataMemoryBarrier(0xb);
          puVar34[0x60] = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(uVar21 + 0x180) == *(int *)(*local_348 + 8) + 8);
          puVar34[0x62] = *(int *)(uVar21 + 0x188) + 1;
          DataMemoryBarrier(0xb);
          puVar34[0x60] = uVar21;
          *(uint **)(uVar21 + 0x184) = puVar34;
        }
        if ((1 < uVar25) || (local_518 == iVar20)) goto LAB_00bcf9cc;
        local_344 = (uint *)0x0;
      } while( true );
    }
    puVar34 = (uint *)param_1[10];
    uVar29 = *puVar34;
    uVar21 = puVar34[1];
    if (uVar29 != *puVar17 || uVar21 != param_1[5]) goto LAB_00bcf38c;
    uVar13 = uVar25 - 1;
    *puVar17 = uVar29 + 1;
    puVar11 = puVar34 + uVar13 * 4;
    uVar33 = *puVar11;
    param_1[5] = uVar21 + (0xfffffffe < uVar29);
    uVar29 = puVar11[1];
    puVar11 = (uint *)puVar11[2];
    param_1[0xb] = uVar13;
    if (uVar13 != 0) {
      uVar14 = uVar25 - 3;
      uVar21 = 0;
      puVar5 = (uint *)puVar34[2];
      if (uVar13 < 2) {
        uVar14 = 0;
      }
      uVar13 = 1;
      *puVar34 = uVar33;
      puVar34[1] = uVar29;
      puVar34[2] = (uint)puVar11;
      if (3 < uVar25) {
        uVar27 = 0;
        do {
          uVar6 = (puVar34 + uVar13 * 4)[1];
          uVar22 = (puVar34 + (uVar13 + 1) * 4)[1];
          bVar36 = puVar34[uVar13 * 4] < puVar34[(uVar13 + 1) * 4];
          uVar21 = uVar13;
          if ((int)(uVar6 - (uVar22 + bVar36)) < 0 ==
              (SBORROW4(uVar6,uVar22) != SBORROW4(uVar6 - uVar22,(uint)bVar36))) {
            uVar21 = uVar13 + 1;
          }
          puVar10 = puVar34 + uVar21 * 4;
          unaff_r4 = (uint *)puVar10[1];
          uVar13 = puVar10[2];
          uVar6 = puVar10[3];
          puVar19 = puVar34 + uVar27 * 4;
          *puVar19 = *puVar10;
          puVar19[1] = (uint)unaff_r4;
          puVar19[2] = uVar13;
          uVar13 = uVar21 << 1 | 1;
          puVar19[3] = uVar6;
          uVar27 = uVar21;
        } while (uVar21 * 2 < uVar14);
      }
      if (uVar13 == uVar25 - 2) {
        puVar10 = puVar34 + uVar13 * 4;
        unaff_r4 = (uint *)*puVar10;
        uVar14 = puVar10[1];
        uVar27 = puVar10[2];
        uVar25 = puVar10[3];
        puVar19 = puVar34 + uVar21 * 4;
        *puVar19 = (uint)unaff_r4;
        puVar19[1] = uVar14;
        puVar19[2] = uVar27;
        puVar19[3] = uVar25;
        *puVar10 = uVar33;
        puVar10[1] = uVar29;
        puVar10[2] = (uint)puVar11;
        uVar21 = uVar13;
LAB_00bcfb08:
        do {
          uVar13 = uVar21 - 1;
          uVar25 = uVar13 >> 1;
          puVar10 = puVar34 + uVar25 * 4;
          uVar14 = puVar10[1];
          if ((int)(uVar29 - (uVar14 + (uVar33 < *puVar10))) < 0 ==
              (SBORROW4(uVar29,uVar14) != SBORROW4(uVar29 - uVar14,(uint)(uVar33 < *puVar10)))) {
            uVar25 = uVar21;
            break;
          }
          uVar6 = puVar10[1];
          uVar27 = puVar10[2];
          uVar14 = puVar10[3];
          unaff_r4 = puVar34 + uVar21 * 4;
          *unaff_r4 = *puVar10;
          unaff_r4[1] = uVar6;
          unaff_r4[2] = uVar27;
          unaff_r4[3] = uVar14;
          uVar21 = uVar25;
        } while (1 < uVar13);
      }
      else {
        puVar10 = puVar34 + uVar21 * 4;
        *puVar10 = uVar33;
        puVar10[1] = uVar29;
        puVar10[2] = (uint)puVar11;
        if (uVar21 != 0) goto LAB_00bcfb08;
        uVar25 = 0;
      }
      puVar34 = puVar34 + uVar25 * 4;
      *puVar34 = uVar33;
      puVar34[1] = uVar29;
      puVar34[2] = (uint)puVar11;
      puVar11 = puVar5;
    }
    goto LAB_00bcfb80;
  }
  piVar23 = (int *)param_1[2];
  if (param_1[3] == 0) {
    puVar34 = (uint *)0x0;
LAB_00bceb74:
    uVar16 = 0;
    uVar25 = (int)puVar34 * 4;
    bVar35 = (uint *)0x3ffffffe < puVar34;
    bVar36 = puVar34 == (uint *)0x3fffffff;
    param_1[2] = 8;
    if (puVar34 < (uint *)0x40000000) {
      bVar35 = 0x7ffffffb < uVar25;
      bVar36 = uVar25 == 0x7ffffffc;
    }
    param_1[3] = 0;
    if (bVar35 && !bVar36) {
LAB_00bceb90:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar16,uVar25);
    }
    unaff_r4 = (uint *)0x0;
    if (uVar25 == 0) {
      puVar30 = (uint *)&DAT_00000004;
      puVar17 = (uint *)0x0;
    }
    else {
      puVar30 = (uint *)thunk_FUN_016d4a50(uVar25);
      puVar17 = puVar34;
      if (puVar30 == (uint *)0x0) {
        uVar16 = 4;
        goto LAB_00bceb90;
      }
    }
    local_4e0 = puVar17;
    local_4dc = puVar30;
    if (puVar34 != (uint *)0x0) {
      puVar11 = (uint *)0x0;
      piVar28 = piVar23;
      do {
        if (*piVar28 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0187c3e4);
        }
        FUN_016dd1aa(&local_1c8,piVar28,0x178);
        *piVar28 = 2;
        if (local_1c8 != (uint *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_0187c290);
        }
        piVar28 = piVar28 + 0x5e;
        puVar30[(int)puVar11] = (uint)local_1c4;
        puVar11 = (uint *)((int)puVar11 + 1);
      } while (puVar34 != puVar11);
      unaff_r4 = puVar34;
    }
    FUN_00bbb838(piVar23,puVar34);
    if (puVar17 != (uint *)&DAT_80000000) {
LAB_00bcfcbc:
      local_520 = param_1 + 2;
      FUN_00bd3480(local_520);
      puVar34 = puVar30 + (int)unaff_r4;
      iVar20 = (int)unaff_r4 * 4;
      iVar7 = 0;
      do {
        if (iVar20 == iVar7) {
          unaff_r4 = (uint *)0x0;
          puVar11 = puVar34;
          goto LAB_00bcfcf8;
        }
        unaff_r4 = *(uint **)((int)puVar30 + iVar7);
        iVar7 = iVar7 + 4;
      } while (unaff_r4 == (uint *)0x0);
      puVar11 = (uint *)((int)puVar30 + iVar7);
LAB_00bcfcf8:
      uVar25 = (int)puVar34 - (int)puVar11;
      if (uVar25 != 0) {
        uVar25 = uVar25 >> 2;
        do {
          uVar25 = uVar25 - 1;
          if ((undefined4 *)*puVar11 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*puVar11)();
          }
          puVar11 = puVar11 + 1;
        } while (uVar25 != 0);
      }
      if (puVar17 != (uint *)0x0) {
        thunk_FUN_016d3fb4(puVar30);
      }
      uVar25 = param_1[0x18];
      piVar23 = (int *)(param_1[0x17] + 4);
      *(undefined1 *)(param_1 + 0x12) = 1;
      for (; uVar25 != 0; uVar25 = uVar25 - 1) {
        if (*piVar23 != 0) {
          thunk_FUN_016d3fb4(piVar23[1]);
        }
        piVar23 = piVar23 + 4;
      }
      if (param_1[0x16] != 0) {
        thunk_FUN_016d3fb4(param_1[0x17]);
      }
      uVar16 = 0;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      *(undefined1 *)((int)param_1 + 0x69) = 0;
      uVar24 = 1;
      goto LAB_00bcfc74;
    }
  }
  else {
    piVar28 = piVar23 + param_1[3] * 0x5e;
    bVar36 = true;
LAB_00bce63c:
    do {
      while( true ) {
        piVar31 = piVar23 + 0x5e;
        if (*piVar23 == 0) break;
        if (*piVar23 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_0035b674,0x22,&DAT_0187d048);
        }
        piVar23 = piVar31;
        if (piVar31 == piVar28) goto LAB_00bce9c0;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)piVar23[0x5d]) {
      case '\0':
        iVar12 = *(int *)piVar23[0x5b];
        *(undefined1 *)(piVar23 + 0x58) = 0;
        iVar20 = piVar23[0x5a];
        iVar7 = piVar23[0x5c];
        piVar23[0x54] = iVar20;
        piVar23[0x55] = iVar7;
        piVar23[0x56] = iVar12;
LAB_00bce6c4:
        piVar2 = (int *)(*(int *)(iVar20 + 0x3bc) + -4);
        iVar20 = *(int *)(iVar20 + 0x3c0) << 2;
        do {
          if (iVar20 == 0) {
            piVar23[2] = 6;
            piVar23[3] = iVar12;
            local_1c8 = (uint *)piVar23[2];
            local_1c4 = (uint *)piVar23[3];
            local_1c0 = (uint *)piVar23[4];
            local_1bc = (uint *)piVar23[5];
            local_1b8 = (uint *)piVar23[6];
            local_1b4 = (uint *)piVar23[7];
            local_1b0 = (uint *)piVar23[8];
            local_1ac = (uint *)piVar23[9];
            iVar20 = FUN_00c78ae8();
            goto LAB_00bce864;
          }
          piVar2 = piVar2 + 1;
          piVar26 = (int *)*piVar2;
          iVar20 = iVar20 + -4;
        } while (piVar26[0xe3] != iVar12);
        do {
          iVar20 = *piVar26;
          bVar35 = (bool)hasExclusiveAccess(piVar26);
        } while (!bVar35);
        *piVar26 = iVar20 + 1;
        if (iVar20 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xbcff50);
          (*pcVar1)();
        }
        iVar12 = *piVar2;
        iVar20 = iVar12 + 0x10;
        piVar23[10] = iVar20;
        piVar23[2] = 7;
        piVar23[3] = iVar12;
        piVar23[0x57] = iVar12;
        piVar23[0xb] = iVar7;
        *(undefined1 *)(piVar23 + 0xe) = 0;
LAB_00bce738:
        piVar23[0xf] = iVar20 + 900;
        piVar23[0x10] = -1;
        piVar23[0xc] = iVar7;
switchD_00bce7f8_caseD_3:
        iVar20 = FUN_00c8101c(piVar23 + 0xf,param_2);
        if (iVar20 != 0) {
          piVar23[0xd] = iVar20;
          if (piVar23[0xf] != 0) {
            FUN_00c8204c(piVar23[0xf],piVar23[0x10],1);
            iVar20 = piVar23[0xd];
          }
          iVar20 = *(int *)(iVar20 + 0x20);
          if (iVar20 != 0) {
            *(undefined2 *)(piVar23 + 0x20) = 0x100;
            piVar23[0x1d] = iVar20 + 8;
            piVar23[0x1e] = piVar23[0xc];
            goto switchD_00bce7f8_caseD_4;
          }
          iVar20 = FUN_00c70f88("hashchain not running",0x15);
          FUN_00c822ec(piVar23[0xd]);
          goto LAB_00bce8c8;
        }
        uVar24 = 3;
LAB_00bce83c:
        *(undefined1 *)(piVar23 + 0xe) = uVar24;
        *(undefined1 *)(piVar23 + 0x58) = 3;
        unaff_r4 = (uint *)&DAT_00000001;
        *(undefined1 *)(piVar23 + 0x5d) = 3;
        bVar36 = false;
        piVar23 = piVar31;
        if (piVar31 == piVar28) goto LAB_00bcfc60;
        goto LAB_00bce63c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018715c0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018715c0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)piVar23[0x58]) {
      case '\0':
        iVar20 = piVar23[0x54];
        iVar7 = piVar23[0x55];
        iVar12 = piVar23[0x56];
        goto LAB_00bce6c4;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01871570);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01871570);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)piVar23[0xe]) {
      case '\0':
        iVar20 = piVar23[10];
        iVar7 = piVar23[0xb];
        goto LAB_00bce738;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018717a0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018717a0);
      case '\x03':
        goto switchD_00bce7f8_caseD_3;
      }
switchD_00bce7f8_caseD_4:
      uVar38 = FUN_00bb9eb0(piVar23 + 0x10,param_2);
      iVar20 = (int)(uVar38 >> 0x20);
      if ((uVar38 & 1) != 0) {
        uVar24 = 4;
        goto LAB_00bce83c;
      }
      FUN_00b9f9bc(piVar23 + 0x10);
      FUN_00c822ec(piVar23[0xd]);
LAB_00bce8c8:
      *(undefined1 *)(piVar23 + 0xe) = 1;
      piVar2 = (int *)piVar23[0x57];
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar2;
        bVar35 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar35);
      *piVar2 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(piVar23[0x57]);
      }
LAB_00bce864:
      *(undefined1 *)(piVar23 + 0x58) = 1;
      FUN_00b9fcc0(piVar23 + 2);
      *(undefined1 *)(piVar23 + 0x5d) = 1;
      unaff_r4 = (uint *)0x0;
      if ((*piVar23 == 1) && ((undefined4 *)piVar23[1] != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)piVar23[1])();
      }
      *piVar23 = 1;
      piVar23[1] = iVar20;
      piVar23 = piVar31;
    } while (piVar31 != piVar28);
LAB_00bce9c0:
    if (bVar36) {
      piVar23 = (int *)param_1[2];
      puVar34 = (uint *)param_1[3];
      goto LAB_00bceb74;
    }
  }
LAB_00bcfc60:
  local_550 = param_1 + 0x12;
  uVar24 = 3;
  *(undefined1 *)local_550 = 3;
  uVar16 = 1;
LAB_00bcfc74:
  *(undefined1 *)((int)param_1 + 0x6a) = uVar24;
  return CONCAT44(unaff_r4,uVar16);
LAB_00bcefe0:
  HintYield();
  goto LAB_00bcefe4;
LAB_00bcf9cc:
  (**(code **)(*piVar28 + 8))(piVar28[1]);
LAB_00bcf9e0:
  FUN_00cf042c(&local_348);
  if ((uVar29 & 1) != 0) goto LAB_00bcfc60;
  if (local_544 == (uint **)*puVar17 && local_548 == (uint **)param_1[5]) goto LAB_00bcfbb8;
  uVar25 = param_1[0xb];
  if (uVar25 == param_1[9]) {
    FUN_00d5ea94(param_1 + 9);
  }
  uVar29 = param_1[10];
  param_1[0xb] = uVar25 + 1;
  puVar32 = (undefined4 *)(uVar29 + uVar25 * 0x10);
  *puVar32 = local_544;
  puVar32[1] = local_548;
  puVar32[2] = local_54c;
  if (uVar25 == 0) {
    uVar21 = 0;
  }
  else {
    do {
      uVar13 = uVar25 - 1;
      uVar21 = uVar13 >> 1;
      puVar34 = (uint *)(uVar29 + uVar21 * 0x10);
      uVar33 = puVar34[1];
      if ((int)((int)local_548 - (uVar33 + (local_544 < (uint **)*puVar34))) < 0 ==
          (SBORROW4((int)local_548,uVar33) !=
          SBORROW4((int)local_548 - uVar33,(uint)(local_544 < (uint **)*puVar34)))) {
        uVar21 = uVar25;
        break;
      }
      uVar14 = puVar34[1];
      unaff_r4 = (uint *)puVar34[2];
      uVar33 = puVar34[3];
      puVar11 = (uint *)(uVar29 + uVar25 * 0x10);
      *puVar11 = *puVar34;
      puVar11[1] = uVar14;
      puVar11[2] = (uint)unaff_r4;
      puVar11[3] = uVar33;
      uVar25 = uVar21;
    } while (1 < uVar13);
  }
  puVar32 = (undefined4 *)(uVar29 + uVar21 * 0x10);
  *puVar32 = local_544;
  puVar32[1] = local_548;
  puVar32[2] = local_54c;
  goto LAB_00bcf38c;
LAB_00bcfbb8:
  *puVar17 = (int)local_544 + 1;
  param_1[5] = (int)local_548 + (uint)((uint **)0xfffffffe < local_544);
  puVar11 = local_54c;
LAB_00bcfb80:
  uVar25 = param_1[0xe];
  if (param_1[0xc] == uVar25) {
    FUN_00d653ec(param_1 + 0xc,uVar25,1,4,4);
    uVar25 = param_1[0xe];
    unaff_r4 = puVar11;
  }
  *(uint **)(param_1[0xd] + uVar25 * 4) = puVar11;
  param_1[0xe] = uVar25 + 1;
  uVar25 = param_1[0xb];
  goto joined_r0x00bcf254;
}

