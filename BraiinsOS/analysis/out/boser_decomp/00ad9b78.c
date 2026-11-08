// FUN_00ad9b78 @ 00ad9b78 size=552 calls_out=6 calls_in=1
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

void FUN_00ad9b78(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int local_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  undefined4 local_58;
  int local_54;
  int iStack_50;
  int local_48;
  int *local_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  
  iVar3 = *param_2;
  iVar2 = param_2[1];
  local_68 = param_2[2];
  iVar7 = param_2[10];
  *param_2 = -0x80000000;
  iVar6 = param_2[3];
  piVar5 = (int *)param_2[4];
  iVar4 = param_2[5];
  param_2[3] = -0x7fffffff;
  local_78 = 2;
  iVar1 = param_2[9];
  if (iVar3 == -0x80000000) {
    local_78 = 8;
  }
  iStack_74 = iVar1;
  iStack_70 = iVar3;
  local_6c = iVar2;
  local_64 = iVar7;
  if (iVar6 == -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                 ,0x2c,&DAT_01c18664);
  }
  if (iVar3 == -0x80000000) {
    uStack_40 = 0x80000000;
    local_48 = local_78;
    iStack_3c = iVar2;
    iStack_38 = local_68;
  }
  else {
    FUN_006666fc(&uStack_40,iVar2);
    local_48 = 2;
  }
  local_44 = &local_60;
  local_60 = local_48;
  local_58 = uStack_40;
  local_54 = iStack_3c;
  iStack_50 = iStack_38;
  local_48 = 5;
  iStack_5c = iVar1;
  local_34 = iVar6;
  local_30 = piVar5;
  local_2c = iVar4;
  local_28 = iVar7;
  if (iVar4 == 4) {
    if (*piVar5 == 0x65757274) {
      lVar8 = 0x100000000;
      goto LAB_00ad9cb4;
    }
  }
  else if ((iVar4 == 5) && (iVar4 = thunk_FUN_01bed842(piVar5,"f",5), iVar4 == 0)) {
    lVar8 = 0;
    goto LAB_00ad9cb4;
  }
  lVar8 = FUN_00b3820c();
LAB_00ad9cb4:
  if (iVar6 != -0x80000000) {
    FUN_019bb7e0(iVar6,piVar5);
  }
  if ((int)lVar8 == 0) {
    lVar8 = (ulonglong)((uint)((ulonglong)lVar8 >> 0x20) & 0xff) << 0x20;
  }
  else {
    FUN_0196bf0c(iVar7,&local_48);
    FUN_0196bf0c(iVar7,&local_60);
    FUN_0196bf0c(iVar7,&local_60);
  }
  if (local_60 == 4 || local_60 == 2) {
    FUN_019bb7e0(local_58,local_54);
  }
  if ((int)lVar8 == 0) {
    lVar8 = (ulonglong)((uint)((ulonglong)lVar8 >> 0x20) & 0xff) << 0x20;
  }
  else {
    FUN_0196bf0c(iVar7,&local_78);
  }
  if (iVar3 != -0x80000000) {
    FUN_019bb7e0(iVar3,iVar2);
  }
  if ((int)lVar8 == 0) {
    *(char *)((int)param_1 + 4) = (char)((ulonglong)lVar8 >> 0x20);
    *(undefined4 *)param_1 = 0;
  }
  else {
    FUN_0196bf0c(iVar7,iVar1);
    *param_1 = lVar8;
  }
  return;
}

