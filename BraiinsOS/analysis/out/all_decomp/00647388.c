// FUN_00647388 @ 00647388 size=1276 calls_out=4 calls_in=1
// strings: 

void FUN_00647388(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
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
  
  if ((*param_1 & 3) != 2) {
    if (*param_1 == 0) {
      FUN_006472c4(param_1 + 4);
      return;
    }
    if ((char)param_1[2] != '\x06') {
      FUN_006472c4();
    }
    if (param_1[8] == 0x80000000) {
      return;
    }
    if (param_1[8] != 0) {
      thunk_FUN_016d3fb4(param_1[9]);
    }
    if ((param_1[0xb] & 0x7fffffff) == 0) {
      return;
    }
    puVar3 = (undefined4 *)param_1[0xc];
    goto LAB_014b47f4;
  }
  switch(param_1[2]) {
  case 0:
  case 1:
  case 5:
  case 10:
    if (param_1[3] == 0) {
      return;
    }
    puVar3 = (undefined4 *)param_1[4];
    goto LAB_014b47f4;
  case 2:
switchD_006473c8_caseD_2:
    if (param_1[5] == 0) {
      return;
    }
    puVar3 = (undefined4 *)param_1[6];
    goto LAB_014b47f4;
  case 3:
    break;
  case 4:
LAB_006485d4:
    uVar15 = param_1[3];
    switch(uVar15 + 0x80000001 & (int)uVar15 >> 0x1f) {
    case 0:
      if (uVar15 == 0) {
        return;
      }
      puVar3 = (undefined4 *)param_1[4];
      break;
    case 1:
      if (param_1[4] == 0) {
        return;
      }
      puVar3 = (undefined4 *)param_1[5];
      break;
    case 2:
      if (param_1[4] == 0) {
        return;
      }
      puVar3 = (undefined4 *)param_1[5];
      break;
    default:
      return;
    case 4:
      if (param_1[4] == 0) {
        return;
      }
      puVar3 = (undefined4 *)param_1[5];
      break;
    case 7:
      FUN_00f2cc28(param_1 + 4);
      return;
    }
    goto LAB_014b47f4;
  case 6:
  case 7:
  case 8:
    goto switchD_006473c8_caseD_6;
  case 9:
    FUN_00f3d3b0(param_1[3]);
    return;
  case 0xb:
    puVar4 = (undefined1 *)0x2;
    if (&DAT_8000000b < (undefined1 *)param_1[3]) {
      puVar4 = (undefined1 *)param_1[3] + 0x7ffffff4;
    }
    switch(puVar4) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x3:
      goto switchD_006473c8_caseD_d;
    case (undefined1 *)0x1:
      if ((char)param_1[4] != '\x03') {
        return;
      }
      puVar3 = (undefined4 *)param_1[5];
      uVar9 = *puVar3;
      puVar14 = (undefined4 *)puVar3[1];
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)(uVar9);
      }
      goto LAB_0064749c;
    case (undefined1 *)0x2:
switchD_006475b4_caseD_3:
      break;
    default:
      goto switchD_006473c8_caseD_6;
    }
    break;
  case 0xc:
    puVar4 = (undefined1 *)0x3;
    if (&DAT_8000000b < (undefined1 *)param_1[3]) {
      puVar4 = (undefined1 *)param_1[3] + 0x7ffffff4;
    }
    switch(puVar4) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x1:
      goto switchD_006473c8_caseD_d;
    case (undefined1 *)0x2:
      if ((char)param_1[4] != '\x03') {
        return;
      }
      puVar3 = (undefined4 *)param_1[5];
      uVar9 = *puVar3;
      puVar14 = (undefined4 *)puVar3[1];
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)(uVar9);
      }
      goto LAB_0064749c;
    case (undefined1 *)0x3:
      goto switchD_006475b4_caseD_3;
    default:
      goto switchD_006473c8_caseD_6;
    }
  case 0xd:
