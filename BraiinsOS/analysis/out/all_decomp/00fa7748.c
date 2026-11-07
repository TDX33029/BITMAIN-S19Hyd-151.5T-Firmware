// FUN_00fa7748 @ 00fa7748 size=740 calls_out=5 calls_in=1
// strings: 

void FUN_00fa7748(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int unaff_r4;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  uint *puVar24;
  int local_74;
  int local_60;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  puVar22 = *(undefined4 **)(param_2 + 4);
  iVar10 = *(int *)(param_2 + 8);
  uVar14 = 0;
  local_48 = 0;
  local_4c = 4;
  local_50 = 0;
  for (iVar16 = iVar10 << 3; iVar16 != 0; iVar16 = iVar16 + -8) {
    if ((puVar22[uVar14 * 2 + 1] == param_5) &&
       (iVar4 = thunk_FUN_016dd50a(puVar22[uVar14 * 2],param_4,param_5), iVar4 == 0)) {
      uVar11 = *(uint *)(param_2 + 0x14);
      if (uVar11 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar14,uVar11,&DAT_01880824);
      }
      iVar4 = *(int *)(param_2 + 0x10);
      piVar5 = (int *)(iVar4 + uVar14 * 0xc);
      goto LAB_00fa7828;
    }
    uVar14 = uVar14 + 1;
  }
  FUN_00fa4788(&local_30,param_3,param_4,param_5);
  iVar4 = *(int *)(param_2 + 0x10);
  local_40 = local_30;
  local_3c = iStack_2c;
  local_38 = uStack_28;
  piVar5 = &local_40;
  uVar11 = *(uint *)(param_2 + 0x14);
LAB_00fa7828:
  iVar12 = piVar5[2];
  iVar6 = piVar5[1];
  local_60 = 0;
  local_74 = 4;
  iVar17 = iVar4;
  puVar9 = puVar22;
LAB_00fa788c:
  puVar23 = puVar9;
  iVar21 = iVar17;
  iVar17 = local_3c;
  if (puVar23 == puVar22 + iVar10 * 2) {
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = local_48;
    if ((iVar16 != 0) || (local_40 == 0)) {
      return;
    }
    if (local_3c == 0) {
      return;
    }
    iVar16 = FUN_016d3bc8();
    uVar14 = *(byte *)(iVar17 + -3) & 0x1f;
    if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar10 = uVar11 - 0x10, uVar11 == 0)) {
      iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar11 = (uint)(*(byte *)(iVar17 + -3) >> 5);
    iVar6 = *(int *)(iVar16 + 8) + 0x10;
    iVar4 = iVar10 * uVar14 + iVar10 + -4;
    iVar10 = iVar6 + iVar4;
    if (4 < uVar11) {
      if (uVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar11 = *(uint *)(iVar10 + -4);
      if (uVar11 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar10 - iVar17) < uVar11) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 - uVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + iVar4) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar16 + 0x14);
    uVar11 = 1 << uVar14;
    *(undefined1 *)(iVar17 + -3) = 0xff;
    *(undefined2 *)(iVar17 + -2) = 0;
    do {
      uVar19 = *(uint *)(iVar16 + 0x10);
      uVar13 = *(uint *)(iVar16 + 0xc) | uVar19;
      if ((uVar11 & uVar13) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar19 == 0) || (uVar13 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar16,uVar14);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar22 = (undefined4 *)FUN_016d2bc8();
        uVar15 = *puVar22;
        FUN_016d6ac4(uStack_28,unaff_r4);
        *puVar22 = uVar15;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar16 + 0x10) = uVar11 + uVar19;
        return;
      }
      puVar24 = (uint *)(iVar16 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar24);
        uVar13 = *puVar24;
        if (uVar19 != uVar13) goto LAB_016d409c;
        bVar3 = (bool)hasExclusiveAccess(puVar24);
      } while (!bVar3);
      *puVar24 = uVar11 + uVar19;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar19 == uVar13) {
        return;
      }
    } while( true );
  }
  if (iVar21 == iVar4 + uVar11 * 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018807b4);
  }
  iVar20 = puVar23[1];
  if (param_5 == iVar20) goto code_r0x00fa78b8;
  goto LAB_00fa78d8;
code_r0x00fa78b8:
  iVar8 = thunk_FUN_016dd50a(param_4,*puVar23,param_5);
  iVar17 = iVar21 + 0xc;
  puVar9 = puVar23 + 2;
  if (iVar8 != 0) {
LAB_00fa78d8:
    piVar5 = (int *)(iVar6 + 4);
    for (iVar17 = iVar12 << 3; iVar17 != 0; iVar17 = iVar17 + -8) {
      if (*piVar5 == iVar20) {
        uVar15 = *puVar23;
        iVar8 = thunk_FUN_016dd50a(piVar5[-1],uVar15,iVar20);
        if (iVar8 == 0) {
          if (local_60 == local_50) {
            FUN_00f98f0c(&local_50);
            local_74 = local_4c;
          }
          puVar9 = (undefined4 *)(local_74 + local_60 * 8);
          *puVar9 = uVar15;
          local_60 = local_60 + 1;
          puVar9[1] = iVar20;
          local_48 = local_60;
          break;
        }
      }
      piVar5 = piVar5 + 2;
    }
    piVar5 = (int *)(*(int *)(iVar21 + 4) + 4);
    iVar20 = *(int *)(iVar21 + 8) << 3;
    while( true ) {
      iVar17 = iVar21 + 0xc;
      puVar9 = puVar23 + 2;
      if (iVar20 == 0) break;
      if ((*piVar5 == param_5) &&
         (iVar8 = thunk_FUN_016dd50a(piVar5[-1],param_4,param_5), iVar8 == 0)) {
        uVar15 = *puVar23;
        uVar18 = puVar23[1];
        if (local_60 == local_50) {
          FUN_00f98f0c(&local_50);
        }
        local_74 = local_4c;
        puVar7 = (undefined4 *)(local_4c + local_60 * 8);
        *puVar7 = uVar15;
        local_60 = local_60 + 1;
        puVar7[1] = uVar18;
        local_48 = local_60;
        break;
      }
      piVar5 = piVar5 + 2;
      iVar20 = iVar20 + -8;
    }
  }
  goto LAB_00fa788c;
}

