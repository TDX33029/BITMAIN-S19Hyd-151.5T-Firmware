// FUN_015835bc @ 015835bc size=148 calls_out=1 calls_in=0
// strings: 

int FUN_015835bc(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_34;
  int local_30;
  undefined4 local_28;
  
  if ((*param_2 == '\x04') && (*(int *)(param_2 + 0xc) != 0)) {
    iVar4 = *(int *)(param_2 + 8);
    iVar2 = *(int *)(param_2 + 0xc) * 0x18;
    iVar3 = 0;
    do {
      local_34 = 0x80000001;
      local_30 = iVar3;
      local_28 = param_3;
      iVar1 = FUN_015776f4(param_1,iVar4,&local_34,param_4,param_5);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar4 = iVar4 + 0x18;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -0x18;
    } while (iVar2 != 0);
  }
  return 0;
}

