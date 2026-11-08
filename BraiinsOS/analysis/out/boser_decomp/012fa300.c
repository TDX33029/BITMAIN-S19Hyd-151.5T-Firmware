// FUN_012fa300 @ 012fa300 size=112 calls_out=1 calls_in=4
// strings: 

void FUN_012fa300(ushort *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_c [4];
  
  uVar4 = (uint)*param_1;
  iVar1 = 3;
  do {
    iVar2 = iVar1;
    uVar3 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4;
    auStack_c[iVar2] = (&DAT_005682a8)[uVar3];
    iVar1 = iVar2 + -1;
  } while (uVar4 != 0);
  FUN_012fa378(param_2,1,"0x",2,auStack_c + iVar2,5 - (iVar2 + 1));
  return;
}

