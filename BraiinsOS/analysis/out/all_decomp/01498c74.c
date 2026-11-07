// FUN_01498c74 @ 01498c74 size=360 calls_out=1 calls_in=2
// strings: 

void FUN_01498c74(int *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar12 = *param_1;
  uVar3 = iVar12 + 0x80000001U & iVar12 >> 0x1f;
  if (uVar3 == 0) {
    if ((char)param_1[3] == '\x03') {
      puVar7 = (undefined4 *)param_1[4];
      uVar14 = *puVar7;
      puVar13 = (undefined4 *)puVar7[1];
      pcVar4 = (code *)*puVar13;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar14);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(uVar14);
      }
      thunk_FUN_016d3fb4(puVar7);
    }
    if (iVar12 == 0) {
      return;
    }
    puVar7 = (undefined4 *)param_1[1];
  }
  else if (uVar3 == 1) {
    puVar13 = (undefined4 *)param_1[2];
    puVar7 = (undefined4 *)param_1[1];
    pcVar4 = (code *)*puVar13;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(puVar7);
    }
    if (puVar13[1] == 0) {
      return;
    }
  }
  else {
    switch(param_1[1]) {
    case 0:
      if (param_1[2] == 0) {
        return;
      }
      puVar7 = (undefined4 *)param_1[3];
      break;
    case 1:
      if (param_1[2] == 0) {
        return;
      }
      puVar7 = (undefined4 *)param_1[3];
      break;
    case 2:
      if (param_1[2] == 0) {
        return;
      }
      puVar7 = (undefined4 *)param_1[3];
      break;
    case 3:
      if ((char)param_1[2] != '\x03') {
        return;
      }
      puVar7 = (undefined4 *)param_1[3];
      uVar14 = *puVar7;
      puVar13 = (undefined4 *)puVar7[1];
      pcVar4 = (code *)*puVar13;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar14);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(uVar14);
      }
      break;
    default:
      return;
    }
  }
  if (puVar7 == (undefined4 *)0x0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar3 = *(byte *)((int)puVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)((int)puVar7 + -3) >> 5);
  iVar11 = *(int *)(iVar12 + 8) + 0x10;
  iVar9 = iVar5 * uVar3 + iVar5 + -4;
  iVar5 = iVar11 + iVar9;
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
  if ((uint)(iVar5 - (int)puVar7) < uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar12 + 0x14);
  uVar8 = 1 << uVar3;
  *(undefined1 *)((int)puVar7 + -3) = 0xff;
  *(undefined2 *)((int)puVar7 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar12 + 0x10);
    uVar6 = *(uint *)(iVar12 + 0xc) | uVar10;
    if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar14 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar14;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar12 + 0x10);
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

