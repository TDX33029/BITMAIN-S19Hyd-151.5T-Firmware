// FUN_012fdbc0 @ 012fdbc0 size=112 calls_out=1 calls_in=10
// strings: 

void FUN_012fdbc0(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_10 [8];
  
  uVar4 = *param_1;
  iVar1 = 7;
  do {
    iVar2 = iVar1;
    uVar3 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4;
    auStack_10[iVar2] = (&DAT_005682a8)[uVar3];
    iVar1 = iVar2 + -1;
  } while (uVar4 != 0);
  FUN_012fa378(param_2,1,"0x",2,auStack_10 + iVar2,9 - (iVar2 + 1));
  return;
}

