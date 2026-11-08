// FUN_00fc2afc @ 00fc2afc size=492 calls_out=4 calls_in=1
// strings: 

void FUN_00fc2afc(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_r4;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int *piVar19;
  bool bVar20;
  uint local_230 [128];
  int local_30;
  int *local_2c;
  int local_28;
  
  piVar4 = (int *)&DAT_00000004;
  local_28 = 0;
  local_2c = (int *)&DAT_00000004;
  local_30 = 0;
  if (param_3 == 0) {
    FUN_016dd606(local_230,0,0x200);
    FUN_016dd1aa(param_1 + 1,local_230,0x200);
    param_1[0x81] = 0;
    *param_1 = 0;
    return;
  }
  param_3 = param_3 * 0xc;
  do {
    iVar15 = local_28;
    if (local_28 == local_30) {
      FUN_00fc4878(&local_30);
      piVar4 = local_2c;
    }
    piVar3 = local_2c;
    iVar11 = local_30;
    piVar4[iVar15] = param_2;
    iVar15 = iVar15 + 1;
    param_3 = param_3 + -0xc;
    param_2 = param_2 + 0xc;
    local_28 = iVar15;
  } while (param_3 != 0);
  FUN_016dd606(local_230,0,0x200);
  iVar14 = 0;
  piVar4 = piVar3;
  do {
    piVar19 = piVar4 + 1;
    uVar10 = 0;
    iVar8 = *(int *)(*piVar4 + 8);
    if (iVar8 != 0) {
      iVar8 = iVar8 * 4;
      if (0xfffffffa < iVar8 - 9U) {
        iVar5 = 0;
        uVar9 = 0;
        puVar18 = *(uint **)(*piVar4 + 4);
        do {
          uVar16 = *puVar18;
          uVar17 = uVar9 & 0xff;
          uVar7 = (uVar9 & 0xff) - 0x20;
          uVar9 = uVar9 + 0x20;
          uVar12 = uVar16 >> (0x20 - uVar17 & 0xff);
          if (-1 < (int)uVar7) {
            uVar12 = uVar16 << (uVar7 & 0xff);
          }
          uVar16 = uVar16 << uVar17;
          if (-1 < (int)uVar7) {
            uVar16 = 0;
          }
          bVar20 = CARRY4(uVar16,uVar10);
          uVar10 = uVar16 + uVar10;
          iVar5 = uVar12 + iVar5 + (uint)bVar20;
          iVar8 = iVar8 + -4;
          puVar18 = puVar18 + 1;
        } while (iVar8 != 0);
        if (iVar5 == 0) goto LAB_00fc2c18;
      }
      param_1[1] = 1;
      param_1[2] = iVar14;
      *param_1 = 1;
      goto joined_r0x00fc2cc0;
    }
LAB_00fc2c18:
    if (iVar14 == 0x80) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0x80,0x80,&DAT_01881494);
    }
    local_230[iVar14] = uVar10;
    iVar14 = iVar14 + 1;
    piVar4 = piVar19;
  } while (piVar19 != piVar3 + iVar15);
  FUN_016dd1aa(param_1 + 1,local_230,0x200);
  param_1[0x81] = iVar15;
  *param_1 = 0;
joined_r0x00fc2cc0:
  if (iVar11 == 0) {
    return;
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar10 = *(byte *)((int)piVar3 + -3) & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar11 = uVar9 - 0x10, uVar9 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar9 = (uint)(*(byte *)((int)piVar3 + -3) >> 5);
  iVar8 = *(int *)(iVar15 + 8) + 0x10;
  iVar14 = iVar11 * uVar10 + iVar11 + -4;
  iVar11 = iVar8 + iVar14;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar11 + -4);
    if (uVar9 < 5) {
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
  if ((uint)(iVar11 - (int)piVar3) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar15 + 0x14);
  uVar9 = 1 << uVar10;
  *(undefined1 *)((int)piVar3 + -3) = 0xff;
  *(undefined2 *)((int)piVar3 + -2) = 0;
  do {
    uVar16 = *(uint *)(iVar15 + 0x10);
    uVar12 = *(uint *)(iVar15 + 0xc) | uVar16;
    if ((uVar9 & uVar12) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar16 == 0) || (uVar12 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar15,uVar10);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar15 + 0x10) = uVar9 + uVar16;
      return;
    }
    puVar18 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar12 = *puVar18;
      if (uVar16 != uVar12) goto LAB_016d409c;
      bVar20 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar20);
    *puVar18 = uVar9 + uVar16;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar16 == uVar12) {
      return;
    }
  } while( true );
}

