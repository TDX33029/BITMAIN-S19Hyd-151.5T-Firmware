// FUN_0170f924 @ 0170f924 size=108 calls_out=0 calls_in=17
// strings: 

void FUN_0170f924(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_2[3];
  iVar4 = 0;
  if (uVar1 == 0) {
    uVar2 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *param_2;
    uVar3 = param_2[2];
    uVar2 = uVar3 - uVar5;
    if (uVar3 < uVar5) {
      uVar2 = uVar3;
    }
    if (uVar5 - uVar2 < uVar1) {
      iVar4 = uVar1 - (uVar5 - uVar2);
    }
    else {
      uVar5 = uVar2 + uVar1;
    }
  }
  uVar1 = param_2[1];
  param_1[2] = uVar1;
  *param_1 = uVar1 + uVar2 * 0x28;
  param_1[1] = uVar1 + uVar5 * 0x28;
  param_1[3] = uVar1 + iVar4 * 0x28;
  return;
}

