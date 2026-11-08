// FUN_0190472c @ 0190472c size=592 calls_out=18 calls_in=0
// strings: internal error: entered unreachable code

void FUN_0190472c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 auStack_60 [24];
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  iVar5 = *(int *)(param_2 + 4);
  iVar2 = FUN_01b47928(*(undefined4 *)(iVar5 + 0x10));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06634);
  }
  uVar3 = FUN_01b565f4();
  FUN_018a7af8(&local_6c,uVar3);
  uVar6 = *(undefined4 *)(iVar5 + 0x10);
  piVar4 = (int *)(**(code **)(*(int *)(param_2 + 0xc) + 0x10))(*(undefined4 *)(param_2 + 8));
  iVar2 = *piVar4;
  cVar1 = *(char *)piVar4[1];
  FUN_01b3b838(auStack_60);
  uVar3 = FUN_00705838(iVar2 + 0x18);
  local_48 = 0;
  iVar2 = FUN_01b4aec0(auStack_60,&local_48,uVar3,0,uVar6);
  uVar3 = local_48;
  if ((iVar2 == 1) &&
     ((cVar1 == '\0' ||
      ((iVar2 = FUN_01b49f08(local_48,6), iVar2 == 1 &&
       (iVar2 = FUN_01b49f54(uVar3,0xffffffff), iVar2 == 1)))))) {
    local_44 = 0;
    iVar2 = FUN_01b4b350(auStack_60,0,&local_44,param_3,param_4);
    if ((iVar2 != 1) || (local_44 == 0)) goto LAB_019048f0;
    FUN_018a7af8(&local_40);
    uVar3 = local_3c;
    iVar2 = FUN_01b4b350(auStack_60,local_3c,&local_44,param_3,param_4);
    if (iVar2 != 1) {
      FUN_0134bd64(local_40,uVar3);
      goto LAB_019048f0;
    }
    if (local_44 < local_38) {
      local_38 = local_44;
    }
    local_30 = local_40;
    uStack_2c = local_3c;
    uStack_28 = local_38;
    uVar7 = FUN_00703dd4();
    iVar5 = (int)((ulonglong)uVar7 >> 0x20);
    iVar2 = (int)uVar7;
    FUN_01b3b854(auStack_60);
    if (iVar2 != 0) {
      if (local_64 != iVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_013070f0(local_64,iVar5,&DAT_01c06644);
      }
      FUN_01bed4e2(local_68,iVar2,local_64);
      if (local_64 != 0) {
        thunk_FUN_01be4678(iVar2);
      }
      if (local_6c != -0x80000000) {
        param_1[1] = local_6c;
        param_1[2] = local_68;
        *param_1 = 0x80000029;
        param_1[3] = local_64;
        return;
      }
      goto LAB_01904904;
    }
  }
  else {
LAB_019048f0:
    FUN_01b3b854(auStack_60);
  }
  FUN_0134bd64(local_6c,local_68);
LAB_01904904:
  iVar2 = thunk_FUN_01be5118(0xe);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xe);
  }
  FUN_01bed4e2(iVar2,&DAT_005225f8,0xe);
  param_1[2] = iVar2;
  *param_1 = &DAT_80000020;
  param_1[1] = 0xe;
  param_1[3] = 0xe;
  return;
}

