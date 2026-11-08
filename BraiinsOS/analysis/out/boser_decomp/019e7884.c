// FUN_019e7884 @ 019e7884 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_019e7884(undefined4 *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  do {
    puVar2 = (undefined *)*param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = puVar2 + 0x40;
  puVar3 = puVar2;
  if (puVar2 < (undefined *)0x80000000) {
    puVar3 = &DAT_01d29304;
  }
  if ((int)puVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0197a954(puVar3);
  }
  return;
}

