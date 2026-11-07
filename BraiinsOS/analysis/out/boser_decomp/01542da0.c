// FUN_01542da0 @ 01542da0 size=132 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01542da0(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*param_2 == '\x05') && (*(int *)(param_1 + 8) != 0)) {
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 8);
    iVar3 = *(int *)(param_1 + 8) << 5;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    do {
      iVar1 = FUN_0196b2cc(uVar4,uVar5,puVar2[-1],*puVar2);
      if ((iVar1 != 0) && (iVar1 = FUN_01577618(puVar2 + 1,param_2,param_3), iVar1 == 0)) {
        return 0;
      }
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -0x20;
    } while (iVar3 != 0);
  }
  return 1;
}

