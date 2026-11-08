// FUN_00edc308 @ 00edc308 size=592 calls_out=1 calls_in=1
// strings: 

void FUN_00edc308(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*param_1) {
  case 0:
  case 1:
  case 3:
    break;
  case 2:
    if (param_1[2] == 0) {
      return;
    }
    iVar6 = param_1[1];
    goto LAB_014b47f4;
  case 4:
    iVar8 = param_1[2];
    if (iVar8 == 0) {
      return;
    }
    iVar6 = param_1[1];
    piVar12 = (int *)(iVar6 + 4);
    do {
      if (*piVar12 != 0) {
        thunk_FUN_016d3fb4(piVar12[-1]);
      }
      piVar12 = piVar12 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    goto LAB_014b47f4;
  case 5:
    if (param_1[2] != 0) {
      iVar6 = param_1[1];
      goto LAB_014b47f4;
    }
    break;
  case 6:
    if (param_1[2] != 0) {
      iVar6 = param_1[1];
      goto LAB_014b47f4;
    }
    break;
  case 7:
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[3]);
    }
    if (param_1[6] != 0) {
      iVar6 = param_1[5];
      goto LAB_014b47f4;
    }
    break;
  case 8:
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[3]);
    }
    if (param_1[6] != 0) {
      iVar6 = param_1[5];
      goto LAB_014b47f4;
    }
    break;
  case 9:
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[3]);
    }
    iVar8 = param_1[6];
    if (iVar8 == 0) {
      return;
    }
    iVar6 = param_1[5];
    iVar13 = 0;
    do {
      puVar4 = (undefined4 *)(iVar6 + iVar13 * 8);
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(*puVar4);
      }
      iVar13 = iVar13 + 1;
    } while (iVar8 != iVar13);
    goto LAB_014b47f4;
  case 10:
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[4] != 0) {
      iVar6 = param_1[3];
      goto LAB_014b47f4;
    }
    break;
  case 0xb:
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[4] == 0) {
      return;
    }
    iVar6 = param_1[3];
LAB_014b47f4:
    if (iVar6 == 0) {
      return;
    }
    iVar8 = FUN_016d3bc8();
    uVar15 = *(byte *)(iVar6 + -3) & 0x1f;
    if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
       (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar13 = uVar9 - 0x10, uVar9 == 0)) {
      iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar9 = (uint)(*(byte *)(iVar6 + -3) >> 5);
    iVar14 = *(int *)(iVar8 + 8) + 0x10;
    iVar10 = iVar13 * uVar15 + iVar13 + -4;
    iVar13 = iVar14 + iVar10;
    if (4 < uVar9) {
      if (uVar9 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar9 = *(uint *)(iVar13 + -4);
      if (uVar9 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar13 - iVar6) < uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 - uVar9) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + iVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar8 + 0x14);
    uVar9 = 1 << uVar15;
    *(undefined1 *)(iVar6 + -3) = 0xff;
    *(undefined2 *)(iVar6 + -2) = 0;
    do {
      uVar11 = *(uint *)(iVar8 + 0x10);
      uVar5 = *(uint *)(iVar8 + 0xc) | uVar11;
      if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar11 == 0) || (uVar5 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar8,uVar15);
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
        *(uint *)(iVar8 + 0x10) = uVar9 + uVar11;
        return;
      }
      puVar16 = (uint *)(iVar8 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar5 = *puVar16;
        if (uVar11 != uVar5) goto LAB_016d409c;
        bVar3 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar3);
      *puVar16 = uVar9 + uVar11;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar11 == uVar5) {
        return;
      }
    } while( true );
  case 0xc:
    if (param_1[2] != 0) {
      iVar6 = param_1[1];
      goto LAB_014b47f4;
    }
    break;
  default:
    if (param_1[3] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    if (param_1[5] != 0) {
      iVar6 = param_1[4];
      goto LAB_014b47f4;
    }
  }
  return;
}

