// FUN_018be814 @ 018be814 size=84 calls_out=1 calls_in=3
// strings: 

void FUN_018be814(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte local_18 [4];
  uint local_14;
  uint local_10;
  
  local_10 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
             param_3 >> 0x18;
  local_14 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
             param_4 >> 0x18;
  iVar1 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  do {
    local_18[iVar1] = local_18[iVar1] ^ *(byte *)(param_2 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  FUN_01bed4e2(param_1,local_18,0xc);
  return;
}

