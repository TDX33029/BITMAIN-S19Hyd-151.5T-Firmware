// FUN_0158d73c @ 0158d73c size=128 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0158d73c(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*param_2 == '\x05') && (*(int *)(param_1 + 8) != 0)) {
    iVar2 = *(int *)(param_1 + 8) << 5;
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 8);
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    do {
      iVar1 = FUN_0196b2cc(uVar4,uVar5,puVar3[-1],*puVar3);
      if ((iVar1 != 0) && (iVar1 = FUN_01577618(puVar3 + 1,iVar1,param_3), iVar1 == 0)) {
        return 0;
      }
      puVar3 = puVar3 + 8;
      iVar2 = iVar2 + -0x20;
    } while (iVar2 != 0);
  }
  return 1;
}

