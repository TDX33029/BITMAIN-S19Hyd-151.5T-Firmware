// FUN_00d84954 @ 00d84954 size=208 calls_out=2 calls_in=1
// strings: 

void FUN_00d84954(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = *param_1;
  uVar7 = 5;
  if ((int)uVar5 < 0) {
    uVar7 = uVar5 ^ 0x80000000;
  }
  switch(uVar7) {
  case 0:
    if ((char)param_1[1] != '\x03') {
      return;
    }
    puVar3 = (undefined4 *)param_1[2];
    uVar13 = *puVar3;
    puVar12 = (undefined4 *)puVar3[1];
    pcVar6 = (code *)*puVar12;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar13);
    }
    if (puVar12[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    break;
  case 1:
  case 4:
    return;
  case 2:
    FUN_00f3d3b0(param_1[1]);
    return;
  case 3:
    puVar3 = (undefined4 *)param_1[1];
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    puVar12 = (undefined4 *)param_1[2];
    pcVar6 = (code *)*puVar12;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(puVar3);
    }
    if (puVar12[1] == 0) {
      return;
    }
    break;
  default:
    if (uVar5 == 0) {
      return;
    }
    puVar3 = (undefined4 *)param_1[1];
  }
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar5 = *(byte *)((int)puVar3 - 3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar7 - 0x10, uVar7 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)((int)puVar3 - 3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar8 * uVar5 + iVar8 + -4;
  iVar8 = iVar14 + iVar10;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar7 = *(uint *)(iVar8 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar8 - (int)puVar3) < uVar7) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar8 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar14 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar1 = *(byte *)(iVar4 + 0x14);
  uVar7 = 1 << uVar5;
  *(undefined1 *)((int)puVar3 - 3) = 0xff;
  *(undefined2 *)((int)puVar3 - 2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar9 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar7 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar11 == 0) || (uVar9 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar3 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar3;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar3 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar7 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar9 = *puVar15;
      if (uVar11 != uVar9) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar7 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar9) {
      return;
    }
  } while( true );
}

