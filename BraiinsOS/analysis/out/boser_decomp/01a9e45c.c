// FUN_01a9e45c @ 01a9e45c size=240 calls_out=1 calls_in=4
// strings: 

void FUN_01a9e45c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  iVar2 = 10;
  uVar1 = param_1 << 3 | 2;
  do {
    if (uVar1 >> 7 == 0) {
      local_23 = (byte)uVar1;
      FUN_01ac6cbc(param_4,&local_23,1);
      break;
    }
    local_24 = (byte)uVar1 | 0x80;
    FUN_01ac6cbc(param_4,&local_24,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  iVar2 = 10;
  uVar1 = param_3;
  do {
    if (uVar1 >> 7 == 0) {
      local_21 = (byte)uVar1;
      FUN_01ac6cbc(param_4,&local_21,1);
      break;
    }
    local_22 = (byte)uVar1 | 0x80;
    FUN_01ac6cbc(param_4,&local_22,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  FUN_01ac6cbc(param_4,param_2,param_3);
  return;
}

