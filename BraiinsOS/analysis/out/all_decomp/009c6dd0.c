// FUN_009c6dd0 @ 009c6dd0 size=100 calls_out=1 calls_in=0
// strings: 

undefined4 * FUN_009c6dd0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  piVar1 = (int *)*param_1;
  iVar7 = *piVar1;
  puVar8 = (undefined4 *)piVar1[1];
  *piVar1 = 0;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)(iVar7 + 0x44) + 0x1c))
                     (*(int *)(iVar7 + 0x40) +
                      (*(int *)(*(int *)(iVar7 + 0x44) + 8) - 1U & 0xfffffff8) + 8);
  if (puVar8 != puVar2) {
    iVar7 = 0x20;
    if ((undefined1 *)((int)puVar2 + (-0x20 - (int)puVar8)) < (undefined1 *)0xffffffc1) {
      puVar8 = (undefined4 *)FUN_016dd1aa();
      return puVar8;
    }
    uVar5 = ((uint)puVar8 ^ (uint)puVar2) & 3;
    if (puVar8 < puVar2) {
      puVar4 = puVar8;
      puVar10 = puVar8;
      if (uVar5 == 0) {
        for (; uVar5 = (int)(puVar8 + 8) - (int)puVar4, ((uint)puVar4 & 3) != 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1)) {
          if (puVar4 == puVar8 + 8) {
            return puVar8;
          }
          *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
        uVar9 = uVar5 & 0xfffffffc;
        puVar11 = puVar2 + -1;
        puVar10 = (undefined4 *)((int)puVar4 + uVar9);
        for (; puVar4 != puVar10; puVar4 = puVar4 + 1) {
          puVar11 = puVar11 + 1;
          *puVar4 = *puVar11;
        }
        iVar7 = uVar5 - uVar9;
        puVar2 = (undefined4 *)((int)puVar2 + uVar9);
      }
      puVar6 = (undefined1 *)((int)puVar10 + -1);
      puVar4 = (undefined4 *)((int)puVar2 + iVar7);
      for (; puVar4 != puVar2; puVar2 = (undefined4 *)((int)puVar2 + 1)) {
        puVar6 = puVar6 + 1;
        *puVar6 = *(undefined1 *)puVar2;
      }
    }
    else {
      if (uVar5 == 0) {
        puVar4 = puVar8 + 8;
        puVar6 = (undefined1 *)((int)puVar2 + 0x1f);
        while (puVar3 = puVar6 + (1 - (int)puVar2), ((uint)puVar4 & 3) != 0) {
          if (puVar6 == (undefined1 *)((int)puVar2 + -1)) {
            return puVar8;
          }
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          *(undefined1 *)puVar4 = *puVar6;
          puVar6 = puVar6 + -1;
        }
        puVar4 = (undefined4 *)((int)puVar2 + (int)puVar3);
        puVar10 = (undefined4 *)((int)puVar8 + (int)puVar3);
        puVar11 = (undefined4 *)((int)puVar4 - ((uint)puVar3 & 0xfffffffc));
        while (puVar4 != puVar11) {
          puVar4 = puVar4 + -1;
          puVar10 = puVar10 + -1;
          *puVar10 = *puVar4;
        }
        iVar7 = (int)puVar3 - ((uint)puVar3 & 0xfffffffc);
      }
      puVar4 = (undefined4 *)((int)puVar2 + iVar7);
      puVar6 = (undefined1 *)((int)puVar8 + iVar7);
      while (puVar2 != puVar4) {
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        puVar6 = puVar6 + -1;
        *puVar6 = *(undefined1 *)puVar4;
      }
    }
  }
  return puVar8;
}

