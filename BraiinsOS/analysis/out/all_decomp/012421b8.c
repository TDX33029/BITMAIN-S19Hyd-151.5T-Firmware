// FUN_012421b8 @ 012421b8 size=168 calls_out=1 calls_in=1
// strings: 

void FUN_012421b8(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int *piVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = param_1[3] - param_1[1];
  if (uVar5 != 0) {
    puVar13 = (undefined4 *)(param_1[1] + 8);
    uVar11 = uVar5 >> 4;
    do {
      if (puVar13[-2] != 0) {
        uVar5 = puVar13[-1];
      }
      if (puVar13[-2] != 0 && uVar5 != 0) {
        thunk_FUN_016d3fb4();
        uVar14 = *puVar13;
        piVar15 = (int *)puVar13[1];
        pcVar6 = (code *)*piVar15;
        uVar5 = 0;
        if (pcVar6 != (code *)0x0) goto LAB_01242224;
      }
      else {
        uVar14 = *puVar13;
        piVar15 = (int *)puVar13[1];
        pcVar6 = (code *)*piVar15;
        if (pcVar6 == (code *)0x0) {
          uVar5 = 0;
        }
        else {
LAB_01242224:
          (*pcVar6)(uVar14);
          uVar5 = extraout_r1;
        }
      }
      if (piVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar14);
        uVar5 = extraout_r1_00;
      }
      puVar13 = puVar13 + 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar3 = *param_1;
  if (iVar3 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar5 = *(byte *)(iVar3 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar3 + -3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar9 = iVar7 * uVar5 + iVar7 + -4;
  iVar7 = iVar12 + iVar9;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar7 - iVar3) < uVar11) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar1 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar5;
  *(undefined1 *)(iVar3 + -3) = 0xff;
  *(undefined2 *)(iVar3 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar10;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar10 == 0) || (uVar8 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar14 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar14;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar10 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar11 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar8) {
      return;
    }
  } while( true );
}

