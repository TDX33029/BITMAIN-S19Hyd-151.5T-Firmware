// FUN_00f6b1e0 @ 00f6b1e0 size=332 calls_out=0 calls_in=1
// strings: 

uint FUN_00f6b1e0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  puVar2 = &DAT_0035d4d3;
  if (param_1 % 400 < 0) {
    puVar2 = &DAT_0035d663;
  }
  uVar5 = (uint)(byte)puVar2[param_1 % 400];
  if (param_2 - 1U < (0x406U >> (uVar5 & 0x1f) & 1 | 0x34)) {
    uVar3 = uVar5 & 7;
    uVar1 = param_2 * 7 + (param_3 & 0xff);
    if (uVar3 < 3) {
      uVar3 = uVar3 + 7;
    }
    if (uVar3 < uVar1) {
      uVar1 = uVar1 - uVar3;
      uVar3 = 0x16e - ((byte)puVar2[param_1 % 400] >> 3);
      if (uVar3 < uVar1) {
        param_1 = param_1 + 1;
        uVar1 = uVar1 - uVar3;
        puVar2 = &DAT_0035d4d3;
        if (param_1 % 400 < 0) {
          puVar2 = &DAT_0035d663;
        }
        uVar5 = (uint)(byte)puVar2[param_1 % 400];
      }
    }
    else {
      param_1 = param_1 + -1;
      puVar2 = &DAT_0035d4d3;
      if (param_1 % 400 < 0) {
        puVar2 = &DAT_0035d663;
      }
      uVar5 = (uint)(byte)puVar2[param_1 % 400];
      uVar1 = (uVar1 - (uVar3 + ((byte)puVar2[param_1 % 400] >> 3))) + 0x16e;
    }
    if (((0xfffffe91 < uVar1 - 0x16f) && (0xfff80001 < param_1 - 0x3ffffU)) &&
       (uVar4 = param_1 << 0xd | uVar1 << 4 | uVar5, 0x16e0 < (uVar4 & 0x1ff8))) {
      uVar4 = 0;
    }
  }
  return uVar4;
}

