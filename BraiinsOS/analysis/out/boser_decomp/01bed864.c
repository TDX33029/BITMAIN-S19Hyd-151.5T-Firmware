// FUN_01bed864 @ 01bed864 size=218 calls_out=1 calls_in=568
// strings: 

undefined4 * FUN_01bed864(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    if ((undefined1 *)((int)param_2 + (-(int)param_1 - param_3)) <= (undefined1 *)(param_3 * -2)) {
      puVar2 = (undefined4 *)FUN_01bed4e2();
      return puVar2;
    }
    uVar3 = ((uint)param_1 ^ (uint)param_2) & 3;
    if (param_1 < param_2) {
      puVar2 = param_1;
      puVar7 = param_1;
      if (uVar3 == 0) {
        for (; uVar3 = ((int)param_1 + param_3) - (int)puVar2, ((uint)puVar2 & 3) != 0;
            puVar2 = (undefined4 *)((int)puVar2 + 1)) {
          if (puVar2 == (undefined4 *)((int)param_1 + param_3)) {
            return param_1;
          }
          *(undefined1 *)puVar2 = *(undefined1 *)param_2;
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
        uVar6 = uVar3 & 0xfffffffc;
        puVar8 = param_2 + -1;
        puVar7 = (undefined4 *)((int)puVar2 + uVar6);
        for (; puVar2 != puVar7; puVar2 = puVar2 + 1) {
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar8;
        }
        param_3 = uVar3 - uVar6;
        param_2 = (undefined4 *)((int)param_2 + uVar6);
      }
      puVar4 = (undefined1 *)((int)puVar7 + -1);
      puVar2 = (undefined4 *)((int)param_2 + param_3);
      for (; puVar2 != param_2; param_2 = (undefined4 *)((int)param_2 + 1)) {
        puVar4 = puVar4 + 1;
        *puVar4 = *(undefined1 *)param_2;
      }
    }
    else {
      if (uVar3 == 0) {
        puVar4 = (undefined1 *)((int)param_1 + param_3);
        puVar5 = (undefined1 *)(param_3 + -1 + (int)param_2);
        while (puVar1 = puVar5 + (1 - (int)param_2), ((uint)puVar4 & 3) != 0) {
          if (puVar5 == (undefined1 *)((int)param_2 + -1)) {
            return param_1;
          }
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar5;
          puVar5 = puVar5 + -1;
        }
        puVar2 = (undefined4 *)((int)param_2 + (int)puVar1);
        puVar7 = (undefined4 *)((int)param_1 + (int)puVar1);
        puVar8 = (undefined4 *)((int)puVar2 - ((uint)puVar1 & 0xfffffffc));
        while (puVar2 != puVar8) {
          puVar2 = puVar2 + -1;
          puVar7 = puVar7 + -1;
          *puVar7 = *puVar2;
        }
        param_3 = (int)puVar1 - ((uint)puVar1 & 0xfffffffc);
      }
      puVar2 = (undefined4 *)((int)param_2 + param_3);
      puVar4 = (undefined1 *)((int)param_1 + param_3);
      while (param_2 != puVar2) {
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined1 *)puVar2;
      }
    }
  }
  return param_1;
}

