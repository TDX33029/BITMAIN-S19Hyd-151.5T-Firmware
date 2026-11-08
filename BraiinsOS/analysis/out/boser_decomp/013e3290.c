// FUN_013e3290 @ 013e3290 size=3072 calls_out=28 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013e3290(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  char cVar13;
  short sVar14;
  short *******pppppppsVar15;
  uint uVar16;
  uint uVar17;
  short ******ppppppsVar18;
  undefined *puVar19;
  byte bVar20;
  undefined4 uVar21;
  undefined *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  byte bVar26;
  int iVar27;
  undefined4 *puVar28;
  int iVar29;
  int iVar30;
  short *******pppppppsVar31;
  short *******pppppppsVar32;
  uint uVar33;
  ulonglong uVar34;
  short *******local_220;
  short *******local_21c;
  uint local_214;
  undefined4 local_200;
  int local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 *local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  undefined2 local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  short *******local_1c0;
  undefined1 *puStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  short *******local_1b0;
  short *******local_1ac;
  undefined1 *local_1a8;
  uint local_1a4;
  undefined4 local_1a0;
  short *******local_198;
  short *******local_194;
  undefined1 *puStack_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 local_154;
  ushort local_152;
  undefined2 local_150;
  undefined1 auStack_14e [154];
  uint local_b4;
  short *******local_b0;
  short *******local_ac;
  undefined1 *local_a8;
  short ******local_a0;
  short *******local_9c;
  undefined4 local_96;
  short local_92;
  short *******local_90;
  short ******local_8c;
  undefined4 *local_88;
  short *******local_80;
  short *******local_7c;
  undefined4 *local_78;
  short *******local_70;
  code *local_6c;
  short *local_68;
  code *local_64;
  undefined1 local_30;
  
  local_1fc = thunk_FUN_01be5118(0x200);
  if (local_1fc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x200);
  }
  local_1f8 = 0;
  local_1e0 = 0;
  local_1ec = 0;
  local_1f4 = 0;
  local_1dc = 1;
  local_1f0 = 4;
  local_1d8 = *(int *)(param_2 + 0x10);
  local_1d4 = *(int *)(param_2 + 0x14) * 0xe8 + local_1d8;
  local_1d0 = *(int *)(param_2 + 0x1c);
  local_200 = 0x200;
  local_1cc = *(int *)(param_2 + 0x20) * 0xe8 + local_1d0;
  local_1c8 = *(int *)(param_2 + 0x28);
  iVar25 = *(int *)(param_2 + 4);
  iVar27 = *(int *)(param_2 + 8);
  iVar30 = *(int *)(param_2 + 0x3c);
  local_1e4 = 0xffff;
  local_1e8 = &local_200;
  iVar23 = *(int *)(param_2 + 0x34);
  local_1c4 = *(int *)(param_2 + 0x2c) * 0xe8 + local_1c8;
  iVar24 = *(int *)(param_2 + 0x38);
  pppppppsVar15 = (short *******)FUN_013d7a70(local_1e8,0xffff,0,0xc);
  if (pppppppsVar15 != (short *******)0x0) goto LAB_013e3368;
  local_1e0 = 0xc;
  if (iVar27 == 0) {
    local_214 = 0;
  }
  else {
    iVar29 = iVar27 * 0x4c + iVar25;
    pppppppsVar32 = (short *******)0x0;
    local_214 = (iVar27 - 1U & 0x3fffffff) + 1;
    do {
      iVar27 = local_1e0;
      uVar8 = local_1ec;
      pppppppsVar15 = (short *******)FUN_013c80e8(iVar25,&local_1f4,local_1dc._1_1_);
      if (pppppppsVar15 != (short *******)0x0) {
LAB_013e3470:
        local_70 = pppppppsVar15;
        if (*(short *)pppppppsVar15 == 0xe) {
          local_1e0 = iVar27;
          FUN_013de470(&local_1f4,uVar8);
          local_198 = (short *******)CONCAT22(local_198._2_2_,0x14);
          local_194 = pppppppsVar32;
          pppppppsVar15 = (short *******)FUN_013e649c(&local_198);
          FUN_013f476c(&local_70);
        }
        goto LAB_013e3368;
      }
      uVar16 = FUN_013d9758(*(undefined2 *)(iVar25 + 0x48),*(undefined2 *)(iVar25 + 0x4a));
      iVar10 = local_1e0;
      local_198 = (short *******)
                  CONCAT22(local_198._2_2_,
                           (ushort)((uVar16 & 0xff) << 8) | (ushort)(uVar16 >> 8) & 0xff);
      pppppppsVar15 = (short *******)FUN_013d79b4(local_1e8,local_1e4,local_1e0,&local_198,2);
      if (pppppppsVar15 != (short *******)0x0) goto LAB_013e3470;
      local_1e0 = iVar10 + 2;
      pppppppsVar15 =
           (short *******)
           FUN_013d3adc(*(undefined2 *)(iVar25 + 0x44),*(undefined2 *)(iVar25 + 0x46),&local_1f4);
      if (pppppppsVar15 != (short *******)0x0) goto LAB_013e3470;
      iVar25 = iVar25 + 0x4c;
      pppppppsVar32 = (short *******)((int)pppppppsVar32 + 1);
    } while (iVar25 != iVar29);
  }
  uVar34 = FUN_013de4b8(&local_1d8,&local_1f4);
  pppppppsVar15 = (short *******)(uVar34 >> 0x20);
  if ((uVar34 & 1) == 0) {
    iVar25 = 0;
  }
  else {
    local_198 = pppppppsVar15;
    if (*(short *)pppppppsVar15 != 0x14) goto LAB_013e3368;
    pppppppsVar15 = (short *******)pppppppsVar15[1];
    FUN_013f476c(&local_198);
    iVar25 = 1;
  }
  uVar34 = FUN_013de4b8(&local_1d0,&local_1f4);
  local_21c = (short *******)(uVar34 >> 0x20);
  if ((uVar34 & 1) != 0) {
    local_198 = local_21c;
    if (*(short *)local_21c == 0x14) {
      local_21c = (short *******)local_21c[1];
      FUN_013f476c(&local_198);
      iVar27 = 1;
      goto LAB_013e3548;
    }
LAB_013e3590:
    pppppppsVar15 = local_198;
    goto LAB_013e3368;
  }
  iVar27 = 0;
