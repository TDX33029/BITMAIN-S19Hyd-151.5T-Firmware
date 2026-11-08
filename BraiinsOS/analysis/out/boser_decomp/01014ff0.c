// FUN_01014ff0 @ 01014ff0 size=248 calls_out=2 calls_in=3
// strings: 

void FUN_01014ff0(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_2 == 0) {
    param_1[0xd] = 0x80000000;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x30);
    uVar1 = *(undefined1 *)(param_2 + 0x41);
    uVar2 = *(undefined1 *)(param_2 + 0x40);
    FUN_006666fc(&local_58,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
    uVar11 = *(undefined4 *)(param_2 + 0x10);
    uVar8 = *(undefined4 *)(param_2 + 0x14);
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    uVar10 = *(undefined4 *)(param_2 + 0x1c);
    FUN_014bf370(&local_48,param_2);
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    uVar6 = *(undefined4 *)(param_2 + 0x24);
    uVar7 = *(undefined4 *)(param_2 + 0x28);
    uVar9 = *(undefined4 *)(param_2 + 0x2c);
    param_1[0xd] = local_58;
    param_1[0xe] = uStack_54;
    param_1[0xf] = uStack_50;
    *param_1 = local_48;
    param_1[1] = uStack_44;
    param_1[2] = uStack_40;
    param_1[3] = uStack_3c;
    param_1[4] = uVar11;
    param_1[5] = uVar8;
    param_1[6] = uVar5;
    param_1[7] = uVar10;
    param_1[8] = uVar4;
    param_1[9] = uVar6;
    param_1[10] = uVar7;
    param_1[0xb] = uVar9;
    *(undefined1 *)((int)param_1 + 0x41) = uVar1;
    *(undefined1 *)(param_1 + 0x10) = uVar2;
    param_1[0xc] = uVar3;
  }
  return;
}

