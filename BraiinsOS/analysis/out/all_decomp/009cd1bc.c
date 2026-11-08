// FUN_009cd1bc @ 009cd1bc size=472 calls_out=8 calls_in=2
// strings: 

void FUN_009cd1bc(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined8 uVar17;
  int local_28;
  int iStack_24;
  int local_20;
  
  piVar12 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  if (piVar12[1] == 1) {
    if (*(char *)(param_1 + 1) != '\0') {
      uVar17 = thunk_FUN_016de0ee(*(char *)(param_1 + 1),0x1b0);
      iVar4 = (int)uVar17 + (int)((ulonglong)uVar17 >> 0x20);
      if ((*(char *)(iVar4 + 8) != '\x01') && (iVar4 = FUN_00a30258(iVar4,0), iVar4 == 0))
      goto LAB_009cd2fc;
      uVar6 = *(uint *)(iVar4 + 4);
      piVar12 = *(int **)(*piVar12 + (uVar6 & 0xff) * 4);
      DataMemoryBarrier(0xb);
      if (piVar12 != (int *)0x0) {
        uVar10 = uVar6;
        do {
          if (((uint)piVar12 & 1) == 0) {
            if (piVar12[3] == uVar6) {
              iVar15 = *piVar12;
              iVar4 = piVar12[2];
              iVar13 = piVar12[1];
              *piVar12 = 0;
              piVar12[1] = 4;
              piVar12[2] = 0;
              FUN_009a1ddc(iVar13,iVar4);
              if (iVar15 != 0) {
                thunk_FUN_016d3fb4(iVar13);
              }
            }
            break;
          }
          uVar8 = uVar10 & 0xffff;
          uVar10 = uVar10 >> 8;
          piVar12 = *(int **)(((uint)piVar12 & 0xfffffffe) + (uVar8 >> 8) * 4);
          DataMemoryBarrier(0xb);
        } while (piVar12 != (int *)0x0);
      }
    }
    if (param_2 != 1 && param_2 != 2) {
      FUN_009ccd38(param_3);
    }
  }
  else {
    uVar17 = thunk_FUN_016de0ee(param_1,0x1b0);
    iVar4 = (int)uVar17 + (int)((ulonglong)uVar17 >> 0x20);
    if ((*(char *)(iVar4 + 8) != '\x01') && (iVar4 = FUN_00a30258(iVar4,0), iVar4 == 0)) {
LAB_009cd2fc:
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    piVar12 = (int *)FUN_009c032c(piVar12,*(undefined4 *)(iVar4 + 4));
    local_28 = *piVar12;
    iStack_24 = piVar12[1];
    iVar4 = piVar12[2];
    *piVar12 = 0;
    piVar12[1] = 4;
    piVar12[2] = 0;
    if (iVar4 == local_28) {
      local_20 = iVar4;
      FUN_009b6a00(&local_28);
    }
    local_20 = iVar4 + 1;
    piVar7 = (int *)(iStack_24 + iVar4 * 8);
    *piVar7 = param_2;
    piVar7[1] = param_3;
    iVar13 = *piVar12;
    param_3 = piVar12[1];
    iVar4 = piVar12[2];
    *piVar12 = local_28;
    piVar12[1] = iStack_24;
    piVar12[2] = local_20;
    FUN_009a1ddc(param_3,iVar4);
    if (iVar13 == 0) {
      return;
    }
  }
  if (param_3 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar6 = *(byte *)(param_3 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar13 = uVar10 - 0x10, uVar10 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(param_3 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar15 = iVar13 * uVar6 + iVar13 + -4;
  iVar13 = iVar14 + iVar15;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar13 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar13 - param_3) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar6;
  *(undefined1 *)(param_3 + -3) = 0xff;
  *(undefined2 *)(param_3 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar6);
      iVar4 = iStack_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (iVar4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(local_28,iVar4);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

