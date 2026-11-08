// FUN_0074aaac @ 0074aaac size=304 calls_out=6 calls_in=2
// strings: 

void FUN_0074aaac(int *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  iVar6 = param_2[1];
  uVar5 = 0;
  if (iVar6 < 0) {
LAB_0074aac4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar6);
  }
  uVar8 = *param_2;
  if (iVar6 == 0) {
    iVar2 = 1;
    iVar7 = 0;
  }
  else {
    uVar5 = 1;
    iVar2 = FUN_01298504(iVar6,1);
    iVar7 = iVar6;
    if (iVar2 == 0) goto LAB_0074aac4;
  }
  FUN_01bed4e2(iVar2,uVar8,iVar6);
  iVar3 = FUN_01ad01c4(iVar2,iVar6,0x5b);
  if (iVar3 != 0) {
    lVar9 = FUN_017cc7e8();
    iVar3 = (int)((ulonglong)lVar9 >> 0x20);
    if ((int)lVar9 != 0) {
      if (lVar9 < 0) {
        uVar5 = 0;
LAB_0074ab50:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar5,iVar3);
      }
      if (iVar3 == 0) {
        iVar4 = 1;
        iVar6 = 0;
      }
      else {
        uVar5 = 1;
        iVar4 = FUN_01298504(iVar3,1);
        if (iVar4 == 0) goto LAB_0074ab50;
        iVar6 = iVar3;
      }
      FUN_01bed4e2(iVar4,(int)lVar9,iVar3);
      *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 2);
      *param_1 = iVar6;
      param_1[1] = iVar4;
      param_1[2] = iVar3;
      FUN_019bb7e0(iVar7,iVar2);
      return;
    }
  }
  uVar1 = *(undefined2 *)(param_2 + 2);
  *param_1 = iVar7;
  param_1[1] = iVar2;
  param_1[2] = iVar6;
  *(undefined2 *)(param_1 + 3) = uVar1;
  return;
}

