// FUN_01b1cf6c @ 01b1cf6c size=140 calls_out=0 calls_in=10
// strings: 

uint FUN_01b1cf6c(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)(param_1 + -4);
  uVar1 = 0;
  do {
    puVar2 = puVar2 + 1;
    uVar3 = *puVar2;
    uVar3 = (param_2 + -1) -
            ((-uVar3 ^ uVar3) & (uVar3 >> 0x1f | ((int)uVar3 >> 0x1f) << 1) ^ uVar3);
    uVar1 = uVar1 | uVar3 >> 0x1f | ((int)uVar3 >> 0x1f) << 1;
  } while (puVar2 != (uint *)(param_1 + 0x3fc));
  return uVar1;
}

