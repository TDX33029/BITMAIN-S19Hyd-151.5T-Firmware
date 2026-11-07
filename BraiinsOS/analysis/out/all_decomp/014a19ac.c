// FUN_014a19ac @ 014a19ac size=6288 calls_out=64 calls_in=1
// strings: Failed to `Enter::block_on` | reached max `enter` depth | reached max `enter` depth | failed to park thread | not a CurrentThread handle | expected `CurrentThread::Context`there is no reactor running; must be called from the context of a Tokio 1.x runtime

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014a19ac(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auVar4 [8];
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  int extraout_r2;
  int iVar14;
  undefined *extraout_r2_00;
  uint uVar15;
  undefined *puVar16;
  int iVar17;
  int extraout_r3;
  uint uVar18;
  int *piVar19;
  undefined1 *puVar20;
  int *piVar21;
  uint uVar22;
  undefined1 uVar23;
  char cVar24;
  char *pcVar25;
  int *piVar26;
  bool bVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  longlong lVar31;
  undefined4 *local_eb0;
  uint local_eac;
  undefined *local_ea8;
  undefined *puStack_ea4;
  int *piStack_ea0;
  int *local_e9c;
  int *local_e98;
  int *local_e94;
  int *piStack_e90;
  int *piStack_e8c;
  undefined1 auStack_e88 [656];
  undefined4 local_bf8;
  undefined4 local_bf4;
  int *local_968;
  undefined4 local_964;
  undefined1 local_94c;
  undefined4 *local_948;
  int *local_944;
  undefined4 local_940;
  undefined8 local_938;
  undefined *local_930;
  int *local_92c;
  int *local_928;
  int *local_924;
  int *local_920;
  int *local_91c;
  int *local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  int *local_6a8;
  undefined4 local_6a4;
  undefined1 local_68c;
  undefined1 local_688 [8];
  undefined *local_680;
  undefined *local_67c;
  int *local_678;
  int *local_674;
  int *local_670;
  int *local_66c;
  int *local_668;
  int *local_664;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined *local_5d0;
  int *local_3f8;
  undefined4 local_3f4;
  undefined1 local_3dc;
  undefined4 *local_3d8;
  int *piStack_3d4;
  undefined *local_3d0;
  undefined *puStack_3cc;
  int *local_3c8;
  int *local_3c4;
  int *piStack_3c0;
  int *piStack_3bc;
  int *local_3b8;
  int *piStack_3b4;
  undefined4 *local_3b0;
  undefined1 *local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a0;
  undefined4 local_398;
  undefined4 local_390;
  undefined4 local_388;
  undefined4 local_380;
  undefined4 local_378;
  undefined1 local_374;
  undefined4 local_370;
  uint local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined1 local_35c;
  undefined2 local_35b;
  undefined1 local_359;
  undefined2 local_358;
  int *local_148;
  undefined4 local_144;
  int *local_140;
  int *local_13c;
  int **local_138;
  int **local_134;
  undefined1 local_130;
  undefined1 local_12c;
  ushort local_12b;
  int local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int *local_110;
  int *local_10c;
  undefined1 *local_108;
  undefined4 local_104;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined *local_f0;
  int *local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int *local_34;
  uint uStack_30;
  
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar5 = 1;
  puVar5[1] = 1;
  uVar28 = FUN_0164e918();
  local_370 = (undefined4)((ulonglong)uVar28 >> 0x20);
  local_36c = (uint)uVar28;
  local_368 = 0x400;
  if (local_36c < 2) {
    local_36c = 1;
  }
  local_3b8 = (int *)&DAT_3b9aca00;
  local_364 = 0x200;
  local_359 = 0;
  local_35c = 0;
  local_3d8 = (undefined4 *)0x0;
  local_380 = 0;
  local_388 = 0;
  local_390 = 0;
  local_398 = 0;
  local_3a0 = 0;
  local_3a8 = 0;
  local_3d0 = (undefined *)0x0;
  local_360 = 0x3d;
  local_3c8 = (int *)0x0;
  local_358 = 0;
  local_374 = 0;
  local_378 = 0;
  local_3ac = &LAB_018acb38;
  local_35b = 0x101;
  local_3b0 = puVar5;
  FUN_016478d0(local_688,&local_3d8);
  puVar5 = (undefined4 *)((uint)local_688 | 4);
  if ((undefined4 *)local_688._0_4_ == (undefined4 *)0x2) {
    local_bf8 = *puVar5;
    local_bf4 = puVar5[1];
    local_938._0_4_ = (undefined4 *)((uint)(undefined4 *)local_938 & 0xffff0000);
    uVar6 = FUN_014c98b0(&local_938,&local_bf8);
    uVar29 = FUN_0146bfb8(*(undefined4 *)(param_1 + 0x294),uVar6);
    iVar11 = (int)(uVar29 >> 0x20);
    if ((uVar29 & 1) != 0 && iVar11 != 0) {
      FUN_0145d684(iVar11);
    }
    FUN_014a3b0c(&local_3d8);
    FUN_014a3f4c(param_1);
    FUN_0148f59c(*(undefined4 *)(param_1 + 0x290));
    piVar7 = *(int **)(param_1 + 0x290);
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar7;
      bVar27 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar27);
    *piVar7 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a44c0(*(undefined4 *)(param_1 + 0x290));
    }
    return;
  }
  local_ea8 = local_680;
  puStack_ea4 = local_67c;
  piStack_ea0 = local_678;
  local_e9c = local_674;
  local_e98 = local_670;
  local_e94 = local_66c;
  piStack_e90 = local_668;
  piStack_e8c = local_664;
  local_eac = local_688._4_4_;
  local_eb0 = (undefined4 *)local_688._0_4_;
  FUN_014a3b0c(&local_3d8);
  FUN_016dd1aa(auStack_e88,param_1,0x290);
  piVar7 = *(int **)(param_1 + 0x290);
  uVar6 = *(undefined4 *)(param_1 + 0x294);
  FUN_016dd1aa(&local_bf8,param_1,0x290);
  local_94c = 0;
  local_968 = piVar7;
  local_964 = uVar6;
  FUN_01657e94(&local_3d8,local_e98,local_e94);
  if (local_3d8 == (undefined4 *)0x3) {
    local_688._4_4_ = &DAT_0157d360;
    local_688._0_4_ = &DAT_018ad30c;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,local_688,&DAT_018acca0);
  }
  local_948 = local_3d8;
  local_944 = piStack_3d4;
  local_940 = local_3d0;
  if (((uint)local_eb0 & 1) == 0) {
    FUN_016dd1aa(&local_3d8,auStack_e88,0x290);
    local_12c = 0;
    local_148 = piVar7;
    local_144 = uVar6;
    uVar28 = thunk_FUN_016de0ee(0,0x40);
    piVar8 = local_e94;
    piVar7 = local_e98;
    piVar21 = (int *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
    if ((char)piVar21[0xe] != '\x01') {
      if ((char)piVar21[0xe] == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(piVar21,FUN_0148592c);
      *(undefined1 *)(piVar21 + 0xe) = 1;
    }
    if (*(char *)((int)piVar21 + 0x32) != '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                   ,0x183,&DAT_018a5760);
    }
    *(undefined1 *)((int)piVar21 + 0x32) = 0;
    iVar11 = 0x220;
    if (((uint)piVar7 & 1) != 0) {
      iVar11 = 0x158;
    }
    uVar28 = FUN_016470fc((undefined1 *)((int)piVar8 + iVar11));
    if ((piVar21[9] & 1U) == 0) {
      uVar30 = FUN_0164e918();
      if ((uint)uVar30 < 2) {
        uVar30 = CONCAT44((int)((ulonglong)uVar30 >> 0x20),1);
      }
    }
    else {
      uVar30 = CONCAT44(piVar21[10],piVar21[0xb]);
    }
    piVar21[9] = 1;
    *(undefined8 *)(piVar21 + 10) = uVar28;
    if (*piVar21 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018aca90);
    }
    piVar19 = (int *)((uint)&local_eb0 | 4);
    *piVar21 = -1;
    do {
      iVar11 = *piVar8;
      bVar27 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar27);
    *piVar8 = iVar11 + 1;
    lVar31 = CONCAT44(local_938._4_4_,(undefined4 *)local_938);
    if (-1 < iVar11) {
      local_124 = piVar21[1];
      local_120 = piVar21[2];
      piVar21[1] = (uint)(((uint)piVar7 & 1) != 0);
      piVar21[2] = (int)piVar8;
      local_11c = piVar21[3] + 1;
      *piVar21 = *piVar21 + 1;
      if (0xfffffffe < (uint)piVar21[3]) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("reached max `enter` depth",0x33,&DAT_018aca80);
      }
      piVar21[3] = local_11c;
      if (((uint)local_e98 & 1) != 0) {
        uVar6 = 0x35;
        puVar16 = &DAT_018accf0;
        pcVar25 = "not a CurrentThread handle";
LAB_014a2ab8:
        local_118 = (undefined4)((ulonglong)uVar30 >> 0x20);
        local_114 = (undefined4)uVar30;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(pcVar25,uVar6,puVar16);
      }
      local_118 = (int)((ulonglong)uVar30 >> 0x20);
      local_114 = (int)uVar30;
      uVar28 = thunk_FUN_016de0ee(local_11c,0x1c4,0x278);
      puVar12 = (undefined1 *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
      piVar7 = (int *)((int)uVar28 + extraout_r2);
      puVar20 = local_688;
LAB_014a211c:
      piVar26 = local_e94;
      piVar8 = local_e9c;
      DataMemoryBarrier(0xb);
      do {
        bVar27 = (bool)hasExclusiveAccess(&local_e9c);
      } while (!bVar27);
      local_e9c = (int *)0x0;
      DataMemoryBarrier(0xb);
      if (piVar8 == (int *)0x0) {
        DataMemoryBarrier(0xb);
        local_10c = (int *)(local_eac >> 2);
        local_f4 = 0;
        local_f8 = 0;
        local_100 = 0;
        local_104 = 0;
        local_108 = (undefined1 *)0x0;
        piVar8 = piVar7;
        local_110 = piVar19;
        if ((char)piVar7[1] != '\x01') {
          piVar8 = (int *)FUN_01655dc8(piVar7);
          if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("Failed to `Enter::block_on`",0x1b,&local_40,&DAT_018ac53c,&DAT_018a6aac);
          }
        }
        piVar8 = (int *)*piVar8;
        do {
          iVar11 = *piVar8;
          bVar27 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar27);
        *piVar8 = iVar11 + 1;
        lVar31 = (longlong)local_938;
        if (-1 < iVar11) {
          local_38 = &DAT_018ac55c;
          local_34 = piVar8 + 2;
LAB_014a21c8:
          cVar24 = (char)piVar21[0xe];
          if (cVar24 == '\x01') {
LAB_014a21f8:
            cVar24 = (char)piVar21[0xc];
            puVar20 = (undefined1 *)(uint)*(byte *)((int)piVar21 + 0x31);
            *(undefined2 *)(piVar21 + 0xc) = 0x8001;
          }
          else if (cVar24 != '\x02') {
            FUN_015e8e6c(piVar21,FUN_0148592c);
            *(undefined1 *)(piVar21 + 0xe) = 1;
            goto LAB_014a21f8;
          }
          iVar11 = FUN_0163c044(&local_110,&local_38);
          uVar22 = 0;
          if (iVar11 != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(local_12c) {
            case 1:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7ca0(&DAT_018a6adc);
            case 2:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7cc0(&DAT_018a6adc);
            case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(local_130) {
              case 0:
                goto LAB_014a2384;
              case 1:
                    /* WARNING: Subroutine does not return */
                FUN_00fb7ca0(&DAT_018a6a6c);
              case 2:
                    /* WARNING: Subroutine does not return */
                FUN_00fb7cc0(&DAT_018a6a6c);
              case 3:
                goto LAB_014a2388;
              }
            }
            local_12b = 0x101;
            FUN_016dd1aa(local_688,&local_3d8,0x290);
            uVar29 = FUN_01461548(local_688);
            if ((uVar29 & 1) == 0) {
              local_12b = local_12b & 0xff;
              local_140 = (int *)(uVar29 >> 0x20);
              uVar29 = FUN_0146bfb8(local_144,0);
              iVar11 = (int)(uVar29 >> 0x20);
              if ((uVar29 & 1) == 0) {
                local_12b = local_12b & 0xff00;
                local_13c = local_148;
LAB_014a2520:
                do {
                  local_130 = 0;
                  local_138 = &local_13c;
LAB_014a2384:
                  local_134 = local_138;
LAB_014a2388:
                  FUN_0148d7c0(local_688,*local_134,&local_38);
                  auVar4 = local_688;
                  local_130 = 1;
                  if (local_688 == (undefined1  [8])0x4) {
                    local_130 = 3;
                    uVar22 = 2;
                    uVar23 = 3;
                    goto LAB_014a23c0;
                  }
                  FUN_016dd1aa(&local_f0,&local_680,0xb0);
                  puVar16 = local_5d0;
                  if (auVar4 == (undefined1  [8])0x3) goto code_r0x014a241c;
                  local_938 = auVar4;
                  FUN_016dd1aa(&local_930,&local_f0,0xb0);
                  local_40 = puVar16;
                  lVar31 = FUN_014671ac(local_140,&local_938);
                  local_664 = (int *)((uint)local_664 & 0xffffff00);
                  local_680 = puVar16;
                  local_688 = (undefined1  [8])lVar31;
                  piVar26 = (int *)FUN_014a5f14(local_688,&DAT_018a6aec);
                  if (*piVar26 == 0xcc) {
                    DataMemoryBarrier(0xb);
                    bVar27 = (bool)hasExclusiveAccess(piVar26);
                    if (bVar27) {
                      *piVar26 = 0x84;
                      goto LAB_014a2520;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  (**(code **)(piVar26[2] + 0x10))();
                } while( true );
              }
              if (iVar11 != 0) {
                FUN_0145d684(iVar11);
              }
              DataMemoryBarrier(0xb);
              do {
                iVar11 = *local_140;
                bVar27 = (bool)hasExclusiveAccess(local_140);
              } while (!bVar27);
              *local_140 = iVar11 + -1;
              if (iVar11 == 1) {
                DataMemoryBarrier(0xb);
                FUN_014a4788(local_140);
              }
            }
            else {
              local_12b = local_12b & 0xff;
              uVar29 = FUN_0146bfb8(local_144);
              iVar11 = (int)(uVar29 >> 0x20);
              if ((uVar29 & 1) != 0 && iVar11 != 0) {
                FUN_0145d684(iVar11);
              }
            }
            FUN_0148f59c(local_148);
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *local_148;
              bVar27 = (bool)hasExclusiveAccess(local_148);
            } while (!bVar27);
            *local_148 = iVar11 + -1;
            uVar23 = 1;
            if (iVar11 != 1) goto LAB_014a237c;
            DataMemoryBarrier(0xb);
            FUN_014a44c0(local_148);
            uVar22 = 1;
            goto LAB_014a23c0;
          }
          goto LAB_014a23c4;
        }
        goto LAB_014a3324;
      }
      do {
        iVar11 = *local_e94;
        bVar27 = (bool)hasExclusiveAccess(local_e94);
      } while (!bVar27);
      *local_e94 = iVar11 + 1;
      lVar31 = (longlong)local_938;
      if (-1 < iVar11) {
        local_91c = (int *)0x0;
        local_920 = (int *)&DAT_00000004;
        local_924 = (int *)0x0;
        local_928 = (int *)0x0;
        local_918 = piVar19;
        uVar28 = thunk_FUN_016de0ee();
        local_938._4_4_ = (uint)((ulonglong)uVar28 >> 0x20);
        uVar22 = *(uint *)((int)uVar28 + extraout_r3);
        local_930 = (undefined *)0x0;
        local_938._0_4_ = (undefined4 *)0x0;
        lVar31 = (ulonglong)local_938._4_4_ << 0x20;
        local_92c = (int *)extraout_r2_00;
        if (uVar22 < 3) {
          uVar28 = FUN_015f7ed0();
        }
        else {
          piVar7 = (int *)(uVar22 - 8);
          do {
            iVar11 = *piVar7;
            iVar13 = iVar11 + 1;
            uVar28 = CONCAT44(iVar13,piVar7);
            bVar27 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar27);
          *piVar7 = iVar13;
          if (iVar11 < 0) goto LAB_014a3324;
        }
        piVar7 = (int *)uVar28;
        FUN_0164c1c0(piVar26 + 0x20,(int)((ulonglong)uVar28 >> 0x20),piVar7[2],piVar7[3]);
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar7;
          bVar27 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar27);
        *piVar7 = iVar11 + -1;
        if (iVar11 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015e92c0(piVar7);
        }
        local_688._0_4_ = (undefined4 *)local_938;
        local_688._4_4_ = local_938._4_4_;
        local_680 = local_930;
        local_67c = (undefined *)local_92c;
        local_678 = local_928;
        local_674 = local_924;
        local_670 = local_920;
        local_66c = local_91c;
        local_668 = local_918;
        if (((uint)(undefined4 *)local_938 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("expected `CurrentThread::Context`there is no reactor running, must be called from the context of a Tokio 1.x runtime"
                       ,0x43,&DAT_018acbf0);
        }
        if (local_930 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb715c(&DAT_018acc20);
        }
        local_680 = (undefined *)0xffffffff;
        local_67c = (undefined *)0x0;
        if (local_92c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("core missing",0xc,&DAT_018acc00);
        }
        local_680 = (undefined *)0x0;
        if ((char)piVar21[0xe] != '\x01') {
          if ((char)piVar21[0xe] == '\x02') {
            FUN_014c8020(local_92c);
                    /* WARNING: Subroutine does not return */
            FUN_015f853c(&DAT_018ae900);
          }
          FUN_015e8e6c(piVar21,FUN_0148592c);
          *(undefined1 *)(piVar21 + 0xe) = 1;
        }
        iVar11 = piVar21[8];
        piVar21[8] = (int)local_688;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(local_688._4_4_ + 0x17c) = 1;
        local_3c = local_688._4_4_ + 0x80;
        local_40 = &DAT_018ad14c;
        FUN_015f3b0c(&local_f0,1);
        *(undefined **)((int)local_92c + 0x28) = local_f0;
        *(int **)((int)local_92c + 0x2c) = local_ec;
        *(uint *)((int)local_92c + 0x30) = local_e8;
        piVar7 = local_92c;
        do {
          DataMemoryBarrier(0xb);
          pcVar25 = (char *)(local_688._4_4_ + 0x17c);
          do {
            cVar24 = *pcVar25;
            bVar27 = (bool)hasExclusiveAccess(pcVar25);
          } while (!bVar27);
          *pcVar25 = '\0';
          DataMemoryBarrier(0xb);
          if (cVar24 != '\0') {
            if (local_680 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb715c(&DAT_018acbe0);
            }
            local_680 = (undefined *)0xffffffff;
            if (local_67c == (undefined *)0x0) {
              local_680 = (undefined *)0x0;
            }
            else {
              FUN_014c8020();
              local_680 = local_680 + 1;
            }
            cVar24 = (char)piVar21[0xe];
            local_67c = (undefined *)piVar7;
            if (cVar24 == '\x01') {
LAB_014a2c50:
              cVar24 = (char)piVar21[0xc];
              piVar7 = (int *)(uint)*(byte *)((int)piVar21 + 0x31);
              *(undefined2 *)(piVar21 + 0xc) = 0x8001;
            }
            else if (cVar24 != '\x02') {
              FUN_015e8e6c(piVar21,FUN_0148592c);
              *(undefined1 *)(piVar21 + 0xe) = 1;
              goto LAB_014a2c50;
            }
            iVar13 = FUN_01486574(&local_3d8,&local_40);
            if (cVar24 != '\x02') {
              if ((char)piVar21[0xe] != '\x01') {
                if ((char)piVar21[0xe] == '\x02') goto LAB_014a2cb8;
                FUN_015e8e6c(piVar21,FUN_01655ec4);
                *(undefined1 *)(piVar21 + 0xe) = 1;
              }
              *(char *)((int)piVar21 + 0x31) = (char)piVar7;
              *(char *)(piVar21 + 0xc) = cVar24;
            }
LAB_014a2cb8:
            piVar7 = (int *)local_67c;
            if (local_680 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb715c(&DAT_018acbd0);
            }
            local_680 = (undefined *)0xffffffff;
            bVar27 = local_67c == (undefined *)0x0;
            local_67c = (undefined *)0x0;
            if (bVar27) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("core missing",0xc,&DAT_018acbc0);
            }
            local_680 = (undefined *)0x0;
            if (iVar13 == 0) {
              piVar21[8] = iVar11;
              bVar27 = true;
LAB_014a3094:
              local_680 = (undefined *)0xffffffff;
              if (local_67c == (undefined *)0x0) {
                local_680 = (undefined *)0x0;
              }
              else {
                FUN_014c8020();
                local_680 = local_680 + 1;
              }
              local_67c = (undefined *)piVar7;
              FUN_0164cf50(local_688);
              FUN_014d3d80(local_688);
              uVar30 = CONCAT44(local_118,local_114);
              if (bVar27) goto LAB_014a30e4;
              uVar6 = 0xab;
              puVar16 = &DAT_018a6a9c;
              pcVar25 = 
              "a spawned task panicked and the runtime is configured to shut down on unhandled panic"
              ;
              goto LAB_014a2ab8;
            }
          }
          for (iVar13 = *(int *)(local_688._4_4_ + 0x144); iVar13 != 0; iVar13 = iVar13 + -1) {
            if (*(char *)((int)piVar7 + 100) != '\0') {
              bVar27 = false;
              piVar21[8] = iVar11;
              if (local_680 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb715c(&DAT_018acc10);
              }
              goto LAB_014a3094;
            }
            *(int *)((int)piVar7 + 0x38) = *(int *)((int)piVar7 + 0x38) + 1;
            iVar14 = FUN_0164dafc(piVar7,local_688._4_4_ + 0x80);
            if (iVar14 == 0) {
              puVar12 = *(undefined1 **)((int)piVar7 + 0x30);
              if (puVar12 != &DAT_3b9aca00) {
                piVar19 = *(int **)((int)piVar7 + 0x28);
                piVar8 = *(int **)((int)piVar7 + 0x2c);
                FUN_015f3b0c(&local_f0,1);
                local_38 = local_f0;
                local_34 = local_ec;
                uStack_30 = local_e8;
                local_110 = piVar19;
                local_10c = piVar8;
                local_108 = puVar12;
                FUN_015f3c24(&local_f0,&local_38,&local_110);
                uVar10 = (uint)((ulonglong)local_e8 * 1000000000);
                lVar31 = (ulonglong)local_e4 * 1000000000 +
                         ((ulonglong)local_e8 * 1000000000 >> 0x20);
                uVar15 = (uint)lVar31;
                uVar18 = (uint)((ulonglong)lVar31 >> 0x20);
                uVar22 = uVar10 + local_e0;
                bVar27 = CARRY4(uVar15,(uint)CARRY4(uVar10,local_e0));
                iVar13 = uVar15 + CARRY4(uVar10,local_e0);
                uVar10 = *(uint *)((int)piVar7 + 0x10);
                if (uVar18 + bVar27 != 0 || CARRY4(uVar18,(uint)bVar27)) {
                  uVar22 = 0xffffffff;
                  iVar13 = -1;
                }
                iVar13 = *(int *)((int)piVar7 + 0x14) + iVar13 + (uint)CARRY4(uVar10,uVar22);
                uVar22 = uVar10 + uVar22;
                if (((uint)local_f0 & 1) != 0) {
                  iVar13 = *(int *)((int)piVar7 + 0x14);
                  uVar22 = uVar10;
                }
                *(uint *)((int)piVar7 + 0x10) = uVar22;
                *(int *)((int)piVar7 + 0x14) = iVar13;
              }
              if ((int *)0x7ffffffe < local_678) {
                FUN_00fb71b0(&DAT_018ad0ec);
                lVar31 = CONCAT44(local_938._4_4_,(undefined4 *)local_938);
                goto LAB_014a3324;
              }
              if (local_66c == (int *)0x0) {
                piVar7 = (int *)FUN_0164df60(puVar5,piVar7,local_688._4_4_ + 0x80);
              }
              else {
                piVar7 = (int *)FUN_0164dbd8(puVar5,piVar7);
              }
              FUN_015f3b0c(&local_f0,1);
              goto LAB_014a305c;
            }
            if (local_680 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb715c(&DAT_018acbe0);
            }
            local_680 = (undefined *)0xffffffff;
            if (local_67c == (undefined *)0x0) {
              local_680 = (undefined *)0x0;
            }
            else {
              FUN_014c8020();
              local_680 = local_680 + 1;
            }
            cVar24 = (char)piVar21[0xe];
            local_67c = (undefined *)piVar7;
            if (cVar24 == '\x01') {
LAB_014a2da4:
              cVar24 = (char)piVar21[0xc];
              piVar7 = (int *)(uint)*(byte *)((int)piVar21 + 0x31);
              *(undefined2 *)(piVar21 + 0xc) = 0x8001;
            }
            else if (cVar24 != '\x02') {
              FUN_015e8e6c(piVar21,FUN_0148592c);
              *(undefined1 *)(piVar21 + 0xe) = 1;
              goto LAB_014a2da4;
            }
            (*(code *)**(undefined4 **)(iVar14 + 8))(iVar14);
            if (cVar24 != '\x02') {
              if ((char)piVar21[0xe] != '\x01') {
                if ((char)piVar21[0xe] == '\x02') goto LAB_014a2e04;
                FUN_015e8e6c(piVar21,FUN_01655ec4);
                *(undefined1 *)(piVar21 + 0xe) = 1;
              }
              *(char *)((int)piVar21 + 0x31) = (char)piVar7;
              *(char *)(piVar21 + 0xc) = cVar24;
            }
LAB_014a2e04:
            piVar7 = (int *)local_67c;
            if (local_680 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb715c(&DAT_018acbd0);
            }
            local_680 = (undefined *)0xffffffff;
            bVar27 = local_67c == (undefined *)0x0;
            local_67c = (undefined *)0x0;
            if (bVar27) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("core missing",0xc,&DAT_018acbc0);
            }
            local_680 = (undefined *)0x0;
          }
          puVar12 = *(undefined1 **)((int)piVar7 + 0x30);
          if (puVar12 != &DAT_3b9aca00) {
            piVar19 = *(int **)((int)piVar7 + 0x28);
            piVar8 = *(int **)((int)piVar7 + 0x2c);
            FUN_015f3b0c(&local_f0,1);
            local_38 = local_f0;
            local_34 = local_ec;
            uStack_30 = local_e8;
            local_110 = piVar19;
            local_10c = piVar8;
            local_108 = puVar12;
            FUN_015f3c24(&local_f0,&local_38,&local_110);
            uVar10 = (uint)((ulonglong)local_e8 * 1000000000);
            lVar31 = (ulonglong)local_e4 * 1000000000 + ((ulonglong)local_e8 * 1000000000 >> 0x20);
            uVar15 = (uint)lVar31;
            uVar18 = (uint)((ulonglong)lVar31 >> 0x20);
            uVar22 = uVar10 + local_e0;
            bVar27 = CARRY4(uVar15,(uint)CARRY4(uVar10,local_e0));
            iVar13 = uVar15 + CARRY4(uVar10,local_e0);
            uVar10 = *(uint *)((int)piVar7 + 0x10);
            if (uVar18 + bVar27 != 0 || CARRY4(uVar18,(uint)bVar27)) {
              uVar22 = 0xffffffff;
              iVar13 = -1;
            }
            iVar13 = *(int *)((int)piVar7 + 0x14) + iVar13 + (uint)CARRY4(uVar10,uVar22);
            uVar22 = uVar10 + uVar22;
            if (((uint)local_f0 & 1) != 0) {
              iVar13 = *(int *)((int)piVar7 + 0x14);
              uVar22 = uVar10;
            }
            *(uint *)((int)piVar7 + 0x10) = uVar22;
            *(int *)((int)piVar7 + 0x14) = iVar13;
          }
          piVar7 = (int *)FUN_0164dbd8(puVar5,piVar7,local_688._4_4_ + 0x80);
          FUN_015f3b0c(&local_f0,1);
LAB_014a305c:
          *(undefined **)((int)piVar7 + 0x28) = local_f0;
          *(int **)((int)piVar7 + 0x2c) = local_ec;
          *(uint *)((int)piVar7 + 0x30) = local_e8;
        } while( true );
      }
    }
  }
  else {
    FUN_016dd1aa(&local_938,auStack_e88,0x290);
    piVar21 = local_e94;
    piVar8 = local_e98;
    local_68c = 0;
    uVar28 = thunk_FUN_016de0ee(0,0x40);
    piVar19 = (int *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
    local_6a8 = piVar7;
    local_6a4 = uVar6;
    if ((char)piVar19[0xe] != '\x01') {
      if ((char)piVar19[0xe] == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(piVar19,FUN_0148592c);
      *(undefined1 *)(piVar19 + 0xe) = 1;
    }
    if (*(char *)((int)piVar19 + 0x32) != '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                   ,0x183,&DAT_018a6a7c);
    }
    *(undefined1 *)((int)piVar19 + 0x32) = 1;
    iVar11 = 0x220;
    if (((uint)piVar8 & 1) != 0) {
      iVar11 = 0x158;
    }
    uVar28 = FUN_016470fc((undefined1 *)((int)piVar21 + iVar11));
    if ((piVar19[9] & 1U) == 0) {
      uVar30 = FUN_0164e918();
      if ((uint)uVar30 < 2) {
        uVar30 = CONCAT44((int)((ulonglong)uVar30 >> 0x20),1);
      }
    }
    else {
      uVar30 = CONCAT44(piVar19[10],piVar19[0xb]);
    }
    piVar19[9] = 1;
    *(undefined8 *)(piVar19 + 10) = uVar28;
    if (*piVar19 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018aca90);
    }
    *piVar19 = -1;
    do {
      iVar11 = *piVar21;
      bVar27 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar27);
    *piVar21 = iVar11 + 1;
    lVar31 = CONCAT44(local_938._4_4_,(undefined4 *)local_938);
    if (-1 < iVar11) {
      local_f0 = (undefined *)piVar19[1];
      piVar26 = (int *)piVar19[2];
      piVar19[1] = (uint)(((uint)piVar8 & 1) != 0);
      piVar19[2] = (int)piVar21;
      local_e8 = piVar19[3] + 1;
      *piVar19 = *piVar19 + 1;
      if (0xfffffffe < (uint)piVar19[3]) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("reached max `enter` depth",0x33,&DAT_018aca80);
      }
      piVar19[3] = local_e8;
      local_ec = piVar26;
      local_e4 = (uint)((ulonglong)uVar30 >> 0x20);
      local_e0 = (uint)uVar30;
      FUN_016dd1aa(local_688,auStack_e88,0x290);
      local_3dc = 0;
      local_3f4 = uVar6;
      uVar28 = thunk_FUN_016de0ee(0,0x278);
      piVar21 = (int *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
      piVar8 = piVar21;
      local_3f8 = piVar7;
      if (((char)piVar21[1] != '\x01') &&
         (piVar8 = (int *)FUN_01655dc8(piVar21), piVar8 == (int *)0x0)) {
        FUN_01485e00(local_688);
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("failed to park thread",0x15,&local_40,&DAT_018ac53c,&DAT_018a6a8c);
      }
      piVar8 = (int *)*piVar8;
      do {
        iVar11 = *piVar8;
        bVar27 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar27);
      *piVar8 = iVar11 + 1;
      lVar31 = CONCAT44(local_938._4_4_,(undefined4 *)local_938);
      if (-1 < iVar11) {
        local_110 = (int *)&DAT_018ac55c;
        local_10c = piVar8 + 2;
        FUN_016dd1aa(&local_3d8,local_688,0x2b0);
        do {
          cVar24 = (char)piVar19[0xe];
          if (cVar24 == '\x01') {
LAB_014a1e9c:
            cVar24 = (char)piVar19[0xc];
            piVar26 = (int *)(uint)*(byte *)((int)piVar19 + 0x31);
            *(undefined2 *)(piVar19 + 0xc) = 0x8001;
          }
          else if (cVar24 != '\x02') {
            FUN_015e8e6c(piVar19,FUN_0148592c);
            *(undefined1 *)(piVar19 + 0xe) = 1;
            goto LAB_014a1e9c;
          }
          iVar11 = FUN_01486574(&local_3d8,&local_110);
          if (cVar24 != '\x02') {
            if ((char)piVar19[0xe] != '\x01') {
              if ((char)piVar19[0xe] == '\x02') goto joined_r0x014a1f04;
              FUN_015e8e6c(piVar19,FUN_01655ec4);
              *(undefined1 *)(piVar19 + 0xe) = 1;
            }
            *(char *)((int)piVar19 + 0x31) = (char)piVar26;
            *(char *)(piVar19 + 0xc) = cVar24;
          }
joined_r0x014a1f04:
          if (iVar11 == 0) {
            FUN_01485e00(&local_3d8);
            FUN_0163a054(piVar8 + 2);
            FUN_00eb5a38(&local_f0);
            goto LAB_014a30f8;
          }
          piVar7 = piVar21;
          if (((char)piVar21[1] != '\x01') &&
             (piVar7 = (int *)FUN_01655dc8(piVar21), piVar7 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_018ac53c,&DAT_018ac54c);
          }
          FUN_01639cac(*piVar7 + 8);
        } while( true );
      }
    }
  }
LAB_014a3324:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x14a3324);
  local_938 = (undefined1  [8])lVar31;
  (*pcVar1)();
