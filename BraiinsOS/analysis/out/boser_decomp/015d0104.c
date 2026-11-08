// FUN_015d0104 @ 015d0104 size=500 calls_out=2 calls_in=3
// strings: 

uint FUN_015d0104(undefined1 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int local_20 [4];
  
  uVar1 = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    goto switchD_015d0120_caseD_0;
  case 3:
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 != param_2[4]) {
      return 0;
    }
    piVar2 = *(int **)(param_1 + 8);
    piVar3 = (int *)param_2[3];
LAB_015d02b8:
    local_20[0] = thunk_FUN_01bed842(piVar2,piVar3,iVar4);
    break;
  case 4:
    piVar3 = local_20;
    bVar5 = (char)param_2[5] != '\x02';
    if (bVar5) {
      FUN_01bed4e2(piVar3,(int)param_2 + 0x25,0x10);
    }
    else {
      local_20[0] = *(int *)((int)param_2 + 0x1a);
    }
    if ((bool)param_1[1] != bVar5) {
      return 0;
    }
    piVar2 = (int *)(param_1 + 2);
    if (bVar5) {
      iVar4 = 0x10;
      goto LAB_015d02b8;
    }
    local_20[0] = *piVar2 - local_20[0];
    break;
  case 5:
    local_20[0] = *(byte *)(param_2 + 5) - 2;
    if (local_20[0] == 0) {
      if (*(char *)((int)param_2 + 0x1a) != '\x7f') {
        return 0;
      }
    }
    else if ((*(int *)((int)param_2 + 0x25) != 0 || *(int *)((int)param_2 + 0x2d) != 0) ||
             (*(int *)((int)param_2 + 0x29) != 0 || *(int *)((int)param_2 + 0x31) != 0x1000000)) {
      return 0;
    }
    break;
  case 6:
    if ((char)param_2[5] == '\x02') {
      if (*(char *)((int)param_2 + 0x1a) == '\x7f') {
        return 0;
      }
      return 0;
    }
    if ((*(int *)((int)param_2 + 0x25) == 0 && *(int *)((int)param_2 + 0x2d) == 0) &&
        (*(int *)((int)param_2 + 0x29) == 0 && *(int *)((int)param_2 + 0x31) == 0x1000000)) {
      return (uint)((char)param_2[5] != '\x02');
    }
    return 0;
  case 7:
    if (*param_2 != 1) {
      return 0;
    }
    if (param_2[1] != *(int *)(param_1 + 4)) {
      return 0;
    }
  case 1:
    local_20[0] = *(byte *)(param_2 + 5) - 2;
    break;
  case 8:
    if (*param_2 != 1) {
      return 0;
    }
    if (param_2[1] != *(int *)(param_1 + 4)) {
      return 0;
    }
  case 2:
    return (uint)((char)param_2[5] != '\x02');
  case 9:
                    /* WARNING: Could not recover jumptable at 0x015d01a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x14))
                      (*(int *)(param_1 + 4) +
                       (*(int *)(*(int *)(param_1 + 8) + 8) - 1U & 0xfffffff8) + 8);
    return uVar1;
  }
  uVar1 = (uint)(local_20[0] == 0);
switchD_015d0120_caseD_0:
  return uVar1;
}

