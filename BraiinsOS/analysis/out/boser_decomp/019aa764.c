// FUN_019aa764 @ 019aa764 size=252 calls_out=5 calls_in=1
// strings: 

void FUN_019aa764(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (((char)param_1[3] == '\0') && (uVar6 = param_1[2], uVar6 != 0)) {
    iVar8 = param_1[1];
    uVar7 = 0;
    do {
      iVar4 = iVar8 + uVar7;
      iVar5 = uVar6 - uVar7;
      iVar1 = FUN_01bf053e(1,iVar4,iVar5);
      if (iVar1 == -1) {
        piVar2 = (int *)FUN_01be3244();
        iVar3 = *piVar2;
        *(undefined1 *)(param_1 + 3) = 0;
        if (iVar3 != 4) {
          iVar1 = iVar5;
          if (iVar3 == 9) goto LAB_019aa7ec;
          goto LAB_019aa7fc;
        }
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0;
LAB_019aa7ec:
        if (iVar1 == 0) {
LAB_019aa7fc:
          if (uVar7 == 0) goto LAB_019aa824;
          FUN_01bed864(iVar8,iVar4,iVar5);
          goto LAB_019aa820;
        }
        uVar7 = iVar1 + uVar7;
      }
    } while (uVar7 < uVar6);
    iVar5 = 0;
    if (uVar6 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar7,uVar6,&DAT_01d28024);
    }
LAB_019aa820:
    param_1[2] = iVar5;
  }
LAB_019aa824:
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1[1]);
  return;
}

