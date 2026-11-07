// FUN_00a05464 @ 00a05464 size=272 calls_out=2 calls_in=5
// strings: 

void FUN_00a05464(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  for (iVar3 = 0; iVar3 != param_2; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(param_1 + iVar3 * 0x28);
    iVar2 = piVar1[1];
    if (iVar2 != 0) {
      iVar5 = piVar1[3];
      if (iVar5 != 0) {
        puVar6 = (uint *)*piVar1;
        puVar8 = puVar6 + 1;
        uVar4 = ~*puVar6 & 0x80808080;
        do {
          puVar7 = puVar8;
          if (uVar4 == 0) {
            do {
              puVar8 = puVar7 + 1;
              uVar4 = *puVar7;
              puVar6 = puVar6 + -0x30;
              puVar7 = puVar8;
            } while ((uVar4 & 0x80808080) == 0x80808080);
            uVar4 = uVar4 & 0x80808080 ^ 0x80808080;
          }
          FUN_0169d780(puVar6 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                               (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) *
                                -0xc + -6);
          iVar5 = iVar5 + -1;
          uVar4 = uVar4 - 1 & uVar4;
        } while (iVar5 != 0);
      }
      if (iVar2 * 0x31 != -0x35) {
        thunk_FUN_016d3fb4(*piVar1 + iVar2 * -0x30 + -0x30);
      }
    }
  }
  return;
}

