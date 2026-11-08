// FUN_0143c9c4 @ 0143c9c4 size=216 calls_out=3 calls_in=2
// strings: 

void FUN_0143c9c4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_2 + 0x4c);
  uVar4 = *(undefined4 *)(iVar1 + 0x20);
  uVar5 = *(undefined4 *)(iVar1 + 0x24);
  uVar6 = *(undefined4 *)(iVar1 + 0x28);
  uVar7 = *(undefined4 *)(iVar1 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  uVar8 = *(undefined4 *)(param_2 + 0x4c);
  uVar9 = *(undefined4 *)(param_2 + 0x50);
  uVar10 = *(undefined4 *)(param_2 + 0x54);
  local_28 = 0;
  local_2c = 8;
  local_30 = 0;
  local_4c = FUN_0143cda0(param_3);
  local_58 = local_30;
  uStack_54 = local_2c;
  uStack_50 = local_28;
  local_36 = 1;
  local_38 = 1;
  local_48 = uVar4;
  uStack_44 = uVar5;
  uStack_40 = uVar6;
  uStack_3c = uVar7;
  uVar4 = FUN_018fccd8(&local_58);
  FUN_01bed4e2(param_1,param_2,0x44);
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined **)(param_1 + 0x48) = &DAT_01cf7f8c;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0x58) = uVar9;
  *(undefined4 *)(param_1 + 0x5c) = uVar10;
  return;
}

