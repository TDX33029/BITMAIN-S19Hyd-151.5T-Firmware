// FUN_01b7ca7c @ 01b7ca7c size=596 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b7ca7c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  uint local_14;
  
  if (*(uint *)(param_1 + 100) < 8) {
    piVar1 = (int *)(param_1 + (*(int *)(param_1 + 100) + 0xd) * 8);
    *piVar1 = param_3;
    piVar1[1] = param_4;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  else {
    piVar1 = (int *)(param_1 +
                    (((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) - 1U & 7) + 0xd) * 8);
    if (piVar1[1] == param_4 && *piVar1 == param_3) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      if ((*(uint *)(param_1 + 0x54) <= *(uint *)(param_1 + 0x5c)) ||
         (*(uint *)(param_1 + 0x50) <= *(uint *)(param_1 + 0x58))) {
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      piVar1 = (int *)(param_1 + (((*(int *)(param_1 + 100) - local_14) - 1 & 7) + 0xd) * 8);
      if ((param_4 == piVar1[1] && param_3 == *piVar1) &&
         (*(int *)(param_1 + (local_14 + 0x2a) * 4) = *(int *)(param_1 + (local_14 + 0x2a) * 4) + 1,
         *(uint *)(param_1 + (*(int *)(param_1 + 0x60) + 0x2a) * 4) <
         *(uint *)(param_1 + (local_14 + 0x2a) * 4))) {
        *(uint *)(param_1 + 0x60) = local_14;
      }
    }
    piVar1 = (int *)(param_1 + ((*(uint *)(param_1 + 100) & 7) + 0xd) * 8);
    *piVar1 = param_3;
    piVar1[1] = param_4;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (0x1ffff < *(uint *)(param_1 + 100)) {
      FUN_01b7c9c0(param_1);
    }
  }
  return 0;
}

