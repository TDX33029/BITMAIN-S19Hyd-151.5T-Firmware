// FUN_0074dd64 @ 0074dd64 size=308 calls_out=3 calls_in=0
// strings: 

void FUN_0074dd64(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
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
  
  uVar2 = *(undefined2 *)(param_2 + 0x50);
  uVar1 = *(undefined1 *)(param_2 + 0x4c);
  bVar9 = *(short *)(param_2 + 0xc) != 1;
  if (bVar9) {
    puVar3 = (undefined4 *)((uint)&local_68 | 4);
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    uVar6 = *(undefined4 *)(param_2 + 0x1c);
    *puVar3 = *(undefined4 *)(param_2 + 0x10);
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    uVar4 = *(undefined4 *)(param_2 + 0x24);
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
    puVar3[4] = *(undefined4 *)(param_2 + 0x20);
    puVar3[5] = uVar4;
    puVar3[6] = uVar5;
    puVar3[7] = uVar6;
    local_68._2_2_ = *(undefined2 *)(param_2 + 0xe);
  }
  else {
    FUN_015e8ad4((uint)&local_68 | 4,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18)
                );
  }
  local_68 = CONCAT22(local_68._2_2_,(ushort)!bVar9);
  bVar9 = *(short *)(param_2 + 0x30) != 1;
  if (bVar9) {
    puVar3 = (undefined4 *)((uint)&local_40 | 4);
    uVar4 = *(undefined4 *)(param_2 + 0x38);
    uVar5 = *(undefined4 *)(param_2 + 0x3c);
    uVar6 = *(undefined4 *)(param_2 + 0x40);
    uVar7 = *(undefined4 *)(param_2 + 0x44);
    uVar8 = *(undefined4 *)(param_2 + 0x48);
    *puVar3 = *(undefined4 *)(param_2 + 0x34);
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar3[4] = uVar7;
    puVar3[5] = uVar8;
    local_40._2_2_ = *(undefined2 *)(param_2 + 0x32);
  }
  else {
    FUN_015e8ad4((uint)&local_40 | 4,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c)
                );
  }
  local_40 = CONCAT22(local_40._2_2_,(ushort)!bVar9);
  local_b0 = local_68;
  uStack_ac = uStack_64;
  uStack_a8 = uStack_60;
  uStack_a4 = uStack_5c;
  local_a0 = local_58;
  uStack_9c = uStack_54;
  uStack_98 = uStack_50;
  uStack_94 = uStack_4c;
  uStack_90 = uStack_48;
  local_8c = local_40;
  uStack_88 = uStack_3c;
  uStack_84 = uStack_38;
  local_80 = local_34;
  uStack_7c = uStack_30;
  uStack_78 = uStack_2c;
  uStack_74 = uStack_28;
  local_70 = uVar1;
  FUN_013de928(&local_68,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  *(undefined2 *)(param_1 + 0x14) = uVar2;
  FUN_01bed4e2(param_1 + 3,&local_b0,0x44);
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  return;
}

