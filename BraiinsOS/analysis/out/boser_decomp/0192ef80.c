// FUN_0192ef80 @ 0192ef80 size=412 calls_out=2 calls_in=0
// strings: UnixTime | UnixTime

undefined4 FUN_0192ef80(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_44;
  uint local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  uint *local_34;
  undefined *local_30;
  uint local_2c;
  uint uStack_28;
  uint *puStack_24;
  
  puVar4 = (uint *)*param_1;
  if ((*puVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0192efec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar2;
  }
  uVar5 = *param_2;
  uVar6 = param_2[1];
  pcVar3 = *(code **)(uVar6 + 0xc);
  iVar1 = (*pcVar3)(uVar5,&DAT_0056f9dc,4);
  if (iVar1 != 0) {
    return 1;
  }
  puVar4 = puVar4 + 2;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    local_34 = puVar4;
    iVar1 = FUN_013032f4(param_2,"UnixTime",8,&local_34,&LAB_015f5418);
    if (iVar1 != 0) {
      return 1;
    }
    uVar5 = *param_2;
    pcVar3 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar1 = (*pcVar3)(uVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_2c = param_2[2];
    uStack_28 = param_2[3];
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = uVar5;
    local_40 = uVar6;
    puStack_24 = puVar4;
    iVar1 = FUN_013032f4(&local_34,"UnixTime",8,&puStack_24,&LAB_015f5418);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar2 = (*pcVar3)(uVar5,&DAT_0053341b,1);
  return uVar2;
}

