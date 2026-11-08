// FUN_016ac300 @ 016ac300 size=404 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_016ac300(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,&DAT_004cfad9,0xe);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    local_34 = param_1;
    iVar1 = FUN_01303cdc(param_2,&DAT_004cf6d9,0xf,&DAT_004cfb92,9,&local_34,&LAB_015f5418);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = *param_2;
    pcVar2 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = uVar3;
    local_40 = iVar4;
    local_24 = param_1;
    iVar1 = FUN_01303cdc(&local_34,&DAT_004cf6d9,0xf,&DAT_004cfb92,9,&local_24,&LAB_015f5418);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar3 = (*pcVar2)(uVar3,&DAT_0053341b,1);
  return uVar3;
}

