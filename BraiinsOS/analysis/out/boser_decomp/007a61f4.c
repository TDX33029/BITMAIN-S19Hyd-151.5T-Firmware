// FUN_007a61f4 @ 007a61f4 size=372 calls_out=8 calls_in=1
// strings: 

void FUN_007a61f4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r7;
  longlong lVar5;
  int local_48;
  int local_44;
  uint local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  iVar1 = FUN_007a66fc(param_2,param_3);
  if (iVar1 == 0) {
    FUN_007a6398(&local_48,param_2,param_3);
    if (local_40 < 0x40) {
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = local_40;
    }
    else {
      local_24 = 0x3f;
      local_28 = local_44 + local_40;
      local_2c = local_44;
      FUN_007a67e4(&local_38,&local_2c);
      lVar5 = FUN_007a8164(local_34,local_30);
      iVar1 = (int)((ulonglong)lVar5 >> 0x20);
      if (lVar5 < 0) {
        uVar4 = 0;
        iVar1 = unaff_r7;
LAB_007a62a0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar4,iVar1);
      }
      if (iVar1 == 0) {
        iVar3 = 1;
        iVar2 = 0;
      }
      else {
        uVar4 = 1;
        iVar3 = FUN_01298504(iVar1,1);
        if (iVar3 == 0) goto LAB_007a62a0;
        iVar2 = iVar1;
      }
      FUN_01bed4e2(iVar3,(int)lVar5,iVar1);
      *param_1 = iVar2;
      param_1[1] = iVar3;
      param_1[2] = iVar1;
      FUN_019bb7e0(local_38,local_34);
      FUN_019bb7e0(local_48,local_44);
    }
  }
  else {
    uVar4 = 0;
    if (param_3 < 0) {
LAB_007a6228:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,param_3);
    }
    if (param_3 == 0) {
      iVar2 = 1;
      iVar1 = 0;
    }
    else {
      uVar4 = 1;
      iVar2 = FUN_01298504(param_3,1);
      iVar1 = param_3;
      if (iVar2 == 0) goto LAB_007a6228;
    }
    FUN_01bed4e2(iVar2,param_2,param_3);
    *param_1 = iVar1;
    param_1[1] = iVar2;
    param_1[2] = param_3;
  }
  return;
}

