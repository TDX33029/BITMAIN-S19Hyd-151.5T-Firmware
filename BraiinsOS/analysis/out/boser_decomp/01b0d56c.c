// FUN_01b0d56c @ 01b0d56c size=96 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b0d56c(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = (uint *)(param_1 + -4);
  puVar1 = (uint *)(param_2 + -4);
  do {
    puVar2 = puVar2 + 1;
    uVar3 = *puVar2;
    puVar1 = puVar1 + 1;
    uVar4 = *puVar1;
    uVar5 = uVar4;
    if ((param_3 & 1) == 0) {
      uVar5 = uVar3;
    }
    *puVar2 = uVar5;
    *puVar1 = *puVar1 ^ (uVar3 ^ uVar4) * param_3;
  } while (puVar2 != (uint *)(param_1 + 0x24));
  return 0;
}

