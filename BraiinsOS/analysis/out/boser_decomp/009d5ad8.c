// FUN_009d5ad8 @ 009d5ad8 size=36 calls_out=2 calls_in=2
// strings: 

void FUN_009d5ad8(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_009d5b2c(param_1 + 2);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_009d5afc();
  return;
}

