// FUN_016c2ce4 @ 016c2ce4 size=132 calls_out=2 calls_in=2
// strings: 

void FUN_016c2ce4(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int extraout_r1;
  int extraout_r1_00;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar8 = param_1[3] - param_1[1];
  if (uVar8 != 0) {
    iVar5 = uVar8 * -0x33333333;
    uVar8 = uVar8 / 0x28;
    piVar4 = (int *)param_1[1];
    do {
      if (*piVar4 == 0) {
        if (piVar4[4] != 0) {
          thunk_FUN_016d3fb4(piVar4[5]);
          iVar5 = extraout_r1_00;
        }
      }
      else {
        FUN_016c2b3c(piVar4 + 1,iVar5);
        iVar5 = extraout_r1;
      }
      uVar8 = uVar8 - 1;
      piVar4 = piVar4 + 10;
    } while (uVar8 != 0);
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar8 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar15 = *(int *)(iVar6 + 8) + 0x10;
  iVar13 = iVar9 * uVar8 + iVar9 + -4;
  iVar9 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar9 + -4);
    if (uVar12 < 5) {
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
  if ((uint)(iVar9 - iVar5) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar12 = 1 << uVar8;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar6 + 0x10);
    uVar10 = *(uint *)(iVar6 + 0xc) | uVar14;
    if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar8);
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
      *(uint *)(iVar6 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar10 = *puVar16;
      if (uVar14 != uVar10) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar10) {
      return;
    }
  } while( true );
}

