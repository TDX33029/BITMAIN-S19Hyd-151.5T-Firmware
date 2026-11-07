// FUN_0111dea8 @ 0111dea8 size=448 calls_out=1 calls_in=3
// strings: 

void FUN_0111dea8(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  uVar6 = 5;
  if ((int)uVar4 < 0) {
    uVar6 = uVar4 ^ 0x80000000;
  }
  switch(uVar6) {
  case 0:
    if ((char)param_1[1] != '\x03') {
      return;
    }
    piVar9 = (int *)param_1[2];
    puVar12 = (undefined4 *)*piVar9;
    puVar15 = (undefined4 *)piVar9[1];
    if ((code *)*puVar15 != (code *)0x0) {
      (*(code *)*puVar15)(puVar12);
    }
    goto LAB_0111df64;
  case 1:
    if (param_1[1] == 0) {
      return;
    }
    piVar9 = (int *)param_1[2];
    break;
  case 2:
    if ((char)param_1[1] == '\x04') {
      return;
    }
    if ((char)param_1[1] != '\x03') {
      return;
    }
    piVar9 = (int *)param_1[2];
    puVar12 = (undefined4 *)*piVar9;
    puVar15 = (undefined4 *)piVar9[1];
    if ((code *)*puVar15 != (code *)0x0) {
      (*(code *)*puVar15)(puVar12);
    }
LAB_0111df64:
    if (puVar15[1] != 0) {
LAB_0111e070:
      thunk_FUN_016d3fb4(puVar12);
    }
    break;
  case 3:
    piVar9 = (int *)param_1[1];
    if (*piVar9 == 1) {
      if ((char)piVar9[1] != '\x03') break;
      puVar12 = (undefined4 *)piVar9[2];
      uVar14 = *puVar12;
      puVar15 = (undefined4 *)puVar12[1];
      pcVar5 = (code *)*puVar15;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar14);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar14);
      }
    }
    else {
      if ((*piVar9 != 0) || (piVar9[2] == 0)) break;
      puVar12 = (undefined4 *)piVar9[1];
    }
    goto LAB_0111e070;
  case 4:
    if (param_1[1] == 0) {
      return;
    }
    piVar9 = (int *)param_1[2];
    break;
  case 5:
    if (uVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[3] != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    if (param_1[6] == 0) {
      return;
    }
    piVar9 = (int *)param_1[7];
    break;
  case 6:
    if (param_1[2] == 0) {
      return;
    }
    piVar9 = (int *)param_1[3];
    break;
  default:
    return;
  }
  if (piVar9 == (int *)0x0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)piVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar7 = uVar6 - 0x10, uVar6 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar6 = (uint)(*(byte *)((int)piVar9 + -3) >> 5);
  iVar13 = *(int *)(iVar3 + 8) + 0x10;
  iVar10 = iVar7 * uVar4 + iVar7 + -4;
  iVar7 = iVar13 + iVar10;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar6 = *(uint *)(iVar7 + -4);
    if (uVar6 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar7 - (int)piVar9) < uVar6) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar7 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar6 = 1 << uVar4;
  *(undefined1 *)((int)piVar9 + -3) = 0xff;
  *(undefined2 *)((int)piVar9 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar3 + 0x10);
    uVar8 = *(uint *)(iVar3 + 0xc) | uVar11;
    if ((uVar6 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar6 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar14 = *puVar12;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar12 = uVar14;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar6 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar6 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

