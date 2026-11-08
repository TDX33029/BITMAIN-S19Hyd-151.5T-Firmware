// FUN_0063cd08 @ 0063cd08 size=120 calls_out=1 calls_in=5
// strings: 

void FUN_0063cd08(int param_1,int param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar6 = *(int *)(param_1 + 0xc);
  iVar7 = 0;
  if (iVar6 != 0) {
    param_2 = iVar6 * 9;
    iVar7 = iVar6 * 0x49;
  }
  if (iVar6 != 0 && iVar7 != -0x4d) {
    thunk_FUN_016d3fb4(*(int *)(param_1 + 8) + param_2 * -8 + -0x48);
  }
  if (param_1 == -1) {
    return;
  }
  piVar5 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar7 + -1;
  if (iVar7 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar14 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar13 = *(int *)(iVar7 + 8) + 0x10;
  iVar11 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar6 - param_1) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar7 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar7 + 0x10);
    uVar8 = *(uint *)(iVar7 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar1);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

