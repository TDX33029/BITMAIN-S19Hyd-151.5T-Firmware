// FUN_00d31c28 @ 00d31c28 size=476 calls_out=4 calls_in=1
// strings: 

void FUN_00d31c28(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  
  cVar1 = *(char *)(param_1 + 0x50);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x150) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x13c);
        bVar17 = cVar1 == '\x03';
        if (bVar17) {
          cVar1 = *(char *)(param_1 + 0x134);
        }
        if ((bVar17 && cVar1 == '\x03') && (*(int *)(param_1 + 0x128) != 0)) {
          FUN_00c81a4c(*(int *)(param_1 + 0x128),*(undefined4 *)(param_1 + 300),1);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00d31b4c(param_1 + 0x68);
      FUN_00c48cbc(param_1 + 0x58);
    }
    if (*(char *)(param_1 + 0x51) != '\0') {
      iVar14 = *(int *)(param_1 + 0x48);
      iVar7 = 0;
      iVar11 = *(int *)(param_1 + 0x4c);
      while (iVar7 != iVar11) {
        iVar4 = iVar14 + iVar7 * 0x38;
        iVar12 = *(int *)(iVar4 + 0xc);
        puVar10 = (undefined4 *)(iVar12 + 0x10);
        for (iVar15 = *(int *)(iVar4 + 0x10); iVar15 != 0; iVar15 = iVar15 + -1) {
          if (puVar10[-4] != 0) {
            thunk_FUN_016d3fb4(puVar10[-3]);
          }
          if (puVar10[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar10);
          }
          puVar10 = puVar10 + 6;
        }
        iVar7 = iVar7 + 1;
        if (*(int *)(iVar4 + 8) != 0) {
          thunk_FUN_016d3fb4(iVar12);
        }
      }
      if (*(int *)(param_1 + 0x44) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x48));
      }
    }
    *(undefined1 *)(param_1 + 0x51) = 0;
    return;
  }
  iVar14 = *(int *)(param_1 + 0x34);
  iVar7 = 0;
  iVar11 = *(int *)(param_1 + 0x38);
  while (iVar7 != iVar11) {
    iVar4 = iVar14 + iVar7 * 0x38;
    iVar12 = *(int *)(iVar4 + 0xc);
    puVar10 = (undefined4 *)(iVar12 + 0x10);
    for (iVar15 = *(int *)(iVar4 + 0x10); iVar15 != 0; iVar15 = iVar15 + -1) {
      if (puVar10[-4] != 0) {
        thunk_FUN_016d3fb4(puVar10[-3]);
      }
      if (puVar10[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar10);
      }
      puVar10 = puVar10 + 6;
    }
    iVar7 = iVar7 + 1;
    if (*(int *)(iVar4 + 8) != 0) {
      thunk_FUN_016d3fb4(iVar12);
    }
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x34);
  if (iVar7 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar13 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar14 = uVar8 - 0x10, uVar8 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar8 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar12 = *(int *)(iVar11 + 8) + 0x10;
  iVar4 = iVar14 * uVar13 + iVar14 + -4;
  iVar14 = iVar12 + iVar4;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar8 = *(uint *)(iVar14 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar14 - iVar7) < uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar11 + 0x14);
  uVar8 = 1 << uVar13;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar11 + 0x10);
    uVar5 = *(uint *)(iVar11 + 0xc) | uVar9;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar9 == 0) || (uVar5 + uVar8 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar10;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar10 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar8 + uVar9;
      return;
    }
    puVar16 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar5 = *puVar16;
      if (uVar9 != uVar5) goto LAB_016d409c;
      bVar17 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar17);
    *puVar16 = uVar8 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar5) {
      return;
    }
  } while( true );
}

