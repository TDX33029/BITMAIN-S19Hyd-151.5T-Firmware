// FUN_00c32b68 @ 00c32b68 size=100 calls_out=3 calls_in=0
// strings: 

void FUN_00c32b68(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [72];
  
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
  (*(code *)*puVar1)(auStack_58);
  FUN_01bed4e2(puVar1,auStack_58,0x48);
  return;
}

