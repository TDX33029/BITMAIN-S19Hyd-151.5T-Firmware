// FUN_01544b1c @ 01544b1c size=232 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_01544b1c(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  uVar2 = 1;
  if (*param_2 == '\x04') {
    iVar3 = *(int *)(param_2 + 0xc);
    FUN_018a7af8(&local_30,iVar3);
    FUN_0154589c(param_1,param_2,&local_30,param_3,1);
    if (iVar3 != 0) {
      iVar6 = 0;
      iVar4 = *(int *)(param_2 + 8);
      iVar3 = iVar3 * 0x18;
      iVar5 = *(int *)(param_1 + 0x34);
      uVar2 = 0;
      while (local_28 != iVar6) {
        if ((*(char *)(local_2c + iVar6) == '\0') &&
           ((iVar5 == 0 || (iVar1 = FUN_01577618((int *)(param_1 + 0x34),iVar4,param_3), iVar1 == 0)
            ))) goto LAB_01544bec;
        iVar4 = iVar4 + 0x18;
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -0x18;
        if (iVar3 == 0) break;
      }
    }
    uVar2 = 1;
LAB_01544bec:
    FUN_019bb7e0(local_30,local_2c);
  }
  return uVar2;
}

