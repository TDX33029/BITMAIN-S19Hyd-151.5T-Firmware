// FUN_00714ecc @ 00714ecc size=168 calls_out=3 calls_in=3
// strings: 

int * FUN_00714ecc(int *param_1)

{
  bool bVar1;
  int *piStack_10;
  byte bStack_c;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_00714ef8;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_00714ef8:
  bStack_c = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    bStack_c = FUN_015bf3f8();
    bStack_c = bStack_c ^ 1;
  }
  if ((char)param_1[1] != '\0') {
    piStack_10 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0033ff11,0x1e,&piStack_10,&DAT_018599b0);
  }
  return param_1;
}

