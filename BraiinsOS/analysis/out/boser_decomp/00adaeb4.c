// FUN_00adaeb4 @ 00adaeb4 size=96 calls_out=1 calls_in=3
// strings: not implemented

uint FUN_00adaeb4(uint param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1 & 0xff) {
  default:
    return param_1;
  case 2:
    return 3;
  case 3:
    return 4;
  case 4:
    return 2;
  case 5:
    return 10;
  case 6:
    return 8;
  case 7:
    return 9;
  case 8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("not implemented",0xf,&DAT_01c10510);
  }
}

