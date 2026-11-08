// FUN_01781988 @ 01781988 size=152 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01781988(uint *param_1,code *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar5 = param_1[1];
    uVar4 = 0;
    do {
      iVar2 = *(int *)(uVar5 + uVar4 * 4);
      while (iVar2 != 0) {
        (*param_2)(param_3);
        uVar3 = *param_1;
        uVar4 = uVar4 + 1;
        if (uVar3 <= uVar4) goto LAB_01781a10;
        uVar5 = param_1[1];
        iVar2 = *(int *)(uVar5 + uVar4 * 4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
LAB_01781a10:
  uVar1 = FUN_01781944(param_1);
  return uVar1;
}

