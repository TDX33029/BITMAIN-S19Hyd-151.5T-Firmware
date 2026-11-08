// FUN_0070e1cc @ 0070e1cc size=112 calls_out=1 calls_in=1
// strings: 

void FUN_0070e1cc(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = *param_1;
  uVar6 = 6;
  iVar4 = 4;
  if ((int)uVar2 < 0) {
    uVar6 = uVar2 ^ 0x80000000;
  }
  iVar3 = 8;
  iVar5 = iVar4;
  iVar1 = 0x10;
  switch(uVar6) {
  case 0:
  case 5:
    return;
  case 6:
    FUN_019bb7e0(uVar2,param_1[1]);
    iVar3 = 0x10;
    iVar5 = 0xc;
    iVar1 = 0x18;
  case 1:
    iVar4 = iVar1;
    FUN_019bb7e0(*(undefined4 *)((int)param_1 + iVar5),*(undefined4 *)((int)param_1 + iVar3));
  default:
    FUN_019bb7e0(*(undefined4 *)((int)param_1 + iVar4),((undefined4 *)((int)param_1 + iVar4))[1]);
    return;
  }
}

