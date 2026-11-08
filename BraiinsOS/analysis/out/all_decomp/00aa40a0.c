// FUN_00aa40a0 @ 00aa40a0 size=256 calls_out=1 calls_in=1
// strings: 

void FUN_00aa40a0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar7 = param_1[3];
  if (uVar7 != 0) {
    uVar4 = *param_1;
    uVar9 = param_1[1];
    uVar1 = param_1[2];
    uVar3 = uVar4;
    if (uVar1 < uVar4) {
      uVar3 = 0;
    }
    iVar5 = uVar1 - uVar3;
    uVar10 = uVar4 - iVar5;
    iVar6 = uVar7 - uVar10;
    if (uVar7 < uVar10) {
      iVar6 = 0;
    }
    if (uVar7 <= uVar10) {
      uVar4 = iVar5 + uVar7;
    }
    iVar5 = uVar4 - iVar5;
    if (iVar5 != 0) {
      piVar8 = (int *)(uVar1 * 0x58 + uVar3 * -0x58 + uVar9 + 0x28);
      do {
        iVar2 = piVar8[-10];
        bVar11 = iVar2 != 3;
        if (bVar11) {
          iVar2 = piVar8[1];
        }
        if ((bVar11 && iVar2 != 0) && (uVar3 = iVar2 * 0x11 & 0xfffffffc, uVar3 + iVar2 != -0x19)) {
          thunk_FUN_016d3fb4((*piVar8 - uVar3) + -0x14);
        }
        piVar8 = piVar8 + 0x16;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (uVar10 < uVar7) {
      piVar8 = (int *)(uVar9 + 0x2c);
      do {
        iVar5 = piVar8[-0xb];
        bVar11 = iVar5 != 3;
        if (bVar11) {
          iVar5 = *piVar8;
        }
        if ((bVar11 && iVar5 != 0) && (uVar7 = iVar5 * 0x11 & 0xfffffffc, uVar7 + iVar5 != -0x19)) {
          thunk_FUN_016d3fb4((piVar8[-1] - uVar7) + -0x14);
        }
        piVar8 = piVar8 + 0x16;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

