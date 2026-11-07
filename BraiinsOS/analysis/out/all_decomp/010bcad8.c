// FUN_010bcad8 @ 010bcad8 size=240 calls_out=0 calls_in=3
// strings: 

void FUN_010bcad8(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  
  if (*param_2 == 0) {
    iVar6 = *param_3;
    iVar8 = param_3[1];
    iVar10 = param_3[2];
    iVar13 = 0;
    param_3 = param_2 + 1;
    iVar14 = *param_3;
    param_1[1] = iVar6;
    param_1[2] = iVar8;
    param_1[3] = iVar10;
    iVar6 = param_2[4];
    *param_1 = 0;
    *(char *)(param_1 + 4) = (char)iVar6;
    if (iVar14 == -0x80000000) {
      return;
    }
    iVar8 = param_2[2];
    iVar6 = param_2[3] + 1;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      piVar5 = (int *)(iVar8 + iVar13);
      iVar13 = iVar13 + 0x14;
      (**(code **)(*piVar5 + 0x10))(piVar5 + 3,piVar5[1],piVar5[2]);
    }
  }
  else {
    iVar6 = param_2[1];
    iVar8 = param_2[2];
    iVar10 = param_2[3];
    iVar13 = param_2[4];
    iVar14 = param_2[5];
    *param_1 = *param_2;
    param_1[1] = iVar6;
    param_1[2] = iVar8;
    param_1[3] = iVar10;
    param_1[4] = iVar13;
    param_1[5] = iVar14;
    iVar6 = 0;
    iVar10 = param_3[1];
    iVar8 = param_3[2] + 1;
    while (iVar8 = iVar8 + -1, iVar8 != 0) {
      piVar5 = (int *)(iVar10 + iVar6);
      iVar6 = iVar6 + 0x14;
      (**(code **)(*piVar5 + 0x10))(piVar5 + 3,piVar5[1],piVar5[2]);
    }
    iVar14 = *param_3;
  }
  if (iVar14 == 0) {
    return;
  }
  iVar6 = param_3[1];
  if (iVar6 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar10 = uVar11 - 0x10, uVar11 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar6 + -3) >> 5);
  iVar14 = *(int *)(iVar8 + 8) + 0x10;
  iVar13 = iVar10 * uVar15 + iVar10 + -4;
  iVar10 = iVar14 + iVar13;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar10 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar10 - iVar6) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar8 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)(iVar6 + -3) = 0xff;
  *(undefined2 *)(iVar6 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar8 + 0x10);
    uVar7 = *(uint *)(iVar8 + 0xc) | uVar12;
    if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar8,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar4;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar4 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

