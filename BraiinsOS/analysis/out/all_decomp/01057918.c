// FUN_01057918 @ 01057918 size=3004 calls_out=22 calls_in=2
// strings: assertion failed: counts.query_count <= u16::MAX as usize | assertion failed: counts.answer_count <= u16::MAX as usize | assertion failed: counts.nameserver_count <= u16::MAX as usize | assertion failed: counts.additional_count <= u16::MAX as usizemore than one edns record present | assertion failed: place.start_index < current_index | assertion failed: (self.offset - place.start_index) == place.size_of()

/* WARNING: Removing unreachable block (ram,0x01058804) */

void FUN_01057918(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined **ppuVar5;
  byte bVar6;
  char cVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined4 uVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  undefined **ppuVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  byte bVar21;
  int iVar22;
  undefined *puVar23;
  byte bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  ulonglong uVar29;
  ushort *local_210;
  ushort *local_20c;
  uint local_200;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  uint local_1e4;
  int *local_1e0;
  undefined4 local_1dc;
  int local_1d8;
  undefined2 local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  ushort **local_1b8;
  undefined **ppuStack_1b4;
  undefined *puStack_1b0;
  ushort **local_1a8;
  undefined **local_1a4;
  undefined *local_1a0;
  ushort local_19c;
  byte local_19a;
  ushort local_198;
  undefined1 local_196;
  byte local_195;
  ushort *local_190;
  int local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  short local_16c;
  int local_168;
  undefined4 local_164;
  undefined2 local_14c;
  ushort local_14a;
  undefined2 local_148;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined2 local_13a;
  uint local_ac;
  ushort local_a6;
  ushort local_a4;
  undefined2 local_a2;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 local_9a;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined *local_80;
  ushort **local_7c;
  undefined4 uStack_78;
  ushort *local_70;
  code *local_6c;
  undefined2 *local_68;
  code *local_64;
  undefined1 local_30;
  
  local_1f4 = thunk_FUN_016d4a50(0x200);
  if (local_1f4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x200);
  }
  local_1d4 = 1;
  local_1e8 = 4;
  local_1d0 = *(int *)(param_2 + 0x10);
  local_1f0 = 0;
  local_1d8 = 0;
  local_1e4 = 0;
  local_1ec = 0;
  local_1cc = *(int *)(param_2 + 0x14) * 0xe8 + local_1d0;
  local_1f8 = 0x200;
  iVar15 = *(int *)(param_2 + 4);
  local_1c8 = *(int *)(param_2 + 0x1c);
  local_1c4 = *(int *)(param_2 + 0x20) * 0xe8 + local_1c8;
  iVar22 = *(int *)(param_2 + 8);
  iVar26 = *(int *)(param_2 + 0x34);
  iVar27 = *(int *)(param_2 + 0x38);
  local_1c0 = *(int *)(param_2 + 0x28);
  local_1bc = *(int *)(param_2 + 0x2c) * 0xe8 + local_1c0;
  iVar19 = *(int *)(param_2 + 0x3c);
  local_1dc = 0xffff;
  local_1e0 = &local_1f8;
  puVar8 = (ushort *)FUN_0105dedc(local_1e0,0xffff,0,0xc);
  uVar16 = local_1e4;
  if (puVar8 != (ushort *)0x0) goto LAB_010579dc;
  iVar25 = local_1d8 + 0xc;
  local_1d8 = iVar25;
  if (iVar22 != 0) {
    puVar8 = (ushort *)FUN_01039bf4(iVar15,&local_1ec,local_1d4._1_1_);
    if (puVar8 == (ushort *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01057ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01057abc + *(int *)(&DAT_01057abc + (uint)*(ushort *)(iVar15 + 0x48) * 4)))();
      return;
    }
    if (*puVar8 == 0xe) {
      local_1d8 = iVar25;
      if (uVar16 <= local_1e4) {
        piVar18 = (int *)(local_1e8 + uVar16 * 0x10 + 4);
        iVar15 = local_1e4 - uVar16;
        local_1e4 = uVar16;
        for (; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (*piVar18 != 0) {
            thunk_FUN_016d3fb4(piVar18[1]);
          }
          piVar18 = piVar18 + 4;
        }
      }
      local_18c = 0;
      local_190 = (ushort *)CONCAT22(local_190._2_2_,0x14);
      puVar9 = (ushort *)thunk_FUN_016d4a50(0x44);
      if (puVar9 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x44);
      }
      FUN_016dd1aa(puVar9,&local_190,0x44);
      FUN_01036ca0(puVar8);
      thunk_FUN_016d3fb4(puVar8);
      puVar8 = puVar9;
    }
    else {
    }
    goto LAB_010579dc;
  }
  uVar29 = FUN_01055928(&local_1d0,&local_1ec);
  puVar8 = (ushort *)(uVar29 >> 0x20);
  if ((uVar29 & 1) == 0) {
    iVar15 = 0;
  }
  else {
    local_190 = puVar8;
    if (*puVar8 != 0x14) goto LAB_010579dc;
    puVar8 = *(ushort **)(puVar8 + 2);
    FUN_006495dc(&local_190);
    iVar15 = 1;
  }
  uVar29 = FUN_01055928(&local_1c8,&local_1ec);
  local_20c = (ushort *)(uVar29 >> 0x20);
  if ((uVar29 & 1) != 0) {
    local_190 = local_20c;
    if (*local_20c == 0x14) {
      local_20c = *(ushort **)(local_20c + 2);
      FUN_006495dc(&local_190);
      iVar22 = 1;
      goto LAB_01057e5c;
    }
LAB_01058074:
    puVar8 = local_190;
    goto LAB_010579dc;
  }
  iVar22 = 0;
