// FUN_01311938 @ 01311938 size=648 calls_out=4 calls_in=1
// strings: tuesday | thurs | sunday | mondayautomaticmandatory | friday | thursday

void FUN_01311938(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *local_20;
  undefined1 *local_1c;
  
  uStack_44 = param_2;
  uStack_40 = param_3;
  FUN_00664bdc(&local_3c);
  switch(local_34) {
  case 3:
    iVar1 = thunk_FUN_01bed842(local_38,"sun",3);
    if (iVar1 == 0) {
LAB_01311b9c:
      uVar4 = 1;
      goto LAB_01311bb8;
    }
    uVar4 = 3;
    iVar1 = thunk_FUN_01bed842(local_38,"mon",3);
    if (iVar1 == 0) {
LAB_01311ba4:
      uVar4 = 2;
      goto LAB_01311bb8;
    }
    iVar1 = thunk_FUN_01bed842(local_38,"tue",3);
    if (iVar1 == 0) goto LAB_01311bb8;
    iVar1 = thunk_FUN_01bed842(local_38,"wed",3);
    if (iVar1 == 0) goto LAB_01311bac;
    iVar1 = thunk_FUN_01bed842(local_38,"thu",3);
    if (iVar1 == 0) goto LAB_01311bb4;
    iVar1 = thunk_FUN_01bed842(local_38,"fri",3);
    if (iVar1 == 0) {
      uVar4 = 6;
      goto LAB_01311bb8;
    }
    uVar4 = 3;
    pcVar2 = "sat";
    break;
  case 4:
    if (*local_38 != 0x73657574) goto switchD_0131196c_default;
    goto LAB_01311af4;
  case 5:
    uVar4 = 5;
    uVar3 = 5;
    pcVar2 = "thurs";
    goto LAB_01311ad0;
  case 6:
    iVar1 = thunk_FUN_01bed842(local_38,"sunday",6);
    if (iVar1 == 0) goto LAB_01311b9c;
    uVar4 = 6;
    iVar1 = thunk_FUN_01bed842(local_38,"mondayautomaticmandatory",6);
    if (iVar1 == 0) goto LAB_01311ba4;
    uVar3 = 6;
    pcVar2 = "friday";
LAB_01311ad0:
    iVar1 = thunk_FUN_01bed842(local_38,pcVar2,uVar3);
    if (iVar1 != 0) goto switchD_0131196c_default;
    goto LAB_01311bb8;
  case 7:
    iVar1 = thunk_FUN_01bed842(local_38,"tuesday",7);
    if (iVar1 != 0) goto switchD_0131196c_default;
LAB_01311af4:
    uVar4 = 3;
    goto LAB_01311bb8;
  case 8:
    iVar1 = thunk_FUN_01bed842(local_38,"thursday",8);
    if (iVar1 == 0) {
LAB_01311bb4:
      uVar4 = 5;
      goto LAB_01311bb8;
    }
    uVar4 = 8;
    pcVar2 = &DAT_00570be8;
    break;
  case 9:
    iVar1 = thunk_FUN_01bed842(local_38,"wednesday",9);
    if (iVar1 != 0) goto switchD_0131196c_default;
LAB_01311bac:
    uVar4 = 4;
    goto LAB_01311bb8;
  default:
    goto switchD_0131196c_default;
  }
  iVar1 = thunk_FUN_01bed842(local_38,pcVar2,uVar4);
  if (iVar1 != 0) {
switchD_0131196c_default:
    local_1c = &LAB_018a13b8;
    local_20 = &uStack_44;
    FUN_00664898(&local_30,&DAT_005ad51c,&local_20);
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
    FUN_0134bd64(local_3c,local_38);
    return;
  }
  uVar4 = 7;
LAB_01311bb8:
  FUN_0134bd64(local_3c,local_38);
  *param_1 = 0x80000000;
  param_1[1] = uVar4;
  return;
}

