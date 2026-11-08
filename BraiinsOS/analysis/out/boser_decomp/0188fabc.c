// FUN_0188fabc @ 0188fabc size=88 calls_out=2 calls_in=0
// strings: 

void FUN_0188fabc(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint local_58 [16];
  
  iVar2 = 0;
  FUN_01bed93e(local_58,0,0x40);
  do {
    uVar1 = *(uint *)(param_2 + iVar2 * 4);
    local_58[iVar2] =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  FUN_01bed4e2(param_1,local_58,0x40);
  return;
}

