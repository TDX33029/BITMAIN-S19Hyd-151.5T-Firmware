// FUN_00fa1924 @ 00fa1924 size=244 calls_out=2 calls_in=2
// strings: 

void FUN_00fa1924(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined4 *local_28;
  
  iVar4 = *param_2;
  puVar5 = (undefined4 *)param_2[1];
  if (param_2[2] != 0) {
    iVar16 = param_1[1];
    iVar14 = param_1[2];
    local_28 = puVar5 + param_2[2] * 2;
    puVar12 = puVar5;
    do {
      uVar9 = *puVar12;
      iVar17 = puVar12[1];
      if (iVar14 != 0) {
        iVar13 = 0;
        do {
          if ((((undefined4 *)(iVar16 + iVar13))[1] == iVar17) &&
             (iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar16 + iVar13),uVar9,iVar17), iVar7 == 0)
             ) goto LAB_00fa1978;
          iVar13 = iVar13 + 8;
        } while (iVar14 * 8 != iVar13);
      }
      if (iVar14 == *param_1) {
        FUN_00f98f0c(param_1);
        iVar16 = param_1[1];
      }
      puVar6 = (undefined4 *)(iVar16 + iVar14 * 8);
      *puVar6 = uVar9;
      iVar14 = iVar14 + 1;
      puVar6[1] = iVar17;
      param_1[2] = iVar14;
LAB_00fa1978:
      puVar12 = puVar12 + 2;
    } while (puVar12 != local_28);
  }
  if (iVar4 == 0) {
    return;
  }
  if (puVar5 == (undefined4 *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)puVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)puVar5 + -3) >> 5);
  iVar17 = *(int *)(iVar4 + 8) + 0x10;
  iVar16 = iVar14 * uVar15 + iVar14 + -4;
  iVar14 = iVar17 + iVar16;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar14 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar14 - (int)puVar5) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar17 + iVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)((int)puVar5 + -3) = 0xff;
  *(undefined2 *)((int)puVar5 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar18 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar8 = *puVar18;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar3);
    *puVar18 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