LAB_013e3548:
  uVar34 = FUN_013de4b8(&local_1c8,&local_1f4);
  local_220 = (short *******)(uVar34 >> 0x20);
  if ((uVar34 & 1) == 0) {
    bVar12 = 0;
  }
  else {
    local_198 = local_220;
    if (*(short *)local_220 != 0x14) goto LAB_013e3590;
    local_220 = (short *******)local_220[1];
    FUN_013f476c(&local_198);
    bVar12 = 1;
  }
  if (iVar30 == -0x80000000) {
LAB_013e3608:
    uVar6 = *(undefined2 *)(param_2 + 0x52);
    sVar14 = *(short *)(param_2 + 0x50);
    ppppppsVar18 = *(short *******)(param_2 + 0x50);
    uVar16 = FUN_013e5f44(sVar14,uVar6);
    if ((uVar16 >> 4 & 0xff) != 0) {
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4e59c - 1 < 2 ||
           ((DAT_01d4e59c != 0 && (cVar13 = FUN_01aaafa8(&DAT_01d4e594), cVar13 != '\0')))) &&
          (iVar30 = FUN_01aaa278(DAT_01d4e594), iVar30 != 0)))) {
        local_88 = (undefined4 *)(DAT_01d4e594 + 0x1c);
        local_194 = *(short ********)(DAT_01d4e594 + 0x20);
        if (local_194 == (short *******)0x0) {
LAB_013e3e98:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf3040);
        }
        local_18c = *(uint *)(DAT_01d4e594 + 0x28);
        puStack_190 = *(undefined1 **)(DAT_01d4e594 + 0x24);
        local_188 = 0;
        local_96._0_2_ = *(short *)(param_2 + 0x56);
        local_7c = (short *******)&local_70;
        local_68 = (short *)&local_96;
        local_70 = &local_a0;
        local_1ac = (short *******)&local_80;
        local_1b0 = (short *******)&local_198;
        local_8c = (short ******)&DAT_00000001;
        local_90 = (short *******)&local_1b0;
        local_80 = (short *******)&DAT_00575194;
        local_64 = FUN_012fcf18;
        local_6c = FUN_013e6460;
        local_1a8 = &DAT_01d2ea4c;
        local_198 = (short *******)*local_88;
        local_a0 = ppppppsVar18;
        FUN_013e3198(&local_90);
      }
      else {
        iVar30 = DAT_01d4e594;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_ac = *(short ********)(DAT_01d4e594 + 0x14);
          local_a8 = *(undefined1 **)(DAT_01d4e594 + 0x18);
          local_b0 = (short *******)0x2;
          DataMemoryBarrier(0xb);
          puVar28 = DAT_01d4edc8;
          pcVar9 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar28 = &DAT_01cfc5e0;
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar29 = (*(code *)puVar28[3])(pcVar9,&local_b0);
          if (iVar29 != 0) {
            local_78 = (undefined4 *)(DAT_01d4e594 + 0x1c);
            local_194 = *(short ********)(DAT_01d4e594 + 0x20);
            if (local_194 == (short *******)0x0) goto LAB_013e3e98;
            local_18c = *(uint *)(DAT_01d4e594 + 0x28);
            local_188 = 0;
            puStack_190 = *(undefined1 **)(DAT_01d4e594 + 0x24);
            local_92 = *(short *)(param_2 + 0x56);
            local_9c = (short *******)&local_70;
            local_68 = &local_92;
            local_70 = (short *******)&local_96;
            local_8c = (short ******)&local_a0;
            local_64 = FUN_012fcf18;
            local_90 = (short *******)&local_198;
            local_7c = (short *******)&DAT_00000001;
            local_80 = (short *******)&local_90;
            local_a0 = (short ******)&DAT_00575194;
            local_6c = FUN_013e6460;
            local_88 = (undefined4 *)&DAT_01d2ea4c;
            local_1b0 = local_b0;
            local_1ac = local_ac;
            local_1a8 = local_a8;
            local_198 = (short *******)*local_78;
            local_96._0_2_ = sVar14;
            local_96._2_2_ = uVar6;
            FUN_01aaa328(iVar30,pcVar9,puVar28[4],&local_1b0,&local_80);
          }
        }
      }
    }
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0x4a);
    uVar6 = *(undefined2 *)(param_2 + 0x48);
    uVar8 = *(undefined4 *)(param_2 + 0x4c);
    FUN_013de7b8(&local_198,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
    local_18c = CONCAT22(CONCAT11(local_18c._3_1_,uVar1),uVar6);
    local_1c0 = local_194;
    puStack_1bc = puStack_190;
    uStack_1b8 = local_18c;
    uStack_1b4 = uVar8;
    local_188 = uVar8;
    if (local_198 == (short *******)&DAT_80000000) goto LAB_013e3608;
    local_1b0 = local_198;
    local_1ac = local_194;
    local_1a8 = puStack_190;
    local_1a4 = local_18c;
    local_1a0 = uVar8;
    uVar17 = FUN_013e5f44(*(undefined2 *)(param_2 + 0x50),*(undefined2 *)(param_2 + 0x52));
    uVar11 = local_1a4;
    local_1a0._0_3_ = CONCAT12((char)(uVar17 >> 4),(ushort)local_1a0);
    uVar16 = local_1a4 >> 0x10;
    uVar33 = (uint)local_1a0._3_1_;
    FUN_01bed93e(&local_70,0,0x40);
    local_30 = 1;
    FUN_013de7b8(&local_80,local_1ac,local_1a8);
    FUN_01bed4e2((uint)&local_90 | 2,&local_80,0xc);
    FUN_01bed4e2(&local_198,&local_70,0x44);
    FUN_01bed4e2(auStack_14e,&local_90,0xe);
    iVar30 = local_1e0;
    uVar8 = local_1ec;
    local_b4 = uVar33 << 0x10 | ((uVar17 & 0xffff) >> 4) << 0x18 |
               uVar11 & 0x7fff | (uVar16 & 0xff) << 0xf;
    local_150 = 0x10;
    local_152 = (ushort)local_1a0;
    if ((ushort)local_1a0 < 0x201) {
      local_152 = 0x200;
    }
    local_154 = 5;
    pppppppsVar32 = (short *******)FUN_013cb240(&local_198,&local_1f4);
    if (pppppppsVar32 == (short *******)0x0) {
      ppppppsVar18 = (short ******)0x1;
      bVar26 = 0;
    }
    else {
      sVar14 = *(short *)pppppppsVar32;
      local_90 = pppppppsVar32;
      if (sVar14 == 0xe) {
        local_1e0 = iVar30;
        FUN_013de470(&local_1f4,uVar8);
        local_70 = (short *******)CONCAT22(local_70._2_2_,0x14);
        local_6c = (code *)0x0;
        pppppppsVar32 = (short *******)FUN_013e649c(&local_70);
        FUN_013f476c(&local_90);
        sVar14 = *(short *)pppppppsVar32;
      }
      local_70 = pppppppsVar32;
      if (sVar14 != 0x14) {
        FUN_0077e7e4(&local_198);
        FUN_013d1214(&local_1b0);
LAB_013e3c68:
        pppppppsVar15 = pppppppsVar32;
        goto LAB_013e3368;
      }
      ppppppsVar18 = pppppppsVar32[1];
      FUN_013f476c(&local_70);
      bVar26 = 1;
    }
    FUN_0077e7e4(&local_198);
    FUN_013d1214(&local_1b0);
    local_220 = (short *******)((int)ppppppsVar18 + (int)local_220);
    bVar12 = bVar26 | bVar12;
  }
  if (iVar24 == 0) {
    bVar26 = 0;
    ppppppsVar18 = (short ******)0x0;
  }
  else {
    iVar30 = iVar24 * 0xe8;
    ppppppsVar18 = (short ******)((iVar24 - 1U & 0x1fffffff) + 1);
    pppppppsVar31 = (short *******)0x0;
    do {
      iVar24 = local_1e0;
      uVar8 = local_1ec;
      pppppppsVar32 = (short *******)FUN_013cb240(iVar23,&local_1f4);
      if (pppppppsVar32 != (short *******)0x0) {
        sVar14 = *(short *)pppppppsVar32;
        local_70 = pppppppsVar32;
        if (sVar14 == 0xe) {
          local_1e0 = iVar24;
          FUN_013de470(&local_1f4,uVar8);
          local_198 = (short *******)CONCAT22(local_198._2_2_,0x14);
          local_194 = pppppppsVar31;
          pppppppsVar32 = (short *******)FUN_013e649c(&local_198);
          FUN_013f476c(&local_70);
          sVar14 = *(short *)pppppppsVar32;
        }
        local_198 = pppppppsVar32;
        if (sVar14 != 0x14) goto LAB_013e3c68;
        ppppppsVar18 = pppppppsVar32[1];
        FUN_013f476c(&local_198);
        bVar26 = 1;
        goto LAB_013e3b3c;
      }
      iVar23 = iVar23 + 0xe8;
      pppppppsVar31 = (short *******)((int)pppppppsVar31 + 1);
      iVar30 = iVar30 + -0xe8;
    } while (iVar30 != 0);
    bVar26 = 0;
  }
