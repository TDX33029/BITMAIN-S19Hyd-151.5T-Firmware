// FUN_014c6e20 @ 014c6e20 size=68 calls_out=3 calls_in=2
// strings: 

void FUN_014c6e20(int *param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 unaff_r4;
  undefined4 uVar11;
  undefined4 unaff_r5;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*param_1 == 2) {
    FUN_005e6cdc(param_1 + 1);
    if (param_1[4] != -1) {
      FUN_016dffb2();
    }
    FUN_00f02ff8(param_1 + 1);
    return;
  }
  FUN_005e6cdc();
  if (param_1[3] != -1) {
    FUN_016dffb2();
  }
  FUN_00f02ff8(param_1);
  uVar3 = param_1[0xa0];
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (uVar3 == 0x80000029) {
    puVar10 = (undefined4 *)param_1[0xa2];
    iVar13 = param_1[0xa1];
    pcVar6 = (code *)*puVar10;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar13);
    }
    if (puVar10[1] == 0) goto switchD_014c3450_caseD_2;
    goto LAB_014c3428;
  }
  iVar13 = 0xb;
  if (0x80000012 < uVar3) {
    iVar13 = uVar3 + 0x7fffffed;
  }
  switch(iVar13) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    break;
  case 8:
    if (param_1[0xa1] < -0x7fffffea) break;
    FUN_01498e58(param_1[0xa2],param_1[0xa3]);
  case 0:
  case 1:
  case 0xd:
    if (param_1[0xa1] != 0) {
LAB_014c362c:
      iVar13 = param_1[0xa2];
LAB_014c3428:
      thunk_FUN_016d3fb4(iVar13);
    }
    break;
  case 0xb:
    uVar4 = 0xe;
    if ((int)uVar3 < 0) {
      uVar4 = uVar3 ^ 0x80000000;
    }
    if (uVar4 < 0xe) break;
    switch(uVar4) {
    case 0xe:
      if (((char)param_1[0xa3] == '\0') && ((param_1[0xa4] & 0x7fffffffU) != 0)) {
        thunk_FUN_016d3fb4(param_1[0xa5]);
      }
      puVar10 = (undefined4 *)(param_1[0xa1] + 4);
      for (iVar13 = param_1[0xa2]; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (puVar10[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 3;
      }
      if (param_1[0xa0] == 0) goto switchD_014c3450_caseD_2;
      iVar13 = param_1[0xa1];
      goto LAB_014c3428;
    case 0xf:
    case 0x11:
      goto switchD_014c3450_caseD_2;
    case 0x10:
      if ((-0x7fffffff < param_1[0xa4]) && (param_1[0xa4] != 0)) {
        thunk_FUN_016d3fb4(param_1[0xa5]);
      }
      FUN_01498e88(param_1[0xa2],param_1[0xa3]);
      if (param_1[0xa1] == 0) goto switchD_014c3450_caseD_2;
      break;
    default:
      piVar5 = param_1 + 0xa1;
      piVar8 = (int *)*piVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = iVar13 + -1;
      goto LAB_014c35f0;
    }
    goto LAB_014c362c;
  case 0xc:
    if (param_1[0xa1] != 5) break;
    piVar5 = param_1 + 0xa2;
    piVar8 = (int *)*piVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar13 + -1;
    goto LAB_014c35f0;
  default:
    piVar5 = param_1 + 0xa1;
    piVar8 = (int *)*piVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar13 + -1;
LAB_014c35f0:
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*piVar5,piVar5[1]);
    }
  }
switchD_014c3450_caseD_2:
  FUN_014c37dc(param_1 + 4);
  if (param_1[0x9c] != 0) {
    thunk_FUN_016d3fb4(param_1[0x9d]);
  }
  if (param_1[0xac] != 0) {
    thunk_FUN_016d3fb4(param_1[0xad]);
  }
  uVar3 = param_1[0xb5];
  iVar13 = 0;
  if (uVar3 == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = param_1[0xb2];
    uVar9 = param_1[0xb4];
    uVar4 = uVar9 - uVar7;
    if (uVar9 < uVar7) {
      uVar4 = uVar9;
    }
    if (uVar7 - uVar4 < uVar3) {
      iVar13 = uVar3 - (uVar7 - uVar4);
    }
    else {
      uVar7 = uVar4 + uVar3;
    }
  }
  iVar14 = param_1[0xb3];
  puVar10 = (undefined4 *)(iVar14 + uVar4 * 0xc + 4);
  for (iVar16 = uVar7 - uVar4; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (puVar10[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar10);
    }
    puVar10 = puVar10 + 3;
  }
  puVar10 = (undefined4 *)(iVar14 + 4);
  for (; uStack_1c = uStack_18, iVar13 != 0; iVar13 = iVar13 + -1) {
    if (puVar10[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar10);
    }
    puVar10 = puVar10 + 3;
  }
  if (param_1[0xb2] == 0) {
    return;
  }
  iVar13 = param_1[0xb3];
  if (iVar13 == 0) {
    return;
  }
  uStack_18 = uStack_14;
  iVar14 = FUN_016d3bc8();
  uVar3 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar4 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar16 = uVar4 - 0x10, uVar4 == 0)) {
    iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar4 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar15 = *(int *)(iVar14 + 8) + 0x10;
  iVar12 = iVar16 * uVar3 + iVar16 + -4;
  iVar16 = iVar15 + iVar12;
  if (4 < uVar4) {
    if (uVar4 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar4 = *(uint *)(iVar16 + -4);
    if (uVar4 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar16 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar16 - iVar13) < uVar4) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar16 - uVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar4 = 1 << uVar3;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar14 + 0x10);
    uVar7 = *(uint *)(iVar14 + 0xc) | uVar9;
    if ((uVar4 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar9 == 0) || (uVar7 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar10;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar10 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar4 + uVar9;
      return;
    }
    puVar17 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar7 = *puVar17;
      if (uVar9 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar4 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar7) {
      return;
    }
  } while( true );
}

