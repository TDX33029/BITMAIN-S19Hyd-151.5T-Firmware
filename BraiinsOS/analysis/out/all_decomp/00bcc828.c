// FUN_00bcc828 @ 00bcc828 size=1112 calls_out=13 calls_in=1
// strings: 

void FUN_00bcc828(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  
  switch(*(undefined1 *)(param_1 + 0xb6)) {
  case 3:
    if (*(char *)(param_1 + 0xdc) == '\x04') {
      if (*(char *)(param_1 + 0x131) == '\x03') {
        FUN_00b214e8(param_1 + 0xe8);
        *(undefined1 *)(param_1 + 0x130) = 0;
      }
      else if ((*(char *)(param_1 + 0x131) == '\0') &&
              ((*(uint *)(param_1 + 0x124) & 0x7fffffff) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x128));
      }
    }
    iVar14 = *(int *)(param_1 + 0xbc);
    iVar5 = 0;
    iVar11 = *(int *)(param_1 + 0xc0);
    while (iVar5 != iVar11) {
      iVar4 = iVar14 + iVar5 * 0x18;
      iVar12 = *(int *)(iVar4 + 0xc);
      puVar10 = (undefined4 *)(iVar12 + 0x10);
      for (iVar15 = *(int *)(iVar4 + 0x10); iVar15 != 0; iVar15 = iVar15 + -1) {
        if (puVar10[-4] != 0) {
          thunk_FUN_016d3fb4(puVar10[-3]);
        }
        if (puVar10[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 6;
      }
      iVar5 = iVar5 + 1;
      if (*(int *)(iVar4 + 8) != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
    }
    FUN_00c47f30(param_1 + 0xc4);
    return;
  case 4:
    goto switchD_00bcc84c_caseD_4;
  case 5:
    FUN_00ad235c(param_1 + 0xd8);
    FUN_00c47f30(param_1 + 0xb8);
    goto switchD_00bcc84c_caseD_4;
  case 6:
    goto switchD_00bcc84c_caseD_6;
  case 7:
    FUN_00bce3d0(param_1 + 0xb8);
    break;
  case 8:
    if (*(char *)(param_1 + 0x1bc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xd0);
      if (cVar1 == '\x05') {
        FUN_00bcb384(param_1 + 0xd8);
      }
      else if (cVar1 == '\x04') {
        FUN_00bce158(param_1 + 0xd8);
      }
      else if (cVar1 == '\x03') {
        FUN_00bcdee0(param_1 + 0xd8);
      }
    }
    break;
  case 9:
    if (*(char *)(param_1 + 0x1bc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xd0);
      if (cVar1 == '\x05') {
        FUN_00bcb384(param_1 + 0xd8);
      }
      else if (cVar1 == '\x04') {
        FUN_00bce158(param_1 + 0xd8);
      }
      else if (cVar1 == '\x03') {
        FUN_00bcdee0(param_1 + 0xd8);
      }
    }
    break;
  case 10:
    FUN_00bce3d0(param_1 + 0xb8);
    break;
  case 0xb:
    FUN_00a07b4c(param_1 + 0xb8);
    break;
  case 0xc:
    FUN_00a07b4c(param_1 + 0xb8);
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x1bc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xd0);
      if (cVar1 == '\x05') {
        FUN_00bcb384(param_1 + 0xd8);
      }
      else if (cVar1 == '\x04') {
        FUN_00bce158(param_1 + 0xd8);
      }
      else if (cVar1 == '\x03') {
        FUN_00bcdee0(param_1 + 0xd8);
      }
    }
    goto switchD_00bcc84c_caseD_6;
  case 0xe:
    FUN_00bce3d0(param_1 + 0xd0);
    iVar14 = *(int *)(param_1 + 0xbc);
    iVar5 = 0;
    iVar11 = *(int *)(param_1 + 0xc0);
    while (iVar5 != iVar11) {
      iVar4 = iVar14 + iVar5 * 0x18;
      iVar12 = *(int *)(iVar4 + 0xc);
      puVar10 = (undefined4 *)(iVar12 + 0x10);
      for (iVar15 = *(int *)(iVar4 + 0x10); iVar15 != 0; iVar15 = iVar15 + -1) {
        if (puVar10[-4] != 0) {
          thunk_FUN_016d3fb4(puVar10[-3]);
        }
        if (puVar10[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 6;
      }
      iVar5 = iVar5 + 1;
      if (*(int *)(iVar4 + 8) != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
    }
    FUN_00c47f30(param_1 + 0xc4);
    goto switchD_00bcc84c_caseD_6;
  case 0xf:
    if (*(char *)(param_1 + 0x1bc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xd0);
      if (cVar1 == '\x05') {
        FUN_00bcb384(param_1 + 0xd8);
      }
      else if (cVar1 == '\x04') {
        FUN_00bce158(param_1 + 0xd8);
      }
      else if (cVar1 == '\x03') {
        FUN_00bcdee0(param_1 + 0xd8);
      }
    }
    goto switchD_00bcc84c_caseD_6;
  case 0x10:
    cVar1 = *(char *)(param_1 + 0xd6);
    bVar17 = cVar1 == '\x03';
    if (bVar17) {
      cVar1 = *(char *)(param_1 + 0xc6);
    }
    if ((bVar17 && cVar1 == '\x03') && (*(int *)(param_1 + 0xb8) != 0)) {
      FUN_00c8204c(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),1);
    }
    goto switchD_00bcc84c_caseD_6;
  default:
    goto switchD_00bcc84c_default;
  }
  iVar14 = *(int *)(param_1 + 0xa4);
  iVar5 = 0;
  iVar11 = *(int *)(param_1 + 0xa8);
  while (iVar5 != iVar11) {
    iVar4 = iVar14 + iVar5 * 0x18;
    iVar12 = *(int *)(iVar4 + 0xc);
    puVar10 = (undefined4 *)(iVar12 + 0x10);
    for (iVar15 = *(int *)(iVar4 + 0x10); iVar15 != 0; iVar15 = iVar15 + -1) {
      if (puVar10[-4] != 0) {
        thunk_FUN_016d3fb4(puVar10[-3]);
      }
      if (puVar10[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar10);
      }
      puVar10 = puVar10 + 6;
    }
    iVar5 = iVar5 + 1;
    if (*(int *)(iVar4 + 8) != 0) {
      thunk_FUN_016d3fb4(iVar12);
    }
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa4));
  }
  FUN_00c4849c(param_1 + 0x94);
  FUN_00c48f0c(param_1 + 0x88);
switchD_00bcc84c_caseD_6:
  FUN_00c487f4(param_1 + 0x7c);
  FUN_00c47f30(param_1 + 0x70);
  FUN_00c47f30(param_1 + 100);
switchD_00bcc84c_caseD_4:
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar5 = *(int *)(param_1 + 0x5c);
    if (iVar5 == 0) {
      return;
    }
    iVar11 = FUN_016d3bc8();
    uVar13 = *(byte *)(iVar5 + -3) & 0x1f;
    if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
       (uVar8 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar14 = uVar8 - 0x10, uVar8 == 0)) {
      iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar8 = (uint)(*(byte *)(iVar5 + -3) >> 5);
    iVar12 = *(int *)(iVar11 + 8) + 0x10;
    iVar4 = iVar14 * uVar13 + iVar14 + -4;
    iVar14 = iVar12 + iVar4;
    if (4 < uVar8) {
      if (uVar8 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar8 = *(uint *)(iVar14 + -4);
      if (uVar8 < 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar2)();
      }
    }
    if ((uint)(iVar14 - iVar5) < uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 - uVar8) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar12 + iVar4) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar11 + 0x14);
    uVar8 = 1 << uVar13;
    *(undefined1 *)(iVar5 + -3) = 0xff;
    *(undefined2 *)(iVar5 + -2) = 0;
    do {
      uVar9 = *(uint *)(iVar11 + 0x10);
      uVar6 = *(uint *)(iVar11 + 0xc) | uVar9;
      if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar9 == 0) || (uVar6 + uVar8 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar11,uVar13);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar10 = (undefined4 *)FUN_016d2bc8();
        uVar7 = *puVar10;
        FUN_016d6ac4(uStack_28,unaff_r4);
        *puVar10 = uVar7;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar11 + 0x10) = uVar8 + uVar9;
        return;
      }
      puVar16 = (uint *)(iVar11 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar6 = *puVar16;
        if (uVar9 != uVar6) goto LAB_016d409c;
        bVar17 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar17);
      *puVar16 = uVar8 + uVar9;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar9 == uVar6) {
        return;
      }
    } while( true );
  }
switchD_00bcc84c_default:
  return;
}

