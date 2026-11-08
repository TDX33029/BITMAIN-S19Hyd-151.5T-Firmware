// FUN_00d4ba18 @ 00d4ba18 size=100 calls_out=3 calls_in=0
// strings: 

void FUN_00d4ba18(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_168 [344];
  
  puVar1 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_015f8320();
  }
  (*(code *)*puVar1)(auStack_168);
  FUN_016dd1aa(puVar1,auStack_168,0x158);
  return;
}

