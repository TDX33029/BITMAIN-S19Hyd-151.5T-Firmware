// FUN_014011a8 @ 014011a8 size=448 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_014011a8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  pcVar6 = (char *)*param_1;
  if (*pcVar6 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x014011e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar7 = param_2[1];
  pcVar5 = *(code **)(iVar7 + 0xc);
  iVar2 = (*pcVar5)(uVar1,&DAT_00569804,4);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar5)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      if (*pcVar6 == '\x01') {
        uVar4 = 4;
        puVar3 = &DAT_00568b2c;
      }
      else {
        uVar4 = 5;
        puVar3 = &DAT_00414fdc;
      }
      iVar2 = FUN_00faace8(param_2,puVar3,uVar4);
    }
    else {
      iVar2 = (*pcVar5)(uVar1,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_31 = 1;
      local_2c = &DAT_01880dc4;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_40 = uVar1;
      local_3c = iVar7;
      if (*pcVar6 == '\x01') {
        local_30 = (undefined1 *)&local_40;
        iVar2 = FUN_00faace8(&local_30,&DAT_00568b2c,4);
      }
      else {
        local_30 = (undefined1 *)&local_40;
        iVar2 = FUN_00faace8(&local_30,&DAT_00414fdc,5);
      }
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
    }
    if (iVar2 == 0) {
      uVar1 = (*pcVar5)(uVar1,&DAT_00418e07,1);
      return uVar1;
    }
  }
  return 1;
}

