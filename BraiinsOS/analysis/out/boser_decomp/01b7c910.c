// FUN_01b7c910 @ 01b7c910 size=168 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b7c910(int param_1,uint param_2)

{
  if (param_2 < 0x15) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(&DAT_00561948 + (param_2 - 1) * 4);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&DAT_00561998 + (param_2 - 1) * 4);
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0x1efce;
    *(undefined4 *)(param_1 + 0x54) = 0x2ab;
  }
  return 0;
}

