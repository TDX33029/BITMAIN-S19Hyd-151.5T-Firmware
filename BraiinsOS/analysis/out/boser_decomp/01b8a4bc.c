// FUN_01b8a4bc @ 01b8a4bc size=340 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01b8a4bc(int *param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  while( true ) {
    if ((param_3 - param_2 < 300) || (0xc3 < (uint)param_1[1])) {
      return 0;
    }
    uVar1 = param_2 + param_3 >> 1;
    FUN_01b85350(param_4 + 0x9b4,param_5,param_2,param_3);
    FUN_01b85350(param_4 + 0x9e0,param_5,param_2,uVar1);
    FUN_01b85350(param_4 + 0xa0c,param_5,uVar1,param_3);
    uVar3 = FUN_01b8a214(param_4 + 0x9b4,param_4);
    uVar4 = FUN_01b8a214(param_4 + 0x9e0,param_4);
    uVar5 = FUN_01b8a214(param_4 + 0xa0c,param_4);
    uVar2 = uVar4;
    if (uVar4 < 0xffffff89) {
      uVar2 = uVar3;
    }
    if (0xffffff88 < uVar5 || 0xffffff88 < uVar2) break;
    if (uVar3 <= uVar4 + uVar5) {
      return 0;
    }
    FUN_01b8a4bc(param_1,param_2,uVar1,param_4,param_5);
    *(uint *)(*param_1 + param_1[1] * 4) = uVar1;
    param_1[1] = param_1[1] + 1;
    param_2 = uVar1;
  }
  return 0;
}

