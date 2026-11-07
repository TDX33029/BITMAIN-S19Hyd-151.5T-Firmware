// FUN_01b33934 @ 01b33934 size=152 calls_out=2 calls_in=2
// strings: 

uint FUN_01b33934(uint *param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = 0;
  if (param_2 != 0) {
    if (param_4 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
      puVar3 = param_1;
      while (puVar3 = puVar3 + 1, puVar3 != param_1 + param_4) {
        uVar1 = uVar1 | *puVar3;
      }
      uVar1 = FUN_01b0c688(uVar1,param_3);
      uVar2 = *param_1;
      uVar1 = uVar1 & (int)((uVar2 - param_2 ^ uVar2 | param_2 ^ uVar2) ^ uVar2) >> 0x1f;
    }
  }
  uVar2 = FUN_01b2bee0(param_1);
  return uVar2 & ~uVar1;
}

