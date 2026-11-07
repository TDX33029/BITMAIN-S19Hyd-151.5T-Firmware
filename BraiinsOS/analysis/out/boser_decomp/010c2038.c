// FUN_010c2038 @ 010c2038 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_010c2038(uint *param_1)

{
  if ((*param_1 & 7) == 4) {
    return;
  }
  if (*param_1 == 3) {
    FUN_0132b958(param_1[2],param_1[3],8,0x48);
    FUN_0132b958(param_1[5],param_1[6],8,0x48);
    return;
  }
  FUN_005f6588(param_1);
  return;
}

