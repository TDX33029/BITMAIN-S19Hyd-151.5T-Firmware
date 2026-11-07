// FUN_006b4178 @ 006b4178 size=256 calls_out=3 calls_in=1
// strings: 

void FUN_006b4178(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar10 = param_1[3];
    if (iVar10 != 0) {
      puVar7 = (uint *)*param_1;
      puVar5 = puVar7 + 1;
      uVar6 = ~*puVar7 & 0x80808080;
      do {
        puVar4 = puVar5;
        if (uVar6 == 0) {
          do {
            puVar5 = puVar4 + 1;
            uVar6 = *puVar4;
            puVar7 = puVar7 + -0x14;
            puVar4 = puVar5;
          } while ((uVar6 & 0x80808080) == 0x80808080);
          uVar6 = uVar6 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                              (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
        FUN_019bb7e0(puVar7[uVar1 * -5 + -5],puVar7[uVar1 * -5 + -4]);
        uVar8 = puVar7[uVar1 * -5 + -2];
        puVar9 = (undefined4 *)puVar7[uVar1 * -5 + -1];
        pcVar3 = (code *)*puVar9;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar8);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_01be4678(uVar8);
        }
        iVar10 = iVar10 + -1;
        uVar6 = uVar6 - 1 & uVar6;
      } while (iVar10 != 0);
    }
    iVar10 = iVar2 * 0x14 + 0x14;
    if (iVar2 + iVar10 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar10);
      return;
    }
  }
  return;
}

