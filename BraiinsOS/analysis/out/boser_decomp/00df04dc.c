// FUN_00df04dc @ 00df04dc size=392 calls_out=3 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00df04dc(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int local_30;
  int *local_2c;
  int local_28;
  
  iVar11 = param_2[3];
  iVar6 = param_2[1];
  pcVar12 = (char *)param_2[2];
  iVar9 = *param_2;
  do {
    iVar8 = iVar9;
    if (iVar8 == iVar6) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    iVar2 = *(int *)(iVar8 + 0x54);
    cVar1 = *pcVar12;
    iVar9 = iVar8 + 0x6c;
    *param_2 = iVar9;
  } while (((cVar1 == '\0') && (iVar2 != -0x7fffffff)) ||
          ((*(code **)(iVar8 + 0x60) != (code *)0x0 &&
           (iVar2 = (**(code **)(iVar8 + 0x60))(iVar11), iVar2 == 0))));
  iVar2 = param_2[4];
  iVar9 = param_2[5];
  piVar3 = (int *)thunk_FUN_01be5118(0x30);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x30);
  }
  *piVar3 = iVar2;
  piVar3[1] = iVar9;
  piVar3[2] = iVar8 + 0xc;
  local_30 = 4;
  local_28 = 1;
  iVar7 = 1;
  iVar8 = iVar8 + 0x6c;
  local_2c = piVar3;
  while (iVar10 = iVar8, iVar10 != iVar6) {
    iVar8 = iVar10 + 0x6c;
    if (((*pcVar12 != '\0') || (*(int *)(iVar10 + 0x54) == -0x7fffffff)) &&
       ((*(code **)(iVar10 + 0x60) == (code *)0x0 ||
        (iVar4 = (**(code **)(iVar10 + 0x60))(iVar11), iVar4 != 0)))) {
      if (iVar7 == local_30) {
        FUN_0132b898(&local_30,iVar7,1,4,0xc);
        piVar3 = local_2c;
      }
      local_28 = iVar7 + 1;
      piVar5 = piVar3 + iVar7 * 3;
      *piVar5 = iVar2;
      piVar5[1] = iVar9;
      piVar5[2] = iVar10 + 0xc;
      iVar7 = local_28;
      iVar8 = iVar10 + 0x6c;
    }
  }
  *param_1 = local_30;
  param_1[1] = (int)local_2c;
  param_1[2] = local_28;
  return;
}

