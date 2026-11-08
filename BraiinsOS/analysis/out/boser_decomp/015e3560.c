// FUN_015e3560 @ 015e3560 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_015e3560(uint *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_015e1c18(param_2);
  if (iVar1 != 0) {
    param_1[2] = *(uint *)(param_2 + 0x10);
    param_1[3] = *(uint *)(param_2 + 0x14);
  }
  *param_1 = (uint)(iVar1 != 0);
  param_1[1] = 0;
  return;
}

