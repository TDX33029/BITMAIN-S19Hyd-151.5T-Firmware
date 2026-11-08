// FUN_0134eea4 @ 0134eea4 size=128 calls_out=0 calls_in=1
// strings: 

uint FUN_0134eea4(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  param_3 = param_2 & param_3;
  uVar1 = *(uint *)((int)param_1 + param_3) & 0x80808080;
  if (uVar1 == 0) {
    iVar2 = 4;
    do {
      param_3 = param_3 + iVar2;
      iVar2 = iVar2 + 4;
      param_3 = param_3 & param_2;
      uVar1 = *(uint *)((int)param_1 + param_3) & 0x80808080;
    } while (uVar1 == 0);
  }
  param_2 = param_3 + ((uint)LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
                                     (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18) >> 3) & param_2;
  if (*(char *)((int)param_1 + param_2) < '\0') {
    return param_2;
  }
  uVar1 = *param_1 & 0x80808080;
  return (uint)LZCOUNT((*param_1 & 0x80) << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
                       (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18) >> 3;
}

