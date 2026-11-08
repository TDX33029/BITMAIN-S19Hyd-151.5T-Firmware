// FUN_0103e1dc @ 0103e1dc size=328 calls_out=5 calls_in=1
// strings: 

void FUN_0103e1dc(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar12 = param_2[1];
  iVar13 = param_2[2];
  uVar3 = 0;
  if (iVar13 < 0) {
LAB_0103e1f8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,iVar13);
  }
  if (iVar13 == 0) {
    FUN_016dd1aa(1,iVar12,0);
    iVar12 = param_2[1];
    iVar13 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar12;
    param_1[2] = iVar13;
    return;
  }
  iVar4 = thunk_FUN_016d4a50(iVar13);
  if (iVar4 == 0) {
    uVar3 = 1;
    goto LAB_0103e1f8;
  }
  FUN_016dd1aa(iVar4,iVar12,iVar13);
  iVar5 = 0;
  do {
    bVar7 = *(byte *)(iVar4 + iVar5);
    if (bVar7 - 0x41 < 0x1a) {
      bVar7 = bVar7 | 0x20;
    }
    *(byte *)(iVar4 + iVar5) = bVar7;
    iVar5 = iVar5 + 1;
  } while (iVar13 != iVar5);
  if (iVar13 == 9) {
    iVar13 = thunk_FUN_016dd50a(iVar4,&DAT_003839ef,9);
    if (iVar13 == 0) {
      iVar13 = -0x7fffffff;
      goto LAB_0103e2f8;
    }
  }
  else if (iVar13 == 5) {
    iVar13 = thunk_FUN_016dd50a(iVar4,&DAT_003839ea,5);
    if (iVar13 == 0) {
      iVar13 = -0x80000000;
    }
    else {
      iVar13 = thunk_FUN_016dd50a(iVar4,&DAT_003839f8,5);
      if (iVar13 != 0) goto LAB_0103e2d4;
      iVar13 = -0x7ffffffe;
    }
LAB_0103e2f8:
    *param_1 = iVar13;
    thunk_FUN_016d3fb4(iVar4);
    if (*param_2 == 0) {
      return;
    }
    iVar4 = iVar12;
    goto LAB_014b47f4;
  }
LAB_0103e2d4:
  iVar12 = param_2[1];
  iVar13 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = iVar12;
  param_1[2] = iVar13;
LAB_014b47f4:
  if (iVar4 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar13 = uVar9 - 0x10, uVar9 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar11 = *(int *)(iVar12 + 8) + 0x10;
  iVar5 = iVar13 * uVar14 + iVar13 + -4;
  iVar13 = iVar11 + iVar5;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar13 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar13 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar5) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar7 = *(byte *)(iVar12 + 0x14);
  uVar9 = 1 << uVar14;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar12 + 0x10);
    uVar8 = *(uint *)(iVar12 + 0xc) | uVar10;
    if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar8 + uVar9 == (2 << (bVar7 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar3 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar3;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar9 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar10 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar9 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar8) {
      return;
    }
  } while( true );
}

