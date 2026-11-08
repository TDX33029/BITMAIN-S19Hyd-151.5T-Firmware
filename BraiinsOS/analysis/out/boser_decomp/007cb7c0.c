// FUN_007cb7c0 @ 007cb7c0 size=260 calls_out=2 calls_in=2
// strings: 

void FUN_007cb7c0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    uVar3 = param_2[1];
    pcVar2 = *(char **)*param_2;
    *(undefined1 *)(param_2 + 0xb) = 0;
    param_2[3] = pcVar2;
    param_2[4] = uVar3;
    param_2[5] = param_2[2];
LAB_007cb828:
    param_2[6] = uVar3;
    if (*pcVar2 == '\x02') {
      uVar3 = 0x80000000;
      cVar1 = '\x02';
      goto LAB_007cb87c;
    }
    param_2[7] = pcVar2;
    *(undefined1 *)(param_2 + 10) = 0;
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
      pcVar2 = (char *)param_2[3];
      uVar3 = param_2[4];
      goto LAB_007cb828;
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
        FUN_01307a10(&DAT_01c21bcc);
      }
      pcVar2 = (char *)param_2[7];
    }
  }
  cVar1 = *pcVar2;
  uVar3 = 0x80000003;
  *(undefined1 *)(param_2 + 10) = 1;
LAB_007cb87c:
  *(char *)(param_1 + 2) = cVar1;
  param_1[6] = uVar3;
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0xc) = 1;
  *(undefined1 *)(param_2 + 0xb) = 1;
  return;
}

