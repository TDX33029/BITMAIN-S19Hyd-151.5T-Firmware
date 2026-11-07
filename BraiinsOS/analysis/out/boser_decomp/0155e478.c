// FUN_0155e478 @ 0155e478 size=80 calls_out=1 calls_in=0
// strings: 

bool FUN_0155e478(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8) * 0x14;
  do {
    iVar3 = iVar1;
    if (iVar3 == 0) break;
    iVar2 = FUN_01577618(iVar4,param_2,param_3);
    iVar4 = iVar4 + 0x14;
    iVar1 = iVar3 + -0x14;
  } while (iVar2 != 0);
  return iVar3 == 0;
}

