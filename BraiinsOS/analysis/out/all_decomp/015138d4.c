// FUN_015138d4 @ 015138d4 size=372 calls_out=3 calls_in=1
// strings: 

void FUN_015138d4(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int unaff_r4;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  uint *puVar22;
  undefined1 auStack_50 [4];
  int *local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  piVar20 = (int *)param_2[4];
  iVar14 = param_2[3];
  piVar6 = piVar20 + param_2[5] * 6;
  piVar19 = piVar20;
  local_4c = piVar20;
  local_48 = iVar14;
  local_44 = piVar6;
  if (param_2[5] != 0) {
    piVar21 = piVar20;
    do {
      local_40 = *piVar21;
      iStack_3c = piVar21[1];
      iStack_38 = piVar21[2];
      local_34 = piVar21[3];
      iStack_30 = piVar21[4];
      iStack_2c = piVar21[5];
      iVar16 = *piVar21;
      piVar9 = (int *)piVar21[1];
      iVar17 = piVar21[2];
      if (iVar17 != 0) {
        iVar11 = 0;
        piVar15 = piVar9;
        do {
          iVar4 = *piVar15;
          if (iVar4 != -0x80000000) {
            piVar7 = piVar15;
            if (iVar4 == -0x7fffffff) {
              iVar4 = piVar15[1];
              if (iVar4 == -0x80000000) goto LAB_01513978;
              piVar7 = piVar9 + iVar11 * 4 + 1;
            }
            if (iVar4 != 0) {
              thunk_FUN_016d3fb4(piVar7[1]);
            }
          }
LAB_01513978:
          iVar11 = iVar11 + 1;
          piVar15 = piVar15 + 4;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      if (iVar16 != 0) {
        thunk_FUN_016d3fb4(piVar9);
      }
      piVar21 = piVar21 + 6;
      *piVar19 = local_34;
      piVar19[1] = iStack_30;
      piVar19[2] = iStack_2c;
      piVar19 = piVar19 + 3;
    } while (piVar21 != piVar6);
    local_4c = piVar6;
  }
  FUN_015181dc(auStack_50);
  FUN_0151c6f4(auStack_50);
  *param_1 = iVar14 << 1;
  param_1[1] = (int)piVar20;
  iVar14 = *param_2;
  param_1[2] = ((uint)((int)piVar19 - (int)piVar20) >> 2) * -0x55555555;
  if (iVar14 == 0) {
    return;
  }
  iVar14 = param_2[1];
  if (iVar14 == 0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar18 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar17 = uVar12 - 0x10, uVar12 == 0)) {
    iVar17 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar12 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar4 = *(int *)(iVar16 + 8) + 0x10;
  iVar11 = iVar17 * uVar18 + iVar17 + -4;
  iVar17 = iVar4 + iVar11;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar17 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar17 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar17 - iVar14) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar17 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar4 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar16 + 0x14);
  uVar12 = 1 << uVar18;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar16 + 0x10);
    uVar8 = *(uint *)(iVar16 + 0xc) | uVar13;
    if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar16,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar22 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar22);
      uVar8 = *puVar22;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar22);
    } while (!bVar3);
    *puVar22 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

