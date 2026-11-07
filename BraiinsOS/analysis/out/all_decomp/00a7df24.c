// FUN_00a7df24 @ 00a7df24 size=232 calls_out=3 calls_in=2
// strings: 

bool FUN_00a7df24(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 auStack_20 [8];
  undefined1 *local_18;
  
  uVar3 = (undefined1)param_1[1];
  bVar1 = true;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
    iVar2 = *param_1;
    uVar3 = 4;
    if (*(undefined1 **)(iVar2 + 8) == &DAT_3b9aca00) goto switchD_00a7df44_caseD_4;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[2] = iVar2;
LAB_00a7dfb4:
    param_1[3] = iVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186d778);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186d778);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[4]) {
    case '\0':
      iVar2 = param_1[2];
      goto LAB_00a7dfb4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01879154);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01879154);
    case '\x03':
      iVar2 = param_1[3];
    }
    break;
  case 4:
    goto switchD_00a7df44_caseD_4;
  }
  FUN_016510c8(auStack_20,iVar2,param_2);
  uVar3 = 1;
  if (local_18 == &DAT_3b9aca00) {
    uVar3 = 3;
  }
  *(undefined1 *)(param_1 + 4) = uVar3;
  bVar1 = local_18 == &DAT_3b9aca00;
switchD_00a7df44_caseD_4:
  *(undefined1 *)(param_1 + 1) = uVar3;
  return bVar1;
}

