// FUN_00df02a0 @ 00df02a0 size=344 calls_out=3 calls_in=2
// strings: 

void FUN_00df02a0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_30;
  int *local_2c;
  int local_28;
  
  iVar5 = param_2[1];
  iVar8 = param_2[2];
  pcVar9 = (char *)param_2[3];
  iVar7 = *param_2;
  do {
    iVar6 = iVar7;
    if (iVar6 == iVar5) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    pcVar4 = *(code **)(iVar6 + 0x48);
    iVar7 = iVar6 + 0x54;
    *param_2 = iVar7;
  } while (((pcVar4 != (code *)0x0) && (iVar1 = (*pcVar4)(iVar8), iVar1 == 0)) ||
          ((*pcVar9 == '\0' && (*(int *)(iVar6 + 0x3c) != -0x7fffffff))));
  piVar2 = (int *)thunk_FUN_01be5118(0x10);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x10);
  }
  iVar1 = 1;
  *piVar2 = iVar6 + 0xc;
  local_28 = 1;
  local_30 = 4;
  iVar7 = iVar6 + 0x54;
  local_2c = piVar2;
  while (iVar6 = iVar7, iVar6 != iVar5) {
    iVar7 = iVar6 + 0x54;
    if (((*(code **)(iVar6 + 0x48) == (code *)0x0) ||
        (iVar3 = (**(code **)(iVar6 + 0x48))(iVar8), iVar3 != 0)) &&
       ((*pcVar9 != '\0' || (*(int *)(iVar6 + 0x3c) == -0x7fffffff)))) {
      if (iVar1 == local_30) {
        FUN_0132b898(&local_30,iVar1,1,4,4);
        piVar2 = local_2c;
      }
      piVar2[iVar1] = iVar6 + 0xc;
      iVar1 = iVar1 + 1;
      iVar7 = iVar6 + 0x54;
      local_28 = iVar1;
    }
  }
  *param_1 = local_30;
  param_1[1] = (int)local_2c;
  param_1[2] = local_28;
  return;
}

