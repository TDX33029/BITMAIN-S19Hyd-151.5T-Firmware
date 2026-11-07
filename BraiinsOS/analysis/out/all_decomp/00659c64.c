// FUN_00659c64 @ 00659c64 size=836 calls_out=3 calls_in=3
// strings: 

void FUN_00659c64(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
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
    piVar9 = (int *)param_1[2];
    break;
  case 2:
switchD_00659c7c_caseD_2:
    if (param_1[3] == 0) {
      return;
    }
    piVar9 = (int *)param_1[4];
    break;
  case 3:
    FUN_00659fe8(param_1 + 1);
    return;
  case 4:
LAB_0065a20c:
    iVar5 = param_1[1];
    switch(iVar5 + 0x80000001U & iVar5 >> 0x1f) {
    case 0:
      if (iVar5 == 0) {
        return;
      }
      piVar9 = (int *)param_1[2];
      break;
    case 1:
      if (param_1[2] == 0) {
        return;
      }
      piVar9 = (int *)param_1[3];
      break;
    case 2:
      if (param_1[2] == 0) {
        return;
      }
      piVar9 = (int *)param_1[3];
      break;
    default:
      return;
    case 4:
      if (param_1[2] == 0) {
        return;
      }
      piVar9 = (int *)param_1[3];
      break;
    case 7:
      uVar4 = param_1[2];
      uVar11 = 8;
      if ((int)uVar4 < 0) {
        uVar11 = uVar4 ^ 0x80000000;
      }
      if (uVar11 < 8) {
        return;
      }
      if (uVar11 != 8) {
        FUN_009b8520(param_1 + 3);
        return;
      }
      if (uVar4 == 0) {
        return;
      }
      piVar9 = (int *)param_1[3];
    }
    break;
  case 6:
  case 7:
  case 8:
    goto switchD_00659c7c_caseD_6;
  case 9:
    piVar9 = (int *)param_1[1];
    if (*piVar9 == 1) {
      FUN_009b8520(piVar9 + 1);
    }
    else if ((*piVar9 == 0) && (piVar9[2] != 0)) {
      thunk_FUN_016d3fb4(piVar9[1]);
    }
    break;
  case 0xb:
    puVar6 = (undefined1 *)0x2;
    if (&DAT_8000000b < (undefined1 *)param_1[1]) {
      puVar6 = (undefined1 *)param_1[1] + 0x7ffffff4;
    }
    switch(puVar6) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x3:
      goto switchD_00659c7c_caseD_d;
    case (undefined1 *)0x1:
switchD_00659d88_caseD_0:
      FUN_009b8520(param_1 + 2);
      return;
    case (undefined1 *)0x2:
switchD_00659dcc_caseD_3:
      FUN_00659fe8(param_1 + 1);
      return;
    default:
      goto switchD_00659c7c_caseD_6;
    }
  case 0xc:
    puVar6 = (undefined1 *)0x3;
    if (&DAT_8000000b < (undefined1 *)param_1[1]) {
      puVar6 = (undefined1 *)param_1[1] + 0x7ffffff4;
    }
    switch(puVar6) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x1:
      goto switchD_00659c7c_caseD_d;
    case (undefined1 *)0x2:
      goto switchD_00659d88_caseD_0;
    case (undefined1 *)0x3:
      goto switchD_00659dcc_caseD_3;
    default:
      goto switchD_00659c7c_caseD_6;
    }
  case 0xd:
switchD_00659c7c_caseD_d:
    uVar4 = param_1[2];
LAB_00659de4:
    if (uVar4 == 0) {
switchD_00659c7c_caseD_6:
      return;
    }
    piVar9 = (int *)param_1[3];
    break;
  case 0xe:
    if (*(char *)(param_1 + 1) != '\x03') {
      return;
    }
    piVar9 = (int *)param_1[2];
    iVar5 = *piVar9;
    puVar15 = (undefined4 *)piVar9[1];
    pcVar3 = (code *)*puVar15;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar5);
    }
    if (puVar15[1] != 0) {
      thunk_FUN_016d3fb4(iVar5);
    }
    break;
  case 0xf:
    iVar5 = 1;
    if (0x80000007 < (uint)param_1[1]) {
      iVar5 = param_1[1] + 0x7ffffff8;
    }
    switch(iVar5) {
    case 0:
      goto switchD_00659d88_caseD_0;
    case 1:
      goto LAB_0065a20c;
    case 2:
      uVar4 = param_1[2];
      uVar11 = 8;
      if ((int)uVar4 < 0) {
        uVar11 = uVar4 ^ 0x80000000;
      }
      if (uVar11 < 8) {
        return;
      }
      if (uVar11 != 8) {
LAB_00659ed8:
        FUN_009b8520(param_1 + 3);
        return;
      }
      break;
    case 3:
      iVar5 = param_1[2];
      if (iVar5 == 3) goto LAB_00659ed8;
      if ((iVar5 != 2) && (iVar5 != 1)) {
        return;
      }
      goto switchD_00659c7c_caseD_2;
    default:
      puVar16 = param_1 + 2;
      goto LAB_00659f20;
    }
    goto LAB_00659de4;
  default:
    puVar16 = param_1 + 1;
LAB_00659f20:
    iVar5 = 4;
    if (1 < *puVar16) {
      iVar5 = *puVar16 - 2;
    }
    switch(iVar5) {
    case 0:
      if ((char)puVar16[1] != '\x03') {
        return;
      }
      piVar9 = (int *)puVar16[2];
      iVar5 = *piVar9;
      puVar15 = (undefined4 *)piVar9[1];
      pcVar3 = (code *)*puVar15;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar5);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(iVar5);
      }
      break;
    case 1:
    case 3:
      return;
    default:
      if (puVar16[1] == 0) {
        return;
      }
      piVar9 = (int *)puVar16[2];
    }
  }
  if (piVar9 == (int *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)piVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)piVar9 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar12 = iVar7 * uVar4 + iVar7 + -4;
  iVar7 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar7 - (int)piVar9) < uVar11) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar5 + 0x14);
  uVar11 = 1 << uVar4;
  *(undefined1 *)((int)piVar9 + -3) = 0xff;
  *(undefined2 *)((int)piVar9 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar13;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar15 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar15;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar15 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

