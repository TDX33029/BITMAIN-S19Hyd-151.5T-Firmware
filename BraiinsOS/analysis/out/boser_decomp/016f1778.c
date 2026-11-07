// FUN_016f1778 @ 016f1778 size=144 calls_out=5 calls_in=2
// strings: 

void FUN_016f1778(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
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
    FUN_016f1858(uVar2);
    thunk_FUN_01be4678(uVar2);
    return;
  default:
    uVar2 = param_1[2];
    FUN_016e3ff8(uVar2,param_1[3]);
    FUN_0134aee0(param_1[1],uVar2,4,0x58);
    return;
  }
}

