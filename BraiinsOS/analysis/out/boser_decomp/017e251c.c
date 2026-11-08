// FUN_017e251c @ 017e251c size=60 calls_out=3 calls_in=2
// strings: 

void FUN_017e251c(int *param_1)

{
  if (*param_1 != 0) {
    FUN_017e258c(param_1);
  }
  if (*(char *)((int)param_1 + 0x15) != '\x02') {
    FUN_014323b0(param_1 + 2);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

