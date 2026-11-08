// FUN_009ce520 @ 009ce520 size=284 calls_out=5 calls_in=1
// strings: 

void FUN_009ce520(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x10)) {
  case 0:
    puVar2 = param_2 + 4;
    *puVar2 = *param_2;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    param_2[8] = puVar2;
    *(undefined1 *)(param_2 + 0xf) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d7ac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d7ac);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xf)) {
    case 0:
      puVar2 = (undefined4 *)param_2[8];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d29fe0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d29fe0);
    case 3:
      goto switchD_009ce58c_caseD_3;
    }
  }
  param_2[9] = puVar2;
  FUN_01bed93e(param_2 + 10,0,0x11);
switchD_009ce58c_caseD_3:
  FUN_00b21f54(&local_30,param_2 + 9,*param_3);
  if (local_30 == 3 && iStack_2c == 0) {
    uVar1 = 3;
    *(undefined1 *)(param_2 + 0xf) = 3;
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    FUN_009cdcac(param_2 + 9);
    uVar1 = 1;
    *(undefined1 *)(param_2 + 0xf) = 1;
    *param_1 = local_30;
    param_1[1] = iStack_2c;
    param_1[2] = iStack_28;
    param_1[3] = iStack_24;
    iVar3 = param_2[5];
    iVar4 = param_2[6];
    param_1[4] = param_2[4];
    param_1[5] = iVar3;
    param_1[6] = iVar4;
  }
  *(undefined1 *)(param_2 + 0x10) = uVar1;
  return;
}

