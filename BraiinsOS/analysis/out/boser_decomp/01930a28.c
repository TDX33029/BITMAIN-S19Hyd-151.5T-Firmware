// FUN_01930a28 @ 01930a28 size=96 calls_out=1 calls_in=1
// strings: 

void FUN_01930a28(uint param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[2];
  if ((uint)(*param_2 - iVar1) < 4) {
    FUN_006520b4(param_2,iVar1,4,1,1);
    iVar1 = param_2[2];
  }
  *(uint *)(param_2[1] + iVar1) =
       param_1 << 0x18 | (param_1 >> 8 & 0xff) << 0x10 | (param_1 >> 0x10 & 0xff) << 8 |
       param_1 >> 0x18;
  param_2[2] = iVar1 + 4;
  return;
}

