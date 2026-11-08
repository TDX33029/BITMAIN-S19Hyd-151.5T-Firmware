// FUN_019ad19c @ 019ad19c size=144 calls_out=5 calls_in=1
// strings: 

void FUN_019ad19c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_20 [4];
  int local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  FUN_01be2ce0();
  iVar1 = FUN_01be2cca(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_01be3244();
    local_14 = (undefined1 *)*piVar2;
    local_18 = (undefined1 *)((uint)local_18 & 0xffffff00);
    if (local_14 != (undefined1 *)0x4) {
      FUN_0197acb4(&local_18);
      local_1c = *piVar2;
      local_14 = &LAB_019ac374;
      local_20[0] = 0;
      local_18 = local_20;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00585055,&local_18,&DAT_01d28114);
    }
  }
  return;
}

