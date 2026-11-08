// FUN_009d27e4 @ 009d27e4 size=112 calls_out=1 calls_in=2
// strings: 

void FUN_009d27e4(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = param_1[3];
  if (uVar2 <= param_2) {
    return;
  }
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar6 = param_1[2];
  param_1[3] = param_2;
  uVar1 = uVar6 - uVar3;
  if (uVar6 < uVar3) {
    uVar1 = uVar6;
  }
  uVar3 = uVar3 - uVar1;
  iVar5 = uVar2 - uVar3;
  if (uVar2 < uVar3) {
    iVar5 = 0;
  }
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  if (uVar3 < param_2) {
    iVar5 = iVar5 - (param_2 - uVar2);
    uVar4 = uVar4 + (param_2 - uVar2) * 8;
  }
  else {
    FUN_009d0890(uVar4 + uVar1 * 8 + param_2 * 8,uVar2 - param_2);
  }
  FUN_009d0890(uVar4,iVar5);
  return;
}

