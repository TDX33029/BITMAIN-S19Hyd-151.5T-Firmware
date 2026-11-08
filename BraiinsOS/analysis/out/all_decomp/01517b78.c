// FUN_01517b78 @ 01517b78 size=104 calls_out=1 calls_in=0
// strings: 

void FUN_01517b78(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar8 = *param_1;
  iVar5 = 1;
  if (0x80000000 < uVar8) {
    iVar5 = uVar8 + 0x7fffffff;
  }
  switch(iVar5) {
  case 0:
  case 3:
    goto switchD_01517b9c_caseD_0;
  case 1:
    FUN_01517c10(param_1 + 3);
    if (uVar8 == 0x80000000) {
      return;
    }
    break;
  default:
    param_1 = param_1 + 1;
    uVar8 = *param_1;
    if (uVar8 == 0x80000000) {
      return;
    }
  }
  if (uVar8 != 0) {
    uVar8 = param_1[1];
    if (uVar8 == 0) {
      return;
    }
    iVar5 = FUN_016d3bc8();
    uVar13 = *(byte *)(uVar8 - 3) & 0x1f;
    if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
       (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
      iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar9 = (uint)(*(byte *)(uVar8 - 3) >> 5);
    iVar12 = *(int *)(iVar5 + 8) + 0x10;
    iVar10 = iVar6 * uVar13 + iVar6 + -4;
    iVar6 = iVar12 + iVar10;
    if (4 < uVar9) {
      if (uVar9 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar9 = *(uint *)(iVar6 + -4);
      if (uVar9 < 5) {
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
    if (iVar6 - uVar8 < uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar5 + 0x14);
    uVar9 = 1 << uVar13;
    *(undefined1 *)(uVar8 - 3) = 0xff;
    *(undefined2 *)(uVar8 - 2) = 0;
    do {
      uVar11 = *(uint *)(iVar5 + 0x10);
      uVar8 = *(uint *)(iVar5 + 0xc) | uVar11;
      if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar5,uVar13);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar4 = (undefined4 *)FUN_016d2bc8();
        uVar7 = *puVar4;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar4 = uVar7;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
        return;
      }
      puVar14 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar14);
        uVar8 = *puVar14;
        if (uVar11 != uVar8) goto LAB_016d409c;
        bVar3 = (bool)hasExclusiveAccess(puVar14);
      } while (!bVar3);
      *puVar14 = uVar9 + uVar11;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar11 == uVar8) {
        return;
      }
    } while( true );
  }
switchD_01517b9c_caseD_0:
  return;
}

