// FUN_01880c64 @ 01880c64 size=340 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01880c64(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
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
  
  if (*(undefined1 **)(param_1 + 8) == &DAT_3b9aca00) {
                    /* WARNING: Could not recover jumptable at 0x01880ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar5 = param_2[1];
  pcVar4 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar4)(uVar1,&DAT_0056f9dc,4);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar4)(uVar1,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_01307ea0(param_1,param_2);
  }
  else {
    iVar2 = (*pcVar4)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01ce45f8;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar1;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar2 = FUN_01307ea0(param_1,&local_30);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_01302620(&local_40,&DAT_005312e2,2);
  }
  uVar3 = 1;
  if (iVar2 == 0) {
    uVar3 = (*pcVar4)(uVar1,&DAT_0053341b,1);
  }
  return uVar3;
}

