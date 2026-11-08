// FUN_006b0c14 @ 006b0c14 size=144 calls_out=3 calls_in=3
// strings: 

void FUN_006b0c14(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((*(code **)(param_4 + 0x54) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_4 + 0x54))(param_1), iVar1 != 0)) {
    uVar4 = *(undefined8 *)(param_4 + 0x10);
    do {
      do {
        uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
        uVar2 = (undefined4)uVar4;
        uVar4 = FUN_00700b3c(uVar2,uVar3,0x21);
      } while ((int)uVar4 != 0);
      uVar4 = FUN_006a4c58(uVar2,uVar3);
    } while ((int)uVar4 != 0);
    FUN_006b0a2c(param_1,param_2,param_3,uVar2,uVar3);
  }
  return;
}

