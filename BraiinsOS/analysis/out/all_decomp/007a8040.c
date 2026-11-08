// FUN_007a8040 @ 007a8040 size=324 calls_out=5 calls_in=6
// strings: 

void FUN_007a8040(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*param_1) {
  case 0:
  case 1:
  case 5:
  case 10:
    if (param_1[1] == 0) {
      return;
    }
    piVar8 = (int *)param_1[2];
    break;
  case 2:
    if (param_1[3] == 0) {
      return;
    }
    piVar8 = (int *)param_1[4];
    break;
  case 3:
    FUN_00786710(param_1 + 1);
    return;
  case 4:
    FUN_00a326d8(param_1 + 1);
    return;
  case 6:
  case 7:
  case 8:
    return;
  case 9:
    piVar8 = (int *)param_1[1];
    if (*piVar8 == 1) {
      FUN_009b8520(piVar8 + 1);
    }
    else if ((*piVar8 == 0) && (piVar8[2] != 0)) {
      thunk_FUN_016d3fb4(piVar8[1]);
    }
    break;
  case 0xb:
    puVar3 = (undefined1 *)0x2;
    if (&DAT_8000000b < (undefined1 *)param_1[1]) {
      puVar3 = (undefined1 *)param_1[1] + 0x7ffffff4;
    }
    switch(puVar3) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x3:
      if (param_1[2] != 0) {
        piVar8 = (int *)param_1[3];
        goto LAB_014b47f4;
      }
      break;
    case (undefined1 *)0x1:
      if (*(char *)(param_1 + 2) == '\x03') {
        piVar8 = (int *)param_1[3];
        iVar4 = *piVar8;
        puVar14 = (undefined4 *)piVar8[1];
        pcVar5 = (code *)*puVar14;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(iVar4);
        }
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(iVar4);
        }
        goto LAB_014b47f4;
      }
      break;
    case (undefined1 *)0x2:
      FUN_00786710();
      return;
    }
    return;
  case 0xc:
    puVar3 = (undefined1 *)0x3;
    if (&DAT_8000000b < (undefined1 *)param_1[1]) {
      puVar3 = (undefined1 *)param_1[1] + 0x7ffffff4;
    }
    switch(puVar3) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x1:
      if (param_1[2] != 0) {
        piVar8 = (int *)param_1[3];
        goto LAB_014b47f4;
      }
      break;
    case (undefined1 *)0x2:
      if (*(char *)(param_1 + 2) == '\x03') {
        piVar8 = (int *)param_1[3];
        iVar4 = *piVar8;
        puVar14 = (undefined4 *)piVar8[1];
        pcVar5 = (code *)*puVar14;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(iVar4);
        }
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(iVar4);
        }
        goto LAB_014b47f4;
      }
      break;
    case (undefined1 *)0x3:
      FUN_00786710();
      return;
    }
    return;
  case 0xd:
    if (param_1[2] == 0) {
      return;
    }
    piVar8 = (int *)param_1[3];
    break;
  case 0xe:
    if (*(char *)(param_1 + 1) != '\x03') {
      return;
    }
    piVar8 = (int *)param_1[2];
    iVar4 = *piVar8;
    puVar14 = (undefined4 *)piVar8[1];
    pcVar5 = (code *)*puVar14;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar4);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
    break;
  case 0xf:
    FUN_007825fc(param_1 + 1);
    return;
  default:
    iVar4 = 4;
    if (1 < (uint)param_1[1]) {
      iVar4 = param_1[1] - 2;
    }
    switch(iVar4) {
    case 0:
      if (*(char *)(param_1 + 2) == '\x03') {
        piVar8 = (int *)param_1[3];
        iVar4 = *piVar8;
        puVar14 = (undefined4 *)piVar8[1];
        pcVar5 = (code *)*puVar14;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(iVar4);
        }
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(iVar4);
        }
        goto LAB_014b47f4;
      }
      break;
    case 1:
    case 3:
      break;
    default:
      if (param_1[2] != 0) {
        piVar8 = (int *)param_1[3];
        goto LAB_014b47f4;
      }
    }
    return;
  }
LAB_014b47f4:
  if (piVar8 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)piVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)piVar8 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar6 - (int)piVar8) < uVar10) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar1 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)((int)piVar8 + -3) = 0xff;
  *(undefined2 *)((int)piVar8 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar14;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar14 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

