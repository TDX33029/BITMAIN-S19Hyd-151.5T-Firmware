// FUN_01623bc0 @ 01623bc0 size=44 calls_out=1 calls_in=31
// strings: 

ushort FUN_01623bc0(int param_1,uint param_2)

{
  if (param_2 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(2,4,param_2,&DAT_01d060c8);
  }
  return *(ushort *)(param_1 + 2) & 0x3fff;
}

