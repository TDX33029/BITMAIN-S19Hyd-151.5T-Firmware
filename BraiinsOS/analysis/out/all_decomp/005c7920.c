// FUN_005c7920 @ 005c7920 size=276 calls_out=1 calls_in=2
// strings: 

void FUN_005c7920(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((undefined1 *)param_1[0x18] == &DAT_3b9aca00) {
    return;
  }
  uVar5 = *param_1;
  uVar7 = 0xf;
  if ((int)uVar5 < 0) {
    uVar7 = uVar5 ^ 0x80000000;
  }
  if (uVar7 == 0x17) {
    iVar6 = 8;
    if (param_1[1] == 0) {
      return;
    }
  }
  else {
    if (uVar7 == 0xf) {
      if (uVar5 != 0) {
        thunk_FUN_016d3fb4(param_1[1]);
      }
      if (param_1[3] != 0) {
        thunk_FUN_016d3fb4(param_1[4]);
      }
      if ((param_1[6] & 0x7fffffff) == 0) {
        return;
      }
      uVar5 = param_1[7];
      goto LAB_014b47f4;
    }
    if (uVar7 != 0xe) {
      return;
    }
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    if ((param_1[7] & 0x7fffffff) == 0) {
      return;
    }
    iVar6 = 0x20;
  }
  uVar5 = *(uint *)((int)param_1 + iVar6);
LAB_014b47f4:
  if (uVar5 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar7 = *(byte *)(uVar5 - 3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(uVar5 - 3) >> 5);
  iVar13 = *(int *)(iVar6 + 8) + 0x10;
  iVar11 = iVar8 * uVar7 + iVar8 + -4;
  iVar8 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar8 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar8 - uVar5 < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar10 = 1 << uVar7;
  *(undefined1 *)(uVar5 - 3) = 0xff;
  *(undefined2 *)(uVar5 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar6 + 0x10);
    uVar5 = *(uint *)(iVar6 + 0xc) | uVar12;
    if ((uVar10 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar5 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar7);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar14 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar12 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar5) {
      return;
    }
  } while( true );
}

