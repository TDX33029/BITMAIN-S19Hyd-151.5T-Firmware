// FUN_006b0ca4 @ 006b0ca4 size=196 calls_out=4 calls_in=1
// strings: 

void FUN_006b0ca4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((*(code **)(param_4 + 0x38) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_4 + 0x38))(param_1), iVar1 != 0)) {
    uVar5 = *(undefined8 *)(param_4 + 0x8c);
    do {
      do {
        uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uVar2 = (undefined4)uVar5;
        uVar5 = FUN_00700b3c(uVar2,uVar4,0x21);
      } while ((int)uVar5 != 0);
      uVar5 = FUN_006a4c58(uVar2,uVar4);
    } while ((int)uVar5 != 0);
    FUN_006b0a2c(param_1,param_2,param_3,uVar2,uVar4);
    iVar3 = *(int *)(param_4 + 0x1c);
    for (iVar1 = *(int *)(param_4 + 0x20) * 0x6c; iVar1 != 0; iVar1 = iVar1 + -0x6c) {
      FUN_006b0c14(param_1,param_2,param_3,iVar3 + 0xc);
      iVar3 = iVar3 + 0x6c;
    }
  }
  return;
}

