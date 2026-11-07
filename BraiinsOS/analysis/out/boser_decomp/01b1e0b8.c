// FUN_01b1e0b8 @ 01b1e0b8 size=96 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1e0b8(int param_1)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = (short *)(param_1 + -2);
  do {
    psVar2 = psVar2 + 1;
    iVar1 = *psVar2 * 0x549;
    *psVar2 = (short)((uint)((short)((short)iVar1 + *psVar2 * 0x4b00) * -0xd01 + iVar1) >> 0x10);
  } while ((short *)(param_1 + 0x1fe) != psVar2);
  return 0;
}

