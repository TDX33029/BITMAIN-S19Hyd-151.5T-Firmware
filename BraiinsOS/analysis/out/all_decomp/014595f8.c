// FUN_014595f8 @ 014595f8 size=208 calls_out=4 calls_in=4
// strings: 

void FUN_014595f8(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  switch((char)param_1[0x1b9]) {
  case '\0':
    if (param_1[0x1e] != 0) {
      thunk_FUN_016d3fb4(param_1[0x1c]);
    }
    if (*param_1 == 2 && param_1[1] == 0) {
      return;
    }
    iVar9 = 0x50;
    FUN_00a07b4c(param_1);
    break;
  default:
    goto switchD_01459614_caseD_1;
  case '\x03':
    iVar9 = 0x108;
    FUN_014d05f4(param_1 + 0x1ba);
    break;
  case '\x06':
    FUN_014294e8(param_1 + 0x1bc);
    *(undefined1 *)((int)param_1 + 0x6e5) = 0;
  case '\x04':
  case '\x05':
    FUN_00a07b4c(param_1 + 0x198);
    FUN_014d05f4(param_1 + 0x100);
    FUN_014d05f4(param_1 + 0x68);
    if (param_1[0x62] != 0) {
      thunk_FUN_016d3fb4(param_1[0x60]);
    }
    iVar9 = 0x108;
    *(undefined1 *)((int)param_1 + 0x6e6) = 0;
  }
  if (((int *)((int)param_1 + iVar9))[2] != 0) {
    iVar9 = *(int *)((int)param_1 + iVar9);
    if (iVar9 == 0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar14 = *(byte *)(iVar9 + -3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
      iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar10 = (uint)(*(byte *)(iVar9 + -3) >> 5);
    iVar13 = *(int *)(iVar4 + 8) + 0x10;
    iVar11 = iVar6 * uVar14 + iVar6 + -4;
    iVar6 = iVar13 + iVar11;
    if (4 < uVar10) {
      if (uVar10 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar10 = *(uint *)(iVar6 + -4);
      if (uVar10 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar6 - iVar9) < uVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar4 + 0x14);
    uVar10 = 1 << uVar14;
    *(undefined1 *)(iVar9 + -3) = 0xff;
    *(undefined2 *)(iVar9 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar4 + 0x10);
      uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
      if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar14);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar5 = (undefined4 *)FUN_016d2bc8();
        uVar8 = *puVar5;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar5 = uVar8;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
        return;
      }
      puVar15 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar7 = *puVar15;
        if (uVar12 != uVar7) goto LAB_016d409c;
        bVar3 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar3);
      *puVar15 = uVar10 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar7) {
        return;
      }
    } while( true );
  }
switchD_01459614_caseD_1:
  return;
}

