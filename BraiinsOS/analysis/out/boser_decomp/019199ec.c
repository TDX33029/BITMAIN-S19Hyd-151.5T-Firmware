// FUN_019199ec @ 019199ec size=72 calls_out=3 calls_in=6
// strings: 

void FUN_019199ec(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01914f6c();
  uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0056aee8,0x41,&DAT_01d252ac);
  }
  FUN_01914fcc(param_1,param_2);
  return;
}

