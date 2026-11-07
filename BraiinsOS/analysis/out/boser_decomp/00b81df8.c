// FUN_00b81df8 @ 00b81df8 size=168 calls_out=3 calls_in=6
// strings: BUG: cannot lock session bufferevent open/boser/boser-buildroot/src/session.rs:132

int * FUN_00b81df8(int *param_1)

{
  bool bVar1;
  int *piStack_10;
  byte bStack_c;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_0197ade4(param_1);
      goto LAB_00b81e24;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_00b81e24:
  bStack_c = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    bStack_c = FUN_0197ac0c();
    bStack_c = bStack_c ^ 1;
  }
  if ((char)param_1[1] != '\0') {
    piStack_10 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: cannot lock session bufferevent open/boser/boser-buildroot/src/session.rs:132"
                 ,0x1f,&piStack_10,&DAT_01c139d8);
  }
  return param_1;
}