LAB_01057e5c:
  uVar29 = FUN_01055928(&local_1c0,&local_1ec);
  local_210 = (ushort *)(uVar29 >> 0x20);
  if ((uVar29 & 1) == 0) {
    bVar6 = 0;
    if (iVar19 != -0x80000000) goto LAB_01057eac;
LAB_0105808c:
    uVar14 = *(ushort *)(param_2 + 0x52);
    uVar3 = *(ushort *)(param_2 + 0x50);
    local_200 = (uint)uVar3;
    uStack_a0 = (ushort ***)CONCAT22(uStack_a0._2_2_,(undefined2)uStack_a0);
    uStack_98 = (undefined4 *)CONCAT22(uStack_98._2_2_,(undefined2)uStack_98);
    if (10 < local_200) {
      if ((local_200 - 0xb < 9) || ((uVar14 & 0xff0) != 0)) {
        if ((DAT_018d9130 < 4) &&
           (((DAT_018da4b4 - 1 < 2 ||
             ((DAT_018da4b4 != 0 && (cVar7 = FUN_0169ac90(&DAT_018da4ac), cVar7 != '\0')))) &&
            (iVar19 = FUN_016949d8(DAT_018da4ac), iVar19 != 0)))) {
          if (*(int *)(DAT_018da4ac + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01883928);
          }
          uStack_98 = (undefined4 *)(DAT_018da4ac + 0x1c);
          local_190 = (ushort *)*uStack_98;
          local_180 = 0;
          local_18c = *(int *)(DAT_018da4ac + 0x20);
          local_188 = *(undefined4 *)(DAT_018da4ac + 0x24);
          uStack_184 = *(undefined4 *)(DAT_018da4ac + 0x28);
          local_a2 = *(undefined2 *)(param_2 + 0x56);
          local_7c = &local_70;
          local_68 = &local_a2;
          local_70 = &local_a6;
          local_1a4 = &local_80;
          local_1a8 = &local_190;
          uStack_9c = 1;
          local_9a = 0;
          uStack_a0 = &local_1a8;
          local_80 = &DAT_005705b4;
          local_64 = FUN_00fac370;
          local_6c = FUN_01056938;
          local_1a0 = &DAT_018abb78;
          local_a6 = uVar3;
          local_a4 = uVar14;
          FUN_01057500(&uStack_a0);
        }
        else {
          uStack_a0 = (ushort ***)CONCAT22(uStack_a0._2_2_,(undefined2)uStack_a0);
          uStack_98 = (undefined4 *)CONCAT22(uStack_98._2_2_,(undefined2)uStack_98);
        }
      }
      else {
        local_200 = 0x14;
        uStack_a0 = (ushort ***)CONCAT22(uStack_a0._2_2_,(undefined2)uStack_a0);
        uStack_98 = (undefined4 *)CONCAT22(uStack_98._2_2_,(undefined2)uStack_98);
      }
    }
  }
  else {
    local_190 = local_210;
    if (*local_210 != 0x14) goto LAB_01058074;
    local_210 = *(ushort **)(local_210 + 2);
    FUN_006495dc(&local_190);
    bVar6 = 1;
    if (iVar19 == -0x80000000) goto LAB_0105808c;
LAB_01057eac:
    uVar14 = *(ushort *)(param_2 + 0x4c);
    bVar24 = *(byte *)(param_2 + 0x4a);
    uVar3 = *(ushort *)(param_2 + 0x48);
    bVar1 = *(byte *)(param_2 + 0x4f);
    FUN_01055fc0(&local_1b8,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
    uVar16 = 0;
    local_1a8 = local_1b8;
    local_1a4 = ppuStack_1b4;
    local_1a0 = puStack_1b0;
    local_200 = (uint)*(ushort *)(param_2 + 0x50);
    if (10 < local_200) {
      if (local_200 - 0xb < 9) {
        uVar16 = 1;
      }
      else {
        uVar16 = (*(ushort *)(param_2 + 0x52) & 0xfff) >> 4;
      }
    }
    local_196 = (undefined1)uVar16;
    local_19c = uVar3;
    local_19a = bVar24;
    local_198 = uVar14;
    local_195 = bVar1;
    FUN_016dd606(&local_70,0,0x40);
    puVar23 = local_1a0;
    ppuVar5 = local_1a4;
    local_30 = 1;
    FUN_01055fc0(&local_80,local_1a4,local_1a0);
    uStack_a0._2_2_ = SUB42(local_80,0);
    uStack_9c = (undefined2)((uint)local_80 >> 0x10);
    local_9a = SUB42(local_7c,0);
    uStack_98._0_2_ = (undefined2)((uint)local_7c >> 0x10);
    uStack_98._2_2_ = (undefined2)uStack_78;
    uStack_94 = (undefined2)((uint)uStack_78 >> 0x10);
    FUN_016dd1aa(&local_190,&local_70,0x44);
    iVar19 = local_1d8;
    uVar4 = local_1e4;
    if (uVar14 < 0x201) {
      uVar14 = 0x200;
    }
    local_14c = 5;
    local_146 = CONCAT22(uStack_a0._2_2_,(undefined2)uStack_a0);
    local_ac = (uint)bVar1 << 0x10 | uVar16 << 0x18 | uVar3 & 0x7fff | (uint)bVar24 << 0xf;
    local_13a = uStack_94;
    local_142 = CONCAT22(local_9a,uStack_9c);
    local_13e = CONCAT22(uStack_98._2_2_,(undefined2)uStack_98);
    local_148 = 0x10;
    local_14a = uVar14;
    puVar9 = (ushort *)FUN_0104c840(&local_190,&local_1ec);
    if (puVar9 == (ushort *)0x0) {
      iVar19 = 1;
      bVar24 = 0;
    }
    else {
      uVar14 = *puVar9;
      if (uVar14 == 0xe) {
        local_1d8 = iVar19;
        if (uVar4 <= local_1e4) {
          piVar18 = (int *)(local_1e8 + uVar4 * 0x10 + 4);
          iVar19 = local_1e4 - uVar4;
          local_1e4 = uVar4;
          for (; iVar19 != 0; iVar19 = iVar19 + -1) {
            if (*piVar18 != 0) {
              thunk_FUN_016d3fb4(piVar18[1]);
            }
            piVar18 = piVar18 + 4;
          }
        }
        local_70 = (ushort *)CONCAT22(local_70._2_2_,0x14);
        local_6c = (code *)0x0;
        puVar10 = (ushort *)thunk_FUN_016d4a50(0x44);
        if (puVar10 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x44);
        }
        FUN_016dd1aa(puVar10,&local_70,0x44);
        FUN_01036ca0(puVar9);
        thunk_FUN_016d3fb4(puVar9);
        uVar14 = *puVar10;
        puVar9 = puVar10;
      }
      local_70 = puVar9;
      if (uVar14 != 0x14) {
        FUN_010574a8(&local_190);
        FUN_010575d0(&local_1a8);
        puVar8 = puVar9;
        goto LAB_010579dc;
      }
      iVar19 = *(int *)(puVar9 + 2);
      FUN_006495dc(&local_70);
      bVar24 = 1;
    }
    bVar28 = ((uint)local_190 & 0xffff) != 0;
    iVar25 = 0;
    if (bVar28) {
      iVar25 = local_18c;
    }
    if (bVar28 && iVar25 != 0) {
      thunk_FUN_016d3fb4(local_188);
    }
    iVar25 = 0;
    if (local_16c != 0) {
      iVar25 = local_168;
    }
    if (local_16c != 0 && iVar25 != 0) {
      thunk_FUN_016d3fb4(local_164);
    }
    FUN_007963b0(&local_148);
    if (puVar23 != (undefined *)0x0) {
      ppuVar17 = ppuVar5 + 2;
      do {
        puVar11 = (undefined *)0x0;
        if (*(char *)(ppuVar17 + -1) != '\0') {
          puVar11 = *ppuVar17;
        }
        if (*(char *)(ppuVar17 + -1) != '\0' && puVar11 != (undefined *)0x0) {
          thunk_FUN_016d3fb4(ppuVar17[1]);
        }
        ppuVar17 = ppuVar17 + 6;
        puVar23 = puVar23 + -1;
      } while (puVar23 != (undefined *)0x0);
    }
    if (local_1a8 != (ushort **)0x0) {
      thunk_FUN_016d3fb4(ppuVar5);
    }
    local_210 = (ushort *)(iVar19 + (int)local_210);
    bVar6 = bVar24 | bVar6;
    uStack_a0 = (ushort ***)CONCAT22(uStack_a0._2_2_,(undefined2)uStack_a0);
    uStack_98 = (undefined4 *)CONCAT22(uStack_98._2_2_,(undefined2)uStack_98);
  }
  iVar25 = 0;
  bVar24 = 0;
  iVar19 = iVar25;
  if (iVar27 != 0) {
    iVar20 = iVar27 * 0xe8;
    iVar19 = (iVar27 - 1U & 0x1fffffff) + 1;
LAB_0105837c:
    iVar27 = local_1d8;
    uVar16 = local_1e4;
    puVar9 = (ushort *)FUN_0104c840(iVar26,&local_1ec);
    if (puVar9 == (ushort *)0x0) goto code_r0x01058398;
    uVar14 = *puVar9;
    if (uVar14 == 0xe) {
      local_1d8 = iVar27;
      if (uVar16 <= local_1e4) {
        piVar18 = (int *)(local_1e8 + uVar16 * 0x10 + 4);
        iVar19 = local_1e4 - uVar16;
        local_1e4 = uVar16;
        for (; iVar19 != 0; iVar19 = iVar19 + -1) {
          if (*piVar18 != 0) {
            thunk_FUN_016d3fb4(piVar18[1]);
          }
          piVar18 = piVar18 + 4;
        }
      }
      local_190 = (ushort *)CONCAT22(local_190._2_2_,0x14);
      local_18c = iVar25;
      puVar10 = (ushort *)thunk_FUN_016d4a50(0x44);
      if (puVar10 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x44);
      }
      FUN_016dd1aa(puVar10,&local_190,0x44);
      FUN_01036ca0(puVar9);
      thunk_FUN_016d3fb4(puVar9);
      uVar14 = *puVar10;
      puVar9 = puVar10;
    }
    local_190 = puVar9;
    if (uVar14 != 0x14) {
      puVar8 = puVar9;
      goto LAB_010579dc;
    }
    iVar19 = *(int *)(puVar9 + 2);
    FUN_006495dc(&local_190);
    bVar24 = 1;
  }
