// FUN_009d51cc @ 009d51cc size=96 calls_out=1 calls_in=1
// strings: 

void FUN_009d51cc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = param_1[3];
  iVar4 = 0;
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar5 = param_1[2];
    uVar2 = uVar5 - uVar1;
    if (uVar5 < uVar1) {
      uVar2 = uVar5;
    }
    if (uVar1 - uVar2 < uVar3) {
      iVar4 = uVar3 - (uVar1 - uVar2);
    }
    else {
      uVar1 = uVar2 + uVar3;
    }
  }
  uVar3 = param_1[1];
  FUN_009d2734(uVar3 + uVar2 * 4,uVar1 - uVar2);
  FUN_009d2734(uVar3,iVar4);
  return;
}

