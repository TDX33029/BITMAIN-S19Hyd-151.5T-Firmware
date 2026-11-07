// FUN_016d2cf4 @ 016d2cf4 size=24 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x016d2dca) */
/* WARNING: Removing unreachable block (ram,0x016d2df6) */
/* WARNING: Removing unreachable block (ram,0x016d2dce) */
/* WARNING: Removing unreachable block (ram,0x016d2dd8) */

int FUN_016d2cf4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_r2;
  int *piVar4;
  undefined8 uVar5;
  int iStack_30;
  int iStack_2c;
  
  FUN_016d2cc0();
  FUN_016d2cc4();
  FUN_016dacb0();
  uVar5 = FUN_016d2c08(param_1);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  iVar1 = (int)uVar5;
  if (iVar3 == 4) {
    piVar4 = (int *)((uint)extraout_r2 | 0x20000);
  }
  else {
    if (iVar3 == 0xe) {
      thunk_FUN_016dde14(0xdd,iVar1,0xe,extraout_r2,0,0,0);
      iVar1 = FUN_016d3496();
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
      goto LAB_016d2e1c;
    }
    piVar4 = extraout_r2;
    if (iVar3 == 0x406) {
      software_interrupt(0);
      if (iVar1 == -0x16) {
        software_interrupt(0);
        software_interrupt(0);
        iVar1 = FUN_016d3496(0xffffffea,0,extraout_r2);
        return iVar1;
      }
      uVar2 = 0x406;
      if (-1 < iVar1) {
        uVar2 = 2;
        piVar4 = (int *)&DAT_00000001;
        software_interrupt(0);
      }
      iVar1 = FUN_016d3496(iVar1,uVar2,piVar4);
      return iVar1;
    }
  }
  software_interrupt(0);
LAB_016d2e1c:
  iVar1 = FUN_016d3496(iVar1,iVar3,piVar4);
  return iVar1;
}

