// FUN_006e0f84 @ 006e0f84 size=272 calls_out=5 calls_in=0
// strings: 

void FUN_006e0f84(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar3 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    iVar4 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x30) == 0 && *(int *)(param_1 + 0x34) == 0) {
      if (iVar4 != 0) {
        FUN_006495dc();
      }
    }
    else if (iVar4 != 0) {
      puVar13 = *(undefined4 **)(param_1 + 0x3c);
      pcVar5 = (code *)*puVar13;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar4);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(iVar4);
      }
    }
  }
  else if (*(int *)(param_1 + 0x28) == 0) {
    FUN_006c7774(param_1 + 0x30);
  }
  if (*(int *)(param_1 + 0x170) != 0) {
    (**(code **)(*(int *)(param_1 + 0x170) + 0xc))(*(undefined4 *)(param_1 + 0x174));
  }
  piVar3 = *(int **)(param_1 + 0x178);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x17c));
    }
  }
  if (param_1 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar14 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar6 - param_1) < uVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar14;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar1);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

