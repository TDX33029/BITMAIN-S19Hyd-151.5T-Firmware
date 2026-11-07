// FUN_01b9d6b8 @ 01b9d6b8 size=548 calls_out=2 calls_in=3
// strings: 

uint FUN_01b9d6b8(int param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r5;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  iVar6 = *(int *)(param_1 + 100);
  uVar1 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  iVar7 = *(int *)(param_1 + 8);
  iVar11 = *(int *)(param_1 + 4);
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar9 = (int)param_2 - iVar11;
  uVar4 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  if (uVar4 < uVar9 - uVar3) {
    unaff_r5 = uVar9 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  if (uVar9 - uVar3 <= uVar4) {
    unaff_r5 = uVar3;
  }
  iVar13 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r5 = uVar3;
  }
  if (uVar1 < uVar9) {
    uVar4 = uVar9 - uVar1;
  }
  else {
    uVar4 = 0;
  }
  uVar12 = 0x20 - *(int *)(param_1 + 0xc0);
  iVar10 = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  iVar5 = *(int *)(param_1 + 0xdc);
  uVar3 = *(uint *)(param_1 + 0x1c);
  do {
    if (uVar9 <= uVar3) break;
    uVar2 = (uint)(*(int *)(iVar11 + uVar3) * -0x61c8864f) >> (uVar12 & 0xff);
    *(undefined4 *)(iVar6 + (uVar1 - 1 & uVar3) * 4) = *(undefined4 *)(iVar13 + uVar2 * 4);
    *(uint *)(iVar13 + uVar2 * 4) = uVar3;
    uVar3 = uVar3 + 1;
  } while (iVar5 == 0);
  *(uint *)(param_1 + 0x1c) = uVar9;
  uVar3 = 3;
  uVar12 = *(uint *)(iVar13 + ((uint)(*param_2 * -0x61c8864f) >> (uVar12 & 0xff)) * 4);
  do {
    if (iVar10 == 0 || uVar12 < unaff_r5) {
      return uVar3;
    }
    if (uVar12 < uVar8) {
      if (*(int *)(iVar7 + uVar12) == *param_2) {
        iVar13 = FUN_01b9b970(param_2 + 1,iVar7 + uVar12 + 4,param_3,iVar7 + uVar8,iVar11 + uVar8);
        uVar2 = iVar13 + 4;
        goto LAB_01b9d850;
      }
    }
    else if (*(int *)(iVar11 + uVar12 + (uVar3 - 3)) == *(int *)((int)param_2 + (uVar3 - 3))) {
      uVar2 = FUN_01b9b884(param_2,iVar11 + uVar12,param_3);
LAB_01b9d850:
      if ((uVar3 < uVar2) &&
         (*param_4 = (uVar9 + 3) - uVar12, uVar3 = uVar2, param_3 == (int)param_2 + uVar2)) {
        return uVar2;
      }
    }
    if (uVar12 <= uVar4) {
      return uVar3;
    }
    iVar10 = iVar10 + -1;
    uVar12 = *(uint *)(iVar6 + (uVar12 & uVar1 - 1) * 4);
  } while( true );
}

