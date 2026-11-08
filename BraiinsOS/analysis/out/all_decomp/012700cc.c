// FUN_012700cc @ 012700cc size=80 calls_out=3 calls_in=0
// strings: 

void FUN_012700cc(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_60 [80];
  
  iVar1 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  FUN_01270230(auStack_60);
  FUN_016dd1aa(iVar1,auStack_60,0x50);
  return;
}

