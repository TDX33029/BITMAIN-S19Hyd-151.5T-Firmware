// FUN_016a81c4 @ 016a81c4 size=576 calls_out=5 calls_in=0
// strings: Memchr2

undefined4 FUN_016a81c4(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  local_48 = param_1 + 1;
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(uVar4,"Memchr2",7);
  if (iVar1 != 0) {
    return 1;
  }
  puVar6 = param_2 + 2;
  uVar2 = *puVar6;
  if ((uVar2 & 0x800000) == 0) {
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    if ((uVar2 & 0x2000000) == 0) {
      if ((uVar2 & 0x4000000) == 0) {
        iVar1 = FUN_012fcc70();
      }
      else {
        iVar1 = FUN_012fd6b4();
      }
    }
    else {
      iVar1 = FUN_012fd63c(param_1,param_2);
    }
  }
  else {
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_35 = 1;
    local_2c = *puVar6;
    local_28 = param_2[3];
    local_44 = uVar4;
    local_40 = iVar5;
    if ((local_2c & 0x2000000) == 0) {
      if ((local_2c & 0x4000000) == 0) {
        iVar1 = FUN_012fcc70(param_1);
      }
      else {
        iVar1 = FUN_012fd6b4(param_1);
      }
    }
    else {
      iVar1 = FUN_012fd63c(param_1,&local_34);
    }
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
  }
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_018a010c(&local_48,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = *param_2;
    iVar5 = param_2[1];
  }
  else {
    local_3c = &local_35;
    uVar4 = *param_2;
    iVar5 = param_2[1];
    local_2c = *puVar6;
    local_28 = param_2[3];
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = uVar4;
    local_40 = iVar5;
    iVar1 = FUN_018a010c(&local_48,&local_34);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar4 = (**(code **)(iVar5 + 0xc))(uVar4,&DAT_0053341b,1);
  return uVar4;
}

