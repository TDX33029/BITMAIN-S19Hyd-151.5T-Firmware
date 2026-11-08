// FUN_013cb214 @ 013cb214 size=44 calls_out=0 calls_in=1
// strings: 

longlong FUN_013cb214(undefined4 *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)*param_1;
  do {
    pbVar2 = pbVar1;
    if (pbVar2 == (byte *)param_1[1]) {
      return (ulonglong)param_2 << 0x20;
    }
    param_2 = (uint)*pbVar2;
    *param_1 = pbVar2 + 0xc;
    pbVar1 = pbVar2 + 0xc;
  } while (param_2 != 1);
  return *(longlong *)(pbVar2 + 4);
}

