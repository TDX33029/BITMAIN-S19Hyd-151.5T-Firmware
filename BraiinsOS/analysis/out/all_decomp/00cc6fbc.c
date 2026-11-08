// FUN_00cc6fbc @ 00cc6fbc size=228 calls_out=1 calls_in=2
// strings: 

void FUN_00cc6fbc(byte param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar3 = 0;
  if (3 < param_1) {
    iVar3 = (byte)(param_1 - 4) + 1;
  }
  if (iVar3 == 0) {
    if (param_1 < 3) {
      return;
    }
    puVar10 = (undefined4 *)*param_2;
    puVar13 = (undefined4 *)param_2[1];
    pcVar4 = (code *)*puVar13;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(puVar10);
    }
    if (puVar13[1] == 0) goto LAB_014b47f4;
  }
  else {
    if (iVar3 != 1) {
      return;
    }
    if (*param_2 == 1) {
      if ((char)param_2[1] != '\x03') goto LAB_014b47f4;
      puVar10 = (undefined4 *)param_2[2];
      uVar12 = *puVar10;
      puVar13 = (undefined4 *)puVar10[1];
      pcVar4 = (code *)*puVar13;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar12);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
    }
    else {
      if ((*param_2 != 0) || (param_2[2] == 0)) goto LAB_014b47f4;
      puVar10 = (undefined4 *)param_2[1];
    }
  }
  thunk_FUN_016d3fb4(puVar10);
LAB_014b47f4:
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar14 = *(byte *)((int)param_2 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar7 - 0x10, uVar7 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
  iVar11 = *(int *)(iVar3 + 8) + 0x10;
  iVar8 = iVar5 * uVar14 + iVar5 + -4;
  iVar5 = iVar11 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar7 = *(uint *)(iVar5 + -4);
    if (uVar7 < 5) {
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
  if ((uint)(iVar5 - (int)param_2) < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar5 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar7 = 1 << uVar14;
  *(undefined1 *)((int)param_2 + -3) = 0xff;
  *(undefined2 *)((int)param_2 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar3 + 0x10);
    uVar6 = *(uint *)(iVar3 + 0xc) | uVar9;
    if ((uVar7 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar9 == 0) || (uVar6 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar10;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar10 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar15 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar9 != uVar6) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar6) {
      return;
    }
  } while( true );
}

