// FUN_018027a8 @ 018027a8 size=1056 calls_out=0 calls_in=2
// strings: 

uint FUN_018027a8(uint *param_1,byte *param_2,uint param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar4 = param_1[1];
  uVar9 = param_1[2];
  uVar5 = *param_1;
  uVar2 = param_1[3];
  if (param_3 < 4) {
    uVar7 = 0;
  }
  else {
    uVar8 = 3;
    pbVar3 = param_2;
    do {
      bVar10 = CARRY4(uVar5,uVar5);
      uVar7 = uVar5 * 2;
      uVar5 = uVar7 + *(uint *)(&DAT_00451798 + (uint)*pbVar3 * 8);
      uVar4 = uVar4 * 2 + (uint)bVar10 + *(int *)(&DAT_0045179c + (uint)*pbVar3 * 8) +
              (uint)CARRY4(uVar7,*(uint *)(&DAT_00451798 + (uint)*pbVar3 * 8));
      if ((uVar9 & uVar5) == 0 && (uVar2 & uVar4) == 0) {
        uVar7 = uVar8 - 2;
        *(uint *)(param_4 + *param_5 * 4) = uVar7;
        iVar6 = *param_5;
        *param_5 = iVar6 + 1;
        if (iVar6 + 1 != 0x40) goto LAB_01802804;
LAB_0180290c:
        uVar8 = uVar7;
        goto LAB_01802ae0;
      }
LAB_01802804:
      bVar10 = CARRY4(uVar5,uVar5);
      uVar7 = uVar5 * 2;
      uVar5 = uVar7 + *(uint *)(&DAT_00451798 + (uint)pbVar3[1] * 8);
      uVar4 = uVar4 * 2 + (uint)bVar10 + *(int *)(&DAT_0045179c + (uint)pbVar3[1] * 8) +
              (uint)CARRY4(uVar7,*(uint *)(&DAT_00451798 + (uint)pbVar3[1] * 8));
      if ((uVar9 & uVar5) == 0 && (uVar2 & uVar4) == 0) {
        uVar7 = uVar8 - 1;
        *(uint *)(param_4 + *param_5 * 4) = uVar7;
        iVar6 = *param_5;
        *param_5 = iVar6 + 1;
        if (iVar6 + 1 == 0x40) goto LAB_0180290c;
      }
      bVar10 = CARRY4(uVar5,uVar5);
      uVar7 = uVar5 * 2;
      uVar5 = uVar7 + *(uint *)(&DAT_00451798 + (uint)pbVar3[2] * 8);
      uVar4 = uVar4 * 2 + (uint)bVar10 + *(int *)(&DAT_0045179c + (uint)pbVar3[2] * 8) +
              (uint)CARRY4(uVar7,*(uint *)(&DAT_00451798 + (uint)pbVar3[2] * 8));
      if ((uVar9 & uVar5) == 0 && (uVar2 & uVar4) == 0) {
        *(uint *)(param_4 + *param_5 * 4) = uVar8;
        iVar6 = *param_5;
        *param_5 = iVar6 + 1;
        if (iVar6 + 1 == 0x40) goto LAB_01802ae0;
      }
      bVar10 = CARRY4(uVar5,uVar5);
      uVar1 = uVar5 * 2;
      uVar7 = uVar8 + 1;
      uVar5 = uVar1 + *(uint *)(&DAT_00451798 + (uint)pbVar3[3] * 8);
      uVar4 = uVar4 * 2 + (uint)bVar10 + *(int *)(&DAT_0045179c + (uint)pbVar3[3] * 8) +
              (uint)CARRY4(uVar1,*(uint *)(&DAT_00451798 + (uint)pbVar3[3] * 8));
      if ((uVar9 & uVar5) == 0 && (uVar2 & uVar4) == 0) {
        *(uint *)(param_4 + *param_5 * 4) = uVar7;
        iVar6 = *param_5;
        *param_5 = iVar6 + 1;
        if (iVar6 + 1 == 0x40) goto LAB_0180290c;
      }
      uVar8 = uVar8 + 4;
      pbVar3 = pbVar3 + 4;
    } while (uVar8 < param_3);
    uVar8 = uVar7;
    if (param_3 <= uVar7) goto LAB_01802ae0;
  }
  bVar10 = CARRY4(uVar5,uVar5);
  uVar1 = uVar5 * 2;
  uVar8 = uVar7 + 1;
  uVar5 = uVar1 + *(uint *)(&DAT_00451798 + (uint)param_2[uVar7] * 8);
  uVar4 = uVar4 * 2 + (uint)bVar10 + *(int *)(&DAT_0045179c + (uint)param_2[uVar7] * 8) +
          (uint)CARRY4(uVar1,*(uint *)(&DAT_00451798 + (uint)param_2[uVar7] * 8));
  if ((uVar9 & uVar5) == 0 && (uVar2 & uVar4) == 0) {
    *(uint *)(param_4 + *param_5 * 4) = uVar8;
    iVar6 = *param_5;
    *param_5 = iVar6 + 1;
    if (iVar6 + 1 == 0x40) goto LAB_01802ae0;
  }
  if (uVar8 < param_3) {
    bVar10 = CARRY4(uVar5,uVar5);
    uVar1 = uVar5 * 2;
    pbVar3 = param_2 + uVar8;
    uVar8 = uVar7 + 2;
    uVar5 = uVar1 + *(uint *)(&DAT_00451798 + (uint)*pbVar3 * 8);
    uVar4 = uVar4 * 2 + (uint)bVar10 + *(int *)(&DAT_0045179c + (uint)*pbVar3 * 8) +
            (uint)CARRY4(uVar1,*(uint *)(&DAT_00451798 + (uint)*pbVar3 * 8));
    if ((uVar9 & uVar5) == 0 && (uVar2 & uVar4) == 0) {
      *(uint *)(param_4 + *param_5 * 4) = uVar8;
      iVar6 = *param_5;
      *param_5 = iVar6 + 1;
      if (iVar6 + 1 == 0x40) goto LAB_01802ae0;
    }
    if (uVar8 < param_3) {
      bVar10 = CARRY4(uVar5,uVar5);
      uVar1 = uVar5 * 2;
      pbVar3 = param_2 + uVar8;
      uVar8 = uVar7 + 3;
      uVar5 = uVar1 + *(uint *)(&DAT_00451798 + (uint)*pbVar3 * 8);
      uVar4 = uVar4 * 2 + (uint)bVar10 + *(int *)(&DAT_0045179c + (uint)*pbVar3 * 8) +
              (uint)CARRY4(uVar1,*(uint *)(&DAT_00451798 + (uint)*pbVar3 * 8));
      if ((uVar9 & uVar5) == 0 && (uVar2 & uVar4) == 0) {
        *(uint *)(param_4 + *param_5 * 4) = uVar8;
        iVar6 = *param_5;
        *param_5 = iVar6 + 1;
        if (iVar6 + 1 == 0x40) goto LAB_01802ae0;
      }
      if (uVar8 < param_3) {
        bVar10 = CARRY4(uVar5,uVar5);
        uVar1 = uVar5 * 2;
        uVar7 = uVar7 + 4;
        uVar5 = uVar1 + *(uint *)(&DAT_00451798 + (uint)param_2[uVar8] * 8);
        uVar4 = uVar4 * 2 + (uint)bVar10 + *(int *)(&DAT_0045179c + (uint)param_2[uVar8] * 8) +
                (uint)CARRY4(uVar1,*(uint *)(&DAT_00451798 + (uint)param_2[uVar8] * 8));
        uVar8 = uVar7;
        if ((uVar9 & uVar5) == 0 && (uVar2 & uVar4) == 0) {
          *(uint *)(param_4 + *param_5 * 4) = uVar7;
          *param_5 = *param_5 + 1;
        }
      }
    }
  }
LAB_01802ae0:
  *param_1 = uVar5;
  param_1[1] = uVar4;
  return uVar8;
}

