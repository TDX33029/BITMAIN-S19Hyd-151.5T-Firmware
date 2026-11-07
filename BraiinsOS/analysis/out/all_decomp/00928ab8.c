// FUN_00928ab8 @ 00928ab8 size=392 calls_out=3 calls_in=0
// strings: 

void FUN_00928ab8(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_130 [28];
  undefined1 local_c0;
  
  piVar1 = *(int **)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0xc);
  piVar4 = piVar1 + *(int *)(param_2 + 0x14) * 0x1c;
  if (piVar1 == piVar4) {
    piVar5 = piVar4;
  }
  else {
    iVar3 = *piVar1;
    piVar5 = piVar1 + 0x1c;
    if (iVar3 != 4) {
      FUN_016dd1aa((uint)local_130 | 4,piVar1 + 1,0x6c);
      local_c0 = 0;
                    /* WARNING: Could not recover jumptable at 0x00928bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      local_130[0] = iVar3;
      (*(code *)(&DAT_00928bf0 + *(int *)(&DAT_00928bf0 + iVar3 * 4)))();
      return;
    }
  }
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  iVar3 = ((uint)((int)piVar4 - (int)piVar5) >> 4) * -0x49249249 + 1;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    FUN_009249a0(piVar5);
    piVar5 = piVar5 + 0x1c;
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(piVar1);
  }
  return;
}

