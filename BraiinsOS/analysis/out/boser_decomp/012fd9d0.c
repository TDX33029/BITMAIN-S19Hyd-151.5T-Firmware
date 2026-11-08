// FUN_012fd9d0 @ 012fd9d0 size=112 calls_out=1 calls_in=8
// strings: 

void FUN_012fd9d0(uint *param_1,undefined4 param_2)

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
    auStack_10[iVar2] = (&DAT_005679b8)[uVar3];
    iVar1 = iVar2 + -1;
  } while (uVar4 != 0);
  FUN_012fa378(param_2,1,"0x",2,auStack_10 + iVar2,9 - (iVar2 + 1));
  return;
}

