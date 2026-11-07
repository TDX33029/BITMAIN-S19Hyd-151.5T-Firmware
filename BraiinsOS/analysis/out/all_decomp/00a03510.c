// FUN_00a03510 @ 00a03510 size=220 calls_out=2 calls_in=0
// strings: 

void FUN_00a03510(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_1[0x12] - 1;
  uVar3 = uVar5 & param_1[8];
  uVar5 = uVar5 & *param_1;
  if (uVar5 <= uVar3 && uVar3 != uVar5) {
    uVar3 = uVar3 - uVar5;
  }
  else if (uVar5 <= uVar3) {
    if ((param_1[8] & ~param_1[0x12]) == *param_1) goto LAB_00a035c4;
    uVar3 = param_1[0x10];
  }
  else {
    uVar3 = (uVar3 - uVar5) + param_1[0x10];
  }
  if (uVar3 != 0) {
    uVar6 = param_1[0x10];
    uVar4 = param_1[0x25];
    do {
      uVar1 = uVar6;
      if (uVar5 < uVar6) {
        uVar1 = 0;
      }
      iVar2 = uVar4 + uVar1 * -0x10 + uVar5 * 0x10;
      if ((*(uint *)(iVar2 + 4) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 8));
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
LAB_00a035c4:
  if (param_1[0x26] != 0) {
    thunk_FUN_016d3fb4(param_1[0x25]);
  }
  FUN_006fffb0(param_1 + 0x15);
  FUN_006fffb0(param_1 + 0x1e);
  return;
}

