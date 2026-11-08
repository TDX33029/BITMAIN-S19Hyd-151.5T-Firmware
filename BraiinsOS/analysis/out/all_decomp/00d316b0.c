// FUN_00d316b0 @ 00d316b0 size=676 calls_out=7 calls_in=2
// strings: 

void FUN_00d316b0(int param_1)

{
  byte bVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*(undefined1 *)(param_1 + 0x5d)) {
  case 3:
    if (*(char *)(param_1 + 0xd5) != '\0') {
      if (*(char *)(param_1 + 0xd5) == '\x03') {
        FUN_00ad3a7c(param_1 + 0x60);
        *(undefined1 *)(param_1 + 0xd4) = 0;
        return;
      }
      return;
    }
    if (*(int *)(param_1 + 200) == 0) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0xcc);
    goto LAB_014b47f4;
  case 4:
    cVar5 = *(char *)(param_1 + 0xd4);
    bVar18 = cVar5 == '\x03';
    if (bVar18) {
      cVar5 = *(char *)(param_1 + 0xd1);
    }
    if (bVar18 && cVar5 == '\x03') {
      FUN_00accc50(param_1 + 100);
    }
    goto LAB_00d318ec;
  case 5:
    cVar5 = *(char *)(param_1 + 0xac);
    bVar18 = cVar5 == '\x03';
    if (bVar18) {
      cVar5 = *(char *)(param_1 + 0x6d);
    }
    if (bVar18 && cVar5 == '\x03') {
      cVar5 = *(char *)(param_1 + 0xa8);
      bVar18 = cVar5 == '\x03';
      if (bVar18) {
        cVar5 = *(char *)(param_1 + 0x85);
      }
      if (bVar18 && cVar5 == '\x04') {
        FUN_0163bdc0(param_1 + 0x88);
        if (*(int *)(param_1 + 0x98) != 0) {
          (**(code **)(*(int *)(param_1 + 0x98) + 0xc))(*(undefined4 *)(param_1 + 0x9c));
        }
        *(undefined1 *)(param_1 + 0x84) = 0;
      }
    }
    goto LAB_00d318ec;
  case 6:
    cVar5 = *(char *)(param_1 + 0xb8);
    bVar18 = cVar5 == '\x03';
    if (bVar18) {
      cVar5 = *(char *)(param_1 + 0x79);
    }
    if (bVar18 && cVar5 == '\x03') {
      cVar5 = *(char *)(param_1 + 0xb4);
      bVar18 = cVar5 == '\x03';
      if (bVar18) {
        cVar5 = *(char *)(param_1 + 0x91);
      }
      if (bVar18 && cVar5 == '\x04') {
        FUN_0163bdc0(param_1 + 0x94);
        if (*(int *)(param_1 + 0xa4) != 0) {
          (**(code **)(*(int *)(param_1 + 0xa4) + 0xc))(*(undefined4 *)(param_1 + 0xa8));
        }
        *(undefined1 *)(param_1 + 0x90) = 0;
      }
    }
    FUN_00ad4dd0(param_1 + 0xc0);
    break;
  case 7:
    if (*(char *)(param_1 + 0xd5) == '\x03') {
      FUN_00ad3a7c(param_1 + 0x60);
      *(undefined1 *)(param_1 + 0xd4) = 0;
      iVar7 = *(int *)(param_1 + 0x20);
    }
    else {
      if ((*(char *)(param_1 + 0xd5) != '\0') || (*(int *)(param_1 + 200) == 0)) goto LAB_00d31818;
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc));
      iVar7 = *(int *)(param_1 + 0x20);
    }
    if (iVar7 != 0) goto LAB_00d31828;
LAB_00d31858:
    bVar1 = *(byte *)(param_1 + 0x28);
    cVar5 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar5 = '\x04';
    }
    iVar6 = 0xc;
    if ((cVar5 != '\x05') && ((cVar5 != '\x04' || (bVar1 != 3)))) break;
LAB_00d31884:
    (**(code **)**(undefined4 **)(param_1 + 0x20 + iVar6))();
    break;
  case 8:
    if (*(char *)(param_1 + 0x101) == '\x03') {
      cVar5 = *(char *)(param_1 + 0xe8);
      bVar18 = cVar5 == '\x03';
      if (bVar18) {
        cVar5 = *(char *)(param_1 + 0xe5);
      }
      if (bVar18 && cVar5 == '\x03') {
        FUN_00accc50(param_1 + 0x78);
      }
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
    }
LAB_00d31818:
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 == 0) goto LAB_00d31858;
LAB_00d31828:
    iVar6 = 4;
    if (iVar7 == 2) goto LAB_00d31884;
    break;
  default:
    goto switchD_00d316d0_default;
  }
  piVar14 = *(int **)(param_1 + 0x40);
  piVar3 = piVar14 + 0x29;
  do {
    iVar7 = *piVar3;
    bVar18 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar18);
  *piVar3 = iVar7 + -1;
  if (iVar7 == 1) {
    FUN_0163b708(piVar14 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar14;
    bVar18 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar18);
  *piVar14 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x40));
  }
LAB_00d318ec:
  if (*(int *)(param_1 + 0x4c) == 0) {
switchD_00d316d0_default:
    return;
  }
  iVar7 = *(int *)(param_1 + 0x50);
LAB_014b47f4:
  if (iVar7 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar15 = *(int *)(iVar6 + 8) + 0x10;
  iVar12 = iVar8 * uVar16 + iVar8 + -4;
  iVar8 = iVar15 + iVar12;
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
  if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(iVar6 + 0x14);
  uVar11 = 1 << uVar16;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

