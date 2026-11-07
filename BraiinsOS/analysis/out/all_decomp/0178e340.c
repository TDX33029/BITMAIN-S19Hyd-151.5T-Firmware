// FUN_0178e340 @ 0178e340 size=188 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0178e340(int param_1)

{
  undefined4 *puVar1;
  uint local_c;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    *(undefined4 *)(param_1 + (local_c + 0x2a) * 4) = 0;
    puVar1 = (undefined4 *)(param_1 + (local_c + 0xd) * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return 0;
}

