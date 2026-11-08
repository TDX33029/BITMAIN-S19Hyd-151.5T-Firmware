// FUN_006b1524 @ 006b1524 size=100 calls_out=3 calls_in=3
// strings: 

void FUN_006b1524(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_4,param_3);
  do {
    do {
      uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar1 = (undefined4)uVar3;
      uVar3 = FUN_00700b3c(uVar1,uVar2,0x21);
    } while ((int)uVar3 != 0);
    uVar3 = FUN_006a4c58(uVar1,uVar2);
  } while ((int)uVar3 != 0);
  FUN_006c176c(param_1,param_2,uVar1,uVar2);
  return;
}

