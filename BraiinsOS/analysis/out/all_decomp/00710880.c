// FUN_00710880 @ 00710880 size=516 calls_out=8 calls_in=2
// strings: 

void FUN_00710880(uint *param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = 0x58;
  switch(*(undefined1 *)((int)param_1 + 0x6f)) {
  case 0:
    goto switchD_007108a0_caseD_0;
  default:
    goto switchD_007108a0_caseD_1;
  case 3:
    cVar1 = (char)param_1[0x51];
    bVar17 = cVar1 != '\x03';
    if (!bVar17) {
      cVar1 = *(char *)((int)param_1 + 0x141);
    }
    if (bVar17 || cVar1 != '\x03') break;
    FUN_00711a8c(param_1 + 0x45);
    puVar16 = param_1 + 0x4d;
    piVar7 = (int *)*puVar16;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar7;
      bVar17 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar17);
    *piVar7 = iVar8 + -1;
    iVar4 = 0x140;
LAB_00710a4c:
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790c08(*puVar16);
    }
LAB_00710a94:
    *(undefined1 *)((int)param_1 + iVar4) = 0;
    uVar5 = *param_1;
    if (uVar5 < 0x16) goto LAB_007109dc;
    goto LAB_007109ec;
  case 4:
    if ((char)param_1[0x6b] == '\x03') {
      cVar1 = (char)param_1[0x5d];
      bVar17 = cVar1 == '\x03';
      if (bVar17) {
        cVar1 = *(char *)((int)param_1 + 0x171);
      }
      if (bVar17 && cVar1 == '\x03') {
        FUN_00711a8c(param_1 + 0x51);
        puVar16 = param_1 + 0x59;
        piVar7 = (int *)*puVar16;
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar17 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar17);
        *piVar7 = iVar8 + -1;
        iVar4 = 0x170;
        goto LAB_00710a4c;
      }
    }
    break;
  case 5:
    cVar1 = (char)param_1[0x4f];
    bVar17 = cVar1 == '\x03';
    if (bVar17) {
      cVar1 = *(char *)((int)param_1 + 0x139);
    }
    if (bVar17 && cVar1 == '\x03') {
      FUN_00711a8c(param_1 + 0x43);
      puVar16 = param_1 + 0x4b;
      piVar7 = (int *)*puVar16;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar7;
        bVar17 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar17);
      *piVar7 = iVar8 + -1;
      iVar4 = 0x138;
      goto LAB_00710a4c;
    }
    break;
  case 6:
    FUN_00712424(param_1 + 0x1c);
    break;
  case 7:
    break;
  case 8:
    if ((char)param_1[0xbd] == '\x03') {
      cVar1 = *(char *)((int)param_1 + 0x1b9);
      if (cVar1 == '\x04') {
        if (((char)param_1[0xbb] == '\x03') && (param_1[0xb6] != 0)) {
          FUN_006f5d1c(param_1[0xb6],param_1[0xb7],1);
        }
        iVar4 = 0x1b8;
        FUN_006ff914(param_1 + 0x70);
        goto LAB_00710a94;
      }
      bVar17 = cVar1 == '\x03';
      if (bVar17) {
        cVar1 = (char)param_1[0x7a];
      }
      if ((bVar17 && cVar1 == '\x03') && (param_1[0x78] != 0)) {
        FUN_006f5fbc(param_1[0x78],param_1[0x79],1);
      }
    }
    break;
  case 9:
    FUN_00712874(param_1 + 0x1c);
  }
  uVar5 = *param_1;
  if (uVar5 < 0x16) {
LAB_007109dc:
    if ((1 << (uVar5 & 0xff) & 0x20c000U) == 0) goto LAB_007109ec;
  }
  else {
LAB_007109ec:
    FUN_00710ec4(param_1);
  }
  *(undefined1 *)((int)param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  iVar4 = 0x40;
switchD_007108a0_caseD_0:
  if (*(int *)((int)param_1 + iVar4) != 0) {
    iVar4 = ((int *)((int)param_1 + iVar4))[1];
    if (iVar4 == 0) {
      return;
    }
    iVar8 = FUN_016d3bc8();
    uVar5 = *(byte *)(iVar4 + -3) & 0x1f;
    if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
       (uVar12 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
      iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar12 = (uint)(*(byte *)(iVar4 + -3) >> 5);
    iVar15 = *(int *)(iVar8 + 8) + 0x10;
    iVar13 = iVar9 * uVar5 + iVar9 + -4;
    iVar9 = iVar15 + iVar13;
    if (4 < uVar12) {
      if (uVar12 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar12 = *(uint *)(iVar9 + -4);
      if (uVar12 < 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar2)();
      }
      if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar2)();
      }
    }
    if ((uint)(iVar9 - iVar4) < uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar8 + 0x14);
    uVar12 = 1 << uVar5;
    *(undefined1 *)(iVar4 + -3) = 0xff;
    *(undefined2 *)(iVar4 + -2) = 0;
    do {
      uVar14 = *(uint *)(iVar8 + 0x10);
      uVar10 = *(uint *)(iVar8 + 0xc) | uVar14;
      if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar8,uVar5);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar6 = (undefined4 *)FUN_016d2bc8();
        uVar11 = *puVar6;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar6 = uVar11;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar8 + 0x10) = uVar12 + uVar14;
        return;
      }
      puVar16 = (uint *)(iVar8 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar10 = *puVar16;
        if (uVar14 != uVar10) goto LAB_016d409c;
        bVar17 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar17);
      *puVar16 = uVar12 + uVar14;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar14 == uVar10) {
        return;
      }
    } while( true );
  }
switchD_007108a0_caseD_1:
  return;
}

