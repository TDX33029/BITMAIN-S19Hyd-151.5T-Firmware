// FUN_00980ba0 @ 00980ba0 size=740 calls_out=6 calls_in=1
// strings: 

void FUN_00980ba0(int param_1)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  uint *puVar4;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint *extraout_r1_03;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar4 = &switchD_00980bbc::switchdataD_00980bc0;
  switch(*(undefined1 *)(param_1 + 0xa5)) {
  case 0:
    if (*(int *)(param_1 + 0x94) == -0x80000000) {
      return;
    }
    FUN_0094abc0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    if (*(int *)(param_1 + 0x94) == 0) {
      return;
    }
    iVar12 = *(int *)(param_1 + 0x98);
    if (iVar12 == 0) {
      return;
    }
    iVar8 = FUN_016d3bc8();
    uVar15 = *(byte *)(iVar12 + -3) & 0x1f;
    if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
       (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
      iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar9 = (uint)(*(byte *)(iVar12 + -3) >> 5);
    iVar13 = *(int *)(iVar8 + 8) + 0x10;
    iVar10 = iVar5 * uVar15 + iVar5 + -4;
    iVar5 = iVar13 + iVar10;
    if (4 < uVar9) {
      if (uVar9 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar9 = *(uint *)(iVar5 + -4);
      if (uVar9 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar5 - iVar12) < uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar8 + 0x14);
    uVar9 = 1 << uVar15;
    *(undefined1 *)(iVar12 + -3) = 0xff;
    *(undefined2 *)(iVar12 + -2) = 0;
    do {
      uVar11 = *(uint *)(iVar8 + 0x10);
      uVar6 = *(uint *)(iVar8 + 0xc) | uVar11;
      if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar8,uVar15);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar14 = (undefined4 *)FUN_016d2bc8();
        uVar7 = *puVar14;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar14 = uVar7;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar8 + 0x10) = uVar9 + uVar11;
        return;
      }
      puVar4 = (uint *)(iVar8 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar4);
        uVar6 = *puVar4;
        if (uVar11 != uVar6) goto LAB_016d409c;
        bVar16 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar16);
      *puVar4 = uVar9 + uVar11;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar11 == uVar6) {
        return;
      }
    } while( true );
  default:
    goto switchD_00980bbc_caseD_1;
  case 3:
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_0099a108(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),1);
    }
    goto LAB_00980d78;
  case 4:
    if (*(char *)(param_1 + 0x130) == '\x03') {
      if (*(char *)(param_1 + 0x122) == '\x03') {
        if (*(int *)(param_1 + 0xe8) != 0) {
          FUN_0099a108(*(int *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec),1);
          puVar4 = extraout_r1_02;
        }
        if (*(int *)(param_1 + 0xf4) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf8));
          puVar4 = extraout_r1_03;
        }
        *(undefined1 *)(param_1 + 0x121) = 0;
      }
      else if ((*(char *)(param_1 + 0x122) == '\0') && (*(int *)(param_1 + 0x114) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x118));
        puVar4 = extraout_r1_01;
      }
    }
    else if ((*(char *)(param_1 + 0x130) == '\0') && (*(int *)(param_1 + 0xb8) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
      puVar4 = extraout_r1;
    }
    break;
  case 5:
    FUN_0095e70c(param_1 + 0x110);
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
    puVar14 = (undefined4 *)(*(int *)(param_1 + 0x100) + 0x10);
    for (iVar12 = ((uint)(*(int *)(param_1 + 0x108) - *(int *)(param_1 + 0x100)) >> 3) * -0x33333333
        ; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (puVar14[-4] != 0) {
        thunk_FUN_016d3fb4(puVar14[-3]);
      }
      if (puVar14[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar14);
      }
      if ((puVar14[2] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar14[3]);
      }
      puVar14 = puVar14 + 10;
    }
    if (*(int *)(param_1 + 0x104) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xfc));
    }
    piVar3 = *(int **)(param_1 + 0xa8);
    DataMemoryBarrier(0xb);
    do {
      puVar4 = (uint *)*piVar3;
      bVar16 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar16);
    *piVar3 = (int)puVar4 + -1;
    if (puVar4 == (uint *)0x1) {
      DataMemoryBarrier(0xb);
      FUN_0078ecac(*(undefined4 *)(param_1 + 0xa8));
      puVar4 = extraout_r1_00;
    }
  }
  iVar12 = *(int *)(param_1 + 0x60);
  if (iVar12 != -0x80000000) {
    puVar4 = (uint *)(uint)*(byte *)(param_1 + 0xa1);
  }
  if (iVar12 != -0x80000000 && puVar4 != (uint *)0x0) {
    iVar8 = *(int *)(param_1 + 0x68);
    if (iVar8 != 0) {
      puVar14 = (undefined4 *)(*(int *)(param_1 + 100) + 0x10);
      do {
        if (puVar14[-4] != 0) {
          thunk_FUN_016d3fb4(puVar14[-3]);
        }
        if (puVar14[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar14);
        }
        if ((puVar14[2] & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(puVar14[3]);
        }
        puVar14 = puVar14 + 10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar12 = *(int *)(param_1 + 0x60);
    }
    if (iVar12 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
    }
  }
  *(undefined1 *)(param_1 + 0xa1) = 0;
  FUN_009907e0(param_1);
LAB_00980d78:
  bVar16 = *(char *)(param_1 + 0xa2) != '\0';
  iVar12 = 0;
  if (bVar16) {
    iVar12 = *(int *)(param_1 + 0xac);
  }
  if ((bVar16 && iVar12 != -0x80000000) &&
     (FUN_0094abc0(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4)),
     *(int *)(param_1 + 0xac) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb0));
  }
  *(undefined1 *)(param_1 + 0xa2) = 0;
switchD_00980bbc_caseD_1:
  return;
}

