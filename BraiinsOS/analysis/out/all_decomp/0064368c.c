// FUN_0064368c @ 0064368c size=284 calls_out=3 calls_in=7
// strings: 

void FUN_0064368c(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    puVar14 = *(undefined4 **)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 4);
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)(iVar8);
    }
LAB_00643700:
    if (puVar14[1] == 0) {
      return;
    }
    if (iVar8 == 0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar15 = *(byte *)(iVar8 + -3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
      iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar9 = (uint)(*(byte *)(iVar8 + -3) >> 5);
    iVar13 = *(int *)(iVar4 + 8) + 0x10;
    iVar10 = iVar6 * uVar15 + iVar6 + -4;
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
    if ((uint)(iVar6 - iVar8) < uVar9) {
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
    bVar2 = *(byte *)(iVar4 + 0x14);
    uVar9 = 1 << uVar15;
    *(undefined1 *)(iVar8 + -3) = 0xff;
    *(undefined2 *)(iVar8 + -2) = 0;
    do {
      uVar11 = *(uint *)(iVar4 + 0x10);
      uVar7 = *(uint *)(iVar4 + 0xc) | uVar11;
      if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar5)();
      }
      if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar15);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar14 = (undefined4 *)FUN_016d2bc8();
        uVar12 = *puVar14;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar14 = uVar12;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
        return;
      }
      puVar16 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar7 = *puVar16;
        if (uVar11 != uVar7) goto LAB_016d409c;
        bVar3 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar3);
      *puVar16 = uVar9 + uVar11;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar11 == uVar7) {
        return;
      }
    } while( true );
  }
  if (*(char *)(param_1 + 0x3c) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x29);
  if (cVar1 == '\x04') {
    if ((*(char *)(param_1 + 0x38) == '\x03') && (*(int *)(param_1 + 0x30) != 0)) {
      FUN_006f5fbc(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1);
    }
    FUN_006f625c(*(undefined4 *)(param_1 + 0x20));
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      puVar14 = *(undefined4 **)(param_1 + 0x18);
      iVar8 = *(int *)(param_1 + 0x14);
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)(iVar8);
      }
      goto LAB_00643700;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_006f5fbc(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),1);
    }
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar12 = *(undefined4 *)(param_1 + 0xc);
    puVar14 = *(undefined4 **)(param_1 + 0x10);
    pcVar5 = (code *)*puVar14;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar12);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

