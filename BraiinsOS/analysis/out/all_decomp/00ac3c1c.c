// FUN_00ac3c1c @ 00ac3c1c size=512 calls_out=14 calls_in=0
// strings: 

void FUN_00ac3c1c(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 auStack_130 [264];
  undefined4 uStack_28;
  int iStack_24;
  
  DataMemoryBarrier(0xb);
  if (DAT_018d7c7c == 0) {
    FUN_007901fc(auStack_130,param_1);
    FUN_00777ed8(auStack_130);
  }
  FUN_00b50e5c(param_1 + 0x3d8);
  if (*(int *)(param_1 + 0x370) != -0x80000000) {
    FUN_00b40624();
  }
  FUN_00ac4504(param_1 + 0x2a0);
  FUN_00ac424c(param_1 + 0x20);
  FUN_00790694(param_1 + 0x540);
  FUN_007907f4(param_1 + 0x300);
  piVar3 = *(int **)(param_1 + 0x53c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007843c4(*(undefined4 *)(param_1 + 0x53c));
  }
  FUN_00bb0e3c(param_1 + 0x4e8);
  FUN_00bb1984(param_1 + 0x510);
  puVar9 = *(undefined4 **)(param_1 + 0x3bc);
  uVar13 = *(undefined4 *)(param_1 + 0x3b8);
  pcVar6 = (code *)*puVar9;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar13);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(uVar13);
  }
  puVar9 = *(undefined4 **)(param_1 + 0x3c4);
  uVar13 = *(undefined4 *)(param_1 + 0x3c0);
  pcVar6 = (code *)*puVar9;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar13);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(uVar13);
  }
  puVar9 = *(undefined4 **)(param_1 + 0x3cc);
  uVar13 = *(undefined4 *)(param_1 + 0x3c8);
  pcVar6 = (code *)*puVar9;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar13);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(uVar13);
  }
  FUN_005c3320(param_1);
  piVar3 = *(int **)(param_1 + 0x564);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fb60(*(undefined4 *)(param_1 + 0x564));
    }
  }
  iVar5 = *(int *)(param_1 + 0x344);
  if (iVar5 != 0) {
    piVar3 = *(int **)(param_1 + 0x340);
    do {
      iVar5 = iVar5 + -1;
      iVar4 = 0;
      if (*piVar3 != 0) {
        iVar4 = piVar3[1];
      }
      if (*piVar3 != 0 && iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(piVar3[2]);
      }
      piVar3 = piVar3 + 3;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x33c) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x340);
  if (iVar5 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar7 - iVar5) < uVar10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

