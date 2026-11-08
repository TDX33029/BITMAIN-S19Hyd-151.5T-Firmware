// FUN_00b9d9a4 @ 00b9d9a4 size=100 calls_out=3 calls_in=0
// strings: 

void FUN_00b9d9a4(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_248 [568];
  
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
  (*(code *)*puVar1)(auStack_248);
  FUN_016dd1aa(puVar1,auStack_248,0x238);
  return;
}

