// FUN_00b486ec @ 00b486ec size=208 calls_out=6 calls_in=1
// strings: 

void FUN_00b486ec(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    param_2[1] = *(int *)*param_2 + 8;
    param_2[2] = 0xffffffff;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b064);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b064);
  }
  iVar1 = FUN_00c81384(param_2 + 1,param_3);
  if (iVar1 == 0) {
    *param_1 = 0x80000000;
    *(undefined1 *)(param_2 + 3) = 3;
    return;
  }
  iVar2 = param_2[1];
  if (iVar2 != 0) {
    FUN_00c81a4c(iVar2,param_2[2],1);
  }
  FUN_00ce77fc(&local_30,*(int *)(iVar1 + 0x2c),
               *(int *)(iVar1 + 0x2c) + *(int *)(iVar1 + 0x30) * 0x30);
  FUN_00c822ec(iVar1);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

