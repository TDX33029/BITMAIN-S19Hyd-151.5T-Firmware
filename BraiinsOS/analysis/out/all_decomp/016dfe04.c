// FUN_016dfe04 @ 016dfe04 size=146 calls_out=2 calls_in=5
// strings: 

/* WARNING: Removing unreachable block (ram,0x016dfe52) */
/* WARNING: Removing unreachable block (ram,0x016dfe4c) */
/* WARNING: Removing unreachable block (ram,0x016dfe70) */

undefined4 FUN_016dfe04(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_018db704 != (code *)0x0) {
    uVar2 = (*DAT_018db704)();
    if ((int)uVar2 == 0) {
      return 0;
    }
    if ((int)uVar2 == -0x16) goto LAB_016dfe82;
  }
  software_interrupt(0);
  uVar2 = CONCAT44(param_2,param_1);
  if (param_1 == -0x26) {
    software_interrupt(0);
    uVar1 = FUN_016d3496(0xffffffda);
    return uVar1;
  }
LAB_016dfe82:
  uVar1 = FUN_016d3496((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  return uVar1;
}

