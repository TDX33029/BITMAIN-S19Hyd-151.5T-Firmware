// FUN_01129104 @ 01129104 size=1168 calls_out=3 calls_in=1
// strings: 

void FUN_01129104(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
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
    puVar10 = (undefined4 *)param_1[2];
    goto LAB_014b47f4;
  case 2:
switchD_0112911c_caseD_2:
    if (param_1[3] == 0) {
      return;
    }
    puVar10 = (undefined4 *)param_1[4];
    goto LAB_014b47f4;
  case 3:
    break;
  case 4:
LAB_01129644:
    iVar3 = param_1[1];
    switch(iVar3 + 0x80000001U & iVar3 >> 0x1f) {
    case 0:
      if (iVar3 == 0) {
        return;
      }
      puVar10 = (undefined4 *)param_1[2];
      break;
    case 1:
      if (param_1[2] == 0) {
        return;
      }
      puVar10 = (undefined4 *)param_1[3];
      break;
    case 2:
      if (param_1[2] == 0) {
        return;
      }
      puVar10 = (undefined4 *)param_1[3];
      break;
    default:
      return;
    case 4:
      if (param_1[2] == 0) {
        return;
      }
      puVar10 = (undefined4 *)param_1[3];
      break;
    case 7:
      FUN_00f2cc28(param_1 + 2);
      return;
    }
    goto LAB_014b47f4;
  case 6:
  case 7:
  case 8:
    goto switchD_0112911c_caseD_6;
  case 9:
    FUN_00f3d3b0(param_1[1]);
    return;
  case 0xb:
    puVar6 = (undefined1 *)0x2;
    if (&DAT_8000000b < (undefined1 *)param_1[1]) {
      puVar6 = (undefined1 *)param_1[1] + 0x7ffffff4;
    }
    switch(puVar6) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x3:
      goto switchD_0112911c_caseD_d;
    case (undefined1 *)0x1:
      if (*(char *)(param_1 + 2) != '\x03') {
        return;
      }
      puVar10 = (undefined4 *)param_1[3];
      uVar13 = *puVar10;
      puVar15 = (undefined4 *)puVar10[1];
      if ((code *)*puVar15 != (code *)0x0) {
        (*(code *)*puVar15)(uVar13);
      }
      goto LAB_011291a0;
    case (undefined1 *)0x2:
switchD_011292b8_caseD_3:
      break;
    default:
      goto switchD_0112911c_caseD_6;
    }
    break;
  case 0xc:
    puVar6 = (undefined1 *)0x3;
    if (&DAT_8000000b < (undefined1 *)param_1[1]) {
      puVar6 = (undefined1 *)param_1[1] + 0x7ffffff4;
    }
    switch(puVar6) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x1:
      goto switchD_0112911c_caseD_d;
    case (undefined1 *)0x2:
      if (*(char *)(param_1 + 2) != '\x03') {
        return;
      }
      puVar10 = (undefined4 *)param_1[3];
      uVar13 = *puVar10;
      puVar15 = (undefined4 *)puVar10[1];
      if ((code *)*puVar15 != (code *)0x0) {
        (*(code *)*puVar15)(uVar13);
      }
      goto LAB_011291a0;
    case (undefined1 *)0x3:
      goto switchD_011292b8_caseD_3;
    default:
      goto switchD_0112911c_caseD_6;
    }
  case 0xd:
switchD_0112911c_caseD_d:
    if (param_1[2] == 0) {
switchD_0112911c_caseD_6:
      return;
    }
    puVar10 = (undefined4 *)param_1[3];
    goto LAB_014b47f4;
  case 0xe:
    if (*(char *)(param_1 + 1) != '\x03') {
      return;
    }
    puVar10 = (undefined4 *)param_1[2];
    uVar13 = *puVar10;
    puVar15 = (undefined4 *)puVar10[1];
    if ((code *)*puVar15 != (code *)0x0) {
      (*(code *)*puVar15)(uVar13);
    }
    goto LAB_011291a0;
  case 0xf:
    iVar3 = 1;
    if (0x80000007 < (uint)param_1[1]) {
      iVar3 = param_1[1] + 0x7ffffff8;
    }
    switch(iVar3) {
    case 0:
      if (*(char *)(param_1 + 2) != '\x03') {
        return;
      }
      puVar10 = (undefined4 *)param_1[3];
      uVar13 = *puVar10;
      puVar15 = (undefined4 *)puVar10[1];
      if ((code *)*puVar15 != (code *)0x0) {
        (*(code *)*puVar15)(uVar13);
      }
      break;
    case 1:
      goto LAB_01129644;
    case 2:
      FUN_00f2cc28(param_1 + 2);
      return;
    case 3:
      iVar3 = param_1[2];
      if (iVar3 != 3) {
        if (iVar3 != 2 && iVar3 != 1) {
          return;
        }
        goto switchD_0112911c_caseD_2;
      }
      if (*(char *)(param_1 + 3) != '\x03') {
        return;
      }
      puVar10 = (undefined4 *)param_1[4];
      uVar13 = *puVar10;
      puVar15 = (undefined4 *)puVar10[1];
      if ((code *)*puVar15 != (code *)0x0) {
        (*(code *)*puVar15)(uVar13);
      }
      break;
    default:
      puVar16 = param_1 + 2;
      goto LAB_011293fc;
    }
