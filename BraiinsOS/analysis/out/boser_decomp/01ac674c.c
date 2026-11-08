// FUN_01ac674c @ 01ac674c size=512 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01ac674c(short *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  short *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  short *local_24;
  
  if (*param_1 == 0x12) {
                    /* WARNING: Could not recover jumptable at 0x01ac6784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar4 = param_2[1];
  pcVar3 = *(code **)(iVar4 + 0xc);
  iVar2 = (*pcVar3)(uVar1,&DAT_0056f9dc,4);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(uVar1,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    local_34 = param_1 + 2;
    iVar2 = FUN_01303d90(param_2,&DAT_00532491,10,&DAT_0056ef08,4,param_1,&LAB_01ac5aa8,
                         &DAT_0053249b,6,&local_34,FUN_01ac58cc);
    if (iVar2 != 0) {
      return 1;
    }
    uVar1 = *param_2;
    pcVar3 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar2 = (*pcVar3)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_35 = 1;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_24 = param_1 + 2;
    local_30 = &DAT_01ce45f8;
    local_34 = (short *)&local_44;
    local_44 = uVar1;
    local_40 = iVar4;
    iVar2 = FUN_01303d90(&local_34,&DAT_00532491,10,&DAT_0056ef08,4,param_1,&LAB_01ac5aa8,
                         &DAT_0053249b,6,&local_24,FUN_01ac58cc);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  uVar1 = (*pcVar3)(uVar1,&DAT_0053341b,1);
  return uVar1;
}

