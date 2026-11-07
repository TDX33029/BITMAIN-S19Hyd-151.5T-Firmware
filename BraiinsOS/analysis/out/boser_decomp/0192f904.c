// FUN_0192f904 @ 0192f904 size=360 calls_out=1 calls_in=0
// strings: OtherError

undefined4 FUN_0192f904(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
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
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  piVar3 = (int *)*param_1;
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar4,"OtherError",10);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(piVar3[1] + 0xc))
                      (*piVar3 + (*(int *)(piVar3[1] + 8) - 1U & 0xfffffff8) + 8,param_2);
    if (iVar1 != 0) {
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
    iVar1 = (**(code **)(piVar3[1] + 0xc))
                      (*piVar3 + (*(int *)(piVar3[1] + 8) - 1U & 0xfffffff8) + 8,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar4 = (*pcVar2)(uVar4,&DAT_0053341b,1);
  return uVar4;
}

