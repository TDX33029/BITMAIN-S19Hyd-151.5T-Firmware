// FUN_007c539c @ 007c539c size=308 calls_out=2 calls_in=3
// strings: 

void FUN_007c539c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined8 in_d16;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    uVar1 = param_2[1];
    puVar2 = *(uint **)*param_2;
    *(undefined1 *)(param_2 + 0xb) = 0;
    param_2[3] = puVar2;
    param_2[4] = uVar1;
    param_2[5] = param_2[2];
LAB_007c5410:
    param_2[6] = uVar1;
    if ((*puVar2 & 1) == 0) {
      uVar1 = 0x80000000;
      goto LAB_007c5480;
    }
    puVar2 = puVar2 + 2;
    *(undefined1 *)(param_2 + 10) = 0;
    param_2[7] = puVar2;
    param_2[8] = uVar1;
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
      puVar2 = (uint *)param_2[3];
      uVar1 = param_2[4];
      goto LAB_007c5410;
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
        FUN_01307a10(&DAT_01c21bec);
      }
      puVar2 = (uint *)param_2[7];
    }
  }
  in_d16 = *(undefined8 *)puVar2;
  *(undefined1 *)(param_2 + 10) = 1;
  uVar1 = 0x80000000;
  if (((uint)((ulonglong)in_d16 >> 0x20) & 0x7fffffff) < 0x7ff00000) {
    uVar1 = 0x80000001;
  }
LAB_007c5480:
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[6] = uVar1;
  *(undefined8 *)(param_1 + 4) = in_d16;
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0xc) = 1;
  *(undefined1 *)(param_2 + 0xb) = 1;
  return;
}

