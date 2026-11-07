// FUN_01291b34 @ 01291b34 size=148 calls_out=0 calls_in=3
// strings: 

uint FUN_01291b34(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = 0xb < param_2;
  bVar4 = param_2 == 0xc;
  uVar1 = 0;
  if (param_2 < 0xd) {
    bVar5 = 0x1e < param_3;
    bVar4 = param_3 == 0x1f;
  }
  if (!bVar5 || bVar4) {
    puVar3 = &DAT_00405081;
    if (param_1 % 400 < 0) {
      puVar3 = &DAT_00405211;
    }
    if (0xfff80001 < param_1 - 0x3ffffU) {
      uVar2 = param_3 << 4 | param_2 << 9 | (uint)(byte)puVar3[param_1 % 400];
      if (""[uVar2 >> 3] != 0) {
        uVar1 = uVar2 + ""[uVar2 >> 3] * -8 | param_1 << 0xd;
      }
      return uVar1;
    }
  }
  return 0;
}

