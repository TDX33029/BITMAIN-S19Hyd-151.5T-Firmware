// FUN_01becee8 @ 01becee8 size=98 calls_out=1 calls_in=0
// strings: 

uint FUN_01becee8(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x54);
  uVar2 = piVar4[1];
  uVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1c);
  puVar1 = (undefined1 *)*piVar4;
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    FUN_01bed4e2(puVar1,*(int *)(param_1 + 0x1c),uVar3);
    puVar1 = (undefined1 *)(*piVar4 + uVar3);
    *piVar4 = (int)puVar1;
    uVar2 = piVar4[1] - uVar3;
    piVar4[1] = uVar2;
  }
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  if (uVar2 != 0) {
    FUN_01bed4e2(puVar1,param_2,uVar2);
    puVar1 = (undefined1 *)(*piVar4 + uVar2);
    *piVar4 = (int)puVar1;
    piVar4[1] = piVar4[1] - uVar2;
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x2c);
  return param_3;
}

