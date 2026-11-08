// FUN_014cd530 @ 014cd530 size=604 calls_out=3 calls_in=1
// strings: Error | ScheduledLibraryResetReservedLocalReservedRemote

undefined4 FUN_014cd530(byte *param_1,undefined4 *param_2)

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
  if (2 < *param_1) {
    cVar2 = *param_1 - 3;
  }
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x014cd5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"EndStream",9);
    return uVar4;
  }
  if (cVar2 == '\x01') {
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,"Error",5);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
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
      iVar1 = FUN_014b3c5c(param_1,&local_30);
joined_r0x014cd740:
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_014cd768;
    }
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_014b3c5c(param_1,param_2);
  }
  else {
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,"ScheduledLibraryResetReservedLocalReservedRemote",0x15);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
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
      iVar1 = FUN_0103066c(param_1 + 4,&local_30);
      goto joined_r0x014cd740;
    }
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_0103066c(param_1 + 4,param_2);
  }
  if (iVar1 != 0) {
    return 1;
  }
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
LAB_014cd768:
  uVar4 = (*pcVar3)(uVar4,&DAT_00418e07,1);
  return uVar4;
}

