// FUN_0179dc7c @ 0179dc7c size=368 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_0179dc7c(int *param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (299 < param_3 - param_2) {
    uVar1 = param_1[1];
    while (uVar5 = param_2 + param_3 >> 1, uVar1 < 0xc4) {
      FUN_01797a74(param_4 + 0x9b4,param_5,param_2,param_3);
      FUN_01797a74(param_4 + 0x9e0,param_5,param_2,uVar5);
      FUN_01797a74(param_4 + 0xa0c,param_5,uVar5,param_3);
      uVar2 = FUN_0179d83c(param_4 + 0x9b4,param_4);
      uVar3 = FUN_0179d83c(param_4 + 0x9e0,param_4);
      uVar4 = FUN_0179d83c(param_4 + 0xa0c,param_4);
      uVar1 = uVar3;
      if (uVar3 < 0xffffff89) {
        uVar1 = uVar2;
      }
      if (0xffffff88 < uVar4 || 0xffffff88 < uVar1) {
        return 0;
      }
      if (uVar2 <= uVar3 + uVar4) {
        return 0;
      }
      FUN_0179dc7c(param_1,param_2,uVar5,param_4,param_5);
      *(uint *)(*param_1 + param_1[1] * 4) = uVar5;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
      param_2 = uVar5;
      if (param_3 - uVar5 < 300) {
        return 0;
      }
    }
  }
  return 0;
}

