// FUN_012fd54c @ 012fd54c size=112 calls_out=1 calls_in=0
// strings: 

void FUN_012fd54c(byte *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_b [3];
  
  uVar4 = (uint)*param_1;
  iVar1 = 2;
  do {
    iVar2 = iVar1;
    uVar3 = uVar4 & 7;
    uVar4 = uVar4 >> 3;
    auStack_b[iVar2] = (&DAT_005703c0)[uVar3];
    iVar1 = iVar2 + -1;
  } while (uVar4 != 0);
  FUN_012fa378(param_2,1,"0o",2,auStack_b + iVar2,4 - (iVar2 + 1));
  return;
}

