// FUN_012d96f0 @ 012d96f0 size=168 calls_out=4 calls_in=1
// strings: 

void FUN_012d96f0(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined2 local_1f;
  undefined1 local_1d;
  
  piVar2 = (int *)FUN_019b0254();
  local_20 = *(char *)(param_2 + 4);
  *(undefined1 *)(param_2 + 4) = 2;
  if (local_20 == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d06a98);
  }
  local_30 = *param_2;
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  uStack_24 = param_2[3];
  local_1d = *(undefined1 *)((int)param_2 + 0x13);
  local_1f = *(undefined2 *)((int)param_2 + 0x11);
  FUN_012d9020(param_1,&local_30,piVar2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db128(piVar2);
    return;
  }
  return;
}

