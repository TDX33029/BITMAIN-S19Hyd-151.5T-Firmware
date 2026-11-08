// FUN_0167825c @ 0167825c size=100 calls_out=3 calls_in=0
// strings: 

void FUN_0167825c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_70 [96];
  
  puVar1 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_019b06e8();
  }
  (*(code *)*puVar1)(auStack_70);
  FUN_01bed4e2(puVar1,auStack_70,0x60);
  return;
}

