// FUN_00b4088c @ 00b4088c size=676 calls_out=7 calls_in=2
// strings: 

void FUN_00b4088c(int param_1)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint *extraout_r1_03;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar5 = &switchD_00b408a8::switchdataD_00b408ac;
  switch(*(undefined1 *)(param_1 + 0xa5)) {
  case 0:
    if (*(int *)(param_1 + 0x94) == -0x80000000) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x98);
    for (iVar9 = *(int *)(param_1 + 0x9c); iVar9 != 0; iVar9 = iVar9 + -1) {
      FUN_00ce24f4(iVar4);
      iVar4 = iVar4 + 0x30;
    }
    if (*(int *)(param_1 + 0x94) == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x98);
    if (iVar4 == 0) {
      return;
    }
    iVar9 = FUN_016d3bc8();
    uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
    if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
       (uVar10 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
      iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
    iVar14 = *(int *)(iVar9 + 8) + 0x10;
    iVar11 = iVar6 * uVar15 + iVar6 + -4;
    iVar6 = iVar14 + iVar11;
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
    if ((uint)(iVar6 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar9 + 0x14);
    uVar10 = 1 << uVar15;
    *(undefined1 *)(iVar4 + -3) = 0xff;
    *(undefined2 *)(iVar4 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar9 + 0x10);
      uVar7 = *(uint *)(iVar9 + 0xc) | uVar12;
      if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar9,uVar15);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar13 = (undefined4 *)FUN_016d2bc8();
        uVar8 = *puVar13;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar13 = uVar8;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar9 + 0x10) = uVar10 + uVar12;
        return;
      }
      puVar5 = (uint *)(iVar9 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar5);
        uVar7 = *puVar5;
        if (uVar12 != uVar7) goto LAB_016d409c;
        bVar16 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar16);
      *puVar5 = uVar10 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar7) {
        return;
      }
    } while( true );
  default:
    goto switchD_00b408a8_caseD_1;
  case 3:
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_00c81a4c(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),1);
    }
    goto LAB_00b40a04;
  case 4:
    if (*(char *)(param_1 + 0x130) == '\x03') {
      if (*(char *)(param_1 + 0x122) == '\x03') {
        if (*(int *)(param_1 + 0xe8) != 0) {
          FUN_00c81a4c(*(int *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec),1);
          puVar5 = extraout_r1_02;
        }
        if (*(int *)(param_1 + 0xf4) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf8));
          puVar5 = extraout_r1_03;
        }
        *(undefined1 *)(param_1 + 0x121) = 0;
      }
      else if ((*(char *)(param_1 + 0x122) == '\0') && (*(int *)(param_1 + 0x114) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x118));
        puVar5 = extraout_r1_01;
      }
    }
    else if ((*(char *)(param_1 + 0x130) == '\0') && (*(int *)(param_1 + 0xb8) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
      puVar5 = extraout_r1;
    }
    break;
  case 5:
    FUN_00b40c24(param_1 + 0x110);
    *(undefined2 *)(param_1 + 0xa3) = 0;
    if (*(int *)(param_1 + 0xd4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
    }
    if (*(int *)(param_1 + 0xe0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    }
    if ((*(uint *)(param_1 + 0xec) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
    }
    FUN_00ce29b8(param_1 + 0xfc);
    piVar3 = *(int **)(param_1 + 0xa8);
    DataMemoryBarrier(0xb);
    do {
      puVar5 = (uint *)*piVar3;
      bVar16 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar16);
    *piVar3 = (int)puVar5 + -1;
    if (puVar5 == (uint *)0x1) {
      DataMemoryBarrier(0xb);
      FUN_0078ecac(*(undefined4 *)(param_1 + 0xa8));
      puVar5 = extraout_r1_00;
    }
  }
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 != -0x80000000) {
    puVar5 = (uint *)(uint)*(byte *)(param_1 + 0xa1);
  }
  if (iVar4 != -0x80000000 && puVar5 != (uint *)0x0) {
    iVar9 = *(int *)(param_1 + 0x68);
    if (iVar9 != 0) {
      puVar13 = (undefined4 *)(*(int *)(param_1 + 100) + 0x10);
      do {
        if (puVar13[-4] != 0) {
          thunk_FUN_016d3fb4(puVar13[-3]);
        }
        if (puVar13[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar13);
        }
        if ((puVar13[2] & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(puVar13[3]);
        }
        puVar13 = puVar13 + 10;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar4 = *(int *)(param_1 + 0x60);
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
    }
  }
  *(undefined1 *)(param_1 + 0xa1) = 0;
  FUN_00ce2d64(param_1);
LAB_00b40a04:
  bVar16 = *(char *)(param_1 + 0xa2) != '\0';
  iVar4 = 0;
  if (bVar16) {
    iVar4 = *(int *)(param_1 + 0xac);
  }
  if (bVar16 && iVar4 != -0x80000000) {
    iVar4 = *(int *)(param_1 + 0xb0);
    for (iVar9 = *(int *)(param_1 + 0xb4); iVar9 != 0; iVar9 = iVar9 + -1) {
      FUN_00ce24f4(iVar4);
      iVar4 = iVar4 + 0x30;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb0));
    }
  }
  *(undefined1 *)(param_1 + 0xa2) = 0;
switchD_00b408a8_caseD_1:
  return;
}

