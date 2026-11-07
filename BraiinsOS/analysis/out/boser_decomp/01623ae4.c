// FUN_01623ae4 @ 01623ae4 size=216 calls_out=6 calls_in=29
// strings: 

void FUN_01623ae4(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar2 = FUN_01623bc0(param_2,param_3);
  if (param_3 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(2,4,param_3,&DAT_01d060b8);
  }
  uVar1 = *(ushort *)(param_2 + 2);
  lVar7 = FUN_01623bf0(param_2,param_3);
  iVar4 = (int)((ulonglong)lVar7 >> 0x20);
  uVar5 = 0;
  if (lVar7 < 0) {
LAB_01623b30:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar4);
  }
  if (iVar4 == 0) {
    iVar3 = 1;
    iVar6 = 0;
  }
  else {
    uVar5 = 1;
    iVar3 = FUN_01298504(iVar4,1);
    iVar6 = iVar4;
    if (iVar3 == 0) goto LAB_01623b30;
  }
  FUN_01bed4e2(iVar3,(int)lVar7,iVar4);
  *param_1 = iVar6;
  *(ushort *)(param_1 + 3) = uVar2 | uVar1 & 0xc000;
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  return;
}

