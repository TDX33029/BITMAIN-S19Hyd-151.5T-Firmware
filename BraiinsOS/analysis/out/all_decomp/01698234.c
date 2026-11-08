// FUN_01698234 @ 01698234 size=168 calls_out=4 calls_in=1
// strings: 

undefined1 FUN_01698234(undefined4 *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  char local_18;
  undefined2 local_17;
  undefined1 local_15;
  
  piVar3 = (int *)FUN_00fba86c();
  local_18 = *(char *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = 2;
  if (local_18 == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ae130);
  }
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  local_1c = param_1[3];
  local_28 = *param_1;
  local_15 = *(undefined1 *)((int)param_1 + 0x13);
  local_17 = *(undefined2 *)((int)param_1 + 0x11);
  uVar2 = FUN_01697afc(&local_28,piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fbaa00(piVar3);
  }
  return uVar2;
}

