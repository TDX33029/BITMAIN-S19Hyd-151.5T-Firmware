// FUN_00be5ca4 @ 00be5ca4 size=272 calls_out=5 calls_in=5
// strings: 

void FUN_00be5ca4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[8]) {
  case '\0':
    iVar4 = *(int *)*param_2;
    iVar5 = ((int *)*param_2)[1];
    *(undefined1 *)(param_2 + 7) = 0;
    param_2[3] = iVar4;
    param_2[4] = iVar5;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22218);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22218);
  case '\x03':
    if ((char)param_2[7] != '\0') {
      if ((char)param_2[7] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bfc);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bfc);
    }
    iVar4 = param_2[3];
    iVar5 = param_2[4];
  }
  if (iVar5 < 0) {
    uVar2 = 0;
LAB_00be5d14:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,iVar5);
  }
  iVar1 = 1;
  iVar3 = 0;
  if (iVar5 != 0) {
    uVar2 = 1;
    iVar1 = FUN_01298504(iVar5,1);
    if (iVar1 == 0) goto LAB_00be5d14;
    iVar3 = iVar5;
  }
  FUN_01bed4e2(iVar1,iVar4,iVar5);
  param_1[2] = iVar3;
  param_1[6] = 0x80000002;
  param_1[3] = iVar1;
  param_1[4] = iVar5;
  *param_1 = 0;
  *(undefined1 *)(param_2 + 8) = 1;
  *(undefined1 *)(param_2 + 7) = 1;
  return;
}

