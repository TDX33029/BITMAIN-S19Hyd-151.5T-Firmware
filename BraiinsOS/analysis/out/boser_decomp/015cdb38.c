// FUN_015cdb38 @ 015cdb38 size=140 calls_out=2 calls_in=1
// strings: 

void FUN_015cdb38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  uVar2 = *param_5;
  uVar4 = param_5[1];
  uVar6 = param_5[2];
  uVar8 = param_5[3];
  uVar10 = param_5[4];
  uVar3 = param_5[5];
  uVar5 = param_5[6];
  uVar7 = param_5[7];
  uVar9 = param_5[8];
  uVar11 = param_5[9];
  iVar12 = *(int *)(param_1 + 0x214);
  if (iVar12 == *(int *)(param_1 + 0x20c)) {
    FUN_007024f0();
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x210) + iVar12 * 0x30);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar6;
  puVar1[3] = uVar8;
  puVar1[4] = uVar10;
  puVar1[5] = uVar3;
  puVar1[6] = uVar5;
  puVar1[7] = uVar7;
  puVar1[8] = uVar9;
  puVar1[9] = uVar11;
  puVar1[10] = param_3;
  puVar1[0xb] = param_4;
  *(int *)(param_1 + 0x214) = iVar12 + 1;
  FUN_015f91d0(param_1 + 0x248,uVar5,param_3,param_4);
  return;
}

