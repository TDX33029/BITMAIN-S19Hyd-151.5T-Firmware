// FUN_016ccf6c @ 016ccf6c size=392 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_016ccf6c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  int iVar6;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar5 = (int *)*param_1;
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    uVar2 = *param_2;
    uVar4 = 2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar3 = &UNK_004cfa63;
  }
  else {
    if (iVar1 != 1) {
      uVar2 = *param_2;
      iVar6 = param_2[1];
      UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
      iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_004cfa68,7);
      if (iVar1 != 0) {
        return 1;
      }
      piVar5 = piVar5 + 1;
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_016cb558(piVar5,param_2);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = *param_2;
        UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
      }
      else {
        iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,"(\n",2);
        if (iVar1 != 0) {
          return 1;
        }
        local_38 = &local_31;
        local_2c = &DAT_01ce45f8;
        local_28 = param_2[2];
        local_24 = param_2[3];
        local_31 = 1;
        local_40 = uVar2;
        local_3c = iVar6;
        local_30 = (undefined1 *)&local_40;
        iVar1 = FUN_016cb558(piVar5,&local_30);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_0053341b,1);
      return uVar2;
    }
    uVar2 = *param_2;
    uVar4 = 3;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar3 = &UNK_004cfa65;
  }
                    /* WARNING: Could not recover jumptable at 0x016ccfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,puVar3,uVar4);
  return uVar2;
}

