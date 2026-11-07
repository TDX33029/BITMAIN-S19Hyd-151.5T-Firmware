// FUN_013032f4 @ 013032f4 size=308 calls_out=1 calls_in=170
// strings: 

undefined4
FUN_013032f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            code *param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = param_1[1];
  uVar4 = *param_1;
  pcVar3 = *(code **)(iVar2 + 0xc);
  iVar1 = (*pcVar3)(uVar4);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*param_5)(param_4,param_1);
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = *param_1;
    pcVar3 = *(code **)(param_1[1] + 0xc);
  }
  else {
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_2c = param_1[2];
    local_28 = param_1[3];
    local_35 = 1;
    local_44 = uVar4;
    local_40 = iVar2;
    iVar1 = (*param_5)(param_4,&local_34);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar4 = (*pcVar3)(uVar4,&DAT_0053341b,1);
  return uVar4;
}

