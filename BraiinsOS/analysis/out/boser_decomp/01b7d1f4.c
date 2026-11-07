// FUN_01b7d1f4 @ 01b7d1f4 size=164 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_01b7d1f4(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x44) & 2) == 0) {
    uVar1 = 0;
  }
  else {
    if ((DAT_01d53478 != (code *)0x0) && (*(int *)(param_1 + 0x40) != 0)) {
      (*DAT_01d53478)(param_1,*(undefined4 *)(param_1 + 0x40));
    }
    uVar1 = *(undefined4 *)(param_1 + 0x40);
  }
  return uVar1;
}

