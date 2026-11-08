// FUN_0135d818 @ 0135d818 size=196 calls_out=4 calls_in=1
// strings: 

void FUN_0135d818(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_70 [40];
  int *local_48;
  undefined4 local_44;
  char local_3c;
  int local_2c;
  int local_28;
  int local_24;
  
  FUN_0135ccac(auStack_70);
  FUN_0135ce10(param_1,auStack_70);
  puVar3 = (undefined4 *)(local_28 + 4);
  for (; local_24 != 0; local_24 = local_24 + -1) {
    if (puVar3[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar3);
    }
    puVar3 = puVar3 + 3;
  }
  if (local_2c != 0) {
    thunk_FUN_016d3fb4(local_28);
  }
  if (local_3c != '\x03' && local_3c != '\x02') {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *local_48;
      bVar1 = (bool)hasExclusiveAccess(local_48);
    } while (!bVar1);
    *local_48 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(local_48,local_44);
      return;
    }
  }
  return;
}

