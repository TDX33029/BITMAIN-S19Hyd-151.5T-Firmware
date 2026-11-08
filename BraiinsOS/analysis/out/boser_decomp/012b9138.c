// FUN_012b9138 @ 012b9138 size=188 calls_out=2 calls_in=17
// strings: `Extensions` tracks values by type

int FUN_012b9138(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar1 = (int *)FUN_012b18a4(param_1,param_2,0xe572951a,0x5145af7b,0x1d1b7c57,0xd6228350);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1 + (*(int *)(piVar1[1] + 8) - 1U & 0xfffffff8) + 8;
    (**(code **)(piVar1[1] + 0xc))(&local_28,iVar2);
    if ((local_28 != -0x1a8d6ae6 || iStack_20 != 0x1d1b7c57) ||
        (iStack_24 != 0x5145af7b || iStack_1c != -0x29dd7cb0)) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("`Extensions` tracks values by type",0x22,&DAT_01ce268c);
    }
  }
  return iVar2;
}

