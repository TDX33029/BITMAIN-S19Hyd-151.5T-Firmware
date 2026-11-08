// FUN_015326dc @ 015326dc size=96 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015326dc(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 == '\x04') {
    iVar3 = *(int *)(param_2 + 8);
    iVar2 = *(int *)(param_2 + 0xc) * 0x18;
    do {
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = FUN_01577618(param_1,iVar3,param_3);
      iVar2 = iVar2 + -0x18;
      iVar3 = iVar3 + 0x18;
    } while (iVar1 == 0);
  }
  return 1;
}

