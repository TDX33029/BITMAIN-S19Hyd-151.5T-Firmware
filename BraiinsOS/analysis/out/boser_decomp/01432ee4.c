// FUN_01432ee4 @ 01432ee4 size=272 calls_out=2 calls_in=2
// strings: 

void FUN_01432ee4(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    iVar9 = param_1[3];
    if (iVar9 != 0) {
      puVar7 = (uint *)*param_1;
      puVar5 = puVar7 + 1;
      uVar8 = ~*puVar7 & 0x80808080;
      do {
        puVar4 = puVar5;
        if (uVar8 == 0) {
          do {
            puVar5 = puVar4 + 1;
            uVar8 = *puVar4;
            puVar7 = puVar7 + -0x18;
            puVar4 = puVar5;
          } while ((uVar8 & 0x80808080) == 0x80808080);
          uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                        uVar8 >> 0x18);
        iVar2 = (uVar1 >> 3) * -2 - (uVar1 >> 3);
        if (1 < (byte)puVar7[iVar2 * 2 + -6]) {
          piVar6 = (int *)puVar7[iVar2 * 2 + -5];
          (**(code **)(*piVar6 + 0x10))(piVar6 + 3,piVar6[1],piVar6[2]);
          thunk_FUN_01be4678(piVar6);
        }
        uVar8 = uVar8 - 1 & uVar8;
        iVar9 = iVar9 + -1;
        (**(code **)(puVar7[iVar2 * 2 + -4] + 0x10))
                  (puVar7 + iVar2 * 2 + -1,puVar7[iVar2 * 2 + -3],puVar7[iVar2 * 2 + -2]);
      } while (iVar9 != 0);
    }
    iVar9 = iVar3 * 0x18 + 0x18;
    if (iVar3 + iVar9 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar9);
      return;
    }
  }
  return;
}

