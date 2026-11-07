// FUN_0103066c @ 0103066c size=372 calls_out=2 calls_in=4
// strings: NO_ERRORTooSmall | Reason

undefined4 FUN_0103066c(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar3 = *param_1;
  if (uVar3 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x010306b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))
                      (*param_2,(&PTR_s_NO_ERRORTooSmall_018b155c)[uVar3],
                       *(undefined4 *)(&DAT_0041f684 + uVar3 * 4));
    return uVar1;
  }
  uVar1 = *param_2;
  iVar5 = param_2[1];
  pcVar4 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar4)(uVar1,"Reason",6);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar4)(uVar1,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_01030800(uVar3,param_2);
  }
  else {
    iVar2 = (*pcVar4)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar1;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar2 = FUN_01030800(uVar3,&local_30);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  if (iVar2 == 0) {
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar1;
  }
  return 1;
}

