// FUN_0152f818 @ 0152f818 size=116 calls_out=1 calls_in=0
// strings: 

void FUN_0152f818(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2[2];
  if ((uint)(*param_2 - iVar2) < 3) {
    FUN_0154e5f8(param_2,iVar2,3,1,1);
    iVar2 = param_2[2];
  }
  param_2[2] = iVar2 + 3;
  iVar1 = param_2[1];
  *(ushort *)(iVar1 + iVar2) =
       (ushort)(((param_1 >> 8 & 0xff) << 0x10) >> 8) | (ushort)(param_1 >> 0x10) & 0xff;
  *(char *)((ushort *)(iVar1 + iVar2) + 1) = (char)param_1;
  return;
}

