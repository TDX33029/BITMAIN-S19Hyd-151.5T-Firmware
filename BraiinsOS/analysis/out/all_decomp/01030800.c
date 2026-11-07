// FUN_01030800 @ 01030800 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_01030800(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_10 [8];
  
  iVar1 = 7;
  do {
    iVar2 = iVar1;
    uVar3 = param_1 & 0xf;
    param_1 = param_1 >> 4;
    auStack_10[iVar2] = (&DAT_00563e90)[uVar3];
    iVar1 = iVar2 + -1;
  } while (param_1 != 0);
  FUN_00fa9698(param_2,1,"0x",2,auStack_10 + iVar2,9 - (iVar2 + 1));
  return;
}

