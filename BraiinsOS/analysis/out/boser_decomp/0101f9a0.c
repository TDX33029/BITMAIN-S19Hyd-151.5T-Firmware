// FUN_0101f9a0 @ 0101f9a0 size=288 calls_out=5 calls_in=1
// strings: 

void FUN_0101f9a0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x10)) {
  case 0:
    puVar1 = param_2 + 4;
    *puVar1 = *param_2;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    param_2[8] = puVar1;
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
      puVar1 = (undefined4 *)param_2[8];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d29fe0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d29fe0);
    case 3:
      goto switchD_0101fa0c_caseD_3;
    }
  }
  param_2[9] = puVar1;
  FUN_01bed93e(param_2 + 10,0,0x11);
switchD_0101fa0c_caseD_3:
  FUN_00b220b4(&local_50,param_2 + 9,*param_3);
  if (local_50 == 4) {
    uVar4 = 3;
    *(undefined1 *)(param_2 + 0xf) = 3;
    *param_1 = 4;
  }
  else {
    FUN_009cdcac(param_2 + 9);
    uVar4 = 1;
    *(undefined1 *)(param_2 + 0xf) = 1;
    *param_1 = local_50;
    param_1[1] = iStack_4c;
    param_1[2] = iStack_48;
    param_1[3] = iStack_44;
    param_1[4] = iStack_40;
    param_1[5] = iStack_3c;
    param_1[6] = local_38;
    param_1[7] = iStack_34;
    param_1[8] = iStack_30;
    param_1[9] = iStack_2c;
    param_1[10] = iStack_28;
    param_1[0xb] = iStack_24;
    iVar2 = param_2[5];
    iVar3 = param_2[6];
    param_1[0xc] = param_2[4];
    param_1[0xd] = iVar2;
    param_1[0xe] = iVar3;
  }
  *(undefined1 *)(param_2 + 0x10) = uVar4;
  return;
}

