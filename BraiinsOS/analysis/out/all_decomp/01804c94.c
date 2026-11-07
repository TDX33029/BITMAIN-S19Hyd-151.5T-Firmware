// FUN_01804c94 @ 01804c94 size=256 calls_out=0 calls_in=1
// strings: 

int * FUN_01804c94(int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return param_1;
  }
  uVar7 = param_1[1];
  uVar6 = param_1[3];
  piVar1 = (int *)(uVar7 * 0xc);
  do {
    if (uVar6 <= uVar7) {
      return piVar1;
    }
    iVar4 = *param_1;
    piVar2 = piVar1 + 3;
    uVar5 = *(uint *)((int)piVar1 + iVar4 + 4);
    if (param_2 <= uVar5) {
      *(uint *)((int)piVar1 + iVar4 + 4) = uVar5 - param_2;
      return (int *)0x0;
    }
    uVar3 = *(uint *)((int)piVar1 + iVar4 + 8);
    *(undefined4 *)((int)piVar1 + iVar4 + 4) = 0;
    if (param_2 - uVar5 < uVar3) {
      param_2 = (uVar5 + uVar3) - param_2;
      *(uint *)((int)piVar1 + iVar4 + 8) = param_2;
      if (param_3 <= param_2) {
        return (int *)0x0;
      }
      if (uVar7 + 1 < uVar6) {
        *(uint *)((int)piVar1 + iVar4 + 0x10) = *(int *)((int)piVar1 + iVar4 + 0x10) + param_2;
      }
      param_1[1] = uVar7 + 1;
      return (int *)0x0;
    }
    param_2 = (param_2 - uVar5) - uVar3;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((int)piVar1 + iVar4 + 8) = 0;
    param_1[1] = uVar7;
    piVar1 = piVar2;
  } while (param_2 != 0);
  return piVar2;
}

