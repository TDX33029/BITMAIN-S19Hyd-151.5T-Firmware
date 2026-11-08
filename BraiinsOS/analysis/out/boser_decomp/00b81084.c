// FUN_00b81084 @ 00b81084 size=260 calls_out=4 calls_in=1
// strings: /tmp/miner_hwid

void FUN_00b81084(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  int local_28;
  int iStack_24;
  int iStack_20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x3c)) {
  case 0:
    *(undefined1 *)(param_2 + 0x38) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c137c0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c137c0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x38)) {
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1315c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1315c);
    case 3:
switchD_00b810dc_caseD_3:
      FUN_00b71f88(&local_28,param_2 + 4,*param_3);
      if (local_28 == -0x7fffffff) {
        uVar2 = 3;
        *(undefined1 *)(param_2 + 0x38) = 3;
        *param_1 = -0x7fffffff;
      }
      else {
        cVar1 = *(char *)(param_2 + 0x34);
        bVar3 = cVar1 == '\x03';
        if (bVar3) {
          cVar1 = *(char *)(param_2 + 0x30);
        }
        if (bVar3 && cVar1 == '\x03') {
          FUN_00b71be0(param_2 + 0x1c);
        }
        uVar2 = 1;
        *(undefined1 *)(param_2 + 0x38) = 1;
        *param_1 = local_28;
        param_1[1] = iStack_24;
        param_1[2] = iStack_20;
      }
      *(undefined1 *)(param_2 + 0x3c) = uVar2;
      return;
    }
  }
  *(undefined1 *)(param_2 + 0x34) = 0;
  *(char **)(param_2 + 4) = "/tmp/miner_hwid";
  *(undefined4 *)(param_2 + 8) = 0xf;
  goto switchD_00b810dc_caseD_3;
}

