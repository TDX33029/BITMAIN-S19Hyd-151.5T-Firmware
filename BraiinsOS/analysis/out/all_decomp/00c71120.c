// FUN_00c71120 @ 00c71120 size=2096 calls_out=16 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c71120(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 ***pppuVar14;
  int iVar15;
  int iVar16;
  undefined4 ****ppppuVar17;
  uint uVar18;
  undefined4 ***pppuVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  char *pcVar23;
  uint in_fpscr;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  undefined4 ***local_dc;
  undefined *local_d8;
  undefined4 local_d4;
  undefined4 ****local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 ****local_b8;
  undefined **local_b4;
  undefined4 ***local_b0;
  int local_ac;
  undefined4 ****local_a8;
  undefined4 local_a4;
  undefined4 ***local_a0;
  int local_9c;
  undefined4 ***local_98;
  int local_94;
  undefined4 ****local_90;
  undefined **local_8c;
  undefined4 ***local_88;
  int iStack_84;
  undefined4 ****local_80;
  undefined4 uStack_7c;
  undefined4 ***pppuStack_78;
  int iStack_74;
  undefined4 ***pppuStack_70;
  undefined4 ***local_68;
  int local_64;
  undefined4 ***local_60;
  int iStack_5c;
  undefined4 ****local_58;
  int local_54;
  undefined4 ***local_50;
  int local_4c;
  undefined4 ***local_48;
  int iStack_44;
  undefined4 ***local_40;
  undefined4 uStack_3c;
  
  uVar25 = FUN_007143c8();
  piVar6 = (int *)uVar25;
  bVar1 = *(byte *)(piVar6 + 0x14);
  if ((((uVar25 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
    *(undefined1 *)(piVar6 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 0;
  if (iVar13 == 2) {
    FUN_016d6968(0xf0,piVar6,0x81,1);
    cVar4 = *(char *)(*(int *)(param_2 + 0x58) + 0x42);
  }
  else {
    cVar4 = *(char *)(*(int *)(param_2 + 0x58) + 0x42);
  }
  if (cVar4 == '\0') goto LAB_00c71560;
  if (*(char *)(*(int *)(&DAT_018b0e50 + (uint)bVar1 * 4) + 4) == '\0') {
    iVar13 = *(int *)(*(int *)(param_2 + 0x2ec) + 0x314);
    cVar4 = (**(code **)(iVar13 + 0x34))
                      (*(int *)(*(int *)(param_2 + 0x2ec) + 0x310) +
                       (*(int *)(iVar13 + 8) - 1U & 0xfffffff8) + 8);
    local_68 = (undefined4 ***)CONCAT31(local_68._1_3_,cVar4);
    iVar13 = *(int *)(param_2 + 0x220) << 4;
    pcVar23 = (char *)(*(int *)(param_2 + 0x21c) + 0xc);
    do {
      pcVar12 = pcVar23;
      if (iVar13 == 0) goto LAB_00c71cc8;
      iVar13 = iVar13 + -0x10;
      pcVar23 = pcVar12 + 0x10;
    } while (*pcVar12 != cVar4);
    pppuVar14 = (undefined4 ***)*param_3;
    iVar15 = param_3[1];
    pppuVar19 = (undefined4 ***)param_3[2];
    iVar21 = *(int *)(pcVar12 + -8);
    iVar13 = *(int *)(pcVar12 + -4);
    if (pppuVar14 == (undefined4 ***)0x0) {
      pppuVar19 = (undefined4 ***)0x0;
    }
    iVar7 = *(int *)(param_2 + 0x204) + 0x18;
    local_64 = 0;
    local_68 = pppuVar14;
    if (pppuVar14 != (undefined4 ***)0x0) {
      local_68 = (undefined4 ***)0x1;
    }
    local_54 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_c4 = 0;
    local_c8 = (undefined4 *)0x0;
    local_cc = 0;
    local_d0 = (undefined4 ****)0x0;
    local_60 = pppuVar14;
    iStack_5c = iVar15;
    local_58 = (undefined4 ****)local_68;
    local_50 = pppuVar14;
    local_4c = iVar15;
    local_48 = pppuVar19;
    while( true ) {
      uVar26 = FUN_00c3901c(&local_68);
      iVar22 = (int)((ulonglong)uVar26 >> 0x20);
      if ((int)uVar26 == 0 || iVar22 == 0) break;
      local_b8 = local_d0;
      local_b4 = (undefined **)local_cc;
      local_b0 = (undefined4 ***)local_c8;
      local_ac = local_c4;
      local_a8 = (undefined4 ****)local_c0;
      local_a4 = local_bc;
      local_a0 = (undefined4 ***)(iVar22 + 0x18);
      FUN_009d4790(&local_90,*(undefined4 *)(iVar22 + 0x24),*(undefined4 *)(iVar22 + 0x28),iVar7);
      FUN_010e1750(&local_d0,&local_b8,&local_90);
    }
    local_b8 = local_d0;
    local_b4 = (undefined **)local_cc;
    local_b0 = (undefined4 ***)local_c8;
    local_ac = local_c4;
    local_a8 = (undefined4 ****)local_c0;
    local_a4 = local_bc;
    uVar20 = iVar13 << 5;
    iVar22 = iVar21;
    do {
      iVar16 = iVar22;
      if (uVar20 == 0) {
        uVar18 = 0x100;
        goto LAB_00c71aa8;
      }
      cVar5 = FUN_010e1310(&local_b8,iVar16);
      uVar20 = uVar20 - 0x20;
      iVar22 = iVar16 + 0x20;
    } while ((uint)(int)cVar5 < 0x80000000);
    uVar18 = *(uint *)(iVar16 + 0x18);
    if (iVar22 != iVar21 + iVar13 * 0x20) {
      uVar20 = uVar20 >> 5;
      do {
        cVar5 = FUN_010e1310(&local_b8,iVar22);
        uVar9 = uVar18;
        if (0x7fffffff < (uint)(int)cVar5) {
          uVar8 = *(uint *)(iVar22 + 0x18);
          if (uVar8 <= uVar18) {
            uVar9 = uVar8;
          }
          if (uVar8 < uVar18) {
            iVar16 = iVar22;
          }
        }
        iVar22 = iVar22 + 0x20;
        uVar20 = uVar20 - 1;
        uVar18 = uVar9;
      } while (uVar20 != 0);
      uVar18 = *(uint *)(iVar16 + 0x18);
    }
LAB_00c71aa8:
    local_b8 = (undefined4 ****)pppuVar14;
    if (pppuVar14 != (undefined4 ***)0x0) {
      local_b8 = (undefined4 ****)0x1;
    }
    local_a4 = 0;
    local_b4 = (undefined **)0x0;
    local_b0 = pppuVar14;
    local_ac = iVar15;
    local_a8 = local_b8;
    local_a0 = pppuVar14;
    local_9c = iVar15;
    local_98 = pppuVar19;
    uVar26 = FUN_00c3901c(&local_b8);
    iVar13 = (int)((ulonglong)uVar26 >> 0x20);
    dVar24 = 121.0;
    if ((int)uVar26 != 0 && iVar13 != 0) {
      local_68 = local_b8;
      local_64 = (int)local_b4;
      local_60 = local_b0;
      iStack_5c = local_ac;
      local_58 = local_a8;
      local_54 = local_a4;
      local_50 = local_a0;
      local_4c = local_9c;
      local_48 = local_98;
      uVar20 = *(uint *)(iVar13 + 0x28);
      while( true ) {
        uVar26 = FUN_00c3901c(&local_68);
        iVar13 = (int)((ulonglong)uVar26 >> 0x20);
        if ((int)uVar26 == 0 || iVar13 == 0) break;
        uVar9 = *(uint *)(iVar13 + 0x28);
        if (uVar20 <= uVar9) {
          uVar20 = uVar9;
        }
      }
      dVar24 = (double)VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x16) & 3);
      dVar24 = dVar24 * 121.0;
    }
    local_b8 = (undefined4 ****)(uint)(pppuVar14 != (undefined4 ***)0x0);
    local_a4 = 0;
    local_b4 = (undefined **)0x0;
    local_b0 = pppuVar14;
    local_ac = iVar15;
    local_a8 = local_b8;
    local_a0 = pppuVar14;
    local_9c = iVar15;
    local_98 = pppuVar19;
    local_94 = iVar7;
    uVar26 = FUN_00c3901c(&local_b8);
    iVar13 = local_94;
    iVar15 = (int)((ulonglong)uVar26 >> 0x20);
    if (((int)uVar26 != 0 && iVar15 != 0) &&
       (FUN_009d4790(&local_68,*(undefined4 *)(iVar15 + 0x24),*(undefined4 *)(iVar15 + 0x28)),
       local_68 != (undefined4 ***)0x5 || local_64 != 0)) {
      local_dc = local_68;
      local_90 = local_b8;
      local_8c = local_b4;
      local_88 = local_b0;
      iStack_84 = local_ac;
      local_80 = local_a8;
      uStack_7c = local_a4;
      pppuStack_78 = local_a0;
      iStack_74 = local_9c;
      pppuStack_70 = local_98;
      ppppuVar17 = local_58;
      iVar7 = local_54;
      pppuVar19 = local_60;
      iVar15 = local_64;
      iVar21 = iStack_5c;
      while( true ) {
        uVar26 = FUN_00c3901c(&local_90);
        iVar22 = (int)((ulonglong)uVar26 >> 0x20);
        if ((int)uVar26 == 0 || iVar22 == 0) break;
        FUN_009d4790(&local_50,*(undefined4 *)(iVar22 + 0x24),*(undefined4 *)(iVar22 + 0x28),iVar13)
        ;
        local_68 = local_dc;
        local_64 = iVar15;
        local_60 = pppuVar19;
        iStack_5c = iVar21;
        local_58 = ppppuVar17;
        local_54 = iVar7;
        cVar5 = FUN_010e1310(&local_68,&local_50);
        if (cVar5 < '\x01') {
          local_dc = local_50;
          iVar15 = local_4c;
          pppuVar19 = local_48;
          ppppuVar17 = (undefined4 ****)local_40;
          iVar21 = iStack_44;
          iVar7 = uStack_3c;
        }
      }
      if (local_dc != (undefined4 ***)0x5 || iVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c71db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_00c71dbc + *(int *)(&UNK_00c71dbc + (int)local_dc * 4)))
                  (pppuVar19,iVar21,ppppuVar17,iVar7);
        return;
      }
    }
    uVar11 = FUN_0184590c(0,0,0,0);
    pdVar10 = (double *)&DAT_00c71f18;
    if (cVar4 == '\x05') {
      pdVar10 = (double *)&DAT_00c71f20;
    }
    FUN_016d58f0(SUB84((double)CONCAT44(extraout_s1,uVar11) / ((*pdVar10 / dVar24) * 4294967296.0),0
                      ));
    uVar11 = FUN_016d5298();
    uVar20 = (uint)(0.0 < (double)CONCAT44(extraout_s1_00,uVar11)) *
             (int)(longlong)(double)CONCAT44(extraout_s1_00,uVar11) & 0x1f;
    if (uVar18 < (uint)(1 << uVar20)) {
      uVar18 = 1 << uVar20;
    }
    if (uVar18 < 0x101) {
      uVar18 = 0x100;
    }
    *param_1 = 1;
    param_1[1] = uVar18;
    return;
  }
  if ((3 < DAT_018d9130) || (DAT_018d9e24 == '\0')) goto LAB_00c71560;
  if (DAT_018d9e24 == '\x01') {
LAB_00c71228:
    DataMemoryBarrier(0xb);
    pcVar23 = s_SetGloba_00414c05;
    puVar3 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar23 = DAT_018daa74;
      puVar3 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar13 = (**(code **)(puVar3 + 0x14))(pcVar23,DAT_018d9e1c);
    if (iVar13 == 0) goto LAB_00c71560;
  }
  else if (DAT_018d9e24 != '\x02') {
    cVar4 = FUN_0169ac90(&DAT_018d9e1c);
    if (cVar4 == '\0') goto LAB_00c71560;
    if (cVar4 != '\x02') goto LAB_00c71228;
  }
  local_54 = DAT_018d9e1c;
  if (*(int *)(DAT_018d9e1c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01874460);
  }
  local_b4 = *(undefined ***)(DAT_018d9e1c + 0x20);
  local_b0 = *(undefined4 ****)(DAT_018d9e1c + 0x24);
  local_8c = &local_d8;
  local_ac = *(undefined4 *)(DAT_018d9e1c + 0x28);
  local_c8 = (undefined4 *)(DAT_018d9e1c + 0x1c);
  local_b8 = (undefined4 ****)*local_c8;
  local_90 = &local_b8;
  local_d0 = &local_90;
  local_58 = &local_d0;
  local_a8 = (undefined4 ****)0x0;
  local_cc = 1;
  local_88 = (undefined4 ***)&DAT_018abb78;
  local_d4 = 0x7f;
  local_d8 = &DAT_00355a84;
  local_64 = 0;
  local_68 = (undefined4 ***)0x1;
  DataMemoryBarrier(0xb);
  pcVar23 = s_SetGloba_00414c05;
  puVar3 = &DAT_018ae394;
  if (DAT_018dd984 == 2) {
    pcVar23 = DAT_018daa74;
    puVar3 = DAT_018daa78;
    if (DAT_018daa70 != 0) {
      pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
  }
  iVar13 = (**(code **)(puVar3 + 0x28))(pcVar23,&local_68);
  if (iVar13 != 0) {
    (**(code **)(puVar3 + 0x2c))(pcVar23,&local_68);
  }
LAB_00c71560:
  iVar13 = *(int *)(*(int *)(param_2 + 0x2ec) + 0x314);
  cVar4 = (**(code **)(iVar13 + 0x34))
                    (*(int *)(*(int *)(param_2 + 0x2ec) + 0x310) +
                     (*(int *)(iVar13 + 8) - 1U & 0xfffffff8) + 8);
  local_68 = (undefined4 ***)CONCAT31(local_68._1_3_,cVar4);
  iVar13 = *(int *)(param_2 + 0x220) << 4;
  pcVar23 = (char *)(*(int *)(param_2 + 0x21c) + 0xc);
  while (iVar13 != 0) {
    cVar5 = *pcVar23;
    iVar13 = iVar13 + -0x10;
    pcVar23 = pcVar23 + 0x10;
    if (cVar5 == cVar4) {
      iVar13 = 3;
      if (*param_4 < 0) {
        iVar13 = *param_4;
      }
                    /* WARNING: Could not recover jumptable at 0x00c715f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00c715f8 + *(int *)(&DAT_00c715f8 + iVar13 * 4)))();
      return;
    }
  }
LAB_00c71cc8:
  uVar11 = FUN_00baa6dc(&local_68);
  *param_1 = 2;
  param_1[1] = uVar11;
  return;
}

