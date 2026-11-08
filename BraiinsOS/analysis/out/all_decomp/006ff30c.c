// FUN_006ff30c @ 006ff30c size=260 calls_out=1 calls_in=0
// strings: 

void FUN_006ff30c(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = *param_1;
  iVar4 = uVar3 - 4;
  if (uVar3 < 4) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    if (uVar3 < 2) {
      return;
    }
    if (uVar3 == 2) {
      if (param_1[1] == 0) {
        return;
      }
      puVar7 = (undefined4 *)param_1[2];
      goto LAB_014b47f4;
    }
    if (uVar3 == 3) {
      if ((char)param_1[1] != '\x03') {
        return;
      }
      puVar7 = (undefined4 *)param_1[2];
      uVar11 = *puVar7;
      puVar13 = (undefined4 *)puVar7[1];
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(uVar11);
      }
    }
    else {
      uVar3 = param_1[1];
      bVar15 = uVar3 == 0;
      if (bVar15) {
        uVar3 = (uint)(byte)param_1[2];
      }
      if (!bVar15 || uVar3 != 3) {
        return;
      }
      puVar7 = (undefined4 *)param_1[3];
      uVar11 = *puVar7;
      puVar13 = (undefined4 *)puVar7[1];
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(uVar11);
      }
    }
  }
  else {
    if (iVar4 == 1) {
      uVar3 = param_1[1];
    }
    if (iVar4 != 1 || uVar3 != 0) {
      return;
    }
    if ((char)param_1[2] != '\x03') {
      return;
    }
    puVar7 = (undefined4 *)param_1[3];
    uVar11 = *puVar7;
    puVar13 = (undefined4 *)puVar7[1];
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)(uVar11);
    }
  }
  if (puVar13[1] != 0) {
    thunk_FUN_016d3fb4(uVar11);
  }
LAB_014b47f4:
  if (puVar7 == (undefined4 *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar3 = *(byte *)((int)puVar7 - 3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)((int)puVar7 - 3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar9 = iVar5 * uVar3 + iVar5 + -4;
  iVar5 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar5 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar5 - (int)puVar7) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar8 = 1 << uVar3;
  *(undefined1 *)((int)puVar7 - 3) = 0xff;
  *(undefined2 *)((int)puVar7 - 2) = 0;
  do {
    uVar10 = *(uint *)(iVar4 + 0x10);
    uVar6 = *(uint *)(iVar4 + 0xc) | uVar10;
    if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar14 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar6 = *puVar14;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