code_r0x014a241c:
  FUN_0148f59c(local_13c);
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *local_13c;
    bVar27 = (bool)hasExclusiveAccess(local_13c);
  } while (!bVar27);
  *local_13c = iVar11 + -1;
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a44c0(local_13c);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *local_140;
    bVar27 = (bool)hasExclusiveAccess(local_140);
  } while (!bVar27);
  *local_140 = iVar11 + -1;
  uVar23 = 1;
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a4788(local_140);
    uVar22 = 1;
  }
  else {
LAB_014a237c:
    uVar23 = 1;
    uVar22 = 1;
  }
LAB_014a23c0:
  local_12c = uVar23;
LAB_014a23c4:
  if (cVar24 != '\x02') {
    if ((char)piVar21[0xe] != '\x01') {
      if ((char)piVar21[0xe] == '\x02') goto joined_r0x014a23e8;
      FUN_015e8e6c(piVar21,FUN_01655ec4);
      *(undefined1 *)(piVar21 + 0xe) = 1;
    }
    *(char *)((int)piVar21 + 0x31) = (char)puVar20;
    *(char *)(piVar21 + 0xc) = cVar24;
  }
joined_r0x014a23e8:
  if (uVar22 != 2) goto LAB_014a27f0;
  piVar26 = piVar7;
  if ((char)piVar7[1] != '\x01') {
    piVar26 = (int *)FUN_01655dc8(piVar7);
    if (piVar26 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_018ac53c,&DAT_018ac54c);
    }
  }
  iVar11 = *piVar26;
  piVar26 = (int *)(iVar11 + 8);
  if (*piVar26 == 2) {
    DataMemoryBarrier(0xb);
    do {
      bVar27 = (bool)hasExclusiveAccess(piVar26);
      if (bVar27) {
        *piVar26 = 0;
        DataMemoryBarrier(0xb);
        goto LAB_014a21c8;
      }
    } while (*piVar26 == 2);
  }
  ClearExclusiveLocal();
  pcVar25 = (char *)(iVar11 + 0x10);
  DataMemoryBarrier(0xb);
  if (*pcVar25 == '\0') {
    bVar27 = (bool)hasExclusiveAccess(pcVar25);
    if (bVar27) {
      *pcVar25 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_014a25d8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar25);
LAB_014a25d8:
  FUN_0128236c(pcVar25);
  iVar13 = *piVar26;
  if (iVar13 == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = true;
      bVar27 = (bool)hasExclusiveAccess(piVar26);
      if (bVar27) {
        *piVar26 = 1;
        goto LAB_014a2614;
      }
      iVar13 = *piVar26;
    } while (iVar13 == 0);
  }
  bVar2 = false;
  ClearExclusiveLocal();
