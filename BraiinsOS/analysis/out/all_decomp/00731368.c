// FUN_00731368 @ 00731368 size=968 calls_out=5 calls_in=0
// strings: AuthError | SnowError | HandshakeErrorAuthenticationError

undefined4 FUN_00731368(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  cVar2 = '\x01';
  if (8 < *param_1) {
    cVar2 = *param_1 - 9;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar2) {
  case '\0':
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,"AuthError",9);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(uVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00732a90(param_1 + 4,param_2);
      goto LAB_00731710;
    }
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar4;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_00732a90(param_1 + 4,&local_30);
    break;
  case '\x01':
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,"HandshakeErrorAuthenticationError",0xe);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(uVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00731834(param_1,param_2);
      goto LAB_00731710;
    }
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar4;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_00731834(param_1,&local_30);
    break;
  case '\x02':
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,&DAT_00564ad0,0x10);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(uVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00787c9c(param_1 + 4,param_2);
      goto LAB_00731710;
    }
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar4;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_00787c9c(param_1 + 4,&local_30);
    goto LAB_00731600;
  case '\x03':
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,"SnowError",9);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(uVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00732498(param_1 + 1,param_2);
      goto LAB_00731710;
    }
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar4;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_00732498(param_1 + 1,&local_30);
LAB_00731600:
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
    goto LAB_00731710;
  }
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
LAB_00731710:
  uVar4 = 1;
  if (iVar1 == 0) {
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
  }
  return uVar4;
}

