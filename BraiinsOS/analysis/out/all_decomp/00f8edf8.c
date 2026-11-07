// FUN_00f8edf8 @ 00f8edf8 size=624 calls_out=6 calls_in=5
// strings: 

void FUN_00f8edf8(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int unaff_r4;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  uint *puVar24;
  undefined4 *local_48;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar16 = 4;
  local_48 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (local_48 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *local_48 = param_3;
  iVar22 = 0;
  iVar4 = *(int *)(param_2 + 0x48);
  iVar9 = *(int *)(param_2 + 0x4c);
  iVar18 = 1;
  iVar10 = *(int *)(param_2 + 0x6c);
  iVar11 = *(int *)(param_2 + 0x70);
  local_3c = 1;
  local_28 = 0;
  local_2c = 4;
  local_30 = 0;
  local_38 = local_48;
  do {
    iVar18 = iVar18 + -1;
    puVar13 = (undefined4 *)local_48[iVar18];
    iVar7 = iVar10;
    iVar6 = iVar11 * 0x30;
    local_34 = iVar18;
    while( true ) {
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_0188051c);
      }
      if ((*(int *)(iVar7 + 0x28) == puVar13[1]) &&
         (iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0x24),*puVar13), iVar5 == 0)) break;
      iVar6 = iVar6 + -0x30;
      iVar7 = iVar7 + 0x30;
    }
    iVar6 = *(int *)(iVar7 + 8);
    if (iVar6 != 0) {
      puVar19 = *(undefined4 **)(iVar7 + 4);
      puVar13 = puVar19;
      do {
        puVar20 = puVar13 + 2;
        for (iVar18 = 0; iVar22 * 8 != iVar18; iVar18 = iVar18 + 8) {
          if ((*(int *)(iVar16 + iVar18 + 4) == puVar13[1]) &&
             (iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar16 + iVar18),*puVar13), iVar7 == 0))
          goto LAB_00f8ef10;
        }
        iVar7 = iVar4;
        puVar23 = (undefined4 *)(iVar4 + 0x114);
        for (iVar18 = iVar9 * 0x134; iVar5 = local_34, iVar18 != 0; iVar18 = iVar18 + -0x134) {
          iVar5 = *(int *)(iVar7 + 0x118);
          if (iVar5 == puVar13[1]) {
            uVar17 = *puVar13;
            iVar8 = thunk_FUN_016dd50a(*puVar23,uVar17,iVar5);
            if (iVar8 == 0) {
              if (iVar22 == local_30) {
                FUN_00f98f0c(&local_30);
                iVar16 = local_2c;
              }
              puVar13 = (undefined4 *)(iVar16 + iVar22 * 8);
              *puVar13 = uVar17;
              iVar22 = iVar22 + 1;
              puVar13[1] = iVar5;
              local_28 = iVar22;
              goto LAB_00f8ef10;
            }
          }
          puVar23 = puVar23 + 0x4d;
          iVar7 = iVar7 + 0x134;
        }
        if (local_34 == local_3c) {
          FUN_00f98d28(&local_3c);
          local_48 = local_38;
        }
        local_48[iVar5] = puVar13;
        local_34 = iVar5 + 1;
LAB_00f8ef10:
        puVar13 = puVar20;
      } while (puVar20 != puVar19 + iVar6 * 2);
      iVar18 = local_34;
    }
    puVar13 = local_38;
  } while (iVar18 != 0);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  if (local_3c == 0) {
    return;
  }
  if (local_38 == (undefined4 *)0x0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar21 = *(byte *)((int)puVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar18 = uVar14 - 0x10, uVar14 == 0)) {
    iVar18 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar14 = (uint)(*(byte *)((int)puVar13 + -3) >> 5);
  iVar9 = *(int *)(iVar16 + 8) + 0x10;
  iVar4 = iVar18 * uVar21 + iVar18 + -4;
  iVar18 = iVar9 + iVar4;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar14 = *(uint *)(iVar18 + -4);
    if (uVar14 < 5) {
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
  if ((uint)(iVar18 - (int)puVar13) < uVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar18 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 + iVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar16 + 0x14);
  uVar14 = 1 << uVar21;
  *(undefined1 *)((int)puVar13 + -3) = 0xff;
  *(undefined2 *)((int)puVar13 + -2) = 0;
  do {
    uVar15 = *(uint *)(iVar16 + 0x10);
    uVar12 = *(uint *)(iVar16 + 0xc) | uVar15;
    if ((uVar14 & uVar12) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar15 == 0) || (uVar12 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar16,uVar21);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar17 = *puVar13;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar13 = uVar17;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar14 + uVar15;
      return;
    }
    puVar24 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar24);
      uVar12 = *puVar24;
      if (uVar15 != uVar12) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar24);
    } while (!bVar3);
    *puVar24 = uVar14 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar12) {
      return;
    }
  } while( true );
}

