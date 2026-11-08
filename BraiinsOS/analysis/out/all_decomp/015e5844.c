// FUN_015e5844 @ 015e5844 size=376 calls_out=1 calls_in=2
// strings: 

void FUN_015e5844(int *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(byte *)(param_2 + 7) < 2) {
    if (*(char *)((int)param_2 + 0x1e) == '\0') {
      uVar3 = param_2[1];
      if (uVar3 == 0) {
        uVar4 = 0;
      }
      else {
        pcVar5 = (char *)*param_2;
        if (uVar3 == 1) {
          uVar3 = 1;
          uVar4 = (uint)(*pcVar5 == '.');
        }
        else {
          cVar1 = *pcVar5;
          uVar4 = 0;
          if (cVar1 == '.') {
            pcVar5 = (char *)(uint)(byte)pcVar5[1];
          }
          if (cVar1 == '.' && pcVar5 == &DAT_0000002f) {
            uVar4 = 1;
          }
        }
      }
    }
    else {
      uVar3 = param_2[1];
      uVar4 = 1;
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(1,0,0,&DAT_018aaf84);
      }
    }
  }
  else {
    uVar3 = param_2[1];
    uVar4 = 0;
  }
  iVar9 = *param_2;
  pcVar5 = (char *)(uVar3 + iVar9);
  iVar7 = iVar9 + uVar4;
  iVar6 = uVar3 - uVar4;
  do {
    iVar8 = iVar6;
    pcVar5 = pcVar5 + -1;
    if (iVar8 == 0) {
      iVar8 = 0;
      iVar6 = uVar3 - uVar4;
      uVar2 = 10;
      if (iVar6 == 0) goto LAB_015e5968;
      goto LAB_015e58fc;
    }
    iVar6 = iVar8 + -1;
  } while (*pcVar5 != '/');
  uVar4 = iVar8 + uVar4;
  if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar3,uVar3,&DAT_018aaf74);
  }
  iVar7 = iVar9 + uVar4;
  iVar8 = 1;
  iVar6 = uVar3 - uVar4;
  uVar2 = 10;
  if (iVar6 != 0) {
LAB_015e58fc:
    uVar2 = 10;
    if (iVar6 == 1) {
      cVar1 = *(char *)(iVar9 + uVar4);
    }
    else {
      if ((iVar6 != 2) || (*(char *)(iVar9 + uVar4) != '.')) {
        uVar2 = 9;
        goto LAB_015e5968;
      }
      cVar1 = *(char *)(iVar7 + 1);
      uVar2 = 8;
    }
    if (cVar1 != '.') {
      uVar2 = 9;
    }
  }
LAB_015e5968:
  param_1[2] = iVar7;
  *(undefined1 *)(param_1 + 1) = uVar2;
  param_1[3] = iVar6;
  *param_1 = iVar8 + iVar6;
  return;
}

