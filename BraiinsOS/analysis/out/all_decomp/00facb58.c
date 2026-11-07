// FUN_00facb58 @ 00facb58 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_00facb58(byte *param_1,undefined4 param_2)

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
    local_a[iVar2] = (&DAT_00563e90)[uVar3];
    iVar1 = iVar2 + -1;
  } while (uVar4 != 0);
  FUN_00fa9698(param_2,1,"0x",2,local_a + iVar2,3 - (iVar2 + 1));
  return;
}

