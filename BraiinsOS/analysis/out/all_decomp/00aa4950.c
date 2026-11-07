// FUN_00aa4950 @ 00aa4950 size=144 calls_out=1 calls_in=1
// strings: 

void FUN_00aa4950(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = param_1[3];
  iVar7 = 0;
  if (uVar4 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar6 = param_1[2];
    uVar3 = uVar6 - uVar2;
    if (uVar6 < uVar2) {
      uVar3 = uVar6;
    }
    if (uVar2 - uVar3 < uVar4) {
      iVar7 = uVar4 - (uVar2 - uVar3);
    }
    else {
      uVar2 = uVar3 + uVar4;
    }
  }
  uVar4 = param_1[1];
  iVar5 = (uVar2 - uVar3) + 1;
  iVar1 = uVar3 * 0xd0 + uVar4;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    FUN_00aa2644(iVar1);
    iVar1 = iVar1 + 0xd0;
  }
  iVar7 = iVar7 + 1;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_00aa2644(uVar4);
    uVar4 = uVar4 + 0xd0;
  }
  return;
}

