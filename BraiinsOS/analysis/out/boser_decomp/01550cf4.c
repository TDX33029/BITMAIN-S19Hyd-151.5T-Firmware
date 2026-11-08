// FUN_01550cf4 @ 01550cf4 size=352 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01550cf4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
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
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01550d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar4;
  }
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar4,&DAT_0056f9dc,4);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar3 = FUN_01552268(iVar3 + 8,param_2);
    if (iVar3 != 0) {
      return 1;
    }
    uVar4 = *param_2;
    pcVar2 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar1 = (*pcVar2)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_2c = &DAT_01ce45f8;
    local_31 = 1;
    local_40 = uVar4;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar3 = FUN_01552268(iVar3 + 8,&local_30);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    if (iVar3 != 0) {
      return 1;
    }
  }
  uVar4 = (*pcVar2)(uVar4,&DAT_0053341b,1);
  return uVar4;
}

