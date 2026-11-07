// FUN_0177a78c @ 0177a78c size=216 calls_out=3 calls_in=1
// strings: 

void FUN_0177a78c(int *param_1)

{
  short sVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    return;
  }
  iVar5 = param_1[3];
  if (iVar5 != 0) {
    puVar6 = (uint *)*param_1;
    puVar4 = puVar6 + 1;
    uVar7 = ~*puVar6 & 0x80808080;
    do {
      puVar3 = puVar4;
      if (uVar7 == 0) {
        do {
          puVar4 = puVar3 + 1;
          uVar7 = *puVar3;
          puVar6 = puVar6 + -0x34;
          puVar3 = puVar4;
        } while ((uVar7 & 0x80808080) == 0x80808080);
        uVar7 = uVar7 & 0x80808080 ^ 0x80808080;
      }
      sVar1 = (short)((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3);
      FUN_019bb7e0(puVar6[-sVar1 * 0xd + -0xd],puVar6[-sVar1 * 0xd + -0xc]);
      FUN_0177a594(puVar6 + -sVar1 * 0xd + -10);
      iVar5 = iVar5 + -1;
      uVar7 = uVar7 - 1 & uVar7;
    } while (iVar5 != 0);
  }
  iVar5 = iVar2 * 0x34 + 0x34;
  if (iVar2 + iVar5 == -5) {
    return;
  }
  thunk_FUN_01be4678(*param_1 - iVar5);
  return;
}

