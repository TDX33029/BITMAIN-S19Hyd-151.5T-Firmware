// FUN_014f8b2c @ 014f8b2c size=156 calls_out=4 calls_in=2
// strings: 

void FUN_014f8b2c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_014caa68(&local_40);
  uVar2 = local_3c;
  iVar1 = local_40;
  if (local_40 == -0x80000000) {
    *param_1 = local_3c;
    *(undefined1 *)((int)param_1 + 0xd) = 2;
  }
  else {
    FUN_015feb58(&local_58,local_3c,local_38);
    if (local_58 == -0x80000000) {
      puVar3 = (undefined4 *)((uint)&local_58 | 4);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *param_1 = *puVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
    }
    else {
      local_40 = local_58;
      local_3c = uStack_54;
      local_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uVar4 = FUN_014e6288(&local_40);
      *param_1 = uVar4;
      *(undefined1 *)((int)param_1 + 0xd) = 2;
    }
    FUN_019bb7e0(iVar1,uVar2);
  }
  return;
}

