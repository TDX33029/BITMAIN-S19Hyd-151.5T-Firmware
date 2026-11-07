// FUN_012d74e8 @ 012d74e8 size=212 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_012d74e8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
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
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_68 = *param_1;
  local_64 = param_1[1];
  local_60 = param_1[2];
  local_5c = param_1[3];
  uStack_58 = param_1[4];
  local_54 = param_1[5];
  uStack_50 = param_1[6];
  local_4c = param_1[7];
  uStack_48 = param_1[8];
  uStack_44 = param_1[9];
  local_40 = param_1[10];
  local_3c = param_1[0xb];
  uStack_38 = param_1[0xc];
  uStack_34 = param_1[0xd];
  uStack_30 = param_1[0xe];
  uStack_2c = param_1[0xf];
  param_1[2] = 0x80000000;
  FUN_012d86ec();
  FUN_012d8754(&local_68,param_1[0x13],param_1[0x14],param_1[0x16],param_1[0x17]);
  uVar16 = uStack_2c;
  uVar15 = uStack_30;
  uVar14 = uStack_34;
  uVar13 = uStack_38;
  uVar12 = local_3c;
  uVar11 = local_40;
  uVar10 = uStack_44;
  uVar9 = uStack_48;
  uVar8 = local_4c;
  uVar7 = uStack_50;
  uVar6 = local_54;
  uVar5 = uStack_58;
  uVar4 = local_5c;
  iVar3 = local_60;
  uVar2 = local_64;
  uVar1 = local_68;
  if (local_60 != -0x80000000) {
    FUN_012d86ec(param_1);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = iVar3;
    local_68 = 0;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    param_1[8] = uVar9;
    param_1[9] = uVar10;
    param_1[10] = uVar11;
    param_1[0xb] = uVar12;
    param_1[0xc] = uVar13;
    param_1[0xd] = uVar14;
    param_1[0xe] = uVar15;
    param_1[0xf] = uVar16;
  }
  return local_68;
}

