// FUN_01203074 @ 01203074 size=164 calls_out=3 calls_in=1
// strings: 

void FUN_01203074(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    uVar2 = *param_1;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 3) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c234a8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c234a8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
      uVar2 = param_1[1];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c234b8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c234b8);
    case 3:
      uVar2 = param_1[2];
      goto LAB_012030e8;
    }
  }
  param_1[2] = uVar2;
LAB_012030e8:
  cVar1 = FUN_019fa210(uVar2);
  uVar3 = 1;
  if (cVar1 == '\x02') {
    uVar3 = 3;
  }
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return;
}