LAB_013e3b3c:
  iVar23 = local_1e0;
  uVar8 = local_1e4;
  puVar28 = local_1e8;
  if (local_214 < 0x10000) {
    if ((uint)pppppppsVar15 >> 0x10 == 0) {
      uVar21 = 0x3e;
      if ((uint)local_21c >> 0x10 == 0) {
        if ((undefined1 *)((int)ppppppsVar18 + (int)local_220) < (undefined1 *)0x10000) {
          if (local_1e0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00474a39,0x33,&DAT_01cf2f48);
          }
          uVar16 = *(uint *)(param_2 + 0x50);
          pppppppsVar31 = *(short ********)(param_2 + 0x54);
          cVar13 = *(char *)(param_2 + 0x66);
          cVar2 = *(char *)(param_2 + 0x65);
          cVar3 = *(char *)(param_2 + 100);
          bVar4 = *(byte *)(param_2 + 0x62);
          bVar5 = *(byte *)(param_2 + 99);
          uVar7 = *(ushort *)(param_2 + 0x60);
          local_1e0 = 0;
          local_198 = (short *******)
                      CONCAT22(local_198._2_2_,
                               (ushort)(((uint)pppppppsVar31 >> 0x10 & 0xff) << 8) |
                               (ushort)(byte)((uint)pppppppsVar31 >> 0x18));
          pppppppsVar32 = (short *******)FUN_013d79b4(local_1e8,local_1e4,0,&local_198,2);
          if (pppppppsVar32 == (short *******)0x0) {
            local_1e0 = 2;
            pppppppsVar32 = pppppppsVar31;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((uint)pppppppsVar31 & 0xff) {
            case 1:
              pppppppsVar32 = (short *******)&DAT_00000010;
              break;
            case 2:
              pppppppsVar32 = (short *******)&DAT_00000020;
              break;
            case 3:
              pppppppsVar32 = (short *******)&DAT_00000028;
              break;
            case 4:
              pppppppsVar32 = (short *******)((uint)pppppppsVar31 >> 5 & 0xf8);
            }
            bVar20 = (byte)(uVar7 >> 6) & 0xfc | (char)uVar7 << 7 | (byte)pppppppsVar32;
            if (((iVar25 != iVar27 || (bVar4 & 1) != 0) || iVar25 != 0) || (bool)(bVar26 | bVar12))
            {
              bVar20 = bVar20 | 2;
            }
            local_198._0_1_ = bVar20 | bVar5;
            pppppppsVar32 = (short *******)FUN_013d79b4(puVar28,uVar8,2,&local_198,1);
            if (pppppppsVar32 == (short *******)0x0) {
              local_1e0 = 3;
              bVar12 = FUN_013e5f44(uVar16,uVar16 >> 0x10);
              local_198 = (short *******)
                          CONCAT31(local_198._1_3_,
                                   cVar2 << 5 | cVar3 << 7 | cVar13 << 4 | bVar12 & 0xf);
              pppppppsVar32 = (short *******)FUN_013d79b4(puVar28,uVar8,3,&local_198,1);
              if (pppppppsVar32 == (short *******)0x0) {
                local_1e0 = 4;
                pppppppsVar32 = (short *******)FUN_013e1dc0(&local_1f4,local_214);
                if (((pppppppsVar32 == (short *******)0x0) &&
                    (pppppppsVar32 = (short *******)FUN_013e1dc0(&local_1f4,pppppppsVar15),
                    pppppppsVar32 == (short *******)0x0)) &&
                   (pppppppsVar32 = (short *******)FUN_013e1dc0(&local_1f4,local_21c),
                   pppppppsVar32 == (short *******)0x0)) {
                  pppppppsVar32 =
                       (short *******)
                       FUN_013e1dc0(&local_1f4,(undefined1 *)((int)ppppppsVar18 + (int)local_220));
                }
              }
            }
          }
          local_198 = pppppppsVar32;
          if (local_1e0 != 0xc) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00474a6c,0x46,&DAT_01cf2f58);
          }
          pppppppsVar15 = pppppppsVar32;
          local_1e0 = iVar23;
          if (pppppppsVar32 == (short *******)0x0) {
            pppppppsVar15 = pppppppsVar31;
            if ((uVar16 & 0xffff) != 0x15) {
              FUN_013e3ff8(&local_1f4);
              *param_1 = local_200;
              param_1[1] = local_1fc;
              param_1[2] = local_1f8;
              return;
            }
          }
LAB_013e3368:
          *param_1 = 0x80000000;
          param_1[1] = pppppppsVar15;
          FUN_013e3ff8(&local_1f4);
          FUN_019bb7e0(local_200,local_1fc);
          return;
        }
        puVar22 = &DAT_01cf3080;
        puVar19 = &DAT_00474d88;
      }
      else {
        puVar22 = &DAT_01cf3070;
        puVar19 = &DAT_00474d4a;
      }
    }
    else {
      uVar21 = 0x3a;
      puVar22 = &DAT_01cf3060;
      puVar19 = &DAT_00474d10;
    }
  }
  else {
    uVar21 = 0x39;
    puVar22 = &DAT_01cf3050;
    puVar19 = &DAT_00474cd7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec(puVar19,uVar21,puVar22);
}

