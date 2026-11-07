// FUN_01ac2790 @ 01ac2790 size=444 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01ac2790(undefined4 *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  int *local_34;
  undefined *local_30;
  int local_2c;
  int iStack_28;
  int *piStack_24;
  
  piVar4 = (int *)*param_1;
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    iVar1 = *param_2;
    uVar3 = 4;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = "RootW\x01";
  }
  else {
    if (iVar1 != 1) {
      iVar5 = *param_2;
      iVar6 = param_2[1];
      UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
      iVar1 = (*UNRECOVERED_JUMPTABLE)(iVar5,&DAT_005702c8,8);
      if (iVar1 != 0) {
        return 1;
      }
      piVar4 = piVar4 + 2;
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*UNRECOVERED_JUMPTABLE)(iVar5,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        local_34 = piVar4;
        iVar1 = FUN_013032f4(param_2,&DAT_0053188a,2,&local_34,FUN_01aaa1b4);
        if (iVar1 != 0) {
          return 1;
        }
        iVar5 = *param_2;
        UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
      }
      else {
        iVar1 = (*UNRECOVERED_JUMPTABLE)(iVar5,"(\n",2);
        if (iVar1 != 0) {
          return 1;
        }
        local_3c = &local_35;
        local_2c = param_2[2];
        iStack_28 = param_2[3];
        local_30 = &DAT_01ce45f8;
        local_34 = &local_44;
        local_35 = 1;
        local_44 = iVar5;
        local_40 = iVar6;
        piStack_24 = piVar4;
        iVar1 = FUN_013032f4(&local_34,&DAT_0053188a,2,&piStack_24,FUN_01aaa1b4);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      uVar3 = (*UNRECOVERED_JUMPTABLE)(iVar5,&DAT_0053341b,1);
      return uVar3;
    }
    iVar1 = *param_2;
    uVar3 = 7;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = "Current";
  }
                    /* WARNING: Could not recover jumptable at 0x01ac27e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(iVar1,pcVar2,uVar3);
  return uVar3;
}

