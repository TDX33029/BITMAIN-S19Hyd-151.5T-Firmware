// FUN_00d4ff98 @ 00d4ff98 size=428 calls_out=6 calls_in=2
// strings: 

void FUN_00d4ff98(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uStack_28;
  
  uVar5 = *param_1;
  iVar4 = 5;
  if ((uint)(uVar5 < 2) <= -param_1[1]) {
    iVar4 = uVar5 - 2;
  }
  switch(iVar4) {
  case 0:
    break;
  case 1:
    FUN_00c48708(param_1 + 0x17);
    return;
  case 2:
    FUN_00c48708(param_1 + 0x13);
    return;
  case 3:
    uVar5 = param_1[9];
    uVar7 = 0;
    uVar11 = param_1[10];
    while (uVar7 != uVar11) {
      iVar4 = uVar5 + uVar7 * 0x20;
      iVar12 = *(int *)(iVar4 + 0x14);
      puVar9 = (undefined4 *)(iVar12 + 0x10);
      for (iVar13 = *(int *)(iVar4 + 0x18); iVar13 != 0; iVar13 = iVar13 + -1) {
        if (puVar9[-4] != 0) {
          thunk_FUN_016d3fb4(puVar9[-3]);
        }
        if (puVar9[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar9);
        }
        puVar9 = puVar9 + 6;
      }
      uVar7 = uVar7 + 1;
      if (*(int *)(iVar4 + 0x10) != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
    if (param_1[8] != 0) goto LAB_014b47f4;
    break;
  case 4:
    if (param_1[10] != 0) {
      uVar5 = param_1[0xb];
      goto LAB_014b47f4;
    }
    break;
  default:
    FUN_00c48708(param_1 + 0xc1,-(param_1[1] + (uint)(uVar5 >= 2)));
    FUN_00c44ec8(param_1 + 0xa2);
    FUN_00c40bfc(param_1 + 0xa5);
    FUN_00c4496c(param_1 + 0xa8);
    FUN_00d5020c(param_1 + 0x1a);
    puVar9 = (undefined4 *)(param_1[0x87] + 4);
    for (uVar5 = param_1[0x88]; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (puVar9[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar9);
      }
      puVar9 = puVar9 + 4;
    }
    if (param_1[0x86] == 0) {
      return;
    }
    uVar5 = param_1[0x87];
LAB_014b47f4:
    if (uVar5 == 0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar7 = *(byte *)(uVar5 - 3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar12 = uVar11 - 0x10, uVar11 == 0)) {
      iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar11 = (uint)(*(byte *)(uVar5 - 3) >> 5);
    iVar10 = *(int *)(iVar4 + 8) + 0x10;
    iVar13 = iVar12 * uVar7 + iVar12 + -4;
    iVar12 = iVar10 + iVar13;
    if (4 < uVar11) {
      if (uVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar11 = *(uint *)(iVar12 + -4);
      if (uVar11 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if (iVar12 - uVar5 < uVar11) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar12 - uVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 + iVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar4 + 0x14);
    uVar11 = 1 << uVar7;
    *(undefined1 *)(uVar5 - 3) = 0xff;
    *(undefined2 *)(uVar5 - 2) = 0;
    do {
      uVar8 = *(uint *)(iVar4 + 0x10);
      uVar5 = *(uint *)(iVar4 + 0xc) | uVar8;
      if ((uVar11 & uVar5) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar8 == 0) || (uVar5 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar7);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar9 = (undefined4 *)FUN_016d2bc8();
        uVar6 = *puVar9;
        FUN_016d6ac4(uStack_28,unaff_r4);
        *puVar9 = uVar6;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar11 + uVar8;
        return;
      }
      puVar14 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar14);
        uVar5 = *puVar14;
        if (uVar8 != uVar5) goto LAB_016d409c;
        bVar3 = (bool)hasExclusiveAccess(puVar14);
      } while (!bVar3);
      *puVar14 = uVar11 + uVar8;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar8 == uVar5) {
        return;
      }
    } while( true );
  }
  return;
}

