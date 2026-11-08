// FUN_011e01bc @ 011e01bc size=148 calls_out=1 calls_in=9
// strings: 

int FUN_011e01bc(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  
  puVar3 = (uint *)*param_1;
  iVar7 = param_1[3];
  puVar6 = puVar3 + 1;
  uVar4 = ~*puVar3 & 0x80808080;
  do {
    if (iVar7 == 0) {
      return 0;
    }
    puVar5 = puVar6;
    if (uVar4 == 0) {
      do {
        puVar6 = puVar5 + 1;
        uVar4 = *puVar5;
        puVar3 = puVar3 + -0x28;
        puVar5 = puVar6;
      } while ((uVar4 & 0x80808080) == 0x80808080);
      uVar4 = uVar4 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = (uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                          | uVar4 >> 0x18) >> 3;
    iVar2 = FUN_00ec04e0(param_2,puVar3 + uVar1 * -10 + -10,puVar3 + uVar1 * -10 + -6);
    iVar7 = iVar7 + -1;
    uVar4 = uVar4 - 1 & uVar4;
  } while (iVar2 == 0);
  return iVar2;
}

