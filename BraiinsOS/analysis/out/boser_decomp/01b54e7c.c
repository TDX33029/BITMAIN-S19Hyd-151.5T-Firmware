// FUN_01b54e7c @ 01b54e7c size=104 calls_out=3 calls_in=1
// strings: 

void FUN_01b54e7c(undefined4 param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_01b52ea0(param_2,0x20);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be32a0();
  }
  *param_2 = *param_2 | 7;
  param_2[0x1f] = ~((byte)~(byte)(((param_2[0x1f] & 0xffffffbf) << 0x19) >> 0x18) >> 1);
  FUN_01b3ac20(param_1,param_2);
  return;
}

