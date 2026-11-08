// FUN_01b1c79c @ 01b1c79c size=136 calls_out=1 calls_in=0
// strings: 

uint FUN_01b1c79c(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint extraout_r2;
  undefined8 uVar6;
  
  puVar5 = (uint *)(param_1 + -4);
  uVar3 = 0;
  puVar1 = puVar5;
  do {
    puVar1 = puVar1 + 1;
    uVar3 = uVar3 | *puVar1;
  } while (puVar1 != (uint *)(param_1 + 0x48));
  uVar2 = 0;
  puVar1 = &DAT_0054b11c;
  do {
    puVar5 = puVar5 + 1;
    uVar2 = uVar2 | *puVar1 ^ *puVar5;
    puVar1 = puVar1 + 1;
  } while (puVar5 != (uint *)(param_1 + 0x48));
  uVar6 = FUN_01b0c688(uVar2,uVar3);
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = FUN_01b0c688(uVar4,uVar4,(int)uVar6);
  return ~(extraout_r2 | uVar3);
}

