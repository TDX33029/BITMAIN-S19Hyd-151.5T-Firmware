// FUN_0078eea8 @ 0078eea8 size=192 calls_out=2 calls_in=2
// strings: 

void FUN_0078eea8(int param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r4;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r6;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  
  iVar11 = *(int *)(param_1 + 0x10);
  iVar12 = *(int *)(param_1 + 0x14);
  if (iVar12 != 0) {
    iVar6 = 0;
    do {
      iVar12 = iVar12 + -1;
      bVar15 = *(int *)(iVar11 - iVar6) != 0;
      iVar3 = 0;
      if (bVar15) {
        unaff_r6 = iVar11 - iVar6;
        iVar3 = *(int *)(unaff_r6 + 4);
      }
      if (bVar15 && iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar6 = iVar6 + -0xc;
    } while (iVar12 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(iVar11);
  }
  iVar6 = *(int *)(param_1 + 0x24);
  iVar11 = *(int *)(param_1 + 0x28) + 1;
  iVar12 = iVar6;
  while (iVar11 = iVar11 + -1, iVar11 != 0) {
    FUN_0096e5e8(iVar12);
    iVar12 = iVar12 + 0x60;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  if (iVar6 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar13 = *(byte *)(iVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar11 = uVar8 - 0x10, uVar8 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar8 = (uint)(*(byte *)(iVar6 + -3) >> 5);
  iVar10 = *(int *)(iVar12 + 8) + 0x10;
  iVar3 = iVar11 * uVar13 + iVar11 + -4;
  iVar11 = iVar10 + iVar3;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar11 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar11 - iVar6) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 + iVar3) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar12 + 0x14);
  uVar8 = 1 << uVar13;
  *(undefined1 *)(iVar6 + -3) = 0xff;
  *(undefined2 *)(iVar6 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar12 + 0x10);
    uVar5 = *(uint *)(iVar12 + 0xc) | uVar9;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar5 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar4;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar4 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar8 + uVar9;
      return;
    }
    puVar14 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar9 != uVar5) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar8 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar5) {
      return;
    }
  } while( true );
}

