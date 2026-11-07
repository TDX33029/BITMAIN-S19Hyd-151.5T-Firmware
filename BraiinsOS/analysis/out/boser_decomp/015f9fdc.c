// FUN_015f9fdc @ 015f9fdc size=120 calls_out=2 calls_in=1
// strings: 

void FUN_015f9fdc(uint *param_1)

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
  FUN_015ef4a8(uVar3 + uVar2 * 0x20,uVar1 - uVar2);
  FUN_015ef4a8(uVar3,iVar5);
  FUN_0134aee0(uVar4,uVar3,8,0x20);
  return;
}

