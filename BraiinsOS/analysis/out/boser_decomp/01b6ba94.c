// FUN_01b6ba94 @ 01b6ba94 size=356 calls_out=7 calls_in=1
// strings: 

void FUN_01b6ba94(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  uVar1 = DAT_01d53560;
  if (param_4 == 0) {
    iVar3 = 0x158;
    pcVar7 = FUN_01b6b1c4;
    pcVar4 = FUN_01b6ad8c;
  }
  else {
    iVar3 = 0x1cc;
    pcVar7 = thunk_FUN_01be4678 + 1;
    pcVar4 = thunk_FUN_01be5118 + 1;
  }
  pcVar5 = *(code **)((int)&PTR_01d3b2b0 + iVar3);
  iVar3 = (*pcVar4)(0x40);
  if (iVar3 != 0) {
    uVar9 = param_3;
    uVar8 = FUN_01becf4c(iVar3,0x40,param_2,param_3,param_3);
    uVar6 = (uint)uVar8;
    if (-1 < (int)uVar6) {
      if (uVar6 < 0x40) {
LAB_01b6bbb0:
        *param_1 = iVar3;
        goto LAB_01b6bbb4;
      }
      uVar6 = uVar6 + 1;
      iVar2 = (*pcVar5)(iVar3,uVar6);
      if (iVar2 != 0) {
        uVar8 = FUN_01becf4c(iVar2,uVar6,param_2,param_3,uVar9);
        iVar3 = iVar2;
        if ((uint)uVar8 < uVar6 && -1 < (int)(uint)uVar8) goto LAB_01b6bbb0;
      }
    }
  }
  (*pcVar7)(iVar3);
  *param_1 = 0;
  uVar8 = FUN_01be3244();
  *(undefined4 *)uVar8 = 0xc;
  uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),0xffffffff);
LAB_01b6bbb4:
  if ((uVar1 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar1 ^ DAT_01d53560,0);
  }
  return;
}

