// FUN_00dbd454 @ 00dbd454 size=60 calls_out=3 calls_in=1
// strings: 

void FUN_00dbd454(undefined4 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_00a1ed90(param_1 + 1);
    return;
  case 1:
  case 4:
    return;
  case 2:
  case 3:
    FUN_00dbddf8(param_1 + 4);
    return;
  }
  if (*(char *)(param_1 + 2) == '\x06') {
    return;
  }
  FUN_00db4764();
  return;
}

