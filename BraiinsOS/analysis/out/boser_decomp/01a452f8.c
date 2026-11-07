// FUN_01a452f8 @ 01a452f8 size=364 calls_out=4 calls_in=1
// strings: 

void FUN_01a452f8(int *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint extraout_r2;
  uint uVar3;
  uint extraout_r3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int unaff_r9;
  int iVar8;
  int iVar9;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  
  uVar7 = *(uint *)(param_3 + 8);
  uVar6 = *(uint *)(param_3 + 0xc);
  FUN_01a4511c(&local_3c,param_3,"\'\'");
  if (local_3c == 3) {
    pbVar1 = *(byte **)(param_3 + 8);
    iVar2 = *(int *)(param_3 + 0xc);
    uVar3 = extraout_r2;
    uVar4 = extraout_r3;
    if (iVar2 != 0) {
      uVar4 = (uint)*param_2;
      uVar3 = (uint)*pbVar1;
    }
    if (iVar2 != 0 && uVar4 != uVar3) {
      *(byte **)(param_3 + 8) = pbVar1;
      *(int *)(param_3 + 0xc) = iVar2;
      local_3c = 3;
      local_30 = iVar2;
      local_28 = uVar3;
      goto LAB_01a45430;
    }
    *(byte **)(param_3 + 8) = pbVar1;
    *(int *)(param_3 + 0xc) = iVar2;
    iVar2 = 4;
    iVar8 = 0;
    iVar9 = 0;
  }
  else {
    if (local_3c != 1) {
      unaff_r9 = local_2c;
LAB_01a45430:
      *param_1 = local_3c;
      param_1[1] = local_38;
      param_1[2] = local_34;
      param_1[3] = local_30;
      param_1[4] = unaff_r9;
      param_1[5] = local_28;
      return;
    }
    local_40 = local_28;
    iVar2 = local_34;
    iVar8 = local_2c;
    iVar9 = local_38;
  }
  *(uint *)(param_3 + 8) = uVar7;
  *(uint *)(param_3 + 0xc) = uVar6;
  FUN_01a45008(&local_3c,param_3,&DAT_0052d60c);
  if (local_3c == 3) {
    pbVar1 = *(byte **)(param_3 + 8);
    iVar5 = *(int *)(param_3 + 0xc);
    local_28 = uVar7;
    if (iVar5 != 0) {
      uVar6 = (uint)*param_2;
      local_28 = (uint)*pbVar1;
    }
    if (iVar5 != 0 && uVar6 != local_28) {
      *(byte **)(param_3 + 8) = pbVar1;
      *(int *)(param_3 + 0xc) = iVar5;
      *param_1 = 3;
      param_1[1] = local_38;
      param_1[2] = local_34;
      goto LAB_01a453fc;
    }
    *(byte **)(param_3 + 8) = pbVar1;
    *(int *)(param_3 + 0xc) = iVar5;
    local_34 = 4;
    local_3c = 1;
    local_30 = 0;
    local_2c = 0;
    local_38 = 0;
  }
  param_1[1] = local_38;
  *param_1 = local_3c;
  param_1[2] = local_34;
  param_1[3] = local_30;
  param_1[4] = local_2c;
  param_1[5] = local_28;
LAB_01a453fc:
  FUN_0134aee0(iVar9,iVar2,4,0xc);
  FUN_012d40d0(iVar8,local_40);
  return;
}

