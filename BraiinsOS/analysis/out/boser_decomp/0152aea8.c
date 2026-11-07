// FUN_0152aea8 @ 0152aea8 size=256 calls_out=3 calls_in=1
// strings: 

void FUN_0152aea8(int *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    iVar10 = param_1[3];
    if (iVar10 != 0) {
      puVar8 = (uint *)*param_1;
      puVar7 = puVar8 + 1;
      uVar9 = ~*puVar8 & 0x80808080;
      do {
        puVar6 = puVar7;
        if (uVar9 == 0) {
          do {
            puVar7 = puVar6 + 1;
            uVar9 = *puVar6;
            puVar8 = puVar8 + -0x14;
            puVar6 = puVar7;
          } while ((uVar9 & 0x80808080) == 0x80808080);
          uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                              (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
        FUN_0152a2e4(puVar8 + uVar1 * -5 + -5);
        iVar10 = iVar10 + -1;
        uVar9 = uVar9 - 1 & uVar9;
        piVar4 = (int *)puVar8[uVar1 * -5 + -1];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0155d4b4(puVar8 + uVar1 * -5 + -1);
        }
      } while (iVar10 != 0);
    }
    iVar10 = iVar3 * 0x14 + 0x14;
    if (iVar3 + iVar10 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar10);
      return;
    }
  }
  return;
}

