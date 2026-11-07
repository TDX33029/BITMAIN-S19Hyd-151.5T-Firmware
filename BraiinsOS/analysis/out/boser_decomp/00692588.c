// FUN_00692588 @ 00692588 size=180 calls_out=2 calls_in=1
// strings: 

void FUN_00692588(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_1[1];
  if (iVar6 == 0) {
    return;
  }
  iVar7 = param_1[3];
  puVar5 = (uint *)*param_1;
  if (iVar7 != 0) {
    puVar4 = puVar5 + 1;
    uVar2 = ~*puVar5 & 0x80808080;
    puVar1 = puVar5;
    do {
      puVar3 = puVar4;
      if (uVar2 == 0) {
        do {
          puVar4 = puVar3 + 1;
          uVar2 = *puVar3;
          puVar1 = puVar1 + -0xa0;
          puVar3 = puVar4;
        } while ((uVar2 & 0x80808080) == 0x80808080);
        uVar2 = uVar2 & 0x80808080 ^ 0x80808080;
      }
      FUN_00668cb0(puVar1 + ((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                           (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) *
                            -0x28 + -0x28);
      iVar7 = iVar7 + -1;
      uVar2 = uVar2 - 1 & uVar2;
    } while (iVar7 != 0);
  }
  thunk_FUN_01be4678((int)puVar5 - (iVar6 * 0xa0 + 0xa0));
  return;
}

