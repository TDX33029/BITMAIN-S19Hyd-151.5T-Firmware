// FUN_0133497c @ 0133497c size=228 calls_out=2 calls_in=19
// strings: 

void FUN_0133497c(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  iVar4 = param_1[3];
  if (iVar4 != 0) {
    puVar1 = (uint *)*param_1;
    puVar5 = puVar1 + 1;
    uVar7 = ~*puVar1 & 0x80808080;
    puVar2 = puVar1;
    do {
      puVar6 = puVar5;
      if (uVar7 == 0) {
        do {
          puVar5 = puVar6 + 1;
          uVar7 = *puVar6;
          puVar2 = puVar2 + -0x34;
          puVar6 = puVar5;
        } while ((uVar7 & 0x80808080) == 0x80808080);
        uVar7 = uVar7 & 0x80808080 ^ 0x80808080;
      }
      FUN_01334a60(puVar2 + (short)-(short)((uint)LZCOUNT(uVar7 << 0x18 |
                                                          (uVar7 >> 8 & 0xff) << 0x10 |
                                                          (uVar7 >> 0x10 & 0xff) << 8 |
                                                          uVar7 >> 0x18) >> 3) * 0xd + -0xc);
      iVar4 = iVar4 + -1;
      uVar7 = uVar7 - 1 & uVar7;
    } while (iVar4 != 0);
    uVar3 = param_1[1];
    uVar7 = 0;
    if (uVar3 != 0) {
      FUN_016dd606(puVar1,0xff,uVar3 + 5);
      uVar7 = uVar3;
      if (7 < uVar3) {
        uVar7 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar7;
    param_1[3] = 0;
  }
  return;
}