LAB_01058438:
  if ((uint)puVar8 >> 0x10 == 0) {
    uVar13 = 0x3e;
    if ((uint)local_20c >> 0x10 == 0) {
      if ((uint)(iVar19 + (int)local_210) < 0x10000) {
        if (local_1d8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: place.start_index < current_index",0x33,&DAT_018835a8);
        }
        bVar1 = *(byte *)(param_2 + 0x62);
        bVar2 = *(byte *)(param_2 + 99);
        uVar14 = *(ushort *)(param_2 + 0x60);
        uVar16 = *(uint *)(param_2 + 0x54);
        local_1d8 = 0;
        local_190 = (ushort *)
                    CONCAT22(local_190._2_2_,
                             (ushort)((uVar16 >> 0x10 & 0xff) << 8) | (ushort)(byte)(uVar16 >> 0x18)
                            );
        puVar8 = (ushort *)FUN_0105dce0(local_1e0,local_1dc,0,&local_190,2);
        if (puVar8 == (ushort *)0x0) {
          local_1d8 = local_1d8 + 2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar16 & 0xff) {
          case 1:
            uVar16 = 0x10;
            break;
          case 2:
            uVar16 = 0x20;
            break;
          case 3:
            uVar16 = 0x28;
            break;
          case 4:
            uVar16 = uVar16 >> 5 & 0xf8;
          }
          bVar21 = (byte)(uVar14 >> 6) & 0xfc | (char)uVar14 << 7 | (byte)uVar16;
          if (((iVar15 != iVar22 || (bVar1 & 1) != 0) || iVar15 != 0) || (bool)(bVar24 | bVar6)) {
            bVar21 = bVar21 | 2;
          }
          local_190 = (ushort *)CONCAT31(local_190._1_3_,bVar21 | bVar2);
          puVar8 = (ushort *)FUN_0105dce0(local_1e0,local_1dc,local_1d8,&local_190,1);
          if (puVar8 == (ushort *)0x0) {
            local_1d8 = local_1d8 + 1;
                    /* WARNING: Could not recover jumptable at 0x0105860c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_01058610 + *(int *)(&DAT_01058610 + local_200 * 4)))();
            return;
          }
        }
        if (local_1d8 != 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: (self.offset - place.start_index) == place.size_of()",0x46
                       ,&DAT_018835b8);
        }
        if (puVar8 == (ushort *)0x0) {
          piVar18 = (int *)(local_1e8 + 4);
          for (uVar16 = local_1e4; uVar16 != 0; uVar16 = uVar16 - 1) {
            if (*piVar18 != 0) {
              thunk_FUN_016d3fb4(piVar18[1]);
            }
            piVar18 = piVar18 + 4;
          }
          if (local_1ec != 0) {
            thunk_FUN_016d3fb4(local_1e8);
          }
          *param_1 = local_1f8;
          param_1[1] = local_1f4;
          param_1[2] = local_1f0;
          return;
        }
LAB_010579dc:
        piVar18 = (int *)(local_1e8 + 4);
        *param_1 = -0x80000000;
        param_1[1] = (int)puVar8;
        for (uVar16 = local_1e4; uVar16 != 0; uVar16 = uVar16 - 1) {
          if (*piVar18 != 0) {
            thunk_FUN_016d3fb4(piVar18[1]);
          }
          piVar18 = piVar18 + 4;
        }
        if (local_1ec != 0) {
          thunk_FUN_016d3fb4(local_1e8);
        }
        if (local_1f8 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(local_1f4);
        return;
      }
      puVar23 = &DAT_01883968;
      pcVar12 = 
      "assertion failed: counts.additional_count <= u16::MAX as usizemore than one edns record present"
      ;
    }
    else {
      puVar23 = &DAT_01883958;
      pcVar12 = "assertion failed: counts.nameserver_count <= u16::MAX as usize";
    }
  }
  else {
    uVar13 = 0x3a;
    puVar23 = &DAT_01883948;
    pcVar12 = "assertion failed: counts.answer_count <= u16::MAX as usize";
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(pcVar12,uVar13,puVar23);
code_r0x01058398:
  iVar25 = iVar25 + 1;
  iVar26 = iVar26 + 0xe8;
  iVar20 = iVar20 + -0xe8;
  if (iVar20 == 0) goto LAB_01058438;
  goto LAB_0105837c;
}

