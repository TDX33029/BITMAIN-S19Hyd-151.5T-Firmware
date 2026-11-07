// FUN_0174ae3c @ 0174ae3c size=276 calls_out=7 calls_in=0
// strings: 

void FUN_0174ae3c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar3 = FUN_01444960(*param_2,param_2[1]);
    param_2[2] = uVar3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d19978);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d19978);
  case 3:
    uVar3 = param_2[2];
  }
  FUN_014443f8(&local_34,uVar3,*param_3);
  if (local_34 == 0) {
    FUN_0174afd4(param_2[2]);
    if (local_30 == 0) {
      local_34 = iStack_2c;
      local_30 = iStack_28;
      piVar2 = (int *)thunk_FUN_01be5118(8);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      uVar3 = 1;
      *piVar2 = iStack_2c;
      piVar2[1] = iStack_28;
      puVar4 = &DAT_01d199b4;
    }
    else {
      piVar2 = (int *)thunk_FUN_01be5118(0x10);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
      uVar3 = 0;
      *piVar2 = local_30;
      piVar2[1] = iStack_2c;
      piVar2[2] = iStack_28;
      puVar4 = &DAT_01d19988;
      piVar2[3] = local_24;
    }
    param_1[1] = piVar2;
    param_1[2] = puVar4;
    uVar1 = 1;
    *param_1 = uVar3;
  }
  else {
    *param_1 = 2;
    uVar1 = 3;
  }
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}

