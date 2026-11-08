// FUN_01be2dd8 @ 01be2dd8 size=82 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01be2dd8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(int *)param_1 = param_1;
  iVar2 = FUN_01bee2d0(param_1 + 0x70);
  if (iVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (iVar2 == 0) {
      DAT_01d53570 = 1;
    }
    *(undefined4 *)(param_1 + 0x18) = 2;
    software_interrupt(0);
    *(undefined4 **)(param_1 + 0x10) = &DAT_01d53490;
    uVar3 = 0;
    *(undefined **)(param_1 + 0x58) = &DAT_01d53590;
    uVar1 = DAT_01d53568;
    *(int *)(param_1 + 0x44) = param_1 + 0x44;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(int *)(param_1 + 4) = param_1;
    *(int *)(param_1 + 8) = param_1;
  }
  return uVar3;
}

