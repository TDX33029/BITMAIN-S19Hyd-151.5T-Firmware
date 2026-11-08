// FUN_00cde1a8 @ 00cde1a8 size=224 calls_out=3 calls_in=1
// strings: 

void FUN_00cde1a8(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int unaff_r11;
  uint uVar10;
  
  puVar6 = (undefined4 *)param_2[1];
  puVar9 = (undefined4 *)param_2[3];
  if (0x2aaaaaa8 < (uint)((int)puVar9 - (int)puVar6)) {
    uVar1 = 0;
LAB_00cde1d8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,unaff_r11);
  }
  uVar10 = (uint)((int)puVar9 - (int)puVar6) >> 2;
  uVar8 = 0;
  unaff_r11 = uVar10 * 0xc;
  if (unaff_r11 == 0) {
    uVar2 = 4;
    uVar10 = 0;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(unaff_r11);
    if (uVar2 == 0) {
      uVar1 = 4;
      goto LAB_00cde1d8;
    }
  }
  if (puVar6 != puVar9) {
    puVar3 = (undefined4 *)param_2[4];
    puVar4 = (undefined4 *)(uVar2 + 4);
    uVar8 = 0;
    do {
      uVar1 = *puVar3;
      uVar5 = puVar3[1];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      puVar4[-1] = *puVar6;
      *puVar4 = uVar1;
      puVar4[1] = uVar5;
      puVar4 = puVar4 + 3;
      puVar6 = puVar7;
    } while (puVar7 != puVar9);
  }
  if (param_2[2] != 0) {
    thunk_FUN_016d3fb4(*param_2);
  }
  *param_1 = uVar10;
  param_1[1] = uVar2;
  param_1[2] = uVar8;
  return;
}

