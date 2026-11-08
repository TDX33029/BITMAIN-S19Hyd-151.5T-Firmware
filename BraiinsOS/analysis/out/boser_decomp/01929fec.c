// FUN_01929fec @ 01929fec size=80 calls_out=0 calls_in=1
// strings: 

byte FUN_01929fec(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == param_3) {
    if (*(short *)(param_2 + 0x28) == *(short *)(param_4 + 0x28)) {
      bVar1 = *(short *)(param_2 + 0x28) != 0x178 ||
              *(short *)(param_2 + 0x2a) == *(short *)(param_4 + 0x2a);
    }
  }
  return bVar1 ^ 1;
}

