// FUN_00f0734c @ 00f0734c size=144 calls_out=1 calls_in=0
// strings: 

void FUN_00f0734c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  byte local_1b;
  byte local_1a [2];
  
  iVar2 = 10;
  uVar1 = param_1 << 3 | 2;
  do {
    if (uVar1 >> 7 == 0) {
      local_1a[0] = (byte)uVar1;
      FUN_01284394(param_2,local_1a,1);
      break;
    }
    local_1b = (byte)uVar1 | 0x80;
    FUN_01284394(param_2,&local_1b,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  local_1a[1] = 0;
  FUN_01284394(param_2,local_1a + 1,1);
  return;
}

