// FUN_019c470c @ 019c470c size=232 calls_out=5 calls_in=1
// strings: 

void FUN_019c470c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r6;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  local_24 = 1;
  local_30 = 1;
  local_2c = 0;
  local_34 = 0x3a;
  local_48 = 0x3a;
  uStack_3c = 0;
  iVar3 = 0;
  uStack_44 = param_2;
  uStack_40 = param_3;
  local_38 = param_3;
  local_28 = param_3;
  while( true ) {
    uVar5 = FUN_019c456c(&local_48);
    if ((int)uVar5 == 0) break;
    iVar3 = (int)uVar5;
    unaff_r6 = (int)((ulonglong)uVar5 >> 0x20);
  }
  if (iVar3 == 0) {
    iVar1 = 1;
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    lVar6 = FUN_013245a0(iVar3,unaff_r6);
    iVar2 = (int)((ulonglong)lVar6 >> 0x20);
    uVar4 = 0;
    if (lVar6 < 0) {
LAB_019c4784:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,iVar2);
    }
    if (iVar2 == 0) {
      iVar1 = 1;
      iVar3 = 0;
    }
    else {
      uVar4 = 1;
      iVar1 = FUN_01298504(iVar2,1);
      iVar3 = iVar2;
      if (iVar1 == 0) goto LAB_019c4784;
    }
    FUN_01bed4e2(iVar1,(int)lVar6,iVar2);
  }
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}

