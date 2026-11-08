// FUN_00f7055c @ 00f7055c size=416 calls_out=5 calls_in=2
// strings: 

void FUN_00f7055c(int *param_1,uint param_2,uint *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int unaff_r4;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_28;
  
  uVar7 = param_1[2];
  if (uVar7 < param_2) {
    uVar15 = param_2 - uVar7;
    local_28 = param_3[1];
    uVar17 = *param_3;
    uVar12 = param_3[2];
    uVar16 = uVar7;
    if (*param_1 - uVar7 < uVar15) {
      FUN_00f991dc(param_1,uVar7,uVar15,4,0xc);
      uVar16 = param_1[2];
    }
    uVar4 = local_28;
    puVar14 = (uint *)(param_1[1] + uVar16 * 0xc);
    if (1 < uVar15) {
      iVar8 = ~uVar7 + param_2;
      uVar16 = (uVar15 + uVar16) - 1;
      piVar5 = param_1;
      do {
        uVar7 = 0x80000000;
        if (uVar17 != 0x80000000) {
          if (uVar12 == 0) {
            piVar5 = (int *)&DAT_00000001;
          }
          else {
            piVar5 = (int *)thunk_FUN_016d4a50(uVar12);
            if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,uVar12);
            }
          }
          FUN_016dd1aa(piVar5,uVar4,uVar12);
          uVar7 = uVar12;
        }
        *puVar14 = uVar7;
        puVar14[1] = (uint)piVar5;
        iVar8 = iVar8 + -1;
        puVar14[2] = uVar12;
        puVar14 = puVar14 + 3;
      } while (iVar8 != 0);
    }
    puVar14[1] = uVar4;
    *puVar14 = uVar17;
    puVar14[2] = uVar12;
    param_1[2] = uVar16 + 1;
    return;
  }
  iVar8 = uVar7 - param_2;
  param_1[2] = param_2;
  if (iVar8 != 0) {
    puVar10 = (undefined4 *)(param_1[1] + param_2 * 0xc + 4);
    do {
      if ((puVar10[-1] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar10);
      }
      puVar10 = puVar10 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((*param_3 & 0x7fffffff) == 0) {
    return;
  }
  uVar7 = param_3[1];
  if (uVar7 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar16 = *(byte *)(uVar7 - 3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar6 = uVar12 - 0x10, uVar12 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(uVar7 - 3) >> 5);
  iVar13 = *(int *)(iVar8 + 8) + 0x10;
  iVar11 = iVar6 * uVar16 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar6 + -4);
    if (uVar12 < 5) {
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
  if (iVar6 - uVar7 < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar8 + 0x14);
  uVar12 = 1 << uVar16;
  *(undefined1 *)(uVar7 - 3) = 0xff;
  *(undefined2 *)(uVar7 - 2) = 0;
  do {
    uVar15 = *(uint *)(iVar8 + 0x10);
    uVar7 = *(uint *)(iVar8 + 0xc) | uVar15;
    if ((uVar12 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar15 == 0) || (uVar7 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar8,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar10;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar10 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar12 + uVar15;
      return;
    }
    puVar14 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar7 = *puVar14;
      if (uVar15 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar12 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar7) {
      return;
    }
  } while( true );
}

