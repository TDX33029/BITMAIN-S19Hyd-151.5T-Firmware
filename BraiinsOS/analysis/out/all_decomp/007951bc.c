// FUN_007951bc @ 007951bc size=312 calls_out=5 calls_in=0
// strings: 

void FUN_007951bc(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[5]) {
  case '\0':
    iVar3 = *param_2;
    param_2[1] = iVar3;
    *(undefined1 *)(param_2 + 4) = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185c854);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185c854);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[4]) {
    case '\0':
      iVar3 = param_2[1];
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185d29c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185d29c);
    case '\x03':
      goto switchD_00795210_caseD_3;
    }
  }
  param_2[2] = iVar3 + 0x30c;
  param_2[3] = -1;
switchD_00795210_caseD_3:
  iVar3 = FUN_006f5654(param_2 + 2,*param_3);
  if (iVar3 == 0) {
    *(undefined1 *)(param_2 + 4) = 3;
    *(undefined1 *)(param_2 + 5) = 3;
    *param_1 = 1;
    return;
  }
  iVar5 = param_2[2];
  if (iVar5 != 0) {
    FUN_006f5fbc(iVar5,param_2[3],1);
  }
  puVar6 = *(uint **)(iVar3 + 0x20);
  if (puVar6 == (uint *)0x0) {
    puVar6 = (uint *)0x0;
  }
  else {
    do {
      uVar4 = *puVar6;
      bVar2 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar2);
    *puVar6 = uVar4 + 1;
    if (0x7fffffff < uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x795298);
      (*pcVar1)();
    }
  }
  FUN_006f625c();
  *(undefined1 *)(param_2 + 4) = 1;
  param_1[1] = puVar6;
  param_1[2] = &DAT_0185c884;
  *(undefined1 *)(param_2 + 5) = 1;
  *param_1 = 0;
  return;
}

