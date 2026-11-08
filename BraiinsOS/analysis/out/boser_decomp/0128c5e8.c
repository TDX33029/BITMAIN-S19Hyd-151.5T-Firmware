// FUN_0128c5e8 @ 0128c5e8 size=160 calls_out=1 calls_in=2
// strings: 

void FUN_0128c5e8(uint *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  uVar2 = 1;
  if (param_2[1] != 0) {
    cVar1 = *(char *)*param_2;
    if (cVar1 == '+' || cVar1 == '-') {
      param_2[1] = param_2[1] + -1;
      *param_2 = (char *)*param_2 + 1;
      param_2[2] = param_2[2] + 1;
      if (cVar1 == '-') {
        uVar2 = 0xffffffff;
      }
    }
  }
  FUN_0128c45c(&local_28);
  if (local_28 == 0) {
    param_1[1] = uVar2;
    param_1[2] = uStack_24;
    param_1[3] = local_20;
    param_1[4] = uStack_1c;
  }
  else {
    param_1[2] = local_20;
    param_1[3] = uStack_1c;
    param_1[4] = uStack_18;
    param_1[5] = uStack_14;
  }
  *param_1 = (uint)(local_28 != 0);
  return;
}

