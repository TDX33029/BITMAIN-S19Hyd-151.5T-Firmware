// FUN_016ebad0 @ 016ebad0 size=176 calls_out=6 calls_in=3
// strings: 

void FUN_016ebad0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_016ebb38();
  if (*param_1 == 0x110008) {
    FUN_016ebf1c(param_1 + 1);
    FUN_016ebf1c(param_1 + 2);
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
    FUN_016e3fb0(param_1 + 1);
    return;
  case 6:
    uVar2 = param_1[1];
    FUN_016ebad0(uVar2);
    thunk_FUN_01be4678(uVar2);
    return;
  default:
    FUN_016d8104(param_1 + 1);
    return;
  }
}

