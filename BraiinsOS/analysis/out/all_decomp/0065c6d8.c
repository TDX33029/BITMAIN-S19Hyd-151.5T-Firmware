// FUN_0065c6d8 @ 0065c6d8 size=284 calls_out=3 calls_in=3
// strings: 

void FUN_0065c6d8(uint *param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*(undefined1 *)((int)param_1 + 0x71)) {
  case 0:
    param_1 = param_1 + 0x16;
    uVar7 = *param_1;
    goto joined_r0x0065c7f4;
  default:
    goto switchD_0065c6f0_caseD_1;
  case 3:
    goto switchD_0065c6f0_caseD_3;
  case 4:
  case 6:
    cVar1 = (char)param_1[0x22];
    break;
  case 5:
    cVar1 = (char)param_1[0x2c];
    break;
  case 7:
    if (*(char *)((int)param_1 + 0xe5) == '\x03') {
      puVar15 = param_1 + 0x1e;
      FUN_0065c884(param_1 + 0x24);
      *(undefined1 *)(param_1 + 0x39) = 0;
      if (param_1[0x1f] != 0) goto LAB_0065c7a8;
      goto switchD_0065c6f0_caseD_3;
    }
    if ((*(char *)((int)param_1 + 0xe5) != '\0') || (param_1[0x36] == 0))
    goto switchD_0065c6f0_caseD_3;
    puVar15 = param_1 + 0x35;
    goto LAB_0065c7a8;
  }
  if ((cVar1 == '\0') && (param_1[0x20] != 0)) {
    puVar15 = param_1 + 0x1f;
LAB_0065c7a8:
    thunk_FUN_016d3fb4(*puVar15);
  }
switchD_0065c6f0_caseD_3:
  if ((0x15 < *param_1) || ((1 << (*param_1 & 0xff) & 0x200124U) == 0)) {
    FUN_00643e58();
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1b] = 0;
  param_1 = param_1 + 0x10;
  uVar7 = *param_1;
joined_r0x0065c7f4:
  if (uVar7 != 0) {
    uVar7 = param_1[1];
    if (uVar7 == 0) {
      return;
    }
    iVar5 = FUN_016d3bc8();
    uVar14 = *(byte *)(uVar7 - 3) & 0x1f;
    if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
       (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
      iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar10 = (uint)(*(byte *)(uVar7 - 3) >> 5);
    iVar13 = *(int *)(iVar5 + 8) + 0x10;
    iVar11 = iVar8 * uVar14 + iVar8 + -4;
    iVar8 = iVar13 + iVar11;
    if (4 < uVar10) {
      if (uVar10 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar10 = *(uint *)(iVar8 + -4);
      if (uVar10 < 5) {
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
    if (iVar8 - uVar7 < uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar5 + 0x14);
    uVar10 = 1 << uVar14;
    *(undefined1 *)(uVar7 - 3) = 0xff;
    *(undefined2 *)(uVar7 - 2) = 0;
    do {
      uVar12 = *(uint *)(iVar5 + 0x10);
      uVar7 = *(uint *)(iVar5 + 0xc) | uVar12;
      if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar5,uVar14);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar6 = (undefined4 *)FUN_016d2bc8();
        uVar9 = *puVar6;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar6 = uVar9;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
        return;
      }
      puVar15 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar7 = *puVar15;
        if (uVar12 != uVar7) goto LAB_016d409c;
        bVar4 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar4);
      *puVar15 = uVar10 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar7) {
        return;
      }
    } while( true );
  }
switchD_0065c6f0_caseD_1:
  return;
}

