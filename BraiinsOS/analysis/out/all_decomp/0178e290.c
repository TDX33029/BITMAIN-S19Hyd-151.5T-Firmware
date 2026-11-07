// FUN_0178e290 @ 0178e290 size=168 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0178e290(int param_1,uint param_2)

{
  if (param_2 < 0x15) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(&DAT_0044fffc + (param_2 - 1) * 4);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&DAT_0045004c + (param_2 - 1) * 4);
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0x1efce;
    *(undefined4 *)(param_1 + 0x54) = 0x2ab;
  }
  return 0;
}

