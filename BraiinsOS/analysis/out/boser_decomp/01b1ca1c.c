// FUN_01b1ca1c @ 01b1ca1c size=100 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1ca1c(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + -4);
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
    *puVar2 = ((uint)(&UNK_007fe001 + uVar1) ^ uVar1) & (uVar1 >> 0x1f | ((int)uVar1 >> 0x1f) << 1)
              ^ uVar1;
  } while (puVar2 != (uint *)(param_1 + 0x3fc));
  return 0;
}

