// FUN_01a9ce70 @ 01a9ce70 size=140 calls_out=1 calls_in=4
// strings: 

void FUN_01a9ce70(int param_1,undefined1 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  byte local_23;
  byte local_22;
  undefined1 local_21;
  
  iVar2 = 10;
  uVar1 = param_1 << 3;
  do {
    if (uVar1 >> 7 == 0) {
      local_22 = (byte)uVar1;
      FUN_01ac6cbc(param_3,&local_22,1);
      break;
    }
    local_23 = (byte)uVar1 | 0x80;
    FUN_01ac6cbc(param_3,&local_23,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  local_21 = param_2;
  FUN_01ac6cbc(param_3,&local_21,1);
  return;
}

