// FUN_00b2dc00 @ 00b2dc00 size=196 calls_out=5 calls_in=1
// strings: 

void FUN_00b2dc00(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 == '\x03') {
    if (*(char *)((int)param_1 + 0x51) == '\x03') {
      FUN_00b33b08(param_1 + 0xb);
    }
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_00b33ce8(param_1 + 0xc);
      cVar1 = *(char *)((int)param_1 + 0x26);
      goto joined_r0x00b2dc90;
    }
    FUN_00654988(param_1 + 0xe);
    if ((-0x7ffffffd < (int)param_1[0xb]) && (param_1[0xb] != 0)) {
      thunk_FUN_016d3fb4(param_1[0xc]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  cVar1 = *(char *)((int)param_1 + 0x26);
joined_r0x00b2dc90:
  if (cVar1 != '\0') {
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
      *(undefined2 *)((int)param_1 + 0x26) = 0;
      return;
    }
  }
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  return;
}

