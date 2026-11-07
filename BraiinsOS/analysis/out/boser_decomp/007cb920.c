// FUN_007cb920 @ 007cb920 size=280 calls_out=2 calls_in=4
// strings: 

void FUN_007cb920(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_r12;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    uVar3 = param_2[1];
    in_r12 = param_2[2];
    piVar1 = *(int **)*param_2;
    *(undefined1 *)(param_2 + 0xb) = 0;
    param_2[3] = piVar1;
    param_2[4] = uVar3;
    param_2[5] = in_r12;
LAB_007cb98c:
    param_2[6] = uVar3;
    if (*piVar1 != 1) {
      uVar2 = 0x80000000;
      goto LAB_007cb9e8;
    }
    piVar1 = piVar1 + 1;
    *(undefined1 *)(param_2 + 10) = 0;
    param_2[7] = piVar1;
    param_2[8] = uVar3;
    param_2[9] = param_2[5];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22218);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22218);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xb)) {
    case 0:
      piVar1 = (int *)param_2[3];
      uVar3 = param_2[4];
      goto LAB_007cb98c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    case 3:
      if (*(char *)(param_2 + 10) != '\0') {
        if (*(char *)(param_2 + 10) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c2c);
      }
      piVar1 = (int *)param_2[7];
    }
  }
  in_r12 = *piVar1;
  uVar3 = 0;
  uVar2 = 0x80000001;
  *(undefined1 *)(param_2 + 10) = 1;
LAB_007cb9e8:
  param_1[6] = uVar2;
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0xc) = 1;
  *(undefined1 *)(param_2 + 0xb) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = in_r12;
  param_1[5] = uVar3;
  return;
}

