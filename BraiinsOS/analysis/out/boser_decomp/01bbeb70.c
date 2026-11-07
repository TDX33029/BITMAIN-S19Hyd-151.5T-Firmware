// FUN_01bbeb70 @ 01bbeb70 size=608 calls_out=0 calls_in=2
// strings: 

uint FUN_01bbeb70(uint *param_1,byte *param_2,uint param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  uVar2 = *param_1;
  uVar9 = param_1[1];
  uVar3 = 0;
  pbVar5 = param_2;
  while (uVar8 = uVar3 + 3, uVar8 < param_3) {
    bVar10 = CARRY4(uVar2,uVar2);
    uVar1 = uVar2 * 2;
    uVar2 = uVar1 + *(uint *)(&DAT_00562fb8 + (uint)*pbVar5 * 8);
    uVar9 = uVar9 * 2 + (uint)bVar10 + *(int *)(&DAT_00562fbc + (uint)*pbVar5 * 8) +
            (uint)CARRY4(uVar1,*(uint *)(&DAT_00562fb8 + (uint)*pbVar5 * 8));
    if ((uVar6 & uVar2) == 0 && (uVar7 & uVar9) == 0) {
      uVar1 = uVar3 + 1;
      *(uint *)(param_4 + *param_5 * 4) = uVar1;
      iVar4 = *param_5;
      *param_5 = iVar4 + 1;
      if (iVar4 + 1 == 0x40) goto LAB_01bbed54;
    }
    bVar10 = CARRY4(uVar2,uVar2);
    uVar1 = uVar2 * 2;
    uVar2 = uVar1 + *(uint *)(&DAT_00562fb8 + (uint)pbVar5[1] * 8);
    uVar9 = uVar9 * 2 + (uint)bVar10 + *(int *)(&DAT_00562fbc + (uint)pbVar5[1] * 8) +
            (uint)CARRY4(uVar1,*(uint *)(&DAT_00562fb8 + (uint)pbVar5[1] * 8));
    if ((uVar6 & uVar2) == 0 && (uVar7 & uVar9) == 0) {
      *(uint *)(param_4 + *param_5 * 4) = uVar3 + 2;
      iVar4 = *param_5;
      *param_5 = iVar4 + 1;
      uVar1 = uVar3 + 2;
      if (iVar4 + 1 == 0x40) goto LAB_01bbed54;
    }
    bVar10 = CARRY4(uVar2,uVar2);
    uVar1 = uVar2 * 2;
    uVar2 = uVar1 + *(uint *)(&DAT_00562fb8 + (uint)pbVar5[2] * 8);
    uVar9 = uVar9 * 2 + (uint)bVar10 + *(int *)(&DAT_00562fbc + (uint)pbVar5[2] * 8) +
            (uint)CARRY4(uVar1,*(uint *)(&DAT_00562fb8 + (uint)pbVar5[2] * 8));
    if ((uVar6 & uVar2) == 0 && (uVar7 & uVar9) == 0) {
      *(uint *)(param_4 + *param_5 * 4) = uVar8;
      iVar4 = *param_5;
      *param_5 = iVar4 + 1;
      if (iVar4 + 1 == 0x40) {
        uVar1 = uVar8;
        goto LAB_01bbed54;
      }
    }
    bVar10 = CARRY4(uVar2,uVar2);
    uVar8 = uVar2 * 2;
    uVar2 = uVar8 + *(uint *)(&DAT_00562fb8 + (uint)pbVar5[3] * 8);
    uVar9 = uVar9 * 2 + (uint)bVar10 + *(int *)(&DAT_00562fbc + (uint)pbVar5[3] * 8) +
            (uint)CARRY4(uVar8,*(uint *)(&DAT_00562fb8 + (uint)pbVar5[3] * 8));
    uVar1 = uVar3 + 4;
    if ((uVar6 & uVar2) == 0 && (uVar7 & uVar9) == 0) {
      *(uint *)(param_4 + *param_5 * 4) = uVar1;
      iVar4 = *param_5;
      *param_5 = iVar4 + 1;
      if (iVar4 + 1 == 0x40) goto LAB_01bbed54;
    }
    pbVar5 = pbVar5 + 4;
    uVar3 = uVar1;
  }
  uVar1 = uVar3;
  do {
    do {
      if (param_3 <= uVar1) goto LAB_01bbed54;
      bVar10 = CARRY4(uVar2,uVar2);
      uVar3 = uVar2 * 2;
      pbVar5 = param_2 + uVar1;
      uVar1 = uVar1 + 1;
      uVar2 = uVar3 + *(uint *)(&DAT_00562fb8 + (uint)*pbVar5 * 8);
      uVar9 = uVar9 * 2 + (uint)bVar10 + *(int *)(&DAT_00562fbc + (uint)*pbVar5 * 8) +
              (uint)CARRY4(uVar3,*(uint *)(&DAT_00562fb8 + (uint)*pbVar5 * 8));
    } while ((uVar6 & uVar2) != 0 || (uVar7 & uVar9) != 0);
    *(uint *)(param_4 + *param_5 * 4) = uVar1;
    iVar4 = *param_5;
    *param_5 = iVar4 + 1;
  } while (iVar4 + 1 != 0x40);
LAB_01bbed54:
  *param_1 = uVar2;
  param_1[1] = uVar9;
  return uVar1;
}

