// FUN_00b80464 @ 00b80464 size=268 calls_out=4 calls_in=2
// strings: reboot

void FUN_00b80464(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x2dc)) {
  case 0:
    *(undefined1 *)(param_2 + 0x2d8) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13780);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13780);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d8)) {
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c130ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c130ac);
    case 3:
switchD_00b804bc_caseD_3:
      FUN_00b6cd44(&local_38,param_2 + 4);
      if (local_38 == -0x7fffffe9) {
        uVar2 = 3;
        *(undefined1 *)(param_2 + 0x2d8) = 3;
        *param_1 = -0x7fffffe9;
      }
      else {
        cVar1 = *(char *)(param_2 + 0x2d4);
        bVar3 = cVar1 == '\x03';
        if (bVar3) {
          cVar1 = *(char *)(param_2 + 0x2d0);
        }
        if (bVar3 && cVar1 == '\x03') {
          FUN_00b6cd04(param_2 + 0x24);
        }
        uVar2 = 1;
        *(undefined1 *)(param_2 + 0x2d8) = 1;
        *param_1 = local_38;
        param_1[1] = iStack_34;
        param_1[2] = iStack_30;
        param_1[3] = iStack_2c;
        param_1[4] = iStack_28;
        param_1[5] = iStack_24;
      }
      *(undefined1 *)(param_2 + 0x2dc) = uVar2;
      return;
    }
  }
  *(undefined1 *)(param_2 + 0x2d4) = 0;
  *(char **)(param_2 + 4) = "reboot";
  *(undefined4 *)(param_2 + 8) = 6;
  *(undefined4 *)(param_2 + 0xc) = 4;
  *(undefined4 *)(param_2 + 0x10) = 0;
  goto switchD_00b804bc_caseD_3;
}