switchD_006473c8_caseD_d:
    if (param_1[4] == 0) {
switchD_006473c8_caseD_6:
      return;
    }
    puVar3 = (undefined4 *)param_1[5];
    goto LAB_014b47f4;
  case 0xe:
    if ((char)param_1[3] != '\x03') {
      return;
    }
    puVar3 = (undefined4 *)param_1[4];
    uVar9 = *puVar3;
    puVar14 = (undefined4 *)puVar3[1];
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(uVar9);
    }
    goto LAB_0064749c;
  case 0xf:
    iVar5 = 1;
    if (0x80000007 < param_1[3]) {
      iVar5 = param_1[3] + 0x7ffffff8;
    }
    switch(iVar5) {
    case 0:
      if ((char)param_1[4] != '\x03') {
        return;
      }
      puVar3 = (undefined4 *)param_1[5];
      uVar9 = *puVar3;
      puVar14 = (undefined4 *)puVar3[1];
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)(uVar9);
      }
      break;
    case 1:
      goto LAB_006485d4;
    case 2:
      FUN_00f2cc28(param_1 + 4);
      return;
    case 3:
      uVar15 = param_1[4];
      if (uVar15 != 3) {
        if (uVar15 != 2 && uVar15 != 1) {
          return;
        }
        goto switchD_006473c8_caseD_2;
      }
      if ((char)param_1[5] != '\x03') {
        return;
      }
      puVar3 = (undefined4 *)param_1[6];
      uVar9 = *puVar3;
      puVar14 = (undefined4 *)puVar3[1];
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)(uVar9);
      }
      break;
    default:
      param_1 = param_1 + 4;
      goto LAB_0064838c;
    }
LAB_0064749c:
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar9);
    }
    goto LAB_014b47f4;
  default:
    param_1 = param_1 + 3;
LAB_0064838c:
    iVar5 = 4;
    if (1 < *param_1) {
      iVar5 = *param_1 - 2;
    }
    switch(iVar5) {
    case 0:
      if ((char)param_1[1] != '\x03') {
        return;
      }
      puVar3 = (undefined4 *)param_1[2];
      uVar9 = *puVar3;
      puVar14 = (undefined4 *)puVar3[1];
      pcVar6 = (code *)*puVar14;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar9);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
      break;
    case 1:
    case 3:
      return;
    default:
      if (param_1[1] == 0) {
        return;
      }
      puVar3 = (undefined4 *)param_1[2];
    }
    goto LAB_014b47f4;
  }
  uVar15 = param_1[3];
  uVar10 = 5;
  if ((int)uVar15 < 0) {
    uVar10 = uVar15 ^ 0x80000000;
  }
  switch(uVar10) {
  case 0:
    if ((char)param_1[4] != '\x03') {
      return;
    }
    puVar3 = (undefined4 *)param_1[5];
    uVar9 = *puVar3;
    puVar14 = (undefined4 *)puVar3[1];
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(uVar9);
    }
    goto LAB_00648518;
  case 1:
  case 4:
    if (param_1[4] == 0) {
      return;
    }
    puVar3 = (undefined4 *)param_1[5];
    break;
  case 2:
    puVar3 = (undefined4 *)param_1[5];
    if (((byte)param_1[4] < 5) && ((byte)param_1[4] != 3)) {
      return;
    }
    uVar9 = *puVar3;
    puVar14 = (undefined4 *)puVar3[1];
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(uVar9);
    }
LAB_00648518:
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar9);
    }
    break;
  case 3:
    FUN_00f3d3b0(param_1[4]);
    return;
  case 5:
    if (uVar15 != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    if (param_1[6] != 0) {
      thunk_FUN_016d3fb4(param_1[7]);
    }
    if (param_1[9] == 0) {
      return;
    }
    puVar3 = (undefined4 *)param_1[10];
    break;
  case 6:
    if (param_1[5] == 0) {
      return;
    }
    puVar3 = (undefined4 *)param_1[6];
    break;
  default:
    return;
  }
LAB_014b47f4:
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)puVar3 - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)puVar3 - 3) >> 5);
  iVar13 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar7 - (int)puVar3) < uVar10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar1 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)((int)puVar3 - 3) = 0xff;
  *(undefined2 *)((int)puVar3 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar3 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar3;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar3 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

