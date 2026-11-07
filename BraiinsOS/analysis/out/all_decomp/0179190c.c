// FUN_0179190c @ 0179190c size=124 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_0179190c(int param_1)

{
  undefined4 *puVar1;
  uint local_c;
  
  for (local_c = 0; local_c < 0x19; local_c = local_c + 1) {
    puVar1 = (undefined4 *)(param_1 + local_c * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  return 0;
}

