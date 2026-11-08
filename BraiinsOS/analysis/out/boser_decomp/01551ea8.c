// FUN_01551ea8 @ 01551ea8 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_01551ea8(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)*param_1;
  *(int *)*param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  uVar2 = FUN_016bc0ec(1);
  *puVar1 = uVar2;
  return;
}

