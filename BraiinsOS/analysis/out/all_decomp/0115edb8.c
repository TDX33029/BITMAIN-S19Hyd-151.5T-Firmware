// FUN_0115edb8 @ 0115edb8 size=268 calls_out=4 calls_in=5
// strings: 

void FUN_0115edb8(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = 2;
  if (0x10ffff < *param_1) {
    iVar4 = *param_1 - 0x110000;
  }
  switch(iVar4) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    return;
  case 4:
    uVar9 = 2;
    puVar16 = param_1 + 1;
    uVar6 = *puVar16;
    if ((int)uVar6 < 0) {
      uVar9 = uVar6 ^ 0x80000000;
    }
    if (uVar9 == 0) {
      return;
    }
    iVar4 = 4;
    if (uVar9 != 1) {
      iVar4 = 0xc;
    }
    if (uVar9 != 1 && uVar6 != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
      iVar7 = *(int *)((int)puVar16 + iVar4);
    }
    else {
      iVar7 = *(int *)((int)puVar16 + iVar4);
    }
    if (iVar7 == 0) {
      return;
    }
    piVar15 = *(int **)((int)puVar16 + iVar4 + 4);
    break;
  case 6:
    piVar15 = (int *)param_1[1];
    FUN_013f5720(piVar15);
    if (*piVar15 == 0x110008) {
      FUN_0115ef54(piVar15 + 1);
    }
    else {
      FUN_0115edb8(piVar15);
    }
    break;
  default:
    piVar15 = (int *)param_1[2];
    iVar4 = param_1[3] + 1;
    piVar5 = piVar15;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_0115edb8(piVar5);
      piVar5 = piVar5 + 0x16;
    }
    if (param_1[1] == 0) {
      return;
    }
  }
  if (piVar15 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar6 = *(byte *)((int)piVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)((int)piVar15 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar7 * uVar6 + iVar7 + -4;
  iVar7 = iVar14 + iVar12;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar7 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - (int)piVar15) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar6;
  *(undefined1 *)((int)piVar15 + -3) = 0xff;
  *(undefined2 *)((int)piVar15 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar10 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar9 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar10 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar9 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar10 = *puVar16;
      if (uVar13 != uVar10) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar9 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar10) {
      return;
    }
  } while( true );
}

