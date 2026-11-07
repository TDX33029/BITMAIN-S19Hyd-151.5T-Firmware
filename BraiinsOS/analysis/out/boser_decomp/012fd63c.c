// FUN_012fd63c @ 012fd63c size=112 calls_out=1 calls_in=4
// strings: 

void FUN_012fd63c(byte *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_a [2];
  
  uVar4 = (uint)*param_1;
  iVar1 = 1;
  do {
    iVar2 = iVar1;
    uVar3 = uVar4 & 0xf;
    uVar4 = uVar4 >> 4;
    local_a[iVar2] = (&DAT_005679b8)[uVar3];
    iVar1 = iVar2 + -1;
  } while (uVar4 != 0);
  FUN_012fa378(param_2,1,"0x",2,local_a + iVar2,3 - (iVar2 + 1));
  return;
}

