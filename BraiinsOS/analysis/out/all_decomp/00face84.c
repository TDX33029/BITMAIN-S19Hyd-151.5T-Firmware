// FUN_00face84 @ 00face84 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_00face84(uint *param_1,undefined4 param_2)

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
    auStack_10[iVar2] = (&DAT_005642f0)[uVar3];
    iVar1 = iVar2 + -1;
  } while (uVar4 != 0);
  FUN_00fa9698(param_2,1,"0x",2,auStack_10 + iVar2,9 - (iVar2 + 1));
  return;
}

