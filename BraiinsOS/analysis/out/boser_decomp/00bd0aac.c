// FUN_00bd0aac @ 00bd0aac size=204 calls_out=3 calls_in=3
// strings: 

void FUN_00bd0aac(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  switch(*(undefined1 *)(param_1 + 0x6d)) {
  case 3:
    if (*(char *)(param_1 + 0x8c) == '\x03') {
      FUN_00b71be0(param_1 + 0x78);
    }
    goto LAB_00bd0b7c;
  case 4:
    if (*(char *)(param_1 + 0x8c) == '\x03') {
      FUN_00b71be0(param_1 + 0x78);
    }
    goto LAB_00bd0b74;
  case 5:
    if (*(char *)(param_1 + 0x85) == '\x03') {
      piVar2 = *(int **)(param_1 + 0x7c);
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(piVar2);
        if (!bVar1) goto LAB_00bd0b58;
        *piVar2 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00bd0b58:
        (**(code **)(piVar2[2] + 0x10))();
      }
      *(undefined1 *)(param_1 + 0x84) = 0;
    }
    break;
  case 6:
    FUN_00bd2fec(param_1 + 0x70);
    break;
  default:
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
LAB_00bd0b74:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
LAB_00bd0b7c:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  return;
}

