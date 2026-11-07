// FUN_01780d58 @ 01780d58 size=128 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01780d58(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_1[1] != 0) {
    uVar2 = param_1[2];
    iVar4 = param_1[1] << 3;
    puVar3 = (uint *)(*param_1 + 4);
    do {
      if (uVar2 == 0) {
        return 0;
      }
      uStack_2c = puVar3[-1];
      uVar5 = *puVar3;
      if (uVar2 <= *puVar3) {
        uVar5 = uVar2;
      }
      uStack_28 = uVar5;
      iVar1 = FUN_018c39f8(&uStack_2c,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = uVar2 - uVar5;
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -8;
    } while (iVar4 != 0);
  }
  return 0;
}

