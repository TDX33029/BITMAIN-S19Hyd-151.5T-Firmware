// FUN_0190d4ac @ 0190d4ac size=212 calls_out=2 calls_in=0
// strings: 

void FUN_0190d4ac(undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_30 [4];
  
  local_30[2] = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
                param_3 >> 0x18;
  local_30[1] = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
                param_4 >> 0x18;
  iVar1 = 0;
  local_30[0] = 0;
  do {
    *(byte *)((int)local_30 + iVar1) =
         *(byte *)((int)local_30 + iVar1) ^ *(byte *)(param_2 + iVar1 + 0x230);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  local_40 = local_30[0];
  uStack_3c = local_30[1];
  uStack_38 = local_30[2];
  if (0xf < param_8) {
    iVar2 = param_8 - 0x10;
    FUN_01bed4e2(local_30,param_7 + iVar2,0x10);
    iVar1 = FUN_01896d58(param_2,&local_40,param_5,param_6,local_30,param_7,iVar2,0);
    if (iVar1 != 0) {
      param_1[2] = iVar2;
      *param_1 = 0x80000029;
      param_1[1] = param_7;
      return;
    }
  }
  *param_1 = 0x80000019;
  param_1[1] = 0;
  return;
}

