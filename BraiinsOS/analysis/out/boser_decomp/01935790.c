// FUN_01935790 @ 01935790 size=392 calls_out=1 calls_in=0
// strings: 

undefined4 *
FUN_01935790(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint unaff_r4;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  if (param_4 != param_3) {
    unaff_r4 = param_5;
  }
  if (param_4 == param_3 || unaff_r4 == 0) {
    return param_1;
  }
  uVar2 = param_4 - param_3;
  uVar8 = (int)param_1 - param_4;
  uVar9 = (int)param_1 - param_3;
  uVar5 = (int)param_1 + uVar2;
  if (!CARRY4((uint)param_1,uVar2)) {
    uVar5 = uVar2;
  }
  if (uVar9 < unaff_r4) {
    if (uVar5 < unaff_r4) {
      if (uVar8 < unaff_r4) {
        iVar10 = uVar9 - uVar8;
        FUN_01bed864(param_2 + iVar10,param_2,(unaff_r4 - uVar9) * 4);
        FUN_01bed864(param_2,param_2 + ((int)param_1 - iVar10),iVar10 * 4);
        iVar10 = uVar8 * 4;
        puVar1 = param_2 + param_4;
        puVar13 = param_2 + param_3;
      }
      else {
        FUN_01bed864(param_2 + param_4 + uVar9,param_2,(unaff_r4 - uVar9) * 4);
        iVar10 = uVar9 * 4;
        puVar1 = param_2 + param_4;
        puVar13 = param_2 + param_3;
      }
      goto LAB_0193590c;
    }
    puVar1 = param_2 + param_4;
    if (unaff_r4 <= uVar8) {
      FUN_01bed864(puVar1,param_2 + param_3,uVar9 * 4);
      puVar1 = puVar1 + uVar9;
      iVar10 = (unaff_r4 - uVar9) * 4;
      puVar13 = param_2;
      goto LAB_0193590c;
    }
    FUN_01bed864(puVar1,param_2 + param_3,uVar9 * 4);
    FUN_01bed864(puVar1 + uVar9,param_2,(uVar8 - uVar9) * 4);
    puVar13 = param_2 + (uVar8 - uVar9);
  }
  else {
    if (unaff_r4 <= uVar8) {
      puVar1 = param_2 + param_4;
      puVar13 = param_2 + param_3;
      iVar10 = unaff_r4 << 2;
      goto LAB_0193590c;
    }
    if (uVar5 < unaff_r4) {
      puVar13 = param_2 + param_3;
      FUN_01bed864(param_2,puVar13 + uVar8,(unaff_r4 - uVar8) * 4);
      puVar1 = param_2 + param_4;
      iVar10 = uVar8 * 4;
      goto LAB_0193590c;
    }
    FUN_01bed864(param_2 + param_4,param_2 + param_3,uVar8 * 4);
    puVar13 = param_2 + param_3 + uVar8;
  }
  iVar10 = (unaff_r4 - uVar8) * 4;
  puVar1 = param_2;
LAB_0193590c:
  if (puVar1 != puVar13) {
    if ((undefined1 *)((int)puVar13 + (-(int)puVar1 - iVar10)) <= (undefined1 *)(iVar10 * -2)) {
      puVar1 = (undefined4 *)FUN_01bed4e2();
      return puVar1;
    }
    uVar5 = ((uint)puVar1 ^ (uint)puVar13) & 3;
    if (puVar1 < puVar13) {
      puVar4 = puVar1;
      puVar11 = puVar1;
      if (uVar5 == 0) {
        for (; uVar5 = ((int)puVar1 + iVar10) - (int)puVar4, ((uint)puVar4 & 3) != 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1)) {
          if (puVar4 == (undefined4 *)((int)puVar1 + iVar10)) {
            return puVar1;
          }
          *(undefined1 *)puVar4 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        uVar2 = uVar5 & 0xfffffffc;
        puVar12 = puVar13 + -1;
        puVar11 = (undefined4 *)((int)puVar4 + uVar2);
        for (; puVar4 != puVar11; puVar4 = puVar4 + 1) {
          puVar12 = puVar12 + 1;
          *puVar4 = *puVar12;
        }
        iVar10 = uVar5 - uVar2;
        puVar13 = (undefined4 *)((int)puVar13 + uVar2);
      }
      puVar6 = (undefined1 *)((int)puVar11 + -1);
      puVar4 = (undefined4 *)((int)puVar13 + iVar10);
      for (; puVar4 != puVar13; puVar13 = (undefined4 *)((int)puVar13 + 1)) {
        puVar6 = puVar6 + 1;
        *puVar6 = *(undefined1 *)puVar13;
      }
    }
    else {
      if (uVar5 == 0) {
        puVar6 = (undefined1 *)((int)puVar1 + iVar10);
        puVar7 = (undefined1 *)(iVar10 + -1 + (int)puVar13);
        while (puVar3 = puVar7 + (1 - (int)puVar13), ((uint)puVar6 & 3) != 0) {
          if (puVar7 == (undefined1 *)((int)puVar13 + -1)) {
            return puVar1;
          }
          puVar6 = puVar6 + -1;
          *puVar6 = *puVar7;
          puVar7 = puVar7 + -1;
        }
        puVar4 = (undefined4 *)((int)puVar13 + (int)puVar3);
        puVar11 = (undefined4 *)((int)puVar1 + (int)puVar3);
        puVar12 = (undefined4 *)((int)puVar4 - ((uint)puVar3 & 0xfffffffc));
        while (puVar4 != puVar12) {
          puVar4 = puVar4 + -1;
          puVar11 = puVar11 + -1;
          *puVar11 = *puVar4;
        }
        iVar10 = (int)puVar3 - ((uint)puVar3 & 0xfffffffc);
      }
      puVar4 = (undefined4 *)((int)puVar13 + iVar10);
      puVar6 = (undefined1 *)((int)puVar1 + iVar10);
      while (puVar13 != puVar4) {
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        puVar6 = puVar6 + -1;
        *puVar6 = *(undefined1 *)puVar4;
      }
    }
  }
  return puVar1;
}

