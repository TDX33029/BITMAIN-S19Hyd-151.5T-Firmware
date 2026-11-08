// FUN_01403248 @ 01403248 size=204 calls_out=3 calls_in=1
// strings: 

void FUN_01403248(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[0x12] - 1;
  uVar2 = uVar5 & param_1[8];
  uVar5 = uVar5 & *param_1;
  if (uVar5 <= uVar2 && uVar2 != uVar5) {
    uVar2 = uVar2 - uVar5;
  }
  else if (uVar5 <= uVar2) {
    if ((param_1[8] & ~param_1[0x12]) == *param_1) goto LAB_014032ec;
    uVar2 = param_1[0x10];
  }
  else {
    uVar2 = (uVar2 - uVar5) + param_1[0x10];
  }
  if (uVar2 != 0) {
    uVar4 = param_1[0x10];
    iVar3 = param_1[0x25] + uVar5 * 0x18;
    do {
      uVar1 = uVar4;
      if (uVar5 < uVar4) {
        uVar1 = 0;
      }
      if (*(char *)(iVar3 + uVar1 * -0x18) == '\0') {
        FUN_01406bcc(*(undefined4 *)(iVar3 + uVar1 * -0x18 + 4));
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x18;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
LAB_014032ec:
  if (param_1[0x26] != 0) {
    thunk_FUN_01be4678(param_1[0x25]);
  }
  FUN_014031c8(param_1 + 0x15);
  FUN_014031c8(param_1 + 0x1e);
  return;
}

