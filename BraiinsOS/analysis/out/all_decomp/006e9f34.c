// FUN_006e9f34 @ 006e9f34 size=180 calls_out=1 calls_in=0
// strings: 

void FUN_006e9f34(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int unaff_r4;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if ((iVar3 != 0) && (iVar4 = iVar3 * 4 + 4, iVar3 + iVar4 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_1 + 0x1c) - iVar4);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    iVar7 = iVar4 + 0x20;
    do {
      uVar13 = *(undefined4 *)(iVar7 + -0x18);
      puVar14 = *(undefined4 **)(iVar7 + -0x14);
      pcVar5 = (code *)*puVar14;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar13);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      iVar7 = iVar7 + 0x14;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar12 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar7 = uVar8 - 0x10, uVar8 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar11 = *(int *)(iVar3 + 8) + 0x10;
  iVar9 = iVar7 * uVar12 + iVar7 + -4;
  iVar7 = iVar11 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar8 = *(uint *)(iVar7 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar7 - iVar4) < uVar8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar7 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar8 = 1 << uVar12;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar3 + 0x10);
    uVar6 = *(uint *)(iVar3 + 0xc) | uVar10;
    if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar12);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar14;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar14 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

