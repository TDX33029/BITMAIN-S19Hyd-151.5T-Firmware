// FUN_006b1490 @ 006b1490 size=148 calls_out=4 calls_in=1
// strings: 

void FUN_006b1490(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_3 + 0x8c);
  do {
    do {
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uVar3 = (undefined4)uVar5;
      uVar5 = FUN_00700b3c(uVar3,uVar4,0x21);
    } while ((int)uVar5 != 0);
    uVar5 = FUN_006a4c58(uVar3,uVar4);
  } while ((int)uVar5 != 0);
  FUN_006b0d68(param_1,param_2,uVar3,uVar4);
  iVar1 = *(int *)(param_3 + 0x1c);
  for (iVar2 = *(int *)(param_3 + 0x20) * 0x6c; iVar2 != 0; iVar2 = iVar2 + -0x6c) {
    FUN_006b1430(param_1,param_2,iVar1 + 0xc);
    iVar1 = iVar1 + 0x6c;
  }
  return;
}

