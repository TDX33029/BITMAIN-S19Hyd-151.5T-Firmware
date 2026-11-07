// FUN_01b2f018 @ 01b2f018 size=364 calls_out=3 calls_in=4
// strings: 

undefined4
FUN_01b2f018(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar2 = param_3;
  puVar3 = param_2;
  if (param_5 <= param_3) {
    uVar2 = param_5;
    param_5 = param_3;
    puVar3 = param_4;
    param_4 = param_2;
  }
  if (uVar2 == 0) {
    uVar1 = FUN_01b257dc(param_1,0);
    return uVar1;
  }
  puVar4 = (undefined4 *)(param_1 + param_5 * 4);
  uVar1 = FUN_01b2ef2c(param_1,param_4,param_5,*puVar3);
  *(undefined4 *)(param_1 + param_5 * 4) = uVar1;
  while( true ) {
    if (uVar2 == 1) {
      return 0;
    }
    uVar1 = FUN_01b2ee10(param_1 + 4,param_4,param_5,puVar3[1]);
    puVar4[1] = uVar1;
    if (uVar2 == 2) {
      return 0;
    }
    uVar1 = FUN_01b2ee10(param_1 + 8,param_4,param_5,puVar3[2]);
    puVar4[2] = uVar1;
    if (uVar2 == 3) {
      return 0;
    }
    uVar1 = FUN_01b2ee10(param_1 + 0xc,param_4,param_5,puVar3[3]);
    uVar2 = uVar2 - 4;
    puVar4[3] = uVar1;
    if (uVar2 == 0) break;
    param_1 = param_1 + 0x10;
    puVar3 = puVar3 + 4;
    uVar1 = FUN_01b2ee10(param_1,param_4,param_5,*puVar3);
    puVar4 = puVar4 + 4;
    *puVar4 = uVar1;
  }
  return 0;
}

