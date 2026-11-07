// FUN_012b6ff8 @ 012b6ff8 size=516 calls_out=6 calls_in=1
// strings: 

void FUN_012b6ff8(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar4 = (undefined4 *)param_2[3];
  puVar13 = (undefined4 *)param_2[1];
  iVar11 = param_1[2];
  if ((uint)(*param_1 - iVar11) < (uint)((int)puVar4 - (int)puVar13) >> 2) {
    FUN_012bdb54(param_1,iVar11,(uint)((int)puVar4 - (int)puVar13) >> 2,8,0x40);
    iVar11 = param_1[2];
  }
  if (puVar13 != puVar4) {
    puVar18 = (undefined4 *)(param_1[1] + iVar11 * 0x40 + 0x34);
    do {
      puVar14 = puVar13 + 1;
      puVar13 = (undefined4 *)*puVar13;
      iVar8 = 1;
      iVar5 = 1;
      iVar7 = puVar13[6];
      uVar16 = puVar13[5];
      if ((iVar7 != 0) && (iVar5 = thunk_FUN_016d4a50(iVar7), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar7);
      }
      FUN_016dd1aa(iVar5,uVar16,iVar7);
      iVar19 = puVar13[9];
      uVar16 = puVar13[8];
      if ((iVar19 != 0) && (iVar8 = thunk_FUN_016d4a50(iVar19), iVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar19);
      }
      FUN_016dd1aa(iVar8,uVar16,iVar19);
      FUN_012b7bd8(&local_40,puVar13[0xb],puVar13[0xc]);
      FUN_0150528c(&local_30,puVar13[0xe],puVar13[0xf]);
      uVar16 = puVar13[1];
      uVar12 = puVar13[2];
      uVar15 = puVar13[3];
      puVar18[-0xd] = *puVar13;
      puVar18[-0xc] = uVar16;
      puVar18[-0xb] = uVar12;
      puVar18[-10] = uVar15;
      puVar18[-8] = iVar5;
      puVar18[-7] = iVar7;
      puVar18[-6] = iVar19;
      puVar18[-9] = iVar7;
      puVar18[2] = uStack_28;
      iVar11 = iVar11 + 1;
      puVar18[-3] = local_40;
      puVar18[-2] = uStack_3c;
      puVar18[-1] = uStack_38;
      *puVar18 = local_30;
      puVar18[1] = uStack_2c;
      puVar18[-5] = iVar8;
      puVar18[-4] = iVar19;
      puVar18 = puVar18 + 0x10;
      puVar13 = puVar14;
    } while (puVar14 != puVar4);
  }
  iVar5 = param_2[2];
  param_1[2] = iVar11;
  if (iVar5 == 0) {
    return;
  }
  iVar11 = *param_2;
  if (iVar11 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar11 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar9 - 0x10, uVar9 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar11 + -3) >> 5);
  iVar19 = *(int *)(iVar5 + 8) + 0x10;
  iVar7 = iVar8 * uVar17 + iVar8 + -4;
  iVar8 = iVar19 + iVar7;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar8 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - iVar11) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar19 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar9 = 1 << uVar17;
  *(undefined1 *)(iVar11 + -3) = 0xff;
  *(undefined2 *)(iVar11 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar5 + 0x10);
    uVar6 = *(uint *)(iVar5 + 0xc) | uVar10;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar16 = *puVar13;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar13 = uVar16;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar9 + uVar10;
      return;
    }
    puVar20 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar6 = *puVar20;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar3);
    *puVar20 = uVar9 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