LAB_014a2614:
  DataMemoryBarrier(0xb);
  if (bVar2) {
    do {
      FUN_0127fd30(iVar11 + 0xc,pcVar25);
      if (*piVar26 == 2) {
        DataMemoryBarrier(0xb);
        do {
          bVar27 = (bool)hasExclusiveAccess(piVar26);
          if (bVar27) {
            *piVar26 = 0;
            goto LAB_014a2690;
          }
        } while (*piVar26 == 2);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    } while( true );
  }
  if (iVar13 != 2) {
    local_688._0_4_ = &local_938;
    local_688._4_4_ = &LAB_00fac484;
    local_938._0_4_ = (undefined4 *)iVar13;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057f434,local_688,&DAT_018ac58c);
  }
  DataMemoryBarrier(0xb);
  do {
    bVar27 = (bool)hasExclusiveAccess(piVar26);
  } while (!bVar27);
  *piVar26 = 0;
LAB_014a2690:
  DataMemoryBarrier(0xb);
  bVar27 = true;
  local_688._0_4_ = 0;
  puVar9 = puVar12;
  unique0x1000155a = CONCAT44(local_680,local_688._4_4_);
  if (puVar12[0x34] != '\x01') {
    puVar9 = (undefined1 *)FUN_01284e64();
    unique0x10001562 = CONCAT44(local_680,local_688._4_4_);
    if (puVar9 == (undefined1 *)0x0) {
      FUN_01283788(&local_938);
      FUN_012824e8(local_688);
      local_688._0_4_ = 1;
      bVar27 = false;
      local_67c = local_930;
      local_678 = local_92c;
      local_674 = local_928;
      local_670 = local_924;
      local_66c = local_920;
      local_668 = local_91c;
      local_664 = local_918;
      local_660 = uStack_914;
      uStack_65c = uStack_910;
      uStack_658 = uStack_90c;
      uStack_654 = uStack_908;
      puVar9 = local_688 + 4;
      unique0x1000156a = (longlong)local_938;
    }
  }
  iVar14 = *(int *)(puVar9 + 0x20);
  iVar17 = *(int *)(puVar9 + 0x24);
  iVar11 = iVar17 * -4;
  puVar20 = (undefined1 *)(iVar14 - 4);
  iVar13 = iVar17;
  do {
    if (iVar11 == 0) goto LAB_014a26e8;
    iVar3 = -iVar11;
    iVar11 = iVar11 + 4;
    iVar13 = iVar13 + -1;
  } while (*(char **)(puVar20 + iVar3) != pcVar25);
  *(undefined4 *)(iVar14 + iVar13 * 4) = *(undefined4 *)(iVar14 + (iVar17 + -1) * 4);
  *(int *)(puVar9 + 0x24) = iVar17 + -1;
