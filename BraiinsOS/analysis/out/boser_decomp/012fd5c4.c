// FUN_012fd5c4 @ 012fd5c4 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_012fd5c4(byte *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char acStack_10 [8];
  
  uVar4 = (uint)*param_1;
  iVar1 = 7;
  do {
    iVar2 = iVar1;
    uVar3 = uVar4 & 1;
    uVar4 = uVar4 >> 1;
    acStack_10[iVar2] = "01"[uVar3];
    iVar1 = iVar2 + -1;
  } while (uVar4 != 0);
  FUN_012fa378(param_2,1,"0b",2,acStack_10 + iVar2,9 - (iVar2 + 1));
  return;
}

