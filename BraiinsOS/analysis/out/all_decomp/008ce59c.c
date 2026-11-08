// FUN_008ce59c @ 008ce59c size=2472 calls_out=19 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008ce59c(uint *param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 ******ppppppuVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 *puVar6;
  undefined4 ****ppppuVar7;
  undefined4 **ppuVar8;
  undefined4 ****ppppuVar9;
  char *pcVar10;
  code *pcVar11;
  undefined4 ***pppuVar12;
  int iVar13;
  undefined4 ***pppuVar14;
  int iVar15;
  undefined4 *****pppppuVar16;
  undefined *puVar17;
  char *pcVar18;
  int iVar19;
  undefined4 ****ppppuVar20;
  undefined1 *puVar21;
  undefined4 *****unaff_r6;
  undefined4 ****ppppuVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  int *piVar26;
  undefined4 ***pppuVar27;
  bool bVar28;
  ulonglong uVar29;
  undefined4 ****local_a4;
  undefined4 *****local_a0;
  undefined4 ****local_9c;
  undefined4 ******local_98;
  undefined4 local_94;
  uint *local_90;
  undefined4 ******local_88;
  undefined4 *local_84;
  undefined *local_80;
  undefined4 *****local_78;
  undefined4 ****local_74;
  undefined4 *****local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 *****local_5c;
  undefined4 *****local_58;
  undefined4 ****local_54;
  undefined *local_50;
  undefined4 ****local_4c;
  undefined4 ****local_48;
  code *local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ******local_30;
  int local_2c;
  
  piVar24 = param_2 + 6;
  piVar26 = param_2 + 2;
  puVar6 = (undefined2 *)((uint)&local_40 | 1);
  if (*param_2 != 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x22]) {
    case '\0':
      goto switchD_008ce610_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dec);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dec);
    }
    local_a0 = unaff_r6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x21]) {
    case '\0':
      iVar13 = param_2[3];
      iVar19 = param_2[4];
      iVar15 = param_2[5];
      goto LAB_008ce6c4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864d9c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864d9c);
    case '\x03':
      goto switchD_008ce630_caseD_3;
    }
  }
  ppppuVar7 = (undefined4 ****)FUN_01657fc4(piVar26,*param_3);
  do {
    if (((uint)ppppuVar7 & 1) != 0) goto LAB_008ced60;
    iVar15 = param_2[0x2a];
    iVar19 = param_2[0x2b];
    if (*param_2 == 0) {
      cVar4 = (char)param_2[0x22];
      bVar28 = cVar4 == '\x03';
      if (bVar28) {
        cVar4 = (char)param_2[0x21];
      }
      if (bVar28 && cVar4 == '\x03') {
        FUN_008c89dc(piVar24);
      }
    }
    else {
      FUN_00a07b4c(piVar26);
    }
    *(undefined1 *)(param_2 + 0x22) = 0;
    *param_2 = 0;
    param_2[1] = iVar15;
    param_2[2] = iVar19;
switchD_008ce610_caseD_0:
    iVar15 = param_2[1];
    iVar13 = *(int *)param_2[2];
    iVar19 = ((int *)param_2[2])[1];
    *(undefined1 *)(param_2 + 0x21) = 0;
    param_2[3] = iVar13;
    param_2[4] = iVar19;
    param_2[5] = iVar15;
LAB_008ce6c4:
    *(undefined1 *)(param_2 + 0x11) = 0;
    param_2[6] = iVar13;
    param_2[7] = iVar19;
    param_2[8] = iVar15;
    param_2[9] = 0x18;
    param_2[10] = 4;
    local_a0 = unaff_r6;
switchD_008ce630_caseD_3:
    FUN_008cdaf8(&local_40,piVar24,param_3);
    ppppppuVar3 = local_38;
    ppppuVar7 = local_40._4_4_;
    puVar17 = (undefined *)local_40;
    if ((undefined *)local_40 == (undefined *)0x80000001) {
      uVar5 = 3;
      pppppuVar16 = (undefined4 *****)0x80000001;
      *(undefined1 *)(param_2 + 0x21) = 3;
      ppppuVar7 = (undefined4 ****)0x80000001;
      goto LAB_008ced44;
    }
    FUN_008c89dc(piVar24);
    if (puVar17 == (undefined *)0x80000000) goto LAB_008ce9bc;
    local_a4 = (undefined4 ****)&DAT_00000004;
    local_70 = (undefined4 *****)0x0;
    local_78 = (undefined4 *****)0x0;
    ppppuVar20 = ppppuVar7 + (int)ppppppuVar3 * 4;
    local_74 = (undefined4 ****)&DAT_00000004;
    local_a0 = (undefined4 *****)0x0;
    local_50 = puVar17;
    local_54 = ppppuVar7;
    local_58 = (undefined4 *****)ppppuVar7;
    local_4c = ppppuVar20;
    if (ppppppuVar3 != (undefined4 ******)0x0) {
      uVar25 = (int)ppppppuVar3 << 4;
      iVar15 = 0xb;
      local_a0 = (undefined4 *****)0x0;
      ppppuVar9 = ppppuVar7;
      do {
        uVar25 = uVar25 - 0x10;
        ppppuVar22 = ppppuVar9 + 4;
        pppuVar27 = *ppppuVar9;
        if (pppuVar27 == (undefined4 ***)0x80000000) goto LAB_008cebbc;
        pppuVar14 = ppppuVar9[1];
        pppuVar12 = ppppuVar9[2];
        if (pppuVar12 != (undefined4 ***)0x4) {
          local_38 = (undefined4 ******)&DAT_00000004;
          local_40._4_4_ = (undefined4 ****)&DAT_00000006;
          local_40._0_4_ = (undefined *)CONCAT31(local_40._1_3_,1);
          local_54 = ppppuVar22;
          local_34 = pppuVar12;
          ppppuVar9 = (undefined4 ****)FUN_008b954c(pppuVar12,(uint)&local_40 | 4);
          if (pppuVar27 != (undefined4 ***)0x0) {
            thunk_FUN_016d3fb4(pppuVar14);
          }
          if (ppppuVar20 != ppppuVar22) {
            uVar23 = 0;
            do {
              if (ppppuVar22[uVar23 * 4] != (undefined4 ***)0x0) {
                thunk_FUN_016d3fb4(ppppuVar22[uVar23 * 4 + 1]);
              }
              uVar23 = uVar23 + 1;
            } while (uVar25 >> 4 != uVar23);
          }
          if (puVar17 != (undefined *)0x0) {
            thunk_FUN_016d3fb4(ppppuVar7);
          }
          if (local_78 != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(local_a4);
          }
          ppppuVar7 = ppppuVar9;
          goto LAB_008ce9bc;
        }
        pppuVar12 = ppppuVar9[3];
        ppuVar8 = *pppuVar14;
        local_40._0_4_ =
             (undefined *)
             ((uint)(CONCAT21(CONCAT11((char)(((uint)ppuVar8 & 0xffffff) >> 0x17),
                                       (char)((uint)ppuVar8 >> 8)),
                              (char)(((uint)ppuVar8 & 0x7fff) >> 0xe)) & 0xff01ff) << 8);
        bVar1 = (byte)((uint)ppuVar8 >> 0x18);
        local_40._4_4_ =
             (undefined4 ****)
             CONCAT31(((uint3)((uint)ppuVar8 >> 8) & 0x3fff) >> 0xd,
                      (char)(((uint)ppuVar8 & 0x7fffff) >> 0x16));
        local_34 = (undefined4 ***)
                   (CONCAT31(CONCAT21(local_34._2_2_,bVar1),(char)((uint)ppuVar8 >> 0x10)) &
                   0xffff0f1f);
        local_40._4_4_ =
             (undefined4 ****)CONCAT13((bVar1 & 0x7f) >> 6,CONCAT12(bVar1 >> 7,local_40._4_2_));
        ppppuVar9 = local_40._4_4_;
        local_38 = (undefined4 ******)
                   CONCAT22(CONCAT11((char)(((uint)ppuVar8 & 0x3fff) >> 9),
                                     (byte)(((uint)ppuVar8 & 0xffff) >> 0xf) |
                                     (byte)(((uint)ppuVar8 & 0xf) << 1)),
                            CONCAT11((char)(((uint)ppuVar8 & 0xff) >> 4),(bVar1 & 0x3f) >> 4));
        local_98 = local_38;
        local_84 = (undefined4 *)CONCAT22(local_84._2_2_,(undefined2)local_34);
        local_94 = CONCAT22(local_94._2_2_,(undefined2)local_34);
        local_60 = (undefined *)
                   CONCAT22(CONCAT11(local_60._3_1_,*(undefined1 *)(puVar6 + 1)),*puVar6);
        local_88 = local_98;
        if (local_a0 == local_78) {
          FUN_008cfcb8(&local_78);
          local_a4 = local_74;
        }
        local_a0 = (undefined4 *****)((int)local_a0 + 1);
        *(undefined4 ****)((int)local_a4 + iVar15 + -0xb) = pppuVar12;
        *(undefined2 *)((int)local_a4 + iVar15 + -7) = (undefined2)local_60;
        *(code *)((int)local_a4 + iVar15 + -5) = local_60._2_1_;
        *(undefined4 *****)((int)local_a4 + iVar15 + -4) = ppppuVar9;
        *(undefined4 *******)((int)local_a4 + iVar15) = local_98;
        *(undefined2 *)((int)local_a4 + iVar15 + 4) = (undefined2)local_94;
        local_70 = local_a0;
        if (pppuVar27 != (undefined4 ***)0x0) {
          thunk_FUN_016d3fb4(pppuVar14);
        }
        iVar15 = iVar15 + 0x14;
        ppppuVar9 = ppppuVar22;
      } while (ppppuVar22 != ppppuVar20);
      ppppuVar22 = ppppuVar20;
LAB_008cebbc:
      local_54 = ppppuVar22;
    }
    if ((int)ppppuVar20 - (int)local_54 != 0) {
      ppppuVar9 = local_54 + 1;
      uVar25 = (uint)((int)ppppuVar20 - (int)local_54) >> 4;
      do {
        if (ppppuVar9[-1] != (undefined4 ***)0x0) {
          thunk_FUN_016d3fb4(*ppppuVar9);
        }
        ppppuVar9 = ppppuVar9 + 4;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    if (puVar17 != (undefined *)0x0) {
      thunk_FUN_016d3fb4(ppppuVar7);
    }
    ppppuVar7 = local_74;
    pppppuVar16 = local_78;
    if ((undefined4 *****)0x1 < local_a0) {
      if (local_a0 < (undefined4 *****)0x15) {
        FUN_007f3300(local_74,local_a0);
      }
      else {
        FUN_008b9438(local_74,local_a0);
      }
    }
    *(undefined1 *)(param_2 + 0x21) = 1;
    if (pppppuVar16 == (undefined4 *****)0x80000000) goto LAB_008ce9c4;
    if (pppppuVar16 == (undefined4 *****)0x80000001) {
      uVar5 = 3;
      goto LAB_008ced44;
    }
    *(undefined1 *)(param_2 + 0x22) = 1;
    unaff_r6 = local_a0;
  } while (pppppuVar16 == (undefined4 *****)0x80000002);
LAB_008ced48:
  *param_1 = (uint)pppppuVar16;
  param_1[1] = (uint)ppppuVar7;
  param_1[2] = (uint)local_a0;
  if (pppppuVar16 != (undefined4 *****)0x80000000) {
    if (pppppuVar16 == (undefined4 *****)0x80000001) {
LAB_008ced60:
      *param_1 = 0x80000001;
    }
    return;
  }
  local_58 = (undefined4 *****)ppppuVar7;
  iVar19 = (*(code *)param_2[0x2c])(&local_58);
  iVar15 = 0;
  if (iVar19 != 0) {
    iVar15 = param_2[0x28];
  }
  ppppuVar20 = ppppuVar7;
  if (iVar19 != 0 && iVar15 != 0) {
    uVar25 = param_2[0x24];
    uVar23 = param_2[0x25];
    iVar19 = param_2[0x26];
    param_2[0x28] = iVar15 + -1;
    FUN_0165a798(&local_40);
    puVar17 = (undefined *)local_40 + uVar25;
    pcVar11 = (code *)((int)local_40._4_4_ + CARRY4((uint)(undefined *)local_40,uVar25) + uVar23);
    if ((int)uVar23 < 0 !=
        (int)(((uint)local_40._4_4_ ^ (uint)pcVar11) & ~((uint)local_40._4_4_ ^ uVar23)) < 0) {
LAB_008cee30:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
    puVar21 = (undefined1 *)(iVar19 + (int)local_38);
    if (&DAT_3b9aca00 <= puVar21) {
      bVar28 = (undefined *)0xfffffffe < puVar17;
      puVar17 = puVar17 + 1;
      if ((int)(((uint)pcVar11 ^ (uint)(pcVar11 + bVar28)) & ~(uint)pcVar11) < 0) goto LAB_008cee30;
      puVar21 = puVar21 + -1000000000;
      pcVar11 = pcVar11 + bVar28;
    }
    uVar29 = FUN_0164ec90(&DAT_01864d8c);
    iVar15 = 0x180;
    if ((uVar29 & 1) != 0) {
      iVar15 = 0xb8;
    }
    local_40 = uVar29;
    if (*(undefined1 **)((int)(uVar29 >> 0x20) + iVar15 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                   ,0x73,&DAT_01864d8c);
    }
    if (*param_2 == 0) {
      cVar4 = (char)param_2[0x22];
      bVar28 = cVar4 == '\x03';
      if (bVar28) {
        cVar4 = (char)param_2[0x21];
      }
      if (bVar28 && cVar4 == '\x03') {
        FUN_008c89dc(piVar24);
      }
    }
    else {
      FUN_00a07b4c(piVar26);
    }
    *(ulonglong *)(param_2 + 0xe) = uVar29;
    *param_2 = 1;
    param_2[0x10] = (int)puVar17;
    *piVar26 = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x12] = (int)puVar21;
    param_2[0x11] = (int)pcVar11;
    FUN_008ce59c(&local_40,param_2,param_3);
    ppppppuVar3 = local_38;
    ppppuVar20 = local_40._4_4_;
    uVar25 = (uint)(undefined *)local_40;
    (*(code *)**ppppuVar7)();
    if (uVar25 != 0x80000002) {
      param_1[1] = (uint)ppppuVar20;
      param_1[2] = (uint)ppppppuVar3;
      *param_1 = uVar25;
      return;
    }
  }
  *param_1 = 0x80000000;
  param_1[1] = (uint)ppppuVar20;
  return;
LAB_008ce9bc:
  *(undefined1 *)(param_2 + 0x21) = 1;
LAB_008ce9c4:
  local_a0 = (undefined4 *****)param_2[1];
  local_9c = ppppuVar7;
  if ((DAT_018d9130 < 4) && (DAT_018d9890 != '\0')) {
    puVar17 = &DAT_018ae394;
    pcVar18 = s_SetGloba_00414c05;
    if (DAT_018d9890 == '\x01') {
LAB_008cea38:
      DataMemoryBarrier(0xb);
      pcVar10 = pcVar18;
      puVar2 = puVar17;
      if (DAT_018dd984 == 2) {
        pcVar10 = DAT_018daa74;
        puVar2 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar15 = (**(code **)(puVar2 + 0x14))(pcVar10,DAT_018d9888);
      if (iVar15 == 0) goto LAB_008ced38;
    }
    else if (DAT_018d9890 != '\x02') {
      cVar4 = FUN_0169ac90(&DAT_018d9888);
      if (cVar4 == '\0') goto LAB_008ced38;
      if (cVar4 != '\x02') goto LAB_008cea38;
    }
    local_2c = DAT_018d9888;
    if (*(int *)(DAT_018d9888 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01864dfc);
    }
    local_74 = *(undefined4 *****)(DAT_018d9888 + 0x20);
    local_70 = *(undefined4 ******)(DAT_018d9888 + 0x24);
    local_6c = *(undefined4 *)(DAT_018d9888 + 0x28);
    local_90 = (uint *)(DAT_018d9888 + 0x1c);
    local_78 = (undefined4 *****)*local_90;
    local_5c = &local_58;
    local_48 = &local_9c;
    local_68 = 0;
    local_60 = &DAT_0058e743;
    local_58 = local_a0 + 2;
    local_44 = FUN_00604528;
    local_84 = &local_60;
    local_88 = &local_78;
    local_98 = &local_88;
    local_30 = &local_98;
    local_4c = (undefined4 ****)FUN_00fac0c8;
    local_50 = &DAT_00345cfe;
    local_54 = (undefined4 ****)&DAT_00f5c97c;
    local_80 = &DAT_018abb78;
    local_94 = 1;
    local_40._4_4_ = (undefined4 ****)0x0;
    local_40._0_4_ = (undefined *)0x1;
    DataMemoryBarrier(0xb);
    if (DAT_018dd984 == 2) {
      pcVar18 = DAT_018daa74;
      puVar17 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar18 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar15 = (**(code **)(puVar17 + 0x28))(pcVar18,&local_40);
    if (iVar15 != 0) {
      (**(code **)(puVar17 + 0x2c))(pcVar18,&local_40);
    }
  }
LAB_008ced38:
  uVar5 = 1;
  pppppuVar16 = (undefined4 *****)0x80000000;
  ppppuVar7 = local_9c;
LAB_008ced44:
  *(undefined1 *)(param_2 + 0x22) = uVar5;
  goto LAB_008ced48;
}

