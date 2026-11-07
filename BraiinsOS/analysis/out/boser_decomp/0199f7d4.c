// FUN_0199f7d4 @ 0199f7d4 size=364 calls_out=1 calls_in=2
// strings: 

void FUN_0199f7d4(int *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
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
        FUN_012faff4(1,0,0,&DAT_01d27bac);
      }
    }
  }
  else {
    uVar3 = param_2[1];
    uVar4 = 0;
  }
  iVar8 = *param_2;
  pcVar5 = (char *)(uVar3 + iVar8);
  iVar7 = uVar3 - uVar4;
  do {
    iVar6 = iVar7;
    pcVar5 = pcVar5 + -1;
    if (iVar6 == 0) {
      iVar7 = 0;
      goto LAB_0199f874;
    }
    iVar7 = iVar6 + -1;
  } while (*pcVar5 != '/');
  uVar4 = iVar6 + uVar4;
  if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar4,uVar3,uVar3,&DAT_01d27b9c);
  }
  iVar7 = 1;
LAB_0199f874:
  iVar6 = uVar3 - uVar4;
  uVar2 = 10;
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      cVar1 = *(char *)(iVar8 + uVar4);
      uVar2 = 10;
    }
    else {
      if ((iVar6 != 2) || (*(char *)(iVar8 + uVar4) != '.')) {
        uVar2 = 9;
        goto LAB_0199f8ec;
      }
      cVar1 = *(char *)(iVar8 + uVar4 + 1);
      uVar2 = 8;
    }
    if (cVar1 != '.') {
      uVar2 = 9;
    }
  }
LAB_0199f8ec:
  param_1[2] = iVar8 + uVar4;
  *(undefined1 *)(param_1 + 1) = uVar2;
  param_1[3] = iVar6;
  *param_1 = iVar7 + iVar6;
  return;
}

