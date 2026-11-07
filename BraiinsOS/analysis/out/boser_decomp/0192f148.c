// FUN_0192f148 @ 0192f148 size=96 calls_out=2 calls_in=4
// strings: 

undefined4 *
FUN_0192f148(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  
  uVar12 = FUN_01935674(param_3,param_4,param_2,param_6);
  iVar3 = (int)((ulonglong)uVar12 >> 0x20) - (int)uVar12;
  if ((uint)(param_2 - iVar3) < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005238a3,0x2b,param_6);
  }
  puVar5 = (undefined4 *)(param_1 + param_5);
  puVar1 = (undefined4 *)(param_1 + (int)uVar12);
  if (puVar5 != puVar1) {
    if ((undefined1 *)((int)puVar1 + (-(int)puVar5 - iVar3)) <= (undefined1 *)(iVar3 * -2)) {
      puVar1 = (undefined4 *)FUN_01bed4e2();
      return puVar1;
    }
    uVar6 = ((uint)puVar5 ^ (uint)puVar1) & 3;
    if (puVar5 < puVar1) {
      puVar4 = puVar5;
      puVar10 = puVar5;
      if (uVar6 == 0) {
        for (; uVar6 = ((int)puVar5 + iVar3) - (int)puVar4, ((uint)puVar4 & 3) != 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1)) {
          if (puVar4 == (undefined4 *)((int)puVar5 + iVar3)) {
            return puVar5;
          }
          *(undefined1 *)puVar4 = *(undefined1 *)puVar1;
          puVar1 = (undefined4 *)((int)puVar1 + 1);
        }
        uVar9 = uVar6 & 0xfffffffc;
        puVar11 = puVar1 + -1;
        puVar10 = (undefined4 *)((int)puVar4 + uVar9);
        for (; puVar4 != puVar10; puVar4 = puVar4 + 1) {
          puVar11 = puVar11 + 1;
          *puVar4 = *puVar11;
        }
        iVar3 = uVar6 - uVar9;
        puVar1 = (undefined4 *)((int)puVar1 + uVar9);
      }
      puVar7 = (undefined1 *)((int)puVar10 + -1);
      puVar4 = (undefined4 *)((int)puVar1 + iVar3);
      for (; puVar4 != puVar1; puVar1 = (undefined4 *)((int)puVar1 + 1)) {
        puVar7 = puVar7 + 1;
        *puVar7 = *(undefined1 *)puVar1;
      }
    }
    else {
      if (uVar6 == 0) {
        puVar7 = (undefined1 *)((int)puVar5 + iVar3);
        puVar8 = (undefined1 *)(iVar3 + -1 + (int)puVar1);
        while (puVar2 = puVar8 + (1 - (int)puVar1), ((uint)puVar7 & 3) != 0) {
          if (puVar8 == (undefined1 *)((int)puVar1 + -1)) {
            return puVar5;
          }
          puVar7 = puVar7 + -1;
          *puVar7 = *puVar8;
          puVar8 = puVar8 + -1;
        }
        puVar4 = (undefined4 *)((int)puVar1 + (int)puVar2);
        puVar10 = (undefined4 *)((int)puVar5 + (int)puVar2);
        puVar11 = (undefined4 *)((int)puVar4 - ((uint)puVar2 & 0xfffffffc));
        while (puVar4 != puVar11) {
          puVar4 = puVar4 + -1;
          puVar10 = puVar10 + -1;
          *puVar10 = *puVar4;
        }
        iVar3 = (int)puVar2 - ((uint)puVar2 & 0xfffffffc);
      }
      puVar4 = (undefined4 *)((int)puVar1 + iVar3);
      puVar7 = (undefined1 *)((int)puVar5 + iVar3);
      while (puVar1 != puVar4) {
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        puVar7 = puVar7 + -1;
        *puVar7 = *(undefined1 *)puVar4;
      }
    }
  }
  return puVar5;
}

