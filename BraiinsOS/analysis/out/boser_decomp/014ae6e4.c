// FUN_014ae6e4 @ 014ae6e4 size=316 calls_out=3 calls_in=2
// strings: 

void FUN_014ae6e4(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar9 = param_1[3];
    if (iVar9 != 0) {
      puVar6 = (uint *)*param_1;
      puVar4 = puVar6 + 1;
      uVar5 = ~*puVar6 & 0x80808080;
      do {
        puVar3 = puVar4;
        if (uVar5 == 0) {
          do {
            puVar4 = puVar3 + 1;
            uVar5 = *puVar3;
            puVar6 = puVar6 + -0x1c;
            puVar3 = puVar4;
          } while ((uVar5 & 0x80808080) == 0x80808080);
          uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                              (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
        if (puVar6[uVar1 * -7 + -5] == 1) {
          puVar7 = (undefined4 *)puVar6[uVar1 * -7 + -3];
          uVar8 = puVar6[uVar1 * -7 + -4];
          if ((code *)*puVar7 != (code *)0x0) {
            (*(code *)*puVar7)(uVar8);
          }
LAB_014ae7b0:
          if (puVar7[1] != 0) {
            thunk_FUN_01be4678(uVar8);
          }
        }
        else if (puVar6[uVar1 * -7 + -5] == 0) {
          puVar7 = (undefined4 *)puVar6[uVar1 * -7 + -3];
          uVar8 = puVar6[uVar1 * -7 + -4];
          if ((code *)*puVar7 != (code *)0x0) {
            (*(code *)*puVar7)(uVar8);
          }
          goto LAB_014ae7b0;
        }
        iVar9 = iVar9 + -1;
        uVar5 = uVar5 - 1 & uVar5;
        FUN_012d40d0(puVar6[uVar1 * -7 + -2],puVar6[uVar1 * -7 + -1]);
      } while (iVar9 != 0);
    }
    iVar9 = iVar2 * 0x1c + 0x1c;
    if (iVar2 + iVar9 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar9);
      return;
    }
  }
  return;
}

