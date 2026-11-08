// FUN_0174276c @ 0174276c size=60 calls_out=3 calls_in=1
// strings: 

void FUN_0174276c(int param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x02') {
    return;
  }
  FUN_014323b0(param_1 + 0xc);
  if (*(char *)(param_1 + 8) == '\x02') {
    FUN_0174281c();
    return;
  }
  FUN_017427c0();
  return;
}