LAB_014a26e8:
  lVar31 = unique0x10000bf0;
  if (!bVar27) {
    do {
      iVar11 = DAT_018dd954 + -1;
      bVar27 = (bool)hasExclusiveAccess(0x18dd954);
    } while (!bVar27);
    DAT_018dd954 = iVar11;
    if (local_668 != (int *)0x0) {
      thunk_FUN_016d3fb4(local_664);
    }
    lVar31 = unique0x10000c78;
    if (local_670 != (int *)0x3) {
      if (local_670 == (int *)0x0) {
        FUN_012848c0(local_66c);
        lVar31 = stack0xfffff97c;
      }
      else if (local_670 == (int *)&DAT_00000001) {
        FUN_01283d28();
        lVar31 = stack0xfffff97c;
      }
      else {
        FUN_01284358();
        lVar31 = stack0xfffff97c;
      }
    }
  }
  local_680 = (undefined *)((ulonglong)lVar31 >> 0x20);
  local_688._4_4_ = SUB84(lVar31,0);
  if (*pcVar25 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar27 = (bool)hasExclusiveAccess(pcVar25);
      if (bVar27) {
        *pcVar25 = '\0';
        goto LAB_014a21c8;
      }
    } while (*pcVar25 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar25);
  goto LAB_014a21c8;
