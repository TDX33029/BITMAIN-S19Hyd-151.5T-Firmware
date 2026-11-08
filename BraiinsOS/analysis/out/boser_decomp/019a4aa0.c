// FUN_019a4aa0 @ 019a4aa0 size=636 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_019a4aa0(int param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar2 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar2)(uVar5,&DAT_00570c00,8);
  if (iVar1 != 0) {
    return 1;
  }
  puVar4 = param_2 + 2;
  uVar7 = *puVar4;
  puVar3 = (undefined4 *)(param_1 + 0xc);
  if ((uVar7 & 0x800000) == 0) {
    iVar1 = (*pcVar2)(uVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    if ((uVar7 & 0x2000000) == 0) {
      if ((uVar7 & 0x4000000) == 0) {
        iVar1 = FUN_012fd02c();
      }
      else {
        iVar1 = FUN_012fdbc0(puVar3,param_2);
      }
    }
    else {
      iVar1 = FUN_012fdfb4(*puVar3,param_2);
    }
  }
  else {
    iVar1 = (*pcVar2)(uVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_35 = 1;
    local_2c = *puVar4;
    local_28 = param_2[3];
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_44 = uVar5;
    local_40 = iVar6;
    if ((local_2c & 0x2000000) == 0) {
      if ((local_2c & 0x4000000) == 0) {
        iVar1 = FUN_012fd02c(puVar3);
      }
      else {
        iVar1 = FUN_012fdbc0(puVar3,&local_34);
      }
    }
    else {
      iVar1 = FUN_012fdfb4(*puVar3,&local_34);
    }
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
  }
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_019a4d40(param_1,param_2);
      if (iVar1 == 0) {
        uVar5 = *param_2;
        iVar6 = param_2[1];
LAB_019a4cfc:
        uVar5 = (**(code **)(iVar6 + 0xc))(uVar5,&DAT_0053341b,1);
        return uVar5;
      }
    }
    else {
      local_35 = 1;
      local_3c = &local_35;
      local_30 = &DAT_01ce45f8;
      local_34 = &local_44;
      local_2c = *puVar4;
      local_28 = param_2[3];
      uVar5 = *param_2;
      iVar6 = param_2[1];
      local_44 = uVar5;
      local_40 = iVar6;
      iVar1 = FUN_019a4d40(param_1,&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
      if (iVar1 == 0) goto LAB_019a4cfc;
    }
  }
  return 1;
}

