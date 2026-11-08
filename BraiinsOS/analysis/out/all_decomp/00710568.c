// FUN_00710568 @ 00710568 size=448 calls_out=2 calls_in=0
// strings: 

void FUN_00710568(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = param_1[1];
  if (*param_1 == 0) {
switchD_00710628_caseD_0:
    if (uVar5 == 0) {
      return;
    }
    puVar4 = (undefined4 *)param_1[2];
    goto LAB_014b47f4;
  }
  iVar6 = 1;
  if (0x80000007 < uVar5) {
    iVar6 = uVar5 + 0x7ffffff8;
  }
  switch(iVar6) {
  case 0:
    if ((char)param_1[2] != '\x03') {
      return;
    }
    puVar4 = (undefined4 *)param_1[3];
    uVar12 = *puVar4;
    puVar14 = (undefined4 *)puVar4[1];
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(uVar12);
    }
    break;
  case 1:
    switch(uVar5 + 0x80000001 & (int)uVar5 >> 0x1f) {
    case 0:
      goto switchD_00710628_caseD_0;
    case 1:
    case 2:
    case 4:
      uVar5 = param_1[2];
      break;
    default:
      goto switchD_00710688_caseD_1;
    case 7:
      uVar5 = param_1[2];
      uVar7 = 8;
      if ((int)uVar5 < 0) {
        uVar7 = uVar5 ^ 0x80000000;
      }
      if (uVar7 < 8) {
        return;
      }
      goto LAB_00710740;
    }
    goto LAB_00710744;
  case 2:
    uVar5 = param_1[2];
    uVar7 = 8;
    if ((int)uVar5 < 0) {
      uVar7 = uVar5 ^ 0x80000000;
    }
    if (uVar7 < 8) {
      return;
    }
LAB_00710740:
    if (uVar7 != 8) {
      FUN_009b8520(param_1 + 3);
      return;
    }
LAB_00710744:
    if (uVar5 == 0) {
switchD_00710688_caseD_1:
      return;
    }
    puVar4 = (undefined4 *)param_1[3];
    goto LAB_014b47f4;
  case 3:
    iVar6 = param_1[2];
    if (iVar6 != 3) {
      if (iVar6 != 2 && iVar6 != 1) {
        return;
      }
switchD_00710688_caseD_2:
      if (param_1[3] == 0) {
        return;
      }
      puVar4 = (undefined4 *)param_1[4];
      goto LAB_014b47f4;
    }
    if ((char)param_1[3] != '\x03') {
      return;
    }
    puVar4 = (undefined4 *)param_1[4];
    uVar12 = *puVar4;
    puVar14 = (undefined4 *)puVar4[1];
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(uVar12);
    }
    break;
  default:
    iVar6 = 4;
    if (1 < (uint)param_1[2]) {
      iVar6 = param_1[2] - 2;
    }
    switch(iVar6) {
    case 0:
      if ((char)param_1[3] != '\x03') {
        return;
      }
      puVar4 = (undefined4 *)param_1[4];
      uVar12 = *puVar4;
      puVar14 = (undefined4 *)puVar4[1];
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)(uVar12);
      }
      break;
    case 1:
    case 3:
      goto switchD_00710688_caseD_1;
    default:
      goto switchD_00710688_caseD_2;
    }
  }
  if (puVar14[1] != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
LAB_014b47f4:
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar5 = *(byte *)((int)puVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar7 - 0x10, uVar7 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)((int)puVar4 + -3) >> 5);
  iVar13 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar8 * uVar5 + iVar8 + -4;
  iVar8 = iVar13 + iVar10;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar8 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - (int)puVar4) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar7 = 1 << uVar5;
  *(undefined1 *)((int)puVar4 + -3) = 0xff;
  *(undefined2 *)((int)puVar4 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0xc) | uVar11;
    if ((uVar7 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar9 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar7 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar9 = *puVar15;
      if (uVar11 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar7 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar9) {
      return;
    }
  } while( true );
}

