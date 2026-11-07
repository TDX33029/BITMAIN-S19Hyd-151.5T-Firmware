// FUN_007452f4 @ 007452f4 size=392 calls_out=4 calls_in=2
// strings: 

void FUN_007452f4(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x106);
  if (cVar1 == '\0') {
    bVar17 = *(short *)(param_1 + 0xc0) != 0;
    iVar4 = 0;
    if (bVar17) {
      iVar4 = *(int *)(param_1 + 0xc4);
    }
    if (bVar17 && iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 200));
    }
    bVar17 = *(short *)(param_1 + 0xe4) != 0;
    iVar4 = 0;
    if (bVar17) {
      iVar4 = *(int *)(param_1 + 0xe8);
    }
    if (!bVar17 || iVar4 == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0xec);
    if (iVar4 == 0) {
      return;
    }
    iVar6 = FUN_016d3bc8();
    uVar3 = *(byte *)(iVar4 + -3) & 0x1f;
    if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
       (uVar8 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar9 = uVar8 - 0x10, uVar8 == 0)) {
      iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar8 = (uint)(*(byte *)(iVar4 + -3) >> 5);
    iVar14 = *(int *)(iVar6 + 8) + 0x10;
    iVar11 = iVar9 * uVar3 + iVar9 + -4;
    iVar9 = iVar14 + iVar11;
    if (4 < uVar8) {
      if (uVar8 != 5) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar7)();
      }
      uVar8 = *(uint *)(iVar9 + -4);
      if (uVar8 < 5) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar7)();
      }
      if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar7)();
      }
    }
    if ((uint)(iVar9 - iVar4) < uVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar7)();
    }
    if (*(char *)(iVar9 - uVar8) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar7)();
    }
    if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar7)();
    }
    bVar2 = *(byte *)(iVar6 + 0x14);
    uVar8 = 1 << uVar3;
    *(undefined1 *)(iVar4 + -3) = 0xff;
    *(undefined2 *)(iVar4 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar6 + 0x10);
      uVar10 = *(uint *)(iVar6 + 0xc) | uVar12;
      if ((uVar8 & uVar10) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar7)();
      }
      if ((uVar12 == 0) || (uVar10 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar6,uVar3);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar15 = (undefined4 *)FUN_016d2bc8();
        uVar13 = *puVar15;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar15 = uVar13;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar6 + 0x10) = uVar8 + uVar12;
        return;
      }
      puVar16 = (uint *)(iVar6 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar10 = *puVar16;
        if (uVar12 != uVar10) goto LAB_016d409c;
        bVar17 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar17);
      *puVar16 = uVar8 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar10) {
        return;
      }
    } while( true );
  }
  if (cVar1 == '\x03') {
    FUN_00745144(param_1 + 0x108);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    puVar15 = *(undefined4 **)(param_1 + 0x174);
    uVar13 = *(undefined4 *)(param_1 + 0x170);
    pcVar7 = (code *)*puVar15;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar13);
    }
    if (puVar15[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    *(undefined1 *)(param_1 + 0x104) = 0;
    if (*(undefined1 **)(param_1 + 0x110) == &DAT_3b9aca00) {
      uVar3 = *(uint *)(param_1 + 0x114);
      uVar8 = 1;
      if ((int)uVar3 < 0) {
        uVar8 = uVar3 ^ 0x80000000;
      }
      if (uVar8 != 0) {
        if (uVar8 == 1) {
          if (uVar3 == 0) goto LAB_0074539c;
          uVar13 = *(undefined4 *)(param_1 + 0x118);
        }
        else {
          uVar13 = *(undefined4 *)(param_1 + 0x118);
          FUN_01047d98(uVar13);
        }
        thunk_FUN_016d3fb4(uVar13);
        *(undefined1 *)(param_1 + 0x105) = 0;
        return;
      }
    }
    else {
      bVar17 = *(short *)(param_1 + 0x120) != 0;
      iVar4 = 0;
      if (bVar17) {
        iVar4 = *(int *)(param_1 + 0x124);
      }
      if (bVar17 && iVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x128));
      }
      bVar17 = *(short *)(param_1 + 0x144) != 0;
      iVar4 = 0;
      if (bVar17) {
        iVar4 = *(int *)(param_1 + 0x148);
      }
      if (bVar17 && iVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14c));
      }
      piVar5 = *(int **)(param_1 + 0x118);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar17 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar17);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01059b88(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
      }
    }
  }
LAB_0074539c:
  *(undefined1 *)(param_1 + 0x105) = 0;
  return;
}

