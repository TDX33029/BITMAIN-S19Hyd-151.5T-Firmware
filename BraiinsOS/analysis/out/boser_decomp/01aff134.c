// FUN_01aff134 @ 01aff134 size=164 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01aff134(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_14 [8];
  int local_c;
  
  local_c = DAT_01d53560;
  iVar1 = 0;
  puVar2 = auStack_14;
  do {
    iVar1 = iVar1 + 1;
    *puVar2 = (char)param_2;
    param_2 = param_2 >> 8;
    puVar2 = puVar2 + 1;
  } while (iVar1 != 8);
  FUN_01b6c814(param_1,auStack_14);
  if (local_c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

