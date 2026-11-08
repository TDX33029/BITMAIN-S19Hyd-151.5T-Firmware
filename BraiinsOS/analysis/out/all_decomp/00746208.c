// FUN_00746208 @ 00746208 size=736 calls_out=3 calls_in=2
// strings: 

void FUN_00746208(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (5 < *(byte *)(param_1 + 0x105)) {
    return;
  }
  iVar15 = 0xc0;
  switch(*(byte *)(param_1 + 0x105)) {
  case 0:
    goto switchD_0074622c_caseD_0;
  default:
    goto switchD_0074622c_caseD_1;
  case 3:
    iVar15 = 0x6c;
    if (*(char *)(param_1 + 0x215) == '\x03') {
      puVar11 = *(undefined4 **)(param_1 + 0x174);
      uVar4 = *(undefined4 *)(param_1 + 0x170);
      pcVar6 = (code *)*puVar11;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar4);
      }
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      *(undefined1 *)(param_1 + 0x214) = 0;
      goto switchD_0074622c_caseD_0;
    }
    if (*(char *)(param_1 + 0x215) != '\0') goto switchD_0074622c_caseD_0;
    bVar17 = *(short *)(param_1 + 0x1c8) != 0;
    iVar5 = 0;
    if (bVar17) {
      iVar5 = *(int *)(param_1 + 0x1cc);
    }
    if (bVar17 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1d0));
    }
    bVar17 = *(short *)(param_1 + 0x1ec) == 0;
    iVar5 = 0;
    if (!bVar17) {
      iVar5 = *(int *)(param_1 + 0x1f0);
    }
    if (bVar17 || iVar5 == 0) goto switchD_0074622c_caseD_0;
    uVar4 = *(undefined4 *)(param_1 + 500);
    goto LAB_007464bc;
  case 4:
    if (*(char *)(param_1 + 0x27d) == '\x03') {
      puVar11 = *(undefined4 **)(param_1 + 0x1dc);
      uVar4 = *(undefined4 *)(param_1 + 0x1d8);
      pcVar6 = (code *)*puVar11;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar4);
      }
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      *(undefined1 *)(param_1 + 0x27c) = 0;
    }
    else if (*(char *)(param_1 + 0x27d) == '\0') {
      bVar17 = *(short *)(param_1 + 0x230) != 0;
      iVar15 = 0;
      if (bVar17) {
        iVar15 = *(int *)(param_1 + 0x234);
      }
      if (bVar17 && iVar15 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x238));
      }
      bVar17 = *(short *)(param_1 + 0x254) != 0;
      iVar15 = 0;
      if (bVar17) {
        iVar15 = *(int *)(param_1 + 600);
      }
      if (bVar17 && iVar15 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x25c));
      }
    }
    bVar17 = *(short *)(param_1 + 0x120) != 0;
    iVar15 = 0;
    if (bVar17) {
      iVar15 = *(int *)(param_1 + 0x124);
    }
    if (bVar17 && iVar15 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x128));
    }
    bVar17 = *(short *)(param_1 + 0x144) != 0;
    iVar15 = 0;
    if (bVar17) {
      iVar15 = *(int *)(param_1 + 0x148);
    }
    if (bVar17 && iVar15 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14c));
    }
    piVar2 = *(int **)(param_1 + 0x118);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar17 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar17);
    *piVar2 = iVar5 + -1;
    iVar15 = 0x104;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01059b88(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
    }
LAB_0074645c:
    *(undefined1 *)(param_1 + iVar15) = 0;
    break;
  case 5:
    if (*(char *)(param_1 + 0x215) == '\x03') {
      puVar11 = *(undefined4 **)(param_1 + 0x174);
      uVar4 = *(undefined4 *)(param_1 + 0x170);
      pcVar6 = (code *)*puVar11;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar4);
      }
      iVar15 = 0x214;
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      goto LAB_0074645c;
    }
    if (*(char *)(param_1 + 0x215) == '\0') {
      bVar17 = *(short *)(param_1 + 0x1c8) != 0;
      iVar15 = 0;
      if (bVar17) {
        iVar15 = *(int *)(param_1 + 0x1cc);
      }
      if (bVar17 && iVar15 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1d0));
      }
      bVar17 = *(short *)(param_1 + 0x1ec) != 0;
      iVar15 = 0;
      if (bVar17) {
        iVar15 = *(int *)(param_1 + 0x1f0);
      }
      if (bVar17 && iVar15 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 500));
      }
    }
  }
  iVar15 = 0x6c;
  if (*(undefined1 **)(param_1 + 8) == &DAT_3b9aca00) {
    uVar3 = *(uint *)(param_1 + 0xc);
    uVar7 = 1;
    if ((int)uVar3 < 0) {
      uVar7 = uVar3 ^ 0x80000000;
    }
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        if (uVar3 == 0) goto switchD_0074622c_caseD_0;
        uVar4 = *(undefined4 *)(param_1 + 0x10);
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x10);
        FUN_01047d98(uVar4);
      }
LAB_007464bc:
      iVar15 = 0x6c;
      thunk_FUN_016d3fb4(uVar4);
    }
  }
switchD_0074622c_caseD_0:
  psVar10 = (short *)(param_1 + iVar15);
  iVar15 = 0;
  if (*psVar10 != 0) {
    iVar15 = *(int *)(psVar10 + 2);
  }
  if (*psVar10 != 0 && iVar15 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(psVar10 + 4));
  }
  iVar15 = 0;
  if (psVar10[0x12] != 0) {
    iVar15 = *(int *)(psVar10 + 0x14);
  }
  if (psVar10[0x12] != 0 && iVar15 != 0) {
    iVar15 = *(int *)(psVar10 + 0x16);
    if (iVar15 == 0) {
      return;
    }
    iVar5 = FUN_016d3bc8();
    uVar3 = *(byte *)(iVar15 + -3) & 0x1f;
    if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
       (uVar7 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar7 - 0x10, uVar7 == 0)) {
      iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar7 = (uint)(*(byte *)(iVar15 + -3) >> 5);
    iVar14 = *(int *)(iVar5 + 8) + 0x10;
    iVar12 = iVar8 * uVar3 + iVar8 + -4;
    iVar8 = iVar14 + iVar12;
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
    if ((uint)(iVar8 - iVar15) < uVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar6)();
    }
    if (*(char *)(iVar8 - uVar7) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar6)();
    }
    if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar6)();
    }
    bVar1 = *(byte *)(iVar5 + 0x14);
    uVar7 = 1 << uVar3;
    *(undefined1 *)(iVar15 + -3) = 0xff;
    *(undefined2 *)(iVar15 + -2) = 0;
    do {
      uVar13 = *(uint *)(iVar5 + 0x10);
      uVar9 = *(uint *)(iVar5 + 0xc) | uVar13;
      if ((uVar7 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar6)();
      }
      if ((uVar13 == 0) || (uVar9 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar5,uVar3);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar11 = (undefined4 *)FUN_016d2bc8();
        uVar4 = *puVar11;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar11 = uVar4;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar5 + 0x10) = uVar7 + uVar13;
        return;
      }
      puVar16 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar9 = *puVar16;
        if (uVar13 != uVar9) goto LAB_016d409c;
        bVar17 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar17);
      *puVar16 = uVar7 + uVar13;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar13 == uVar9) {
        return;
      }
    } while( true );
  }
switchD_0074622c_caseD_1:
  return;
}

