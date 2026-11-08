// FUN_0154a8c4 @ 0154a8c4 size=456 calls_out=3 calls_in=1
// strings: 

void FUN_0154a8c4(undefined4 *param_1,undefined4 param_2,code *param_3,int param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined4 param_9,
                 undefined4 param_10)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int unaff_r4;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined4 local_28;
  
  if (param_4 == 0) {
    param_4 = 4;
    param_5 = 0;
  }
  uVar3 = 0;
  uVar9 = param_5 * 8;
  bVar20 = 0x1ffffffe < param_5;
  bVar19 = param_5 == 0x1fffffff;
  if (param_5 < 0x20000000) {
    bVar20 = 0x7ffffffb < uVar9;
    bVar19 = uVar9 == 0x7ffffffc;
  }
  if (bVar20 && !bVar19) {
LAB_0154a8f8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,uVar9);
  }
  uVar17 = 0;
  local_28 = param_7;
  if (uVar9 == 0) {
    iVar4 = 4;
    uVar12 = 0;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(uVar9);
    uVar12 = param_5;
    param_7 = local_28;
    if (iVar4 == 0) {
      uVar3 = 4;
      goto LAB_0154a8f8;
    }
  }
  if (param_5 != 0) {
    puVar8 = (undefined4 *)(param_4 + 4);
    puVar5 = (undefined4 *)(iVar4 + 4);
    uVar9 = param_5;
    do {
      uVar3 = *puVar8;
      uVar10 = puVar8[1];
      puVar8 = puVar8 + 3;
      puVar5[-1] = uVar3;
      *puVar5 = uVar10;
      puVar5 = puVar5 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    uVar17 = param_5;
  }
  local_28 = param_7;
  piVar6 = (int *)(*param_3)(param_2,iVar4,uVar17,param_6,param_7);
  if (piVar6 != (int *)0x0) {
    uVar21 = (**(code **)(piVar6[9] + 0x10))
                       (piVar6[8] + (*(int *)(piVar6[9] + 8) - 1U & 0xfffffff8) + 8,param_6,param_7)
    ;
    if ((int)uVar21 != 0) {
      uVar3 = *param_8;
      uVar10 = param_8[1];
      uVar16 = param_8[2];
      param_1[4] = (int)uVar21;
      param_1[6] = param_9;
      *param_1 = uVar3;
      param_1[1] = uVar10;
      param_1[2] = uVar16;
      param_1[3] = piVar6;
      param_1[5] = (int)((ulonglong)uVar21 >> 0x20);
      param_1[7] = param_10;
      goto joined_r0x0154aa2c;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar6;
      bVar19 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar19);
    *piVar6 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015615dc(piVar6);
    }
  }
  uVar3 = *param_8;
  uVar10 = param_8[1];
  uVar16 = param_8[2];
  *param_1 = 0x80000001;
  param_1[1] = uVar3;
  param_1[2] = uVar10;
  param_1[3] = uVar16;
joined_r0x0154aa2c:
  if (uVar12 == 0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar9 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar17 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar11 = uVar17 - 0x10, uVar17 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar17 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar15 = *(int *)(iVar7 + 8) + 0x10;
  iVar13 = iVar11 * uVar9 + iVar11 + -4;
  iVar11 = iVar15 + iVar13;
  if (4 < uVar17) {
    if (uVar17 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar17 = *(uint *)(iVar11 + -4);
    if (uVar17 < 5) {
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
  if ((uint)(iVar11 - iVar4) < uVar17) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar17) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar7 + 0x14);
  uVar17 = 1 << uVar9;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar7 + 0x10);
    uVar12 = *(uint *)(iVar7 + 0xc) | uVar14;
    if ((uVar17 & uVar12) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar14 == 0) || (uVar12 + uVar17 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar7,uVar9);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar3 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar3;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar17 + uVar14;
      return;
    }
    puVar18 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar12 = *puVar18;
      if (uVar14 != uVar12) goto LAB_016d409c;
      bVar19 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar19);
    *puVar18 = uVar17 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar12) {
      return;
    }
  } while( true );
}

