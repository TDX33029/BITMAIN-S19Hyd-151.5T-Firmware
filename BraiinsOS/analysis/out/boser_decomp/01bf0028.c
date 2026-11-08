// FUN_01bf0028 @ 01bf0028 size=146 calls_out=2 calls_in=5
// strings: 

/* WARNING: Removing unreachable block (ram,0x01bf0076) */
/* WARNING: Removing unreachable block (ram,0x01bf0070) */
/* WARNING: Removing unreachable block (ram,0x01bf0094) */

undefined4 FUN_01bf0028(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_01d5111c != (code *)0x0) {
    uVar2 = (*DAT_01d5111c)();
    if ((int)uVar2 == 0) {
      return 0;
    }
    if ((int)uVar2 == -0x16) goto LAB_01bf00a6;
  }
  software_interrupt(0);
  uVar2 = CONCAT44(param_2,param_1);
  if (param_1 == -0x26) {
    software_interrupt(0);
    uVar1 = FUN_01be3b5a(0xffffffda);
    return uVar1;
  }
LAB_01bf00a6:
  uVar1 = FUN_01be3b5a((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  return uVar1;
}

