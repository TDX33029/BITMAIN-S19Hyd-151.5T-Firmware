// FUN_009bee98 @ 009bee98 size=1604 calls_out=10 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x009bf200) */
/* WARNING: Removing unreachable block (ram,0x009bf014) */
/* WARNING: Removing unreachable block (ram,0x009bef4c) */

void FUN_009bee98(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6,undefined4 param_7)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int unaff_r4;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  undefined4 uVar23;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_5c;
  uint uStack_3c;
  uint local_38;
  int *local_34;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 *local_28;
  
  uVar18 = param_5 & 0xff;
  puVar21 = *(uint **)(param_2 + uVar18 * 4);
  DataMemoryBarrier(0xb);
  iVar5 = DAT_018d7f94 + 8;
  local_68 = 1;
  local_5c = 0;
  local_70 = param_5;
  local_6c = param_6;
LAB_009beefc:
  do {
    puVar6 = (uint *)(param_2 + uVar18 * 4);
    puVar22 = puVar21;
LAB_009bef08:
    if (puVar22 == (uint *)0x0) {
      uVar23 = 8;
      piVar13 = (int *)thunk_FUN_016d4a50(8);
      if (piVar13 == (int *)0x0) {
LAB_009bf4bc:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,uVar23);
      }
      *piVar13 = param_3;
      uVar23 = 4;
      piVar13[1] = 0;
      puVar11 = (undefined4 *)thunk_FUN_016d4a50(4);
      if (puVar11 == (undefined4 *)0x0) goto LAB_009bf4bc;
      *puVar11 = piVar13;
      uVar23 = 8;
      puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar10 == (undefined4 *)0x0) goto LAB_009bf4bc;
      *puVar10 = &DAT_0041319b;
      puVar10[1] = puVar11;
      puVar21 = (uint *)thunk_FUN_016d4a50(0x10);
      if (puVar21 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x10);
      }
      *puVar21 = param_5;
      puVar21[1] = param_6;
      puVar21[2] = (uint)puVar10;
      puVar21[3] = uStack_3c;
      puVar22 = (uint *)*puVar6;
      if (puVar22 == (uint *)0x0) {
        DataMemoryBarrier(0xb);
LAB_009bf150:
        bVar1 = (bool)hasExclusiveAccess(puVar6);
        if (!bVar1) break;
        *puVar6 = (uint)puVar21;
        DataMemoryBarrier(0xb);
LAB_009bf440:
        uVar23 = 0;
        goto LAB_009bf454;
      }
LAB_009bf168:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      puVar11 = *(undefined4 **)(puVar21[2] + 4);
      *(undefined4 *)(puVar21[2] + 4) = 0;
      if (puVar11 != (undefined4 *)0x0) {
        uVar23 = *puVar11;
        thunk_FUN_016d3fb4();
        thunk_FUN_016d3fb4(uVar23);
      }
      FUN_009cce08(puVar21);
      thunk_FUN_016d3fb4(puVar21);
      goto LAB_009bef08;
    }
    if (((uint)puVar22 & 1) != 0) {
      param_2 = (uint)puVar22 & 0xfffffffe;
      uVar18 = local_70 >> 8;
      local_70 = uVar18 | local_6c << 0x18;
      local_6c = local_6c >> 8;
      uVar18 = uVar18 & 0xff;
      puVar21 = *(uint **)(param_2 + uVar18 * 4);
      DataMemoryBarrier(0xb);
      local_68 = local_68 + 1;
      goto LAB_009beefc;
    }
    uVar7 = *puVar22;
    uVar14 = puVar22[1];
    if (uVar7 == param_5 && uVar14 == param_6) {
      do {
        FUN_009cd4b4(&local_38,puVar22,param_3,param_7);
        puVar11 = local_30;
        piVar13 = local_34;
        if (local_38 == 1) {
          uVar23 = 8;
          iVar12 = local_30[1];
          piVar9 = (int *)thunk_FUN_016d4a50(8);
          if (piVar9 == (int *)0x0) goto LAB_009bf474;
          *piVar9 = param_3;
          piVar9[1] = iVar12;
          uVar23 = *puVar11;
          if ((undefined4 *)*piVar13 == puVar11) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(piVar13);
              if (bVar1) {
                *piVar13 = (int)piVar9;
                FUN_009cd7cc(param_7,1,puVar11);
                iVar5 = DAT_018d7f94;
                piVar13 = (int *)(DAT_018d7f94 + 4);
                goto LAB_009bf3dc;
              }
            } while ((undefined4 *)*piVar13 == puVar11);
          }
          ClearExclusiveLocal();
        }
        else {
          if (local_38 != 2) goto LAB_009bf1b8;
          uVar23 = 8;
          iVar12 = local_30[1];
          piVar8 = (int *)thunk_FUN_016d4a50(8);
          if (piVar8 == (int *)0x0) {
LAB_009bf474:
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,uVar23);
          }
          *piVar8 = param_3;
          uVar23 = 4;
          piVar8[1] = iVar12;
          piVar9 = (int *)thunk_FUN_016d4a50(4);
          if (piVar9 == (int *)0x0) goto LAB_009bf474;
          *piVar9 = (int)piVar8;
          uVar19 = *puVar11;
          uVar23 = 8;
          puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
          if (puVar10 == (undefined4 *)0x0) goto LAB_009bf474;
          *puVar10 = uVar19;
          puVar10[1] = piVar9;
          if ((undefined4 *)*piVar13 == puVar11) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(piVar13);
              if (bVar1) {
                *piVar13 = (int)puVar10;
                FUN_009cd7cc(param_7,1,puVar11);
                goto LAB_009bf440;
              }
            } while ((undefined4 *)*piVar13 == puVar11);
          }
          ClearExclusiveLocal();
          thunk_FUN_016d3fb4();
          DataMemoryBarrier(0xb);
          thunk_FUN_016d3fb4(*piVar9);
        }
        thunk_FUN_016d3fb4(piVar9);
      } while( true );
    }
    uVar17 = local_5c;
    if (local_5c == 0) {
      local_38 = 0;
      iVar12 = FUN_016d51b0(&local_38,0x40,0x400);
      uVar17 = 0;
      if (iVar12 == 0) {
        uVar17 = local_38;
      }
      if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x40,0x400);
      }
      FUN_016dd606(local_38,0,0x400);
      uVar7 = *puVar22;
      uVar14 = puVar22[1];
    }
    iVar12 = (local_68 & 7) * 8;
    uVar16 = iVar12 - 0x20;
    uVar7 = uVar7 >> iVar12 | uVar14 << ((local_68 & 7) * -8 + 0x20 & 0xff);
    if (-1 < (int)uVar16) {
      uVar7 = uVar14 >> (uVar16 & 0xff);
    }
    *(uint **)(uVar17 + (uVar7 & 0xff) * 4) = puVar22;
    puVar21 = (uint *)*puVar6;
    if (puVar21 == puVar22) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar6);
        if (bVar1) {
          *puVar6 = uVar17 | 1;
          DataMemoryBarrier(0xb);
          uVar18 = local_70 >> 8;
          local_70 = uVar18 | local_6c << 0x18;
          local_6c = local_6c >> 8;
          uVar18 = uVar18 & 0xff;
          puVar21 = *(uint **)(uVar17 + uVar18 * 4);
          DataMemoryBarrier(0xb);
          local_68 = local_68 + 1;
          local_5c = 0;
          param_2 = uVar17;
          goto LAB_009beefc;
        }
        puVar21 = (uint *)*puVar6;
      } while (puVar21 == puVar22);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    *(undefined4 *)(uVar17 + (uVar7 & 0xff) * 4) = 0;
    local_5c = uVar17;
  } while( true );
  puVar22 = (uint *)*puVar6;
  if (puVar22 != (uint *)0x0) goto LAB_009bf168;
  goto LAB_009bf150;
