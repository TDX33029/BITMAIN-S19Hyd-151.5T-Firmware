// FUN_009be070 @ 009be070 size=512 calls_out=3 calls_in=0
// strings: 

void FUN_009be070(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r4;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar15 = 0;
  iVar11 = 4;
  iVar6 = 0;
  local_28 = 0;
  local_2c = 4;
  local_30 = 0;
  do {
    uVar14 = *(uint *)(param_1 + iVar6);
    if (uVar14 != 0) {
      if ((uVar14 & 1) == 0) {
        FUN_009ccd38(uVar14);
        thunk_FUN_016d3fb4(uVar14);
      }
      else {
        if (iVar15 == local_30) {
          FUN_009b6bc0(&local_30);
          iVar11 = local_2c;
        }
        *(uint *)(iVar11 + iVar15 * 4) = uVar14 & 0xfffffffe;
        iVar15 = iVar15 + 1;
        local_28 = iVar15;
      }
    }
    iVar6 = iVar6 + 4;
    iVar13 = local_2c;
    iVar9 = local_2c;
  } while (iVar6 != 0x400);
  while (local_2c = iVar9, iVar15 != 0) {
    iVar15 = iVar15 + -1;
    iVar11 = 0;
    iVar6 = *(int *)(iVar13 + iVar15 * 4);
    local_28 = iVar15;
    do {
      uVar14 = *(uint *)(iVar6 + iVar11);
      if (uVar14 != 0) {
        if ((uVar14 & 1) == 0) {
          puVar8 = *(undefined4 **)(*(int *)(uVar14 + 8) + 4);
          thunk_FUN_016d3fb4();
          while (puVar8 != (undefined4 *)0x0) {
            while( true ) {
              piVar12 = (int *)*puVar8;
              thunk_FUN_016d3fb4(puVar8);
              uVar4 = piVar12[1];
              if ((uVar4 & 1) != 0) break;
              iVar9 = *piVar12;
              if ((*(uint *)(iVar9 + 4) & 0x7fffffff) == 0) {
                if ((*(uint *)(iVar9 + 0x10) & 0x7fffffff) != 0) goto LAB_009be208;
LAB_009be1cc:
                uVar4 = *(uint *)(iVar9 + 0x1c);
              }
              else {
                thunk_FUN_016d3fb4(*(undefined4 *)(iVar9 + 8));
                if ((*(uint *)(iVar9 + 0x10) & 0x7fffffff) == 0) goto LAB_009be1cc;
LAB_009be208:
                thunk_FUN_016d3fb4(*(undefined4 *)(iVar9 + 0x14));
                uVar4 = *(uint *)(iVar9 + 0x1c);
              }
              if ((uVar4 & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(iVar9 + 0x20));
              }
              thunk_FUN_016d3fb4(iVar9);
              puVar8 = (undefined4 *)piVar12[1];
              thunk_FUN_016d3fb4(piVar12);
              if (puVar8 == (undefined4 *)0x0) goto LAB_009be170;
            }
            thunk_FUN_016d3fb4(piVar12);
            puVar8 = (undefined4 *)(uVar4 & 0xfffffffe);
          }
LAB_009be170:
          thunk_FUN_016d3fb4(uVar14);
        }
        else {
          if (iVar15 == local_30) {
            FUN_009b6bc0(&local_30);
            iVar13 = local_2c;
          }
          *(uint *)(iVar13 + iVar15 * 4) = uVar14 & 0xfffffffe;
          iVar15 = iVar15 + 1;
          local_28 = iVar15;
        }
      }
      iVar11 = iVar11 + 4;
    } while (iVar11 != 0x400);
    thunk_FUN_016d3fb4(iVar6);
    iVar9 = local_2c;
  }
  if (local_30 == 0) {
    return;
  }
  if (iVar9 == 0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar4 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar11 = uVar4 - 0x10, uVar4 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar4 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar13 = *(int *)(iVar15 + 8) + 0x10;
  iVar6 = iVar11 * uVar14 + iVar11 + -4;
  iVar11 = iVar13 + iVar6;
  if (4 < uVar4) {
    if (uVar4 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(iVar11 + -4);
    if (uVar4 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar11 - iVar9) < uVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar15 + 0x14);
  uVar4 = 1 << uVar14;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar15 + 0x10);
    uVar5 = *(uint *)(iVar15 + 0xc) | uVar10;
    if ((uVar4 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar15,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar8;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar8 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar15 + 0x10) = uVar4 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar5 = *puVar16;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar4 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

