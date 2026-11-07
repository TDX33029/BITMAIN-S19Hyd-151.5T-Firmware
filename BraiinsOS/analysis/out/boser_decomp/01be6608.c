// FUN_01be6608 @ 01be6608 size=148 calls_out=2 calls_in=2
// strings: 

int FUN_01be6608(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_18;
  int iStack_14;
  
  software_interrupt(0);
  iVar1 = FUN_01be3b5a(0,param_1,0,param_2);
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_01be3244(), *piVar2 == 0x26)) {
    software_interrupt(0);
    iVar1 = FUN_01be3b5a(param_1,&local_18);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      if (local_18 == -1) {
        *param_2 = -1;
        param_2[1] = -1;
        if (iStack_14 != -1) {
          param_2[2] = iStack_14;
          param_2[3] = 0;
          return 0;
        }
      }
      else {
        *param_2 = local_18;
        param_2[1] = 0;
        if (iStack_14 != -1) {
          param_2[2] = iStack_14;
          param_2[3] = 0;
          return 0;
        }
      }
      iVar1 = 0;
      param_2[2] = -1;
      param_2[3] = -1;
    }
  }
  return iVar1;
}

