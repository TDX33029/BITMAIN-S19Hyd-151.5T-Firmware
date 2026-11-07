// FUN_00047d78 @ 00047d78  size=92  callers=0
// program: bmminer


void FUN_00047d78(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar3;
  undefined4 *puVar2;
  
  iVar1 = FUN_00047bb8();
  if (iVar1 == 0x102) {
    FUN_00047d38(param_1);
    return;
  }
  puVar2 = &DAT_0050f958;
  do {
    puVar3 = puVar2 + 1;
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(iVar1,param_2 != 0);
    }
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)&DAT_0050f96c);
  return;
}

