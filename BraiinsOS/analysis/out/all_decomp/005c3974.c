// FUN_005c3974 @ 005c3974 size=124 calls_out=1 calls_in=71
// strings: 

void FUN_005c3974(uint *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = *param_1;
  if (uVar3 == 0) {
    if (param_1[2] == 0) {
      return;
    }
    puVar7 = (undefined4 *)param_1[1];
  }
  else {
    bVar15 = uVar3 == 1;
    if (bVar15) {
      uVar3 = (uint)(byte)param_1[1];
    }
    if (!bVar15 || uVar3 != 3) {
      return;
    }
    puVar7 = (undefined4 *)param_1[2];
    uVar11 = *puVar7;
    puVar13 = (undefined4 *)puVar7[1];
    pcVar4 = (code *)*puVar13;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar11);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
  }
  if (puVar7 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = FUN_016d3bc8();
  uVar3 = *(byte *)((int)puVar7 - 3) & 0x1f;
  if (((*(byte *)(iVar2 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar2 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar2 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)((int)puVar7 - 3) >> 5);
  iVar12 = *(int *)(iVar2 + 8) + 0x10;
  iVar9 = iVar5 * uVar3 + iVar5 + -4;
  iVar5 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar8 = *(uint *)(iVar5 + -4);
    if (uVar8 < 5) {
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
  if ((uint)(iVar5 - (int)puVar7) < uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar2 + 0x14);
  uVar8 = 1 << uVar3;
  *(undefined1 *)((int)puVar7 - 3) = 0xff;
  *(undefined2 *)((int)puVar7 - 2) = 0;
  do {
    uVar10 = *(uint *)(iVar2 + 0x10);
    uVar6 = *(uint *)(iVar2 + 0xc) | uVar10;
    if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar2,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar2 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar14 = (uint *)(iVar2 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar6 = *puVar14;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

