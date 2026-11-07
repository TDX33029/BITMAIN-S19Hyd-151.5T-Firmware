// FUN_0131a6bc @ 0131a6bc size=56 calls_out=2 calls_in=0
// strings: 

void FUN_0131a6bc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d29414);
  }
  uVar1 = FUN_0131a734();
  *(undefined4 *)*puVar2 = uVar1;
  return;
}

