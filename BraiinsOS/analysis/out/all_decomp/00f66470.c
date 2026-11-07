// FUN_00f66470 @ 00f66470 size=272 calls_out=1 calls_in=1
// strings: invalid offset second | invalid offset minute | invalid offset hour

void FUN_00f66470(uint *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint uStack_18;
  uint uStack_14;
  
  iVar4 = 1;
  if (param_2[1] != 0) {
    cVar1 = *(char *)*param_2;
    if (cVar1 == '+' || cVar1 == '-') {
      param_2[1] = param_2[1] + -1;
      *param_2 = (char *)*param_2 + 1;
      param_2[2] = param_2[2] + 1;
      if (cVar1 == '-') {
        iVar4 = -1;
      }
    }
  }
  FUN_00f66314(&local_28);
  if (local_28 != 0) {
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = uStack_18;
    param_1[3] = uStack_14;
    return;
  }
  if (local_24 < 0x19) {
    if (local_20 < 0x3c) {
      if (local_1c < 0x3c) {
        param_1[2] = 0x3b9aca10;
        *param_1 = (local_24 * 0xe10 + local_20 * 0x3c + local_1c) * iVar4;
        return;
      }
      pcVar2 = "invalid offset second";
    }
    else {
      pcVar2 = "invalid offset minute";
    }
    uVar3 = 0x15;
  }
  else {
    uVar3 = 0x13;
    pcVar2 = "invalid offset hour";
  }
  *param_1 = (uint)pcVar2;
  param_1[1] = uVar3;
  param_1[2] = 0x3b9aca05;
  return;
}

