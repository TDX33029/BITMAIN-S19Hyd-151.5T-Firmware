// FUN_007825fc @ 007825fc size=352 calls_out=4 calls_in=10
// strings: 

void FUN_007825fc(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar3 = 1;
  if (0x80000007 < *param_1) {
    iVar3 = *param_1 + 0x7ffffff8;
  }
  switch(iVar3) {
  case 0:
    if ((char)param_1[1] != '\x03') {
      return;
    }
    puVar9 = (undefined4 *)param_1[2];
    uVar12 = *puVar9;
    puVar14 = (undefined4 *)puVar9[1];
    pcVar4 = (code *)*puVar14;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar12);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    break;
  case 1:
    FUN_00a326d8();
    return;
  case 2:
    uVar5 = param_1[1];
    uVar6 = 8;
    if ((int)uVar5 < 0) {
      uVar6 = uVar5 ^ 0x80000000;
    }
    if (uVar6 < 8) {
      return;
    }
    if (uVar6 != 8) {
      FUN_009b8520(param_1 + 2);
      return;
    }
    if (uVar5 == 0) {
      return;
    }
    puVar9 = (undefined4 *)param_1[2];
    break;
  case 3:
    FUN_00a32bac(param_1 + 1);
    return;
  default:
    iVar3 = 4;
    if (1 < param_1[1]) {
      iVar3 = param_1[1] - 2;
    }
    switch(iVar3) {
    case 0:
      if ((char)param_1[2] == '\x03') {
        puVar9 = (undefined4 *)param_1[3];
        uVar12 = *puVar9;
        puVar14 = (undefined4 *)puVar9[1];
        pcVar4 = (code *)*puVar14;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar12);
        }
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(uVar12);
        }
        goto LAB_014b47f4;
      }
      break;
    case 1:
    case 3:
      break;
    default:
      if (param_1[2] != 0) {
        puVar9 = (undefined4 *)param_1[3];
        goto LAB_014b47f4;
      }
    }
    return;
  }
LAB_014b47f4:
  if (puVar9 == (undefined4 *)0x0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar5 = *(byte *)((int)puVar9 - 3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar7 = uVar6 - 0x10, uVar6 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar6 = (uint)(*(byte *)((int)puVar9 - 3) >> 5);
  iVar13 = *(int *)(iVar3 + 8) + 0x10;
  iVar10 = iVar7 * uVar5 + iVar7 + -4;
  iVar7 = iVar13 + iVar10;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar6 = *(uint *)(iVar7 + -4);
    if (uVar6 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar7 - (int)puVar9) < uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar7 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar6 = 1 << uVar5;
  *(undefined1 *)((int)puVar9 - 3) = 0xff;
  *(undefined2 *)((int)puVar9 - 2) = 0;
  do {
    uVar11 = *(uint *)(iVar3 + 0x10);
    uVar8 = *(uint *)(iVar3 + 0xc) | uVar11;
    if ((uVar6 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar6 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar6 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar6 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

