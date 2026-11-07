// FUN_01b7bb84 @ 01b7bb84 size=132 calls_out=1 calls_in=2
// strings: 

int FUN_01b7bb84(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_01b7baf0(param_1,param_2);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xf7 | (param_2 >> 0x1c != 0) << 3;
  }
  return iVar1;
}