LAB_011291a0:
    if (puVar15[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    goto LAB_014b47f4;
  default:
    puVar16 = param_1 + 1;
LAB_011293fc:
    iVar3 = 4;
    if (1 < *puVar16) {
      iVar3 = *puVar16 - 2;
    }
    switch(iVar3) {
    case 0:
      if ((char)puVar16[1] != '\x03') {
        return;
      }
      puVar10 = (undefined4 *)puVar16[2];
      uVar13 = *puVar10;
      puVar15 = (undefined4 *)puVar10[1];
      pcVar4 = (code *)*puVar15;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar13);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      break;
    case 1:
    case 3:
      return;
    default:
      if (puVar16[1] == 0) {
        return;
      }
      puVar10 = (undefined4 *)puVar16[2];
    }
    goto LAB_014b47f4;
  }
  uVar5 = param_1[1];
  uVar7 = 5;
  if ((int)uVar5 < 0) {
    uVar7 = uVar5 ^ 0x80000000;
  }
  switch(uVar7) {
  case 0:
    if (*(char *)(param_1 + 2) != '\x03') {
      return;
    }
    puVar10 = (undefined4 *)param_1[3];
    uVar13 = *puVar10;
    puVar15 = (undefined4 *)puVar10[1];
    if ((code *)*puVar15 != (code *)0x0) {
      (*(code *)*puVar15)(uVar13);
    }
    goto LAB_01129588;
  case 1:
  case 4:
    if (param_1[2] == 0) {
      return;
    }
    puVar10 = (undefined4 *)param_1[3];
    break;
  case 2:
    puVar10 = (undefined4 *)param_1[3];
    if ((*(byte *)(param_1 + 2) < 5) && (*(byte *)(param_1 + 2) != 3)) {
      return;
    }
    uVar13 = *puVar10;
    puVar15 = (undefined4 *)puVar10[1];
    if ((code *)*puVar15 != (code *)0x0) {
      (*(code *)*puVar15)(uVar13);
    }
LAB_01129588:
    if (puVar15[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    break;
  case 3:
    FUN_00f3d3b0(param_1[2]);
    return;
  case 5:
    if (uVar5 != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    if (param_1[7] == 0) {
      return;
    }
    puVar10 = (undefined4 *)param_1[8];
    break;
  case 6:
    if (param_1[3] == 0) {
      return;
    }
    puVar10 = (undefined4 *)param_1[4];
    break;
  default:
    return;
  }
LAB_014b47f4:
  if (puVar10 == (undefined4 *)0x0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar5 = *(byte *)((int)puVar10 - 3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar8 = uVar7 - 0x10, uVar7 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)((int)puVar10 - 3) >> 5);
  iVar14 = *(int *)(iVar3 + 8) + 0x10;
  iVar11 = iVar8 * uVar5 + iVar8 + -4;
  iVar8 = iVar14 + iVar11;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar7 = *(uint *)(iVar8 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar8 - (int)puVar10) < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar8 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar7 = 1 << uVar5;
  *(undefined1 *)((int)puVar10 - 3) = 0xff;
  *(undefined2 *)((int)puVar10 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar3 + 0x10);
    uVar9 = *(uint *)(iVar3 + 0xc) | uVar12;
    if ((uVar7 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar12 == 0) || (uVar9 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar10;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar10 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar7 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar9 = *puVar16;
      if (uVar12 != uVar9) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar7 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

