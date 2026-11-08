// FUN_00a3f9f0 @ 00a3f9f0 size=596 calls_out=1 calls_in=3
// strings: 

void FUN_00a3f9f0(undefined4 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar12 = param_1[2];
  iVar14 = param_1[3];
  switch(*param_1) {
  case 0:
    if (iVar14 != 0) {
      piVar8 = (int *)(iVar12 + 4);
      do {
        bVar1 = *(byte *)(piVar8 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar8 != 0)) {
          thunk_FUN_016d3fb4(piVar8[1]);
        }
        piVar8 = piVar8 + 0x104;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    break;
  case 1:
    if (iVar14 != 0) {
      piVar8 = (int *)(iVar12 + 4);
      do {
        bVar1 = *(byte *)(piVar8 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar8 != 0)) {
          thunk_FUN_016d3fb4(piVar8[1]);
        }
        piVar8 = piVar8 + 0x104;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    break;
  case 2:
    if (iVar14 != 0) {
      piVar8 = (int *)(iVar12 + 4);
      do {
        bVar1 = *(byte *)(piVar8 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar8 != 0)) {
          thunk_FUN_016d3fb4(piVar8[1]);
        }
        piVar8 = piVar8 + 0x104;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    break;
  case 3:
    if (iVar14 != 0) {
      piVar8 = (int *)(iVar12 + 4);
      do {
        bVar1 = *(byte *)(piVar8 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar8 != 0)) {
          thunk_FUN_016d3fb4(piVar8[1]);
        }
        piVar8 = piVar8 + 0x104;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    break;
  case 4:
    if (iVar14 != 0) {
      piVar8 = (int *)(iVar12 + 4);
      do {
        bVar1 = *(byte *)(piVar8 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar8 != 0)) {
          thunk_FUN_016d3fb4(piVar8[1]);
        }
        piVar8 = piVar8 + 0x104;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    break;
  case 5:
    if (iVar14 != 0) {
      piVar8 = (int *)(iVar12 + 4);
      do {
        bVar1 = *(byte *)(piVar8 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar8 != 0)) {
          thunk_FUN_016d3fb4(piVar8[1]);
        }
        piVar8 = piVar8 + 0x104;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    break;
  default:
    if (iVar14 != 0) {
      piVar8 = (int *)(iVar12 + 4);
      do {
        bVar1 = *(byte *)(piVar8 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar8 != 0)) {
          thunk_FUN_016d3fb4(piVar8[1]);
        }
        piVar8 = piVar8 + 0x104;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  if (iVar12 == 0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar12 + -3) >> 5);
  iVar13 = *(int *)(iVar14 + 8) + 0x10;
  iVar10 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar9 = *(uint *)(iVar5 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar5 - iVar12) < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(iVar14 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar12 + -3) = 0xff;
  *(undefined2 *)(iVar12 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar14 + 0x10);
    uVar6 = *(uint *)(iVar14 + 0xc) | uVar11;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar11 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar6) {
      return;
    }
  } while( true );
}

