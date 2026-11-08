// FUN_00704260 @ 00704260 size=532 calls_out=19 calls_in=2
// strings: Unspecified | Unspecified | InvalidEncoding | InconsistentComponents | InconsistentComponents

void FUN_00704260(undefined8 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  switch(param_4) {
  case 0x2c9:
    iVar1 = FUN_01b3cc6c();
    break;
  case 0x2ca:
    iVar1 = FUN_01b3cd9c();
    break;
  case 0x2cb:
    iVar1 = FUN_01b3cd04();
    break;
  case 0x2cc:
    iVar1 = FUN_01b3cd50();
    break;
  default:
    if (param_4 == 0x19f) {
      iVar1 = FUN_01b3ccb8();
      break;
    }
    goto LAB_007043b8;
  }
  if (iVar1 == 0) {
LAB_007043b8:
    uVar4 = 0xb;
    pcVar6 = "Unspecified";
LAB_007043d4:
    *(char **)param_1 = pcVar6;
    *(undefined4 *)((int)param_1 + 4) = uVar4;
    return;
  }
  iVar2 = FUN_01b42428(iVar1);
  if (iVar2 == 0) {
    uVar4 = 0xf;
    pcVar6 = &DAT_0051d665;
    goto LAB_007043d4;
  }
  iVar3 = FUN_01b53fb8(iVar1,iVar2,param_2,param_3,0);
  if (iVar3 == 1) {
    uVar4 = FUN_01b3d280(iVar1);
    iVar3 = FUN_01b3d7ac();
    if (iVar3 != 0) {
      iVar1 = FUN_01b451a8(iVar3,iVar1);
      if (iVar1 == 1) {
        iVar1 = FUN_01b452b8(iVar3,iVar2);
        if (iVar1 != 1) {
          uVar4 = 0x16;
          pcVar6 = "InconsistentComponents";
          goto LAB_0070441c;
        }
        iVar1 = FUN_01b46f98();
        if (iVar1 == 0) goto LAB_00704400;
        iVar5 = FUN_01b47a30(iVar1,iVar3);
        if (iVar5 == 1) {
          iVar3 = FUN_01b47ba8(iVar1);
          if (iVar3 == 0) {
            uVar7 = 0xf0051d665;
          }
          else {
            uVar7 = FUN_00705238(iVar3,uVar4);
            if ((int)uVar7 == 0) {
              iVar3 = FUN_01b455d0(iVar3);
              pcVar6 = (char *)0x0;
              if (iVar3 != 1) {
                pcVar6 = "InconsistentComponents";
              }
              uVar7 = CONCAT44(0x16,pcVar6);
            }
          }
          if ((int)uVar7 == 0) {
            *(undefined4 *)param_1 = 0;
            *(int *)((int)param_1 + 4) = iVar1;
          }
          else {
            *param_1 = uVar7;
            FUN_01b46fd8(iVar1);
          }
          goto LAB_00704428;
        }
        *(undefined **)param_1 = &DAT_0051d665;
        *(undefined4 *)((int)param_1 + 4) = 0xf;
        FUN_01b46fd8(iVar1);
      }
      else {
LAB_00704400:
        uVar4 = 0xf;
        pcVar6 = &DAT_0051d665;
LAB_0070441c:
        *(char **)param_1 = pcVar6;
        *(undefined4 *)((int)param_1 + 4) = uVar4;
      }
      FUN_01b3d538(iVar3);
      goto LAB_00704428;
    }
    pcVar6 = &DAT_0051d665;
  }
  else {
    pcVar6 = "InvalidEncoding";
  }
  *(char **)param_1 = pcVar6;
  *(undefined4 *)((int)param_1 + 4) = 0xf;
LAB_00704428:
  FUN_01b3d37c(iVar2);
  return;
}

