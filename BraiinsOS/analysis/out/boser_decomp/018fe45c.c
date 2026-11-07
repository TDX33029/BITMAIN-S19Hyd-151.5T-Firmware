// FUN_018fe45c @ 018fe45c size=248 calls_out=3 calls_in=5
// strings: 

void FUN_018fe45c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [12];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar8 = (**(code **)(*(int *)(param_1 + 0xc) + 0x18))(*(undefined4 *)(param_1 + 8));
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  uVar1 = (undefined4)uVar8;
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0x14))(*(undefined4 *)(param_1 + 0x10));
  FUN_018fe59c(&local_78,uVar1,*(undefined4 *)(iVar3 + 0xc),uVar2);
  FUN_018fe73c(auStack_54,uVar1,*(undefined4 *)(iVar3 + 0xc));
  local_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uStack_28 = uStack_58;
  uVar8 = (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                    (*(undefined4 *)(param_1 + 0x10),&local_48,auStack_54);
  uVar6 = *(uint *)(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x24);
  FUN_01443048(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
  *(undefined1 *)(param_3 + 0x31) = 2;
  uVar5 = 0xffff0000;
  if (uVar6 < 0xffff0000) {
    uVar5 = uVar6;
  }
  uVar4 = 0xffff0000;
  if (iVar7 != -1) {
    uVar4 = uVar6;
  }
  *(undefined4 *)(param_3 + 0x20) = 0;
  if (iVar7 == -1) {
    uVar4 = uVar5;
  }
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(uint *)(param_3 + 0x18) = uVar4;
  *(int *)(param_3 + 0x1c) = iVar7;
  *(undefined8 *)(param_3 + 8) = uVar8;
  FUN_01443048(uVar1,iVar3);
  return;
}

