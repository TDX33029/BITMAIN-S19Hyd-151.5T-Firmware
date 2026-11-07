// FUN_013604dc @ 013604dc size=320 calls_out=2 calls_in=4
// strings: 

void FUN_013604dc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  uVar9 = *(uint *)(param_1 + 8);
  if (1 < uVar9) {
    iVar11 = *(int *)(param_1 + 4);
    iVar6 = 0;
    uVar3 = 2;
    do {
      iVar7 = iVar11 + iVar6;
      if (*(int *)(iVar7 + 0x18) == *(int *)(iVar7 + 8)) {
        uVar4 = *(undefined4 *)(iVar7 + 0x14);
        iVar1 = thunk_FUN_016dd50a(uVar4,*(undefined4 *)(iVar7 + 4));
        if (iVar1 == 0) {
          iVar6 = uVar3 - 1;
          if (*(char *)(iVar7 + 0x1c) != *(char *)(iVar7 + 0xc)) {
            *(undefined1 *)(iVar7 + 0xc) = 0;
            *(undefined1 *)(iVar7 + 0x1c) = 0;
          }
          if (*(int *)(iVar7 + 0x10) != 0) {
            thunk_FUN_016d3fb4(uVar4);
          }
          if (uVar9 <= uVar3) goto LAB_01360610;
          iVar1 = uVar9 - uVar3;
          piVar5 = (int *)(iVar7 + 0x2c);
          goto LAB_013605b0;
        }
      }
      iVar6 = iVar6 + 0x10;
      uVar3 = uVar3 + 1;
    } while (uVar9 * 0x10 + -0x10 != iVar6);
  }
  return;
LAB_013605b0:
  piVar8 = (int *)(iVar11 + iVar6 * 0x10);
  if (piVar5[-1] == piVar8[-2]) {
    iVar10 = piVar5[-2];
    iVar7 = thunk_FUN_016dd50a(iVar10,piVar8[-3]);
    if (iVar7 != 0) goto LAB_01360598;
    if ((char)*piVar5 != (char)piVar8[-1]) {
      *(undefined1 *)(piVar8 + -1) = 0;
      *(char *)piVar5 = '\0';
    }
    if (piVar5[-3] != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
  }
  else {
LAB_01360598:
    iVar7 = piVar5[-2];
    iVar10 = piVar5[-1];
    iVar2 = *piVar5;
    iVar6 = iVar6 + 1;
    *piVar8 = piVar5[-3];
    piVar8[1] = iVar7;
    piVar8[2] = iVar10;
    piVar8[3] = iVar2;
  }
  piVar5 = piVar5 + 4;
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
LAB_01360610:
    *(int *)(param_1 + 8) = iVar6;
    return;
  }
  goto LAB_013605b0;
}

