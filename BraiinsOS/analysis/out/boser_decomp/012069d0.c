// FUN_012069d0 @ 012069d0 size=168 calls_out=3 calls_in=2
// strings: 

int * FUN_012069d0(int *param_1)

{
  bool bVar1;
  int *piStack_10;
  byte bStack_c;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_0197ade4(param_1);
      goto LAB_012069fc;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_012069fc:
  bStack_c = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    bStack_c = FUN_0197ac0c();
    bStack_c = bStack_c ^ 1;
  }
  if ((char)param_1[1] != '\0') {
    piStack_10 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00531614,0xd,&piStack_10,&DAT_01c237dc);
  }
  return param_1;
}

