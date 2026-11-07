// FUN_009cfa10 @ 009cfa10 size=308 calls_out=1 calls_in=2
// strings: 

undefined4 * FUN_009cfa10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar5 = uVar1 * 8 - (param_4 >> 3);
    param_1 = (undefined4 *)FUN_009cfa10(param_1,param_1 + uVar1 * 8,param_1 + iVar5 * 2,uVar1);
    param_2 = (undefined4 *)FUN_009cfa10(param_2,param_2 + uVar1 * 8,param_2 + iVar5 * 2,uVar1);
    param_3 = (undefined4 *)FUN_009cfa10(param_3,param_3 + uVar1 * 8,param_3 + iVar5 * 2,uVar1);
  }
  uVar6 = *param_2;
  iVar5 = param_2[1];
  uVar1 = (**(code **)(param_1[1] + 0x28))(*param_1);
  uVar2 = (**(code **)(iVar5 + 0x28))(uVar6);
  uVar6 = *param_3;
  iVar5 = param_3[1];
  uVar3 = (**(code **)(param_1[1] + 0x28))(*param_1);
  uVar4 = (**(code **)(iVar5 + 0x28))(uVar6);
  if (uVar1 < uVar2 == uVar3 < uVar4) {
    uVar6 = *param_3;
    iVar5 = param_3[1];
    uVar3 = (**(code **)(param_2[1] + 0x28))(*param_2);
    uVar4 = (**(code **)(iVar5 + 0x28))(uVar6);
    param_1 = param_2;
    if (uVar1 < uVar2 != uVar3 < uVar4) {
      param_1 = param_3;
    }
  }
  return param_1;
}

