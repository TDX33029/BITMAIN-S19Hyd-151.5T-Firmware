// FUN_01663c24 @ 01663c24 size=124 calls_out=3 calls_in=0
// strings: 

void FUN_01663c24(undefined4 *param_1)

{
  char cVar1;
  int local_14;
  int *piStack_10;
  code *pcStack_c;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d29414);
  }
  local_14 = FUN_01bee424(&LAB_01663d44,&LAB_01663d44,&LAB_01663d44);
  if (local_14 != 0) {
    piStack_10 = &local_14;
    pcStack_c = FUN_012fce60;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005bbbc4,&piStack_10,&DAT_01d06e88);
  }
  return;
}

