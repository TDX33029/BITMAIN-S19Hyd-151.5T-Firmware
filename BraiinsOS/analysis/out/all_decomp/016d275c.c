// FUN_016d275c @ 016d275c size=82 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016d275c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(int *)param_1 = param_1;
  iVar2 = FUN_016de064(param_1 + 0x70);
  if (iVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (iVar2 == 0) {
      DAT_018ddb08 = 1;
    }
    *(undefined4 *)(param_1 + 0x18) = 2;
    software_interrupt(0);
    *(undefined4 **)(param_1 + 0x10) = &DAT_018dda28;
    uVar3 = 0;
    *(undefined **)(param_1 + 0x58) = &DAT_018ddb28;
    uVar1 = DAT_018ddb00;
    *(int *)(param_1 + 0x44) = param_1 + 0x44;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(int *)(param_1 + 4) = param_1;
    *(int *)(param_1 + 8) = param_1;
  }
  return uVar3;
}

