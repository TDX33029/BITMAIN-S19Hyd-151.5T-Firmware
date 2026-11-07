// FUN_013e8140 @ 013e8140 size=312 calls_out=1 calls_in=0
// strings: 

longlong FUN_013e8140(int *param_1,int *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_r4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *param_1;
  if (*param_2 == -0x80000000) {
    if (iVar9 != -0x80000000) {
      unaff_r4 = param_1[2];
    }
    piVar7 = (int *)0x0;
    if (iVar9 != -0x80000000 && unaff_r4 != 0) {
      iVar6 = param_1[1];
      uVar1 = *(uint *)(iVar6 + 8);
      if (unaff_r4 != 1) {
        uVar4 = unaff_r4 - 1U & 0xfffffff;
        puVar3 = (uint *)(iVar6 + 0x18);
        do {
          if (*puVar3 <= uVar1) {
            uVar1 = *puVar3;
          }
          uVar4 = uVar4 - 1;
          puVar3 = puVar3 + 4;
        } while (uVar4 != 0);
      }
      if (uVar1 == 0) {
        for (iVar8 = 0; unaff_r4 != iVar8; iVar8 = iVar8 + 1) {
          if (*(int *)(iVar6 + iVar8 * 0x10) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(iVar6 + iVar8 * 0x10 + 4));
          }
        }
        if (iVar9 != 0) {
          thunk_FUN_016d3fb4(iVar6);
        }
        *param_1 = -0x80000000;
        return ZEXT48(param_2) << 0x20;
      }
      iVar9 = unaff_r4 << 4;
      piVar7 = (int *)0x0;
      puVar2 = (undefined1 *)(iVar6 + 0xc);
      do {
        *puVar2 = 0;
        iVar9 = iVar9 + -0x10;
        puVar2 = puVar2 + 0x10;
      } while (iVar9 != 0);
    }
  }
  else {
    piVar7 = param_1;
    if (iVar9 == -0x80000000) {
      iVar9 = param_2[2];
      piVar7 = (int *)0x0;
      param_2[2] = 0;
      if (iVar9 != 0) {
        puVar5 = (undefined4 *)(param_2[1] + 4);
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar5[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar5);
          }
          puVar5 = puVar5 + 4;
        }
      }
    }
  }
  return CONCAT44(param_2,piVar7);
}

