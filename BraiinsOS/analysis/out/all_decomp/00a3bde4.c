// FUN_00a3bde4 @ 00a3bde4 size=364 calls_out=3 calls_in=0
// strings: 

void FUN_00a3bde4(int *param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int local_d0 [28];
  undefined1 local_60;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  undefined1 *local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  piVar9 = *(int **)(param_2 + 0x10);
  iVar15 = *(int *)(param_2 + 0xc);
  iVar7 = *(int *)(param_2 + 0x14);
  iVar11 = iVar7 * 7;
  if (iVar7 == 0) {
    piVar4 = (int *)0x0;
    piVar5 = piVar9;
LAB_00a3be94:
    local_50 = piVar4;
    local_48 = (undefined1 *)0x3b9aca01;
  }
  else {
    piVar5 = piVar9 + 0x1c;
    iVar14 = *piVar9;
    piVar4 = piVar5;
    if (iVar14 == 4) goto LAB_00a3be94;
    FUN_016dd1aa((uint)local_d0 | 4,piVar9 + 1,0x6c);
    local_60 = 0;
    local_d0[0] = iVar14;
    FUN_00a34590(&local_58,local_d0);
    if (local_58 != 2) {
      param_1[5] = local_44;
      param_1[6] = iStack_40;
      param_1[7] = iStack_3c;
      param_1[8] = local_38;
      param_1[9] = iStack_34;
      param_1[10] = iStack_30;
      param_1[0xb] = iStack_2c;
      param_1[2] = (int)local_50;
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[3] = local_4c;
      param_1[4] = (int)local_48;
      goto LAB_00a3beb0;
    }
    iVar11 = local_4c;
  }
  *param_1 = 2;
  if (local_48 == (undefined1 *)0x3b9aca01) {
    local_48 = &DAT_3b9aca00;
  }
  param_1[2] = (int)local_50;
  param_1[3] = iVar11;
  param_1[4] = (int)local_48;
LAB_00a3beb0:
  iVar11 = ((uint)((int)piVar9 + (iVar7 * 0x70 - (int)piVar5)) >> 4) * -0x49249249 + 1;
  while (iVar11 = iVar11 + -1, iVar11 != 0) {
    FUN_00a85eac(piVar5);
    piVar5 = piVar5 + 0x1c;
  }
  if (iVar15 == 0) {
    return;
  }
  if (piVar9 == (int *)0x0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)piVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar7 = uVar12 - 0x10, uVar12 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)((int)piVar9 + -3) >> 5);
  iVar14 = *(int *)(iVar11 + 8) + 0x10;
  iVar15 = iVar7 * uVar16 + iVar7 + -4;
  iVar7 = iVar14 + iVar15;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar7 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - (int)piVar9) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar11 + 0x14);
  uVar12 = 1 << uVar16;
  *(undefined1 *)((int)piVar9 + -3) = 0xff;
  *(undefined2 *)((int)piVar9 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar11 + 0x10);
    uVar8 = *(uint *)(iVar11 + 0xc) | uVar13;
    if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

