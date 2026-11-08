// FUN_0127c5e0 @ 0127c5e0 size=220 calls_out=1 calls_in=2
// strings: 

void FUN_0127c5e0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  uVar3 = param_1[3];
  iVar4 = 0;
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar7 = param_1[2];
    uVar1 = uVar7 - uVar2;
    if (uVar7 < uVar2) {
      uVar1 = uVar7;
    }
    if (uVar2 - uVar1 < uVar3) {
      iVar4 = uVar3 - (uVar2 - uVar1);
    }
    else {
      uVar2 = uVar1 + uVar3;
    }
  }
  uVar3 = param_1[1];
  piVar8 = (int *)(uVar3 + uVar1 * 0x18 + 0xc);
  for (iVar6 = uVar2 - uVar1; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (piVar8[-3] != 0) {
      thunk_FUN_016d3fb4(piVar8[-2]);
    }
    if (*piVar8 != 0) {
      thunk_FUN_016d3fb4(piVar8[1]);
    }
    piVar8 = piVar8 + 6;
  }
  puVar5 = (undefined4 *)(uVar3 + 0x10);
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (puVar5[-4] != 0) {
      thunk_FUN_016d3fb4(puVar5[-3]);
    }
    if (puVar5[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar5);
    }
    puVar5 = puVar5 + 6;
  }
  return;
}

