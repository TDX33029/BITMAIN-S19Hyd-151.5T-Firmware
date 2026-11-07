// FUN_012c3960 @ 012c3960 size=104 calls_out=2 calls_in=23
// strings: 

void FUN_012c3960(char *param_1,int param_2)

{
  while ((((FUN_012c39c8(param_1,param_2), *param_1 == '\0' && ((param_1[1] & 1U) != 0)) &&
          ((byte)param_1[2] - 9 < 0x18)) && ((1 << ((byte)param_1[2] - 9 & 0xff) & 0x800013U) != 0))
        ) {
    FUN_012c6160(param_2 + 0xc);
  }
  return;
}

