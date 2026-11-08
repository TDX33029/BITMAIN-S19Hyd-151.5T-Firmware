// FUN_0141b854 @ 0141b854 size=264 calls_out=4 calls_in=2
// strings: 

void FUN_0141b854(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1[0x16] == -0x80000000) {
    piVar2 = (int *)param_1[0x1a];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[0x1a],param_1[0x1b]);
    }
    if ((param_1[0x17] & 0x7fffffffU) == 0) goto LAB_0141b91c;
    iVar3 = param_1[0x18];
  }
  else {
    FUN_0141b9d4(param_1 + 0x1c);
    FUN_0141b9d4(param_1 + 0x2d);
    if (param_1[0x16] != 0) {
      thunk_FUN_016d3fb4(param_1[0x17]);
    }
    iVar3 = param_1[0x1a];
    puVar4 = (undefined4 *)(iVar3 + 4);
    for (iVar5 = param_1[0x1b]; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar4[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar4);
      }
      puVar4 = puVar4 + 3;
    }
    if (param_1[0x19] == 0) goto LAB_0141b91c;
  }
  thunk_FUN_016d3fb4(iVar3);
LAB_0141b91c:
  if ((char)param_1[0x14] != '\x02') {
    (**(code **)(param_1[0x10] + 0x10))(param_1 + 0x13,param_1[0x11],param_1[0x12]);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_0141841c(param_1);
  return;
}

