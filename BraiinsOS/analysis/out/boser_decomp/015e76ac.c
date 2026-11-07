// FUN_015e76ac @ 015e76ac size=328 calls_out=1 calls_in=1
// strings: 

void FUN_015e76ac(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_006666fc(&local_48,param_2[0xb],param_2[0xc]);
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  uVar12 = param_2[5];
  uVar13 = param_2[6];
  uVar14 = param_2[4];
  local_3c = param_2[0xd];
  uVar15 = *param_2;
  uVar16 = param_2[1];
  local_38 = CONCAT31(local_38._1_3_,*(undefined1 *)(param_2 + 0xe));
  if (param_2[7] == -0x80000000) {
    local_30 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_30,param_2[8],param_2[9]);
  }
  uVar9 = local_30;
  uVar8 = local_38;
  uVar7 = local_3c;
  uVar6 = uStack_40;
  uVar5 = uStack_44;
  uVar4 = local_48;
  uVar1 = *(undefined2 *)((int)param_2 + 0x4e);
  uVar2 = *(undefined2 *)(param_2 + 0x13);
  FUN_006666fc(&local_48,param_2[0x11],param_2[0x12]);
  uVar3 = *(undefined2 *)(param_2 + 0x14);
  *param_1 = uVar15;
  param_1[1] = uVar16;
  param_1[2] = uVar10;
  param_1[3] = uVar11;
  param_1[4] = uVar14;
  param_1[5] = uVar12;
  param_1[6] = uVar13;
  param_1[7] = uVar9;
  param_1[8] = uStack_2c;
  param_1[9] = uStack_28;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  param_1[0xc] = uVar6;
  param_1[0xd] = uVar7;
  param_1[0xe] = uVar8;
  param_1[0xf] = uStack_4c;
  *(undefined2 *)((int)param_1 + 0x4e) = uVar1;
  *(undefined2 *)(param_1 + 0x13) = uVar2;
  param_1[0x10] = local_48;
  param_1[0x11] = uStack_44;
  param_1[0x12] = uStack_40;
  *(undefined2 *)(param_1 + 0x14) = uVar3;
  return;
}

