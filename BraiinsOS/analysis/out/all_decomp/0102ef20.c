// FUN_0102ef20 @ 0102ef20 size=684 calls_out=4 calls_in=0
// strings: 

void FUN_0102ef20(uint *param_1,int param_2,uint *param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,byte param_8)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uStack_54;
  
  if ((char)param_3[8] == '\x01') {
    if (param_8 == 2) {
      uVar3 = param_3[1];
      uVar8 = param_3[2];
      uVar14 = param_3[3];
      param_1[1] = *param_3;
      param_1[2] = uVar3;
      param_1[3] = uVar8;
      param_1[4] = uVar14;
      uVar3 = param_3[5];
      uVar8 = param_3[6];
      uVar14 = param_3[7];
      uVar15 = param_3[8];
      param_1[5] = param_3[4];
      param_1[6] = uVar3;
      param_1[7] = uVar8;
      param_1[8] = uVar14;
      param_1[9] = uVar15;
      *param_1 = 4;
      return;
    }
    param_1[1] = param_7;
    uVar3 = param_3[1];
    uVar8 = param_3[2];
    uVar14 = param_3[3];
    param_1[2] = *param_3;
    param_1[3] = uVar3;
    param_1[4] = uVar8;
    param_1[5] = uVar14;
    uVar3 = param_3[5];
    uVar8 = param_3[6];
    uVar14 = param_3[7];
    uVar15 = param_3[8];
    param_1[6] = param_3[4];
    param_1[7] = uVar3;
    param_1[8] = uVar8;
    param_1[9] = uVar14;
    param_1[10] = uVar15;
    *param_1 = (uint)(param_8 ^ 1);
    return;
  }
  iVar1 = FUN_01020a90(param_3);
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + iVar1;
  iVar1 = FUN_0102ec68(param_2,0);
  if (param_5 != 0 && iVar1 == 1) {
    uVar3 = *(uint *)(param_2 + 0x1c);
    do {
      param_5 = param_5 - 1;
      uVar8 = uVar3 & param_6 - 1;
      if (*(uint *)(param_2 + 8) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar8,*(uint *)(param_2 + 8),&DAT_018830a0);
      }
      piVar4 = (int *)(*(int *)(param_2 + 4) + uVar8 * 0xc);
    } while (((*piVar4 == 0) || ((uVar8 - (piVar4[2] & uVar3) & uVar3) < param_5)) &&
            (param_6 = uVar8, param_5 != 0));
  }
  uVar3 = *param_3;
  uVar15 = param_3[1];
  uVar9 = param_3[2];
  uVar16 = param_3[3];
  uVar8 = param_3[4];
  uVar5 = param_3[5];
  uVar10 = param_3[6];
  uVar11 = param_3[7];
  uVar17 = param_3[8];
  uVar14 = *(uint *)(param_2 + 0xc);
  uVar6 = *(uint *)(param_2 + 0x18);
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  if (uVar6 == uVar14) {
    FUN_0102a2a0();
    uVar14 = *(uint *)(param_2 + 0xc);
    uVar6 = *(uint *)(param_2 + 0x18);
  }
  uVar7 = *(int *)(param_2 + 0x14) - 1;
  uVar12 = uVar7 + uVar14;
  if (!CARRY4(uVar7,uVar14)) {
    uVar12 = uVar7;
  }
  *(uint *)(param_2 + 0x14) = uVar12;
  *(uint *)(param_2 + 0x18) = uVar6 + 1;
  puVar2 = (undefined4 *)(*(int *)(param_2 + 0x10) + uVar12 * 0x30);
  *puVar2 = 0;
  puVar2[1] = uStack_54;
  puVar2[2] = uVar3;
  puVar2[3] = uVar15;
  puVar2[4] = uVar9;
  puVar2[5] = uVar16;
  puVar2[6] = uVar8;
  puVar2[7] = uVar5;
  puVar2[8] = uVar10;
  puVar2[9] = uVar11;
  puVar2[10] = uVar17;
  puVar2[0xb] = param_4;
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 <= param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_6,uVar3,&DAT_018830b0);
  }
  iVar1 = *(int *)(param_2 + 4);
  iVar18 = *(int *)(param_2 + 0x20);
  puVar13 = (uint *)(iVar1 + param_6 * 0xc);
  uVar15 = *puVar13;
  uVar14 = puVar13[1];
  uVar8 = puVar13[2];
  *puVar13 = 1;
  puVar13[2] = param_4;
  puVar13[1] = -iVar18;
  if ((uVar15 & 1) != 0) {
    uVar15 = param_6 + 1;
    while( true ) {
      do {
        uVar5 = uVar15;
        uVar15 = 0;
      } while (uVar3 <= uVar5);
      puVar13 = (uint *)(iVar1 + uVar5 * 0xc);
      uVar6 = *puVar13;
      uVar9 = puVar13[1];
      uVar15 = puVar13[2];
      *puVar13 = 1;
      puVar13[1] = uVar14;
      puVar13[2] = uVar8;
      if ((uVar6 & 1) == 0) break;
      uVar8 = uVar15;
      uVar14 = uVar9;
      uVar15 = uVar5 + 1;
    }
  }
  if (param_8 == 2) {
    param_1[1] = 0;
    *param_1 = 2;
    return;
  }
  param_1[2] = 0;
  param_1[1] = param_7;
  *param_1 = 3;
  return;
}

