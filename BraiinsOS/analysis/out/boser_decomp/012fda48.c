// FUN_012fda48 @ 012fda48 size=124 calls_out=1 calls_in=3
// strings: 

void FUN_012fda48(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_20 [16];
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  iVar1 = 0xf;
  do {
    iVar4 = iVar1;
    uVar5 = uVar2 & 0xf;
    uVar2 = uVar2 >> 4 | uVar3 << 0x1c;
    auStack_20[iVar4] = (&DAT_005679b8)[uVar5];
    uVar5 = uVar3 >> 4;
    uVar3 = uVar3 >> 4;
    iVar1 = iVar4 + -1;
  } while (uVar2 != 0 || uVar5 != 0);
  FUN_012fa378(param_2,1,"0x",2,auStack_20 + iVar4,0x11 - (iVar4 + 1));
  return;
}

