// FUN_013cac08 @ 013cac08 size=248 calls_out=1 calls_in=2
// strings: 

void FUN_013cac08(undefined4 *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  sVar1 = *param_2;
  sVar2 = param_2[0x20];
  if (sVar1 != 1) {
    puVar3 = (undefined4 *)((uint)&local_68 | 4);
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 6);
    uVar6 = *(undefined4 *)(param_2 + 8);
    *puVar3 = *(undefined4 *)(param_2 + 2);
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0xe);
    uVar6 = *(undefined4 *)(param_2 + 0x10);
    puVar3[4] = *(undefined4 *)(param_2 + 10);
    puVar3[5] = uVar4;
    puVar3[6] = uVar5;
    puVar3[7] = uVar6;
    local_68._2_2_ = param_2[1];
  }
  else {
    FUN_015e8ad4((uint)&local_68 | 4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
  }
  local_68 = CONCAT22(local_68._2_2_,(ushort)(sVar1 == 1));
  sVar1 = param_2[0x12];
  if (sVar1 != 1) {
    puVar3 = (undefined4 *)((uint)&local_40 | 4);
    uVar4 = *(undefined4 *)(param_2 + 0x16);
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    uVar6 = *(undefined4 *)(param_2 + 0x1a);
    uVar7 = *(undefined4 *)(param_2 + 0x1c);
    uVar8 = *(undefined4 *)(param_2 + 0x1e);
    *puVar3 = *(undefined4 *)(param_2 + 0x14);
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar3[4] = uVar7;
    puVar3[5] = uVar8;
    local_40._2_2_ = param_2[0x13];
  }
  else {
    FUN_015e8ad4((uint)&local_40 | 4,*(undefined4 *)(param_2 + 0x16),*(undefined4 *)(param_2 + 0x18)
                );
  }
  *(char *)(param_1 + 0x10) = (char)sVar2;
  local_40 = CONCAT22(local_40._2_2_,(ushort)(sVar1 == 1));
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
  param_1[4] = local_58;
  param_1[5] = uStack_54;
  param_1[6] = uStack_50;
  param_1[7] = uStack_4c;
  param_1[8] = uStack_48;
  param_1[9] = local_40;
  param_1[10] = uStack_3c;
  param_1[0xb] = uStack_38;
  param_1[0xc] = local_34;
  param_1[0xd] = uStack_30;
  param_1[0xe] = uStack_2c;
  param_1[0xf] = uStack_28;
  return;
}

