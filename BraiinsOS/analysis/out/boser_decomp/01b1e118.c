// FUN_01b1e118 @ 01b1e118 size=72 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_01b1e118(int param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  
  psVar2 = (short *)(param_1 + -2);
  psVar1 = (short *)(param_2 + -2);
  do {
    psVar2 = psVar2 + 1;
    psVar1 = psVar1 + 1;
    *psVar2 = *psVar2 + *psVar1;
  } while (psVar2 != (short *)(param_1 + 0x1fe));
  return 0;
}

