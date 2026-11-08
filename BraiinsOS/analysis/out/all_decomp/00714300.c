// FUN_00714300 @ 00714300 size=92 calls_out=1 calls_in=0
// strings: 

uint * FUN_00714300(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  
  param_1 = (undefined4 *)*param_1;
  puVar4 = (uint *)*param_1;
  puVar6 = (uint *)param_1[1];
  *param_1 = 0;
  if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  uVar2 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a78a8);
  }
  puVar13 = puVar4 + 2;
  if (puVar6 != puVar13) {
    iVar9 = 0x60;
    if ((uint)((int)puVar4 + (-0x58 - (int)puVar6)) < 0xffffff41) {
      puVar4 = (uint *)FUN_016dd1aa();
      return puVar4;
    }
    uVar2 = ((uint)puVar6 ^ (uint)puVar13) & 3;
    if (puVar6 < puVar13) {
      puVar4 = puVar6;
      puVar11 = puVar6;
      if (uVar2 == 0) {
        for (; uVar2 = (int)(puVar6 + 0x18) - (int)puVar4, ((uint)puVar4 & 3) != 0;
            puVar4 = (uint *)((int)puVar4 + 1)) {
          if (puVar4 == puVar6 + 0x18) {
            return puVar6;
          }
          *(char *)puVar4 = (char)*puVar13;
          puVar13 = (uint *)((int)puVar13 + 1);
        }
        uVar10 = uVar2 & 0xfffffffc;
        puVar5 = puVar13 + -1;
        puVar11 = (uint *)((int)puVar4 + uVar10);
        for (; puVar4 != puVar11; puVar4 = puVar4 + 1) {
          puVar5 = puVar5 + 1;
          *puVar4 = *puVar5;
        }
        iVar9 = uVar2 - uVar10;
        puVar13 = (uint *)((int)puVar13 + uVar10);
      }
      puVar7 = (undefined1 *)((int)puVar11 + -1);
      puVar4 = (uint *)((int)puVar13 + iVar9);
      for (; puVar4 != puVar13; puVar13 = (uint *)((int)puVar13 + 1)) {
        puVar7 = puVar7 + 1;
        *puVar7 = (char)*puVar13;
      }
    }
    else {
      if (uVar2 == 0) {
        puVar11 = puVar6 + 0x18;
        puVar7 = (undefined1 *)((int)puVar4 + 0x67);
        while (puVar3 = puVar7 + (1 - (int)puVar13), ((uint)puVar11 & 3) != 0) {
          if (puVar7 == (undefined1 *)((int)puVar4 + 7)) {
            return puVar6;
          }
          puVar11 = (uint *)((int)puVar11 + -1);
          *(undefined1 *)puVar11 = *puVar7;
          puVar7 = puVar7 + -1;
        }
        puVar8 = (undefined4 *)((int)puVar13 + (int)puVar3);
        puVar1 = (undefined4 *)((int)puVar6 + (int)puVar3);
        puVar12 = (undefined4 *)((int)puVar8 - ((uint)puVar3 & 0xfffffffc));
        while (puVar8 != puVar12) {
          puVar8 = puVar8 + -1;
          puVar1 = puVar1 + -1;
          *puVar1 = *puVar8;
        }
        iVar9 = (int)puVar3 - ((uint)puVar3 & 0xfffffffc);
      }
      puVar4 = (uint *)((int)puVar13 + iVar9);
      puVar7 = (undefined1 *)((int)puVar6 + iVar9);
      while (puVar13 != puVar4) {
        puVar4 = (uint *)((int)puVar4 + -1);
        puVar7 = puVar7 + -1;
        *puVar7 = *(undefined1 *)puVar4;
      }
    }
  }
  return puVar6;
}