LAB_014a27f0:
  FUN_0163a054(piVar8 + 2);
  if ((uVar22 & 1) == 0) {
    FUN_0163bdc0(&local_110);
    if (local_100 != 0) {
      (**(code **)(local_100 + 0xc))(local_fc);
    }
    goto LAB_014a211c;
  }
  FUN_0163bdc0(&local_110);
  if (local_100 != 0) {
    (**(code **)(local_100 + 0xc))(local_fc);
  }
LAB_014a30e4:
  FUN_00eb5a38(&local_124);
  FUN_014d3ad8(&local_3d8);
LAB_014a30f8:
  FUN_01639074(&local_948,local_940);
  if (local_948 != (undefined4 *)0x2) {
    if (local_948 == (undefined4 *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *local_944;
        bVar27 = (bool)hasExclusiveAccess(local_944);
      } while (!bVar27);
      *local_944 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(local_944);
      }
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *local_944;
        bVar27 = (bool)hasExclusiveAccess(local_944);
      } while (!bVar27);
      *local_944 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(local_944);
      }
    }
  }
  local_3d8 = local_eb0;
  piStack_3d4 = (int *)local_eac;
  local_3d0 = local_ea8;
  puStack_3cc = puStack_ea4;
  local_3c8 = piStack_ea0;
  local_3c4 = local_e9c;
  piStack_3c0 = local_e98;
  piStack_3bc = local_e94;
  local_3b8 = piStack_e90;
  piStack_3b4 = piStack_e8c;
  FUN_014a3e24();
  return;
}

