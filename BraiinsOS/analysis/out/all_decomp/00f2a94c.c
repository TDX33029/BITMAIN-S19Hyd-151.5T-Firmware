// FUN_00f2a94c @ 00f2a94c size=780 calls_out=2 calls_in=0
// strings: 

void FUN_00f2a94c(int *param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[0x78] != 0) {
    thunk_FUN_016d3fb4(param_1[0x79]);
  }
  if (param_1[0x7b] != 0) {
    thunk_FUN_016d3fb4(param_1[0x7c]);
  }
  if (param_1[0x1a] == -0x80000000 || param_1[0x1a] == 0) {
    if (param_1[0x1d] == -0x80000000 || param_1[0x1d] == 0) goto LAB_00f25150;
LAB_00f25270:
    thunk_FUN_016d3fb4(param_1[0x1e]);
    if (param_1[0x20] != -0x80000000 && param_1[0x20] != 0) goto LAB_00f25288;
LAB_00f25160:
    if (param_1[0x23] == -0x80000000 || param_1[0x23] == 0) goto LAB_00f25170;
LAB_00f252a0:
    thunk_FUN_016d3fb4(param_1[0x24]);
    if (param_1[0x26] != -0x80000000 && param_1[0x26] != 0) goto LAB_00f252b8;
LAB_00f25180:
    if (param_1[0x29] == -0x80000000 || param_1[0x29] == 0) goto LAB_00f25190;
LAB_00f252d0:
    thunk_FUN_016d3fb4(param_1[0x2a]);
    if (param_1[0x2c] != -0x80000000 && param_1[0x2c] != 0) goto LAB_00f252e8;
LAB_00f251a0:
    if (param_1[0x2f] == -0x80000000 || param_1[0x2f] == 0) goto LAB_00f251b0;
LAB_00f25300:
    thunk_FUN_016d3fb4(param_1[0x30]);
    if (param_1[0x32] != -0x80000000 && param_1[0x32] != 0) goto LAB_00f25318;
LAB_00f251c0:
    if (param_1[0x35] == -0x80000000 || param_1[0x35] == 0) goto LAB_00f251d0;
LAB_00f25330:
    thunk_FUN_016d3fb4(param_1[0x36]);
    if (param_1[0x38] != -0x80000000 && param_1[0x38] != 0) goto LAB_00f25348;
LAB_00f251e0:
    if (param_1[0x3b] == -0x80000000 || param_1[0x3b] == 0) goto LAB_00f251f0;
LAB_00f25360:
    thunk_FUN_016d3fb4(param_1[0x3c]);
    if (param_1[0x3e] != -0x80000000 && param_1[0x3e] != 0) goto LAB_00f25378;
LAB_00f25200:
    if (param_1[0x41] == -0x80000000 || param_1[0x41] == 0) goto LAB_00f25210;
LAB_00f25390:
    thunk_FUN_016d3fb4(param_1[0x42]);
    if (param_1[0x44] != -0x80000000 && param_1[0x44] != 0) goto LAB_00f253a8;
LAB_00f25220:
    if (param_1[0x47] == -0x80000000 || param_1[0x47] == 0) {
LAB_00f25230:
      cVar1 = (char)param_1[0x14];
      goto joined_r0x00f253d4;
    }
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x1b]);
    if (param_1[0x1d] != -0x80000000 && param_1[0x1d] != 0) goto LAB_00f25270;
LAB_00f25150:
    if (param_1[0x20] == -0x80000000 || param_1[0x20] == 0) goto LAB_00f25160;
LAB_00f25288:
    thunk_FUN_016d3fb4(param_1[0x21]);
    if (param_1[0x23] != -0x80000000 && param_1[0x23] != 0) goto LAB_00f252a0;
LAB_00f25170:
    if (param_1[0x26] == -0x80000000 || param_1[0x26] == 0) goto LAB_00f25180;
LAB_00f252b8:
    thunk_FUN_016d3fb4(param_1[0x27]);
    if (param_1[0x29] != -0x80000000 && param_1[0x29] != 0) goto LAB_00f252d0;
LAB_00f25190:
    if (param_1[0x2c] == -0x80000000 || param_1[0x2c] == 0) goto LAB_00f251a0;
LAB_00f252e8:
    thunk_FUN_016d3fb4(param_1[0x2d]);
    if (param_1[0x2f] != -0x80000000 && param_1[0x2f] != 0) goto LAB_00f25300;
LAB_00f251b0:
    if (param_1[0x32] == -0x80000000 || param_1[0x32] == 0) goto LAB_00f251c0;
LAB_00f25318:
    thunk_FUN_016d3fb4(param_1[0x33]);
    if (param_1[0x35] != -0x80000000 && param_1[0x35] != 0) goto LAB_00f25330;
LAB_00f251d0:
    if (param_1[0x38] == -0x80000000 || param_1[0x38] == 0) goto LAB_00f251e0;
LAB_00f25348:
    thunk_FUN_016d3fb4(param_1[0x39]);
    if (param_1[0x3b] != -0x80000000 && param_1[0x3b] != 0) goto LAB_00f25360;
LAB_00f251f0:
    if (param_1[0x3e] == -0x80000000 || param_1[0x3e] == 0) goto LAB_00f25200;
LAB_00f25378:
    thunk_FUN_016d3fb4(param_1[0x3f]);
    if (param_1[0x41] != -0x80000000 && param_1[0x41] != 0) goto LAB_00f25390;
LAB_00f25210:
    if (param_1[0x44] == -0x80000000 || param_1[0x44] == 0) goto LAB_00f25220;
LAB_00f253a8:
    thunk_FUN_016d3fb4(param_1[0x45]);
    if (param_1[0x47] == -0x80000000 || param_1[0x47] == 0) goto LAB_00f25230;
  }
  thunk_FUN_016d3fb4(param_1[0x48]);
  cVar1 = (char)param_1[0x14];
joined_r0x00f253d4:
  if (cVar1 != '\x06') {
    FUN_00f202dc();
  }
  if (param_1[0x4a] == -0x80000000 || param_1[0x4a] == 0) {
    return;
  }
  iVar5 = param_1[0x4b];
  if (iVar5 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar14 = *(int *)(iVar6 + 8) + 0x10;
  iVar12 = iVar8 * uVar15 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar8 - iVar5) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar9 = *puVar16;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar4);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

