// FUN_01ae4b70 @ 01ae4b70 size=296 calls_out=3 calls_in=1
// strings: 

void FUN_01ae4b70(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint local_88 [2];
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *param_2;
  if (iVar1 == -0x7ffffffd) {
    puVar2 = (undefined4 *)param_2[2];
    if (puVar2 == (undefined4 *)param_2[4]) {
LAB_01ae4c18:
      *param_1 = 2;
      return;
    }
    param_2[2] = (int)(puVar2 + 10);
  }
  else {
    if (iVar1 != -0x7ffffffe) {
      *param_2 = -0x7fffffff;
      uVar3 = 2;
      if (iVar1 != -0x7fffffff) {
        param_1[1] = iVar1;
        iVar1 = param_2[2];
        iVar4 = param_2[3];
        iVar6 = param_2[4];
        iVar7 = param_2[5];
        iVar9 = param_2[6];
        param_1[2] = param_2[1];
        param_1[3] = iVar1;
        param_1[4] = iVar4;
        param_1[5] = iVar6;
        param_1[6] = iVar7;
        param_1[7] = iVar9;
        uVar3 = 1;
      }
      *param_1 = uVar3;
      return;
    }
    iVar1 = param_2[7];
    FUN_019bb288(local_88,param_2 + 1);
    if ((local_88[0] & 1) == 0) goto LAB_01ae4c18;
    if (local_80 == 0) {
      local_44 = iVar1 + 1;
      local_4c = local_7c;
      local_58 = 0x80000000;
      local_5c = 0x80000000;
      local_60 = 1;
      local_48 = local_78;
    }
    else {
      local_34 = local_7c;
      local_38 = local_80;
      local_30 = local_78;
      local_2c = local_74;
      uStack_28 = uStack_70;
      uStack_24 = uStack_6c;
      uStack_20 = uStack_68;
      uStack_1c = uStack_64;
      FUN_01ae47f4(&local_60,iVar1 + 1);
      FUN_019db4b0(&local_38);
    }
    puVar2 = &local_60;
  }
  uVar3 = puVar2[1];
  uVar5 = puVar2[2];
  uVar8 = puVar2[3];
  uVar10 = puVar2[4];
  *param_1 = *puVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = uVar8;
  param_1[4] = uVar10;
  uVar3 = puVar2[6];
  uVar5 = puVar2[7];
  uVar8 = puVar2[8];
  uVar10 = puVar2[9];
  param_1[5] = puVar2[5];
  param_1[6] = uVar3;
  param_1[7] = uVar5;
  param_1[8] = uVar8;
  param_1[9] = uVar10;
  return;
}

