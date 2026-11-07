// FUN_016d7fdc @ 016d7fdc size=148 calls_out=4 calls_in=4
// strings: 

void FUN_016d7fdc(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_016ebb38();
  if (*param_1 == 0x110008) {
    FUN_016d80d4(param_1 + 1);
    FUN_016d80d4(param_1 + 2);
    return;
  }
  iVar1 = 2;
  if (0x10 < *param_1 >> 0x10) {
    iVar1 = *param_1 - 0x110000;
  }
  switch(iVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    return;
  case 4:
    FUN_016d8154(param_1 + 1);
    return;
  case 6:
    uVar2 = param_1[1];
    FUN_016d7fdc(uVar2);
    thunk_FUN_01be4678(uVar2);
    return;
  default:
    FUN_016d8104(param_1 + 1);
    return;
  }
}

