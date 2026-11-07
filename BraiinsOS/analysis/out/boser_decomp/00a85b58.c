// FUN_00a85b58 @ 00a85b58 size=72 calls_out=2 calls_in=2
// strings: 

void FUN_00a85b58(uint *param_1)

{
  if ((char)param_1[0x29] == '\x03') {
    FUN_00a85d3c(param_1 + 0x28,3,*param_1 | param_1[1]);
    return;
  }
  if ((char)param_1[0x29] != '\0') {
    return;
  }
  if (param_1[2] == 3 && param_1[3] == 0) {
    FUN_00a85d3c(param_1 + 4);
    return;
  }
  FUN_00a85b84();
  return;
}

