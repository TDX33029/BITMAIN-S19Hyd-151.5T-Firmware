// FUN_01291f74 @ 01291f74 size=328 calls_out=0 calls_in=1
// strings: 

uint FUN_01291f74(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = 0;
  puVar3 = &DAT_00405081;
  if (param_1 % 400 < 0) {
    puVar3 = &DAT_00405211;
  }
  uVar6 = (uint)(byte)puVar3[param_1 % 400];
  if (param_2 - 1U < (0x406U >> (uVar6 & 0x1f) & 1 | 0x34)) {
    uVar4 = uVar6 & 7;
    uVar1 = param_2 * 7 + (param_3 & 0xff);
    if (uVar4 < 3) {
      uVar4 = uVar4 + 7;
    }
    if (uVar4 < uVar1) {
      uVar1 = uVar1 - uVar4;
      uVar4 = 0x16e - ((byte)puVar3[param_1 % 400] >> 3);
      if (uVar4 < uVar1) {
        param_1 = param_1 + 1;
        uVar1 = uVar1 - uVar4;
        puVar3 = &DAT_00405081;
        if (param_1 % 400 < 0) {
          puVar3 = &DAT_00405211;
        }
        uVar6 = (uint)(byte)puVar3[param_1 % 400];
      }
    }
    else {
      param_1 = param_1 + -1;
      puVar3 = &DAT_00405081;
      if (param_1 % 400 < 0) {
        puVar3 = &DAT_00405211;
      }
      uVar6 = (uint)(byte)puVar3[param_1 % 400];
      uVar1 = (uVar1 - (uVar4 + ((byte)puVar3[param_1 % 400] >> 3))) + 0x16e;
    }
    uVar4 = 0xfff80002;
    uVar2 = param_1 - 0x3ffff;
    bVar7 = 0xfff80001 < uVar2;
    if (bVar7) {
      uVar2 = uVar1 - 0x16f;
      uVar4 = 0xfffffe92;
    }
    if ((bVar7 && uVar4 <= uVar2) &&
       (uVar5 = uVar1 << 4 | param_1 << 0xd | uVar6, 0x16e0 < (uVar5 & 0x1ff8))) {
      uVar5 = 0;
    }
  }
  return uVar5;
}

