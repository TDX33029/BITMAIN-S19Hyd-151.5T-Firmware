// FUN_00f22830 @ 00f22830 size=396 calls_out=1 calls_in=1
// strings: 

void FUN_00f22830(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  
  iVar3 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar3 = 2;
  }
  switch(iVar3) {
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    uVar4 = param_1[1];
    break;
  case 1:
    piVar12 = (int *)param_1[1];
    if (*piVar12 == 1) {
      if ((char)piVar12[1] != '\x03') goto LAB_014b47f4;
      puVar14 = (undefined4 *)piVar12[2];
      uVar16 = *puVar14;
      puVar15 = (undefined4 *)puVar14[1];
      pcVar5 = (code *)*puVar15;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar16);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar16);
      }
    }
    else {
      if ((*piVar12 != 0) || (piVar12[2] == 0)) goto LAB_014b47f4;
      puVar14 = (undefined4 *)piVar12[1];
    }
    goto LAB_00f229c0;
  case 2:
    if (param_1[3] != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    if (param_1[9] != 0x80000000 && param_1[9] != 0) {
      thunk_FUN_016d3fb4(param_1[10]);
    }
    piVar12 = (int *)param_1[7];
    piVar8 = piVar12 + 1;
    for (uVar4 = param_1[8]; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (piVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar8);
      }
      piVar8 = piVar8 + 3;
    }
    if (param_1[6] == 0) {
      return;
    }
    goto LAB_014b47f4;
  case 3:
    uVar4 = param_1[1];
    if ((int)uVar4 < -0x7ffffffb) {
      return;
    }
    break;
  case 4:
    if ((char)param_1[1] != '\x03') {
      return;
    }
    piVar12 = (int *)param_1[2];
    puVar14 = (undefined4 *)*piVar12;
    puVar15 = (undefined4 *)piVar12[1];
    pcVar5 = (code *)*puVar15;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(puVar14);
    }
    if (puVar15[1] == 0) goto LAB_014b47f4;
LAB_00f229c0:
    thunk_FUN_016d3fb4(puVar14);
    goto LAB_014b47f4;
  default:
    goto switchD_00f22858_default;
  }
  if (uVar4 == 0) {
switchD_00f22858_default:
    return;
  }
  piVar12 = (int *)param_1[2];
LAB_014b47f4:
  if (piVar12 == (int *)0x0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)piVar12 - 3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)((int)piVar12 - 3) >> 5);
  iVar13 = *(int *)(iVar3 + 8) + 0x10;
  iVar10 = iVar6 * uVar4 + iVar6 + -4;
  iVar6 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
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
  if ((uint)(iVar6 - (int)piVar12) < uVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar9 = 1 << uVar4;
  *(undefined1 *)((int)piVar12 - 3) = 0xff;
  *(undefined2 *)((int)piVar12 - 2) = 0;
  do {
    uVar11 = *(uint *)(iVar3 + 0x10);
    uVar7 = *(uint *)(iVar3 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar16 = *puVar14;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar14 = uVar16;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar17 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar7 = *puVar17;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar2);
    *puVar17 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

