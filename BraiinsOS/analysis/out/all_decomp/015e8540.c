// FUN_015e8540 @ 015e8540 size=436 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_015e8540(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *local_38;
  int iStack_34;
  undefined *local_30;
  code *local_2c;
  undefined1 *local_28;
  undefined4 *local_24;
  
  if (*param_2 == 0) {
    pcVar1 = (char *)param_2[1];
    iVar2 = param_2[2];
    if (param_3 != 0) {
      if (iVar2 != 0) goto LAB_015e85e4;
LAB_015e8680:
      uVar3 = FUN_00faace8(param_1,1,0);
      return uVar3;
    }
    if (iVar2 == 0) goto LAB_015e8680;
  }
  else {
    iVar2 = 9;
    pcVar1 = &DAT_0040fb1c;
    if (param_3 != 0) goto LAB_015e85e4;
  }
  if ((param_4 != 0) && (*pcVar1 == '/')) {
    uVar5 = FUN_015c8118(pcVar1,iVar2,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 8));
    if (((int)uVar5 != 0) &&
       (FUN_00fab1e0(&local_30,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20)),
       local_30 != (undefined *)0x1)) {
      local_38 = (char *)local_2c;
      iStack_34 = (int)local_28;
      local_2c = FUN_00faaf34;
      local_24 = &DAT_015bee04;
      local_30 = &DAT_005681a0;
      local_28 = (undefined1 *)&local_38;
      uVar3 = FUN_00fa948c(*param_1,param_1[1],&DAT_00576010,&local_30);
      return uVar3;
    }
  }
LAB_015e85e4:
  uVar3 = *param_1;
  iVar4 = param_1[1];
  local_38 = pcVar1;
  iStack_34 = iVar2;
  while( true ) {
    FUN_00fb7f7c(&local_30,&local_38);
    if (local_30 == (undefined *)0x0) {
      return 0;
    }
    if (local_24 == (undefined4 *)0x0) break;
    iVar2 = (**(code **)(iVar4 + 0xc))(uVar3);
    if ((iVar2 != 0) || (iVar2 = (**(code **)(iVar4 + 0x10))(uVar3,0xfffd), iVar2 != 0)) {
      return 1;
    }
  }
  uVar3 = FUN_00faace8(param_1,local_30,local_2c);
  return uVar3;
}