LAB_009bf3dc:
  iVar12 = *piVar13;
  do {
    if (iVar12 == -1) goto LAB_009bf3d8;
    if (iVar12 < 0) {
      local_28 = &DAT_0157d360;
      local_2c = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_2c,&DAT_018ae278);
    }
    iVar15 = *piVar13;
    if (iVar15 == iVar12) {
      bVar2 = (bool)hasExclusiveAccess(piVar13);
      if (bVar2) {
        *piVar13 = iVar12 + 1;
      }
      bVar1 = false;
      if (bVar2) {
        DataMemoryBarrier(0xb);
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
      ClearExclusiveLocal();
    }
    iVar12 = iVar15;
  } while (!bVar1);
  goto LAB_009bf44c;
LAB_009bf3d8:
  HintYield();
  goto LAB_009bf3dc;
LAB_009bf44c:
  param_1[1] = uVar23;
  param_1[2] = iVar5;
  uVar23 = 1;
LAB_009bf454:
  *param_1 = uVar23;
  if (local_5c == 0) {
    return;
  }
  if (local_5c == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar18 = *(byte *)(local_5c - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar12 = uVar7 - 0x10, uVar7 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(local_5c - 3) >> 5);
  iVar20 = *(int *)(iVar5 + 8) + 0x10;
  iVar15 = iVar12 * uVar18 + iVar12 + -4;
  iVar12 = iVar20 + iVar15;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar7 = *(uint *)(iVar12 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if (iVar12 - local_5c < uVar7) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar12 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar20 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar5 + 0x14);
  uVar7 = 1 << uVar18;
  *(undefined1 *)(local_5c - 3) = 0xff;
  *(undefined2 *)(local_5c - 2) = 0;
  do {
    uVar17 = *(uint *)(iVar5 + 0x10);
    uVar14 = *(uint *)(iVar5 + 0xc) | uVar17;
    if ((uVar7 & uVar14) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar17 == 0) || (uVar14 + uVar7 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar5,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar23 = *puVar11;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar11 = uVar23;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar7 + uVar17;
      return;
    }
    puVar21 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar21);
      uVar14 = *puVar21;
      if (uVar17 != uVar14) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar21);
    } while (!bVar1);
    *puVar21 = uVar7 + uVar17;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar17 == uVar14) {
      return;
    }
  } while( true );
LAB_009bf1b8:
  puVar21 = (uint *)*puVar6;
  if (puVar21 == puVar22) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar6);
      if (bVar1) {
        *puVar6 = 0;
        DataMemoryBarrier(0xb);
        FUN_009cdaa8(iVar5,3,puVar22);
        puVar22 = (uint *)0x0;
        goto LAB_009bef08;
      }
      puVar21 = (uint *)*puVar6;
    } while (puVar21 == puVar22);
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  puVar22 = puVar21;
  goto LAB_009bef08;
}

