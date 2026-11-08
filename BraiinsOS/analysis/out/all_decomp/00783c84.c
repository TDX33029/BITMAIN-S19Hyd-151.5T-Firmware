// FUN_00783c84 @ 00783c84 size=168 calls_out=4 calls_in=6
// strings: 

void FUN_00783c84(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_2c [2];
  int local_24;
  int *local_20;
  int local_1c;
  
  piVar2 = param_1 + 10;
  while( true ) {
    FUN_00a40f64(local_2c,piVar2);
    if (local_2c[0] == 0) break;
    iVar1 = local_2c[0] + local_24 * 0xc;
    local_1c = local_2c[0] + local_24 * 0x18;
    local_20 = piVar2;
    if (*(int *)(iVar1 + 0x10c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x110));
    }
    FUN_007478cc(&local_1c);
  }
  if (param_1[4] == 9) {
    return;
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  FUN_00783d8c(param_1 + 4);
  return;
}

