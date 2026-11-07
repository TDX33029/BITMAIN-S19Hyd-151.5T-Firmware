// FUN_005c270c @ 005c270c size=308 calls_out=1 calls_in=7
// strings: 

void FUN_005c270c(int param_1)

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
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    puVar11 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 4);
    for (iVar7 = *(int *)(param_1 + 0x20); iVar7 != 0; iVar7 = iVar7 + -1) {
      if (puVar11[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar11);
      }
      puVar11 = puVar11 + 4;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0x1c);
LAB_014b47f4:
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
    iVar13 = *(int *)(iVar3 + 8) + 0x10;
    iVar9 = iVar5 * uVar14 + iVar5 + -4;
    iVar5 = iVar13 + iVar9;
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
    if (*(char *)(iVar13 + iVar9) != '\0') {
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
        puVar11 = (undefined4 *)FUN_016d2bc8();
        uVar12 = *puVar11;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar11 = uVar12;
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
  if (*(char *)(param_1 + 0x98) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x8c) != '\x03') {
    if (*(char *)(param_1 + 0x8c) != '\0') {
      return;
    }
    puVar11 = (undefined4 *)(*(int *)(param_1 + 0x44) + 4);
    for (iVar7 = *(int *)(param_1 + 0x48); iVar7 != 0; iVar7 = iVar7 + -1) {
      if (puVar11[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar11);
      }
      puVar11 = puVar11 + 4;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0x44);
    goto LAB_014b47f4;
  }
  if (*(char *)(param_1 + 0x88) == '\x03') {
    uVar12 = *(undefined4 *)(param_1 + 0x80);
    puVar11 = *(undefined4 **)(param_1 + 0x84);
    pcVar4 = (code *)*puVar11;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar12);
    }
    if (puVar11[1] == 0) goto LAB_005c2834;
  }
  else {
    if ((*(char *)(param_1 + 0x88) != '\0') || (*(int *)(param_1 + 0x68) == 0)) goto LAB_005c2834;
    uVar12 = *(undefined4 *)(param_1 + 0x6c);
  }
  thunk_FUN_016d3fb4(uVar12);
LAB_005c2834:
  *(undefined1 *)(param_1 + 0x8d) = 0;
  return;
}

