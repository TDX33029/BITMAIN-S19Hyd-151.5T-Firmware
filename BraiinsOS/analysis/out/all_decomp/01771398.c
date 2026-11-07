// FUN_01771398 @ 01771398 size=136 calls_out=0 calls_in=4
// strings: 

undefined4 FUN_01771398(undefined8 *param_1)

{
  *param_1 = 0x6a09e667f3bcc908;
  *(undefined4 *)(param_1 + 1) = 0x84caa73b;
  *(undefined4 *)((int)param_1 + 0xc) = 0xbb67ae85;
  param_1[2] = 0x3c6ef372fe94f82b;
  *(undefined4 *)(param_1 + 3) = 0x5f1d36f1;
  *(undefined4 *)((int)param_1 + 0x1c) = 0xa54ff53a;
  param_1[4] = 0x510e527fade682d1;
  *(undefined4 *)(param_1 + 5) = 0x2b3e6c1f;
  *(undefined4 *)((int)param_1 + 0x2c) = 0x9b05688c;
  param_1[6] = 0x1f83d9abfb41bd6b;
  *(undefined4 *)(param_1 + 7) = 0x137e2179;
  *(undefined4 *)((int)param_1 + 0x3c) = 0x5be0cd19;
  param_1[0x1a] = 0x4000000000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  return 1;
}

