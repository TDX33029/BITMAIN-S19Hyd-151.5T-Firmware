// FUN_01495664 @ 01495664 size=144 calls_out=1 calls_in=0
// strings: 

void FUN_01495664(uint *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = *param_1;
  if (uVar3 == 0) {
    puVar10 = (undefined4 *)param_1[1];
    puVar13 = (undefined4 *)param_1[2];
    pcVar4 = (code *)*puVar13;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(puVar10);
    }
    if (puVar13[1] == 0) {
      return;
    }
  }
  else {
    bVar15 = uVar3 == 1;
    if (bVar15) {
      uVar3 = (uint)(byte)param_1[1];
    }
    if (!bVar15 || uVar3 != 3) {
      return;
    }
    puVar10 = (undefined4 *)param_1[2];
    uVar12 = *puVar10;
    puVar13 = (undefined4 *)puVar10[1];
    pcVar4 = (code *)*puVar13;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar12);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
  }
  if (puVar10 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = FUN_016d3bc8();
  uVar3 = *(byte *)((int)puVar10 - 3) & 0x1f;
  if (((*(byte *)(iVar2 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar2 + 0x14) & 0xfffff000, iVar5 = uVar7 - 0x10, uVar7 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar2 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)((int)puVar10 - 3) >> 5);
  iVar11 = *(int *)(iVar2 + 8) + 0x10;
  iVar8 = iVar5 * uVar3 + iVar5 + -4;
  iVar5 = iVar11 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar7 = *(uint *)(iVar5 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar5 - (int)puVar10) < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar5 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar2 + 0x14);
  uVar7 = 1 << uVar3;
  *(undefined1 *)((int)puVar10 - 3) = 0xff;
  *(undefined2 *)((int)puVar10 - 2) = 0;
  do {
    uVar9 = *(uint *)(iVar2 + 0x10);
    uVar6 = *(uint *)(iVar2 + 0xc) | uVar9;
    if ((uVar7 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar9 == 0) || (uVar6 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar2,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar10;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar10 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar2 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar14 = (uint *)(iVar2 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar6 = *puVar14;
      if (uVar9 != uVar6) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar6) {
      return;
    }
  } while( true );
}

