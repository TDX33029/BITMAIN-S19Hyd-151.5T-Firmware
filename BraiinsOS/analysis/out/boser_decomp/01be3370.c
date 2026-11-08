// FUN_01be3370 @ 01be3370 size=24 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x01be3446) */
/* WARNING: Removing unreachable block (ram,0x01be3472) */
/* WARNING: Removing unreachable block (ram,0x01be344a) */
/* WARNING: Removing unreachable block (ram,0x01be3454) */

int FUN_01be3370(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_r2;
  int *piVar4;
  undefined8 uVar5;
  int iStack_30;
  int iStack_2c;
  
  FUN_01be333c();
  FUN_01be3340();
  FUN_01beafc8();
  uVar5 = FUN_01be3284(param_1);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  iVar1 = (int)uVar5;
  if (iVar3 == 4) {
    piVar4 = (int *)((uint)extraout_r2 | 0x20000);
  }
  else {
    if (iVar3 == 0xe) {
      thunk_FUN_01bee080(0xdd,iVar1,0xe,extraout_r2,0,0,0);
      iVar1 = FUN_01be3b5a();
      return iVar1;
    }
    if (iVar3 == 9) {
      iVar3 = 0x10;
      piVar4 = &iStack_30;
      software_interrupt(0);
      if (iVar1 == -0x16) {
        software_interrupt(0);
        return -0x16;
      }
      if (iVar1 == 0) {
        if (iStack_30 == 2) {
          return -iStack_2c;
        }
        return iStack_2c;
      }
      goto LAB_01be3498;
    }
    piVar4 = extraout_r2;
    if (iVar3 == 0x406) {
      software_interrupt(0);
      if (iVar1 == -0x16) {
        software_interrupt(0);
        software_interrupt(0);
        iVar1 = FUN_01be3b5a(0xffffffea,0,extraout_r2);
        return iVar1;
      }
      uVar2 = 0x406;
      if (-1 < iVar1) {
        uVar2 = 2;
        piVar4 = (int *)&DAT_00000001;
        software_interrupt(0);
      }
      iVar1 = FUN_01be3b5a(iVar1,uVar2,piVar4);
      return iVar1;
    }
  }
  software_interrupt(0);
LAB_01be3498:
  iVar1 = FUN_01be3b5a(iVar1,iVar3,piVar4);
  return iVar1;
}

