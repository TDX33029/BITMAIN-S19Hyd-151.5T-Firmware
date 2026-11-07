// FUN_01714b48 @ 01714b48 size=376 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01714b48(undefined4 *param_1,uint param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  
  iVar2 = FUN_0171464c();
  uVar4 = 0;
  if (iVar2 != 0) {
    if (param_2 * 4 != 0) {
      FUN_016dd606(*param_1,0,param_2 * 4);
    }
    if (param_2 != 0) {
      uVar9 = param_2 & 0xfffffffe;
      uVar3 = 0;
      puVar8 = (uint *)*param_1;
      do {
        uVar1 = (int)((param_4 ^ uVar3) - 1 & ~(param_4 ^ uVar3)) >> 0x1f;
        if ((param_2 - 1 < 3) || ((int)puVar8 - (int)param_3 == 4)) {
          puVar10 = param_3 + -1;
          puVar6 = puVar8;
          do {
            puVar10 = puVar10 + 1;
            puVar7 = puVar6 + 1;
            *puVar6 = *puVar10 & uVar1 | *puVar6;
            puVar6 = puVar7;
          } while (puVar7 != puVar8 + param_2);
        }
        else {
          puVar6 = puVar8;
          puVar10 = param_3;
          do {
            puVar7 = puVar6 + 2;
            uVar5 = puVar10[1];
            *puVar6 = *puVar10 & uVar1 | *puVar6;
            puVar6[1] = uVar5 & uVar1 | puVar6[1];
            puVar6 = puVar7;
            puVar10 = puVar10 + 2;
          } while (puVar7 != puVar8 + (param_2 & 0xfffffffe));
          if (param_2 != uVar9) {
            puVar8[uVar9] = puVar8[uVar9] | param_3[uVar9] & uVar1;
          }
        }
        uVar3 = uVar3 + 1;
        param_3 = param_3 + param_2;
      } while (uVar3 != 0x20);
    }
    uVar4 = 1;
    param_1[1] = param_2;
  }
  return uVar4;
}

