// FUN_0127a77c @ 0127a77c size=976 calls_out=8 calls_in=2
// strings: attempt to divide by zero

void FUN_0127a77c(int *param_1,int *param_2,int *param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int extraout_r1;
  undefined4 *puVar8;
  int extraout_r1_00;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_r4;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  uint *puVar19;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  undefined1 auStack_3c [12];
  int local_30;
  int local_2c;
  int local_28;
  
  uVar16 = param_3[2];
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("attempt to divide by zero",0x33,&DAT_0188b7e4);
  }
  uVar4 = param_2[2];
  if (uVar4 == 0) {
    iVar5 = *param_3;
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    if (iVar5 != 0) {
      thunk_FUN_016d3fb4(param_3[1]);
    }
    if (*param_2 == 0) {
      return;
    }
    iVar5 = param_2[1];
    goto LAB_014b47f4;
  }
  if (uVar16 == 1) {
    piVar17 = (int *)param_3[1];
    if (*piVar17 != 1) {
      FUN_01279f44(&local_58,param_2);
      param_3[2] = 0;
      if (local_4c != 0) {
        if (*param_3 == 0) {
          FUN_0127ac28(param_3);
          piVar17 = (int *)param_3[1];
        }
        *piVar17 = local_4c;
        param_3[2] = 1;
      }
      local_30 = *param_3;
      local_2c = param_3[1];
      local_28 = param_3[2];
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      goto LAB_0127aaf0;
    }
    iVar5 = param_2[1];
    iVar9 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar5;
    param_1[2] = iVar9;
LAB_0127a9bc:
    param_1 = param_1 + 3;
  }
  else {
    uVar6 = (uint)(uVar4 >= uVar16 && uVar4 != uVar16);
    uVar14 = (uint)(uVar4 < uVar16);
    if (uVar4 == uVar16) {
      iVar5 = uVar16 << 2;
      param_4 = param_3[1] + -4;
      do {
        if (iVar5 == 0) goto LAB_0127a98c;
        uVar13 = *(uint *)(param_4 + iVar5);
        uVar15 = *(uint *)(param_2[1] + -4 + iVar5);
        iVar5 = iVar5 + -4;
      } while (uVar15 == uVar13);
      uVar6 = 0;
      uVar14 = (uint)(uVar15 < uVar13);
      if (uVar15 >= uVar13) {
        uVar6 = 1;
      }
    }
    if (uVar6 - uVar14 == 0) {
LAB_0127a98c:
      param_2[2] = 0;
      if (*param_2 == 0) {
        FUN_0127ac28(param_2);
      }
      puVar8 = (undefined4 *)param_2[1];
      param_2[2] = 1;
      *param_1 = *param_2;
      param_1[1] = (int)puVar8;
      param_1[2] = 1;
      *puVar8 = 1;
      goto LAB_0127a9bc;
    }
    if ((uVar6 - uVar14 & 0xff) == 1) {
      iVar5 = param_3[1];
      iVar9 = *(int *)(iVar5 + uVar16 * 4 + -4);
      iVar18 = LZCOUNT(iVar9);
      if (iVar18 == 0) {
        local_58 = *param_2;
        local_54 = param_2[1];
        local_50 = param_2[2];
        FUN_0127a174(param_1,&local_58,iVar5,uVar16);
        if (*param_3 == 0) {
          return;
        }
        goto LAB_014b47f4;
      }
      iVar10 = *param_2;
      iVar7 = param_2[1];
      if (iVar10 == -0x80000000) {
        param_4 = *(int *)(iVar7 + 8);
      }
      if (iVar10 == -0x80000000 && param_4 == 0) {
        FUN_0127b6d4(auStack_3c,*(undefined4 *)(iVar7 + 4),0);
        iVar7 = extraout_r1_00;
      }
      else {
        iVar11 = 0;
        if (iVar9 != 0) {
          iVar11 = iVar18;
        }
        local_58 = iVar10;
        local_54 = iVar7;
        local_50 = uVar4;
        FUN_0127ae58(auStack_3c,&local_58,iVar9 == 0,iVar11);
        iVar7 = extraout_r1;
      }
      iVar10 = *param_3;
      if (iVar10 == -0x80000000) {
        iVar7 = *(int *)(iVar5 + 8);
      }
      if (iVar10 == -0x80000000 && iVar7 == 0) {
        FUN_0127b6d4(&local_30,*(undefined4 *)(iVar5 + 4),0);
      }
      else {
        iVar7 = 0;
        if (iVar9 != 0) {
          iVar7 = iVar18;
        }
        local_58 = iVar10;
        local_54 = iVar5;
        local_50 = uVar16;
        FUN_0127ae58(&local_30,&local_58,iVar9 == 0,iVar7);
      }
      iVar10 = local_2c;
      FUN_0127a174(&local_58,auStack_3c,local_2c,local_28);
      uVar16 = local_50;
      iVar7 = local_54;
      iVar5 = local_58;
      if (local_30 != 0) {
        thunk_FUN_016d3fb4(iVar10);
      }
      if (local_4c == -0x80000000) {
        if (*(int *)(iStack_48 + 8) != 0) goto LAB_0127aaa0;
        FUN_0127b6d4(&local_30,*(undefined4 *)(iStack_48 + 4),0);
      }
      else if (iStack_44 == 0) {
        local_2c = iStack_48;
        local_28 = 0;
        local_30 = local_4c;
      }
      else {
LAB_0127aaa0:
        local_58 = local_4c;
        local_54 = iStack_48;
        local_50 = iStack_44;
        iVar10 = 0;
        if (iVar9 != 0) {
          iVar10 = iVar18;
        }
        FUN_0127b2d8(&local_30,&local_58,iVar9 == 0,iVar10);
      }
      *param_1 = iVar5;
      param_1[1] = iVar7;
      param_1[2] = uVar16;
LAB_0127aaf0:
      param_1[3] = local_30;
      param_1[4] = local_2c;
      param_1[5] = local_28;
      return;
    }
    iVar5 = param_2[1];
    iVar9 = param_2[2];
    param_1[3] = *param_2;
    param_1[4] = iVar5;
    param_1[5] = iVar9;
  }
  iVar5 = *param_3;
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  if (iVar5 == 0) {
    return;
  }
  iVar5 = param_3[1];
LAB_014b47f4:
  if (iVar5 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar4 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar18 = uVar4 - 0x10, uVar4 == 0)) {
    iVar18 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar4 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar10 = *(int *)(iVar9 + 8) + 0x10;
  iVar7 = iVar18 * uVar16 + iVar18 + -4;
  iVar18 = iVar10 + iVar7;
  if (4 < uVar4) {
    if (uVar4 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(iVar18 + -4);
    if (uVar4 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar18 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar18 - iVar5) < uVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar18 - uVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar9 + 0x14);
  uVar4 = 1 << uVar16;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar9 + 0x10);
    uVar6 = *(uint *)(iVar9 + 0xc) | uVar14;
    if ((uVar4 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar14 == 0) || (uVar6 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar9,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar8;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar8 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar4 + uVar14;
      return;
    }
    puVar19 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar19);
      uVar6 = *puVar19;
      if (uVar14 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar19);
    } while (!bVar3);
    *puVar19 = uVar4 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar6) {
      return;
    }
  } while( true );
}

