// FUN_0137af6c @ 0137af6c size=416 calls_out=3 calls_in=0
// strings: ScheduledLibraryResetReservedLocalReservedRemote

undefined4 FUN_0137af6c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  byte *pbVar4;
  code *pcVar5;
  int iVar6;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  byte *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  pbVar4 = (byte *)*param_1;
  cVar3 = '\x01';
  if (2 < *pbVar4) {
    cVar3 = *pbVar4 - 3;
  }
  if (cVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0137afec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"EndStream",9);
    return uVar1;
  }
  if (cVar3 == '\x01') {
    local_30 = pbVar4;
    uVar1 = FUN_013032f4(param_2,&DAT_005333ba,5,&local_30,FUN_013868a4);
  }
  else {
    uVar1 = *param_2;
    iVar6 = param_2[1];
    pcVar5 = *(code **)(iVar6 + 0xc);
    iVar2 = (*pcVar5)(uVar1,"ScheduledLibraryResetReservedLocalReservedRemote",0x15);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar5)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_0138b3ec(pbVar4 + 4,param_2);
    }
    else {
      iVar2 = (*pcVar5)(uVar1,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_30 = (byte *)&local_40;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar1;
      local_3c = iVar6;
      iVar2 = FUN_0138b3ec(pbVar4 + 4,&local_30);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    }
    if (iVar2 != 0) {
      return 1;
    }
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
  return uVar1;
}

