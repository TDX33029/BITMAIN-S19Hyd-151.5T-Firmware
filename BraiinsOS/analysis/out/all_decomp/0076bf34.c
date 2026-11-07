// FUN_0076bf34 @ 0076bf34 size=244 calls_out=1 calls_in=1
// strings: 

void FUN_0076bf34(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  int unaff_r4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r6;
  undefined4 uVar9;
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
      iVar2 = 0;
      if (bVar15) {
        unaff_r6 = iVar11 - iVar6;
        iVar2 = *(int *)(unaff_r6 + 4);
      }
      if (bVar15 && iVar2 != 0) {
        (**(code **)(iVar2 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar6 = iVar6 + -0xc;
    } while (iVar12 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(iVar11);
  }
  iVar12 = *(int *)(param_1 + 0x24);
  iVar11 = *(int *)(param_1 + 0x28);
  if (iVar11 != 0) {
    iVar6 = 0;
    do {
      puVar3 = (undefined4 *)(iVar12 + iVar6 * 8);
      uVar9 = *puVar3;
      puVar3 = (undefined4 *)puVar3[1];
      pcVar4 = (code *)*puVar3;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar9);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
      iVar6 = iVar6 + 1;
    } while (iVar11 != iVar6);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  if (iVar12 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar13 = *(byte *)(iVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar6 = uVar7 - 0x10, uVar7 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar12 + -3) >> 5);
  iVar10 = *(int *)(iVar11 + 8) + 0x10;
  iVar2 = iVar6 * uVar13 + iVar6 + -4;
  iVar6 = iVar10 + iVar2;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar7 = *(uint *)(iVar6 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar6 - iVar12) < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar6 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar10 + iVar2) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar11 + 0x14);
  uVar7 = 1 << uVar13;
  *(undefined1 *)(iVar12 + -3) = 0xff;
  *(undefined2 *)(iVar12 + -2) = 0;
  do {
    uVar8 = *(uint *)(iVar11 + 0x10);
    uVar5 = *(uint *)(iVar11 + 0xc) | uVar8;
    if ((uVar7 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar8 == 0) || (uVar5 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar3 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar3;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar3 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar7 + uVar8;
      return;
    }
    puVar14 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar8 != uVar5) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar7 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar5) {
      return;
    }
  } while( true );
}

