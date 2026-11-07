// FUN_00abfa48 @ 00abfa48 size=800 calls_out=2 calls_in=3
// strings: 

void FUN_00abfa48(undefined4 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*param_1) {
  case 0:
    if (*(char *)(param_1 + 1) != '\x03') {
      return;
    }
    puVar4 = (undefined4 *)param_1[2];
    uVar11 = *puVar4;
    puVar14 = (undefined4 *)puVar4[1];
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(uVar11);
    }
    break;
  case 1:
    if (*(char *)(param_1 + 1) != '\x03') {
      return;
    }
    puVar4 = (undefined4 *)param_1[2];
    uVar11 = *puVar4;
    puVar14 = (undefined4 *)puVar4[1];
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(uVar11);
    }
    break;
  case 2:
  case 6:
    iVar12 = 0xc;
    if (3 < (uint)param_1[2]) {
      iVar12 = param_1[2] - 4;
    }
    switch(iVar12) {
    case 0:
      if ((int)param_1[3] < 1) {
        return;
      }
      break;
    default:
      return;
    case 4:
    case 5:
    case 9:
    case 10:
      FUN_00a33290(param_1 + 3);
      return;
    case 7:
    case 8:
      if (param_1[3] == 0) {
        return;
      }
      break;
    case 0xb:
      puVar4 = (undefined4 *)param_1[7];
      puVar14 = puVar4 + 1;
      for (iVar12 = param_1[8]; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar14[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar14);
        }
        puVar14 = puVar14 + 3;
      }
      if (param_1[6] == 0) {
        return;
      }
      goto LAB_014b47f4;
    }
    puVar4 = (undefined4 *)param_1[4];
    goto LAB_014b47f4;
  case 3:
    if (*(char *)(param_1 + 1) != '\x03') {
      return;
    }
    puVar4 = (undefined4 *)param_1[2];
    uVar11 = *puVar4;
    puVar14 = (undefined4 *)puVar4[1];
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(uVar11);
    }
    break;
  default:
    goto switchD_00abfa64_caseD_4;
  case 5:
    if (*(char *)(param_1 + 1) != '\x03') {
      return;
    }
    puVar4 = (undefined4 *)param_1[2];
    uVar11 = *puVar4;
    puVar14 = (undefined4 *)puVar4[1];
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(uVar11);
    }
    break;
  case 7:
    puVar4 = (undefined4 *)param_1[3];
    FUN_00a61140(puVar4,param_1[4]);
    goto LAB_00abfc7c;
  case 8:
    puVar4 = (undefined4 *)param_1[3];
    iVar12 = param_1[4];
    if (iVar12 != 0) {
      piVar7 = puVar4 + 1;
      do {
        bVar1 = *(byte *)(piVar7 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar7 != 0)) {
          thunk_FUN_016d3fb4(piVar7[1]);
        }
        piVar7 = piVar7 + 0x104;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
LAB_00abfc7c:
    if (param_1[2] == 0) {
      return;
    }
    goto LAB_014b47f4;
  case 9:
    iVar12 = param_1[0x84];
    puVar4 = (undefined4 *)param_1[0x83];
    if (iVar12 != 0) {
      piVar7 = puVar4 + 1;
      do {
        bVar1 = *(byte *)(piVar7 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar7 != 0)) {
          thunk_FUN_016d3fb4(piVar7[1]);
        }
        piVar7 = piVar7 + 0x104;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    goto LAB_00abfd84;
  case 10:
    iVar12 = param_1[0x84];
    puVar4 = (undefined4 *)param_1[0x83];
    if (iVar12 != 0) {
      piVar7 = puVar4 + 1;
      do {
        bVar1 = *(byte *)(piVar7 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar7 != 0)) {
          thunk_FUN_016d3fb4(piVar7[1]);
        }
        piVar7 = piVar7 + 0x104;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    goto LAB_00abfd84;
  case 0xb:
    iVar12 = param_1[0x105];
    puVar4 = (undefined4 *)param_1[0x104];
    if (iVar12 != 0) {
      piVar7 = puVar4 + 1;
      do {
        bVar1 = *(byte *)(piVar7 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar7 != 0)) {
          thunk_FUN_016d3fb4(piVar7[1]);
        }
        piVar7 = piVar7 + 0x104;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    iVar12 = param_1[0x103];
    goto joined_r0x00abfb08;
  case 0xc:
    iVar12 = param_1[0x84];
    puVar4 = (undefined4 *)param_1[0x83];
    if (iVar12 != 0) {
      piVar7 = puVar4 + 1;
      do {
        bVar1 = *(byte *)(piVar7 + -1);
        if (((bVar1 < 9) && (bVar1 == 7 || bVar1 == 1)) && (*piVar7 != 0)) {
          thunk_FUN_016d3fb4(piVar7[1]);
        }
        piVar7 = piVar7 + 0x104;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
LAB_00abfd84:
    iVar12 = param_1[0x82];
joined_r0x00abfb08:
    if (iVar12 == 0) {
switchD_00abfa64_caseD_4:
      return;
    }
    goto LAB_014b47f4;
  case 0xd:
    bVar1 = *(byte *)(param_1 + 2);
    if (8 < bVar1) {
      return;
    }
    if (bVar1 != 7 && bVar1 != 1) {
      return;
    }
    if (param_1[3] == 0) {
      return;
    }
    puVar4 = (undefined4 *)param_1[4];
    goto LAB_014b47f4;
  }
  if (puVar14[1] != 0) {
    thunk_FUN_016d3fb4(uVar11);
  }
LAB_014b47f4:
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)puVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)((int)puVar4 + -3) >> 5);
  iVar13 = *(int *)(iVar12 + 8) + 0x10;
  iVar9 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar13 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar8 = *(uint *)(iVar5 + -4);
    if (uVar8 < 5) {
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
  if ((uint)(iVar5 - (int)puVar4) < uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(iVar12 + 0x14);
  uVar8 = 1 << uVar15;
  *(undefined1 *)((int)puVar4 + -3) = 0xff;
  *(undefined2 *)((int)puVar4 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar12 + 0x10);
    uVar6 = *(uint *)(iVar12 + 0xc) | uVar10;
    if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

