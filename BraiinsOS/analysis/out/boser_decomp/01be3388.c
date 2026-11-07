// FUN_01be3388 @ 01be3388 size=286 calls_out=2 calls_in=10
// strings: 

/* WARNING: Removing unreachable block (ram,0x01be3446) */
/* WARNING: Removing unreachable block (ram,0x01be3472) */
/* WARNING: Removing unreachable block (ram,0x01be344a) */
/* WARNING: Removing unreachable block (ram,0x01be3454) */

int FUN_01be3388(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int iStack_1c;
  
  if (param_2 == 4) {
    param_3 = (int *)((uint)param_3 | 0x20000);
  }
  else {
    if (param_2 == 0xe) {
      thunk_FUN_01bee080(0xdd,param_1,0xe,param_3,0,0,0);
      iVar1 = FUN_01be3b5a();
      return iVar1;
    }
    if (param_2 == 9) {
      param_2 = 0x10;
      param_3 = &local_20;
      software_interrupt(0);
      if (param_1 == -0x16) {
        software_interrupt(0);
        return -0x16;
      }
      if (param_1 == 0) {
        if (local_20 == 2) {
          return -iStack_1c;
        }
        return iStack_1c;
      }
      goto LAB_01be3498;
    }
    if (param_2 == 0x406) {
      software_interrupt(0);
      if (param_1 == -0x16) {
        software_interrupt(0);
        software_interrupt(0);
        iVar1 = FUN_01be3b5a(0xffffffea,0,param_3);
        return iVar1;
      }
      uVar2 = 0x406;
      if (-1 < param_1) {
        uVar2 = 2;
        param_3 = (int *)&DAT_00000001;
        software_interrupt(0);
      }
      iVar1 = FUN_01be3b5a(param_1,uVar2,param_3);
      return iVar1;
    }
  }
  software_interrupt(0);
LAB_01be3498:
  iVar1 = FUN_01be3b5a(param_1,param_2,param_3);
  return iVar1;
}

