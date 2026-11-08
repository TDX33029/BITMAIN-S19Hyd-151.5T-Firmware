// FUN_015829e4 @ 015829e4 size=72 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015829e4(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_1 + 0xc);
  uVar4 = (int)puVar5 - *(int *)(param_1 + 4);
  uVar2 = param_2;
  if (uVar4 >> 2 <= param_2) {
    uVar2 = uVar4 >> 2;
  }
  puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4);
  *(undefined4 **)(param_1 + 4) = puVar3;
  FUN_01582a2c();
  uVar1 = 0;
  if ((param_2 <= uVar4 >> 2) && (puVar3 != puVar5)) {
    uVar1 = *puVar3;
    *(undefined4 **)(param_1 + 4) = puVar3 + 1;
  }
  return uVar1;
}

