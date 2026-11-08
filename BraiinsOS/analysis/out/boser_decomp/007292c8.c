// FUN_007292c8 @ 007292c8 size=456 calls_out=12 calls_in=2
// strings: 

void FUN_007292c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  FUN_019afae4(&local_44);
  lVar4 = FUN_019b000c(param_2,param_3);
  iVar1 = (int)((ulonglong)lVar4 >> 0x20);
  if ((int)lVar4 == 0) {
LAB_007293f0:
    FUN_012bbd90(&local_38,"dwp",3);
  }
  else {
    if (lVar4 < 0) {
      uVar2 = 0;
LAB_00729310:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar2,iVar1);
    }
    if (iVar1 == 0) {
      local_28 = 1;
      iVar3 = 0;
    }
    else {
      uVar2 = 1;
      local_28 = FUN_01298504(iVar1,1);
      if (local_28 == 0) goto LAB_00729310;
      iVar3 = iVar1;
    }
    FUN_01bed4e2(local_28,(int)lVar4,iVar1);
    local_2c = iVar3;
    if ((uint)(iVar3 - iVar1) < 4) {
      local_24 = iVar1;
      FUN_016092cc(&local_2c,iVar1,4,1,1);
      iVar1 = local_24 + 4;
      *(undefined4 *)(local_28 + local_24) = 0x7077642e;
      local_24 = iVar1;
      if (local_2c == -0x80000000) goto LAB_007293f0;
    }
    else {
      *(undefined4 *)(local_28 + iVar1) = 0x7077642e;
      local_24 = iVar1 + 4;
    }
    local_30 = local_24;
    local_34 = local_28;
    local_38 = local_2c;
  }
  FUN_0199ec90(&local_44,local_34,local_30);
  FUN_019bb7e0(local_38,local_34);
  FUN_007257d4(&local_2c,local_40,local_3c);
  if (local_2c == 1) {
    uVar5 = FUN_00724c58(param_4,local_28,local_24);
    FUN_0072fb60(param_1,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if (*(int *)(param_1 + 0x40) != -0x80000000) goto LAB_00729480;
  }
  *(undefined4 *)(param_1 + 0x40) = 0x80000000;
LAB_00729480:
  FUN_019bb7e0(local_44,local_40);
  return;
}

