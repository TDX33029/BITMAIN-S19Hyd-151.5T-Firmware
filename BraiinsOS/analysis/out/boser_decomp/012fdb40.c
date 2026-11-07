// FUN_012fdb40 @ 012fdb40 size=120 calls_out=1 calls_in=0
// strings: 

void FUN_012fdb40(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_20 [16];
  
  iVar1 = 0xf;
  do {
    iVar2 = iVar1;
    uVar3 = param_1 & 0xf;
    param_1 = param_1 >> 4 | param_2 << 0x1c;
    auStack_20[iVar2] = (&DAT_005682a8)[uVar3];
    uVar3 = param_2 >> 4;
    param_2 = param_2 >> 4;
    iVar1 = iVar2 + -1;
  } while (param_1 != 0 || uVar3 != 0);
  FUN_012fa378(param_3,1,"0x",2,auStack_20 + iVar2,0x11 - (iVar2 + 1));
  return;
}

