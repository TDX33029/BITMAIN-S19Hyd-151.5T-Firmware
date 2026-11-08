// FUN_01505e14 @ 01505e14 size=188 calls_out=1 calls_in=0
// strings: 

void FUN_01505e14(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((param_1[3] & 0x7fffffffU) == 0) {
    iVar14 = param_1[2];
    piVar15 = (int *)param_1[1];
  }
  else {
    thunk_FUN_016d3fb4(param_1[4]);
    iVar14 = param_1[2];
    piVar15 = (int *)param_1[1];
  }
  if (iVar14 != 0) {
    iVar9 = 0;
    piVar12 = piVar15;
    do {
      iVar4 = *piVar12;
      if (iVar4 != -0x80000000) {
        piVar6 = piVar12;
        if (iVar4 == -0x7fffffff) {
          iVar4 = piVar12[1];
          if (iVar4 == -0x80000000) goto LAB_01505e64;
          piVar6 = piVar15 + iVar9 * 4 + 1;
        }
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(piVar6[1]);
        }
      }
LAB_01505e64:
      iVar9 = iVar9 + 1;
      piVar12 = piVar12 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  if (piVar15 == (int *)0x0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)piVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar9 = uVar10 - 0x10, uVar10 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)piVar15 + -3) >> 5);
  iVar13 = *(int *)(iVar14 + 8) + 0x10;
  iVar4 = iVar9 * uVar16 + iVar9 + -4;
  iVar9 = iVar13 + iVar4;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar9 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar9 - (int)piVar15) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)((int)piVar15 + -3) = 0xff;
  *(undefined2 *)((int)piVar15 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar14 + 0x10);
    uVar7 = *(uint *)(iVar14 + 0xc) | uVar11;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar17 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar7 = *puVar17;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

