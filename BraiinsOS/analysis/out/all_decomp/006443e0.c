// FUN_006443e0 @ 006443e0 size=360 calls_out=3 calls_in=5
// strings: 

void FUN_006443e0(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    if (*(char *)(param_1 + 0x3c) != '\x03') {
      return;
    }
    switch(*(undefined1 *)(param_1 + 0x29)) {
    case 0:
      puVar13 = *(undefined4 **)(param_1 + 0x18);
      iVar7 = *(int *)(param_1 + 0x14);
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(iVar7);
      }
      goto LAB_0064446c;
    default:
      goto switchD_00644410_caseD_1;
    case 3:
      if (*(int *)(param_1 + 0x2c) != 0) {
        FUN_006f5fbc(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),1);
      }
      goto LAB_00644520;
    case 4:
      if ((*(char *)(param_1 + 0x38) == '\x03') && (*(int *)(param_1 + 0x30) != 0)) {
        FUN_006f5fbc(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1);
      }
      break;
    case 5:
      if ((*(char *)(param_1 + 0x38) == '\x03') && (*(int *)(param_1 + 0x30) != 0)) {
        FUN_006f5fbc(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1);
      }
      break;
    case 6:
      if ((*(char *)(param_1 + 0x38) == '\x03') && (*(int *)(param_1 + 0x30) != 0)) {
        FUN_006f5fbc(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1);
      }
    }
    FUN_006f625c(*(undefined4 *)(param_1 + 0x20));
LAB_00644520:
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar11 = *(undefined4 *)(param_1 + 0xc);
      puVar13 = *(undefined4 **)(param_1 + 0x10);
      pcVar4 = (code *)*puVar13;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar11);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(uVar11);
      }
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    return;
  }
  puVar13 = *(undefined4 **)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 4);
  if ((code *)*puVar13 != (code *)0x0) {
    (*(code *)*puVar13)(iVar7);
  }
LAB_0064446c:
  if (puVar13[1] != 0) {
    if (iVar7 == 0) {
      return;
    }
    iVar3 = FUN_016d3bc8();
    uVar14 = *(byte *)(iVar7 + -3) & 0x1f;
    if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
       (uVar8 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
      iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar8 = (uint)(*(byte *)(iVar7 + -3) >> 5);
    iVar12 = *(int *)(iVar3 + 8) + 0x10;
    iVar9 = iVar5 * uVar14 + iVar5 + -4;
    iVar5 = iVar12 + iVar9;
    if (4 < uVar8) {
      if (uVar8 != 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar4)();
      }
      uVar8 = *(uint *)(iVar5 + -4);
      if (uVar8 < 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar4)();
      }
      if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar4)();
      }
    }
    if ((uint)(iVar5 - iVar7) < uVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar4)();
    }
    if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar4)();
    }
    if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar4)();
    }
    bVar1 = *(byte *)(iVar3 + 0x14);
    uVar8 = 1 << uVar14;
    *(undefined1 *)(iVar7 + -3) = 0xff;
    *(undefined2 *)(iVar7 + -2) = 0;
    do {
      uVar10 = *(uint *)(iVar3 + 0x10);
      uVar6 = *(uint *)(iVar3 + 0xc) | uVar10;
      if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar4)();
      }
      if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar3,uVar14);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar13 = (undefined4 *)FUN_016d2bc8();
        uVar11 = *puVar13;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar13 = uVar11;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar3 + 0x10) = uVar8 + uVar10;
        return;
      }
      puVar15 = (uint *)(iVar3 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar6 = *puVar15;
        if (uVar10 != uVar6) goto LAB_016d409c;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = uVar8 + uVar10;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar10 == uVar6) {
        return;
      }
    } while( true );
  }
switchD_00644410_caseD_1:
  return;
}

