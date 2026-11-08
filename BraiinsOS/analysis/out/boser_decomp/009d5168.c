// FUN_009d5168 @ 009d5168 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_009d5168(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = param_1[3];
  iVar4 = 0;
  if (uVar3 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar5 = param_1[2];
    uVar1 = uVar5 - uVar2;
    if (uVar5 < uVar2) {
      uVar1 = uVar5;
    }
    if (uVar2 - uVar1 < uVar3) {
      iVar4 = uVar3 - (uVar2 - uVar1);
    }
    else {
      uVar2 = uVar1 + uVar3;
    }
  }
  uVar3 = param_1[1];
  FUN_009d085c(uVar1 * 0x2c + uVar3,uVar2 - uVar1);
  FUN_009d085c(uVar3,iVar4);
  return;
}

