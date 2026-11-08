// FUN_00af0ad8 @ 00af0ad8 size=704 calls_out=7 calls_in=3
// strings: 

void FUN_00af0ad8(int param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*(undefined1 *)(param_1 + 0x5d)) {
  case 3:
    if (*(char *)(param_1 + 0xd5) == '\x03') {
      if (*(char *)(param_1 + 0xb1) == '\x03') {
        FUN_00b214e8(param_1 + 0x68);
        *(undefined1 *)(param_1 + 0xb0) = 0;
      }
      else if ((*(char *)(param_1 + 0xb1) == '\0') &&
              ((*(uint *)(param_1 + 0xa4) & 0x7fffffff) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
      }
      *(undefined1 *)(param_1 + 0xd4) = 0;
      return;
    }
    if (*(char *)(param_1 + 0xd5) != '\0') {
      return;
    }
    if (*(int *)(param_1 + 200) == 0) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0xcc);
    goto LAB_014b47f4;
  case 4:
    cVar4 = *(char *)(param_1 + 0xd4);
    bVar17 = cVar4 == '\x03';
    if (bVar17) {
      cVar4 = *(char *)(param_1 + 0xd1);
    }
    if (bVar17 && cVar4 == '\x03') {
      FUN_00accc50(param_1 + 100);
    }
    goto LAB_00af0d70;
  case 5:
    cVar4 = *(char *)(param_1 + 0xac);
    bVar17 = cVar4 == '\x03';
    if (bVar17) {
      cVar4 = *(char *)(param_1 + 0x6d);
    }
    if (bVar17 && cVar4 == '\x03') {
      cVar4 = *(char *)(param_1 + 0xa8);
      bVar17 = cVar4 == '\x03';
      if (bVar17) {
        cVar4 = *(char *)(param_1 + 0x85);
      }
      if (bVar17 && cVar4 == '\x04') {
        FUN_0163bdc0(param_1 + 0x88);
        if (*(int *)(param_1 + 0x98) != 0) {
          (**(code **)(*(int *)(param_1 + 0x98) + 0xc))(*(undefined4 *)(param_1 + 0x9c));
        }
        *(undefined1 *)(param_1 + 0x84) = 0;
      }
    }
    goto LAB_00af0d70;
  case 6:
    FUN_00b24c20(param_1 + 0x68);
    break;
  case 7:
    if (*(char *)(param_1 + 0xd5) == '\x03') {
      if (*(char *)(param_1 + 0xb1) == '\x03') {
        FUN_00b214e8(param_1 + 0x68);
        *(undefined1 *)(param_1 + 0xb0) = 0;
      }
      else if ((*(char *)(param_1 + 0xb1) == '\0') &&
              ((*(uint *)(param_1 + 0xa4) & 0x7fffffff) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
      }
      *(undefined1 *)(param_1 + 0xd4) = 0;
      iVar7 = *(int *)(param_1 + 0x20);
    }
    else {
      if ((*(char *)(param_1 + 0xd5) != '\0') || (*(int *)(param_1 + 200) == 0)) goto LAB_00af0c30;
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc));
      iVar7 = *(int *)(param_1 + 0x20);
    }
    if (iVar7 != 0) goto LAB_00af0c40;
LAB_00af0cd8:
    bVar1 = *(byte *)(param_1 + 0x28);
    cVar4 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar4 = '\x04';
    }
    iVar5 = 0xc;
    if ((cVar4 != '\x05') && ((cVar4 != '\x04' || (bVar1 != 3)))) break;
LAB_00af0d04:
    (**(code **)**(undefined4 **)(param_1 + 0x20 + iVar5))();
    break;
  case 8:
    if (*(char *)(param_1 + 0x101) == '\x03') {
      cVar4 = *(char *)(param_1 + 0xe8);
      bVar17 = cVar4 == '\x03';
      if (bVar17) {
        cVar4 = *(char *)(param_1 + 0xe5);
      }
      if (bVar17 && cVar4 == '\x03') {
        FUN_00accc50(param_1 + 0x78);
      }
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
    }
LAB_00af0c30:
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 == 0) goto LAB_00af0cd8;
LAB_00af0c40:
    iVar5 = 4;
    if (iVar7 == 2) goto LAB_00af0d04;
    break;
  default:
    goto switchD_00af0af8_default;
  }
  iVar7 = *(int *)(param_1 + 0x40);
  piVar6 = (int *)(iVar7 + 0xa4);
  do {
    iVar5 = *piVar6;
    bVar17 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar17);
  *piVar6 = iVar5 + -1;
  if (iVar5 == 1) {
    FUN_0163b708(iVar7 + 0x88);
  }
  piVar6 = *(int **)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar6;
    bVar17 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar17);
  *piVar6 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x40));
  }
LAB_00af0d70:
  if (*(int *)(param_1 + 0x4c) == 0) {
switchD_00af0af8_default:
    return;
  }
  iVar7 = *(int *)(param_1 + 0x50);
LAB_014b47f4:
  if (iVar7 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar12 = iVar8 * uVar15 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar8 - iVar7) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(iVar5 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar3 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar3;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar3 = uVar10;
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
      uVar9 = *puVar16;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar17 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar17);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

