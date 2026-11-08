// FUN_015e7b58 @ 015e7b58 size=136 calls_out=1 calls_in=4
// strings: 

void FUN_015e7b58(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *param_1;
  uVar3 = 4;
  iVar5 = 4;
  if ((int)uVar1 < 0) {
    uVar3 = uVar1 ^ 0x80000000;
  }
  iVar4 = 0x10;
  iVar2 = 8;
  switch(uVar3) {
  case 1:
    iVar4 = 8;
    if (param_1[1] < 2) {
      return;
    }
    break;
  case 2:
  case 3:
    return;
  case 4:
    FUN_0134bd64(uVar1,param_1[1]);
    iVar4 = 0x18;
    iVar2 = 0x10;
    iVar5 = 0xc;
  case 0:
    FUN_0134bd64(*(undefined4 *)((int)param_1 + iVar5),*(undefined4 *)((int)param_1 + iVar2));
    break;
  default:
    iVar4 = 4;
  }
  FUN_0134bd64(*(undefined4 *)((int)param_1 + iVar4),((undefined4 *)((int)param_1 + iVar4))[1]);
  return;
}

