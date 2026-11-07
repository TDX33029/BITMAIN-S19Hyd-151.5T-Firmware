// FUN_013da4dc @ 013da4dc size=92 calls_out=4 calls_in=4
// strings: 

void FUN_013da4dc(int *param_1)

{
  int extraout_r1;
  int iVar1;
  
  FUN_013da7f0(param_1 + 0x17);
  FUN_01452af8(param_1 + 8);
  iVar1 = 0;
  if (param_1[0x24] != 0) {
    FUN_01599950();
    iVar1 = extraout_r1;
  }
  if (*param_1 != 0) {
    iVar1 = param_1[1];
  }
  if (*param_1 != 0 && iVar1 != 0) {
    FUN_01599950();
  }
  FUN_01452b6c(param_1 + 0x2c);
  FUN_013da7f0(param_1 + 0x33);
  return;
}

