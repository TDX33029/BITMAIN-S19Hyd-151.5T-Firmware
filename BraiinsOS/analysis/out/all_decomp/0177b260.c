// FUN_0177b260 @ 0177b260 size=84 calls_out=1 calls_in=1
// strings: 

bool FUN_0177b260(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0177b23c();
  if (iVar1 == 0) {
    return (param_1 & 0xffffffdf) - 0x41 < 6;
  }
  return true;
}

