// FUN_0171429c @ 0171429c size=180 calls_out=0 calls_in=5
// strings: 

int FUN_0171429c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (int)-(param_1 >> 0x10) >> 0x1f;
  uVar5 = uVar4 & 0x10;
  uVar4 = (param_1 >> 0x10 ^ param_1) & uVar4 ^ param_1;
  if (param_1 != 0) {
    uVar5 = uVar5 + 1;
  }
  uVar1 = (int)-(uVar4 >> 8) >> 0x1f;
  uVar4 = (uVar4 >> 8 ^ uVar4) & uVar1 ^ uVar4;
  uVar2 = (int)-(uVar4 >> 4) >> 0x1f;
  uVar4 = (uVar4 >> 4 ^ uVar4) & uVar2 ^ uVar4;
  uVar3 = (int)-(uVar4 >> 2) >> 0x1f;
  return (uVar5 + (uVar1 & 8) + (uVar2 & 4) + (uVar3 & 2)) -
         ((int)-(((uVar4 ^ uVar4 >> 2) & uVar3 ^ uVar4) >> 1) >> 0x1f);
}

