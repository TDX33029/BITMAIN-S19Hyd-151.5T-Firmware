// FUN_01668fc0 @ 01668fc0 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_01668fc0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = param_1[3];
  iVar5 = 0;
  uVar4 = *param_1;
  if (uVar1 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar3 = param_1[2];
    uVar2 = uVar3 - uVar4;
    if (uVar3 < uVar4) {
      uVar2 = uVar3;
    }
    if (uVar4 - uVar2 < uVar1) {
      iVar5 = uVar1 - (uVar4 - uVar2);
      uVar1 = uVar4;
    }
    else {
      uVar1 = uVar2 + uVar1;
    }
  }
  uVar3 = param_1[1];
  FUN_01675310(uVar3 + uVar2 * 0xc,uVar1 - uVar2);
  FUN_01675310(uVar3,iVar5);
  FUN_0134c054(uVar4,uVar3,4,0xc);
  return;
}

