// FUN_01b7cefc @ 01b7cefc size=60 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01b7cefc(int param_1)

{
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfe;
  return 0;
}

