// FUN_01583560 @ 01583560 size=92 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01583560(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 1;
  if (*param_2 == '\x04') {
    iVar4 = *(int *)(param_2 + 8);
    iVar3 = *(int *)(param_2 + 0xc) * 0x18;
    do {
      if (iVar3 == 0) {
        return 1;
      }
      iVar1 = FUN_01577618(param_1,iVar4,param_3);
      iVar3 = iVar3 + -0x18;
      iVar4 = iVar4 + 0x18;
    } while (iVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}

