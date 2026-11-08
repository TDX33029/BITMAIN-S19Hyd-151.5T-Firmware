// FUN_0158c2a4 @ 0158c2a4 size=104 calls_out=2 calls_in=4
// strings: 

void FUN_0158c2a4(char *param_1,int param_2)

{
  while ((((FUN_0158c30c(param_1,param_2), *param_1 == '\0' && ((param_1[1] & 1U) != 0)) &&
          ((byte)param_1[2] - 9 < 0x18)) && ((1 << ((byte)param_1[2] - 9 & 0xff) & 0x800013U) != 0))
        ) {
    FUN_0157653c(param_2 + 0xc);
  }
  return;
}

