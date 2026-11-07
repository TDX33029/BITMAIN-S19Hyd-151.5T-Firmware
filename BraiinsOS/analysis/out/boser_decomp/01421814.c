// FUN_01421814 @ 01421814 size=76 calls_out=2 calls_in=16
// strings: 

void FUN_01421814(int param_1)

{
  FUN_0172f038(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 4;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(uint *)(param_1 + 0x90) < 3) {
    FUN_014216c0((uint *)(param_1 + 0x90));
  }
  *(undefined1 *)(param_1 + 0xf7) = 2;
  *(undefined4 *)(param_1 + 0x90) = 6;
  return;
}

