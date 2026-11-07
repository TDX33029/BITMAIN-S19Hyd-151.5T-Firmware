// FUN_018b21e0 @ 018b21e0 size=740 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_018b21e0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  uint uVar6;
  uint local_44;
  uint local_40;
  uint **local_3c;
  undefined1 local_35;
  uint *local_34;
  undefined *local_30;
  uint local_2c;
  uint local_28;
  uint *local_24;
  
  puVar4 = (uint *)*param_1;
  uVar1 = 2;
  if ((int)*puVar4 < 0) {
    uVar1 = *puVar4 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    uVar1 = *param_2;
    uVar6 = param_2[1];
    pcVar5 = *(code **)(uVar6 + 0xc);
    iVar3 = (*pcVar5)(uVar1,&DAT_005231af,0x13);
    if (iVar3 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar5)(uVar1,"(",1);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = FUN_018d5db0(puVar4[2],puVar4[3],param_2);
      goto LAB_018b2494;
    }
    iVar3 = (*pcVar5)(uVar1,"(\n",2);
    if (iVar3 != 0) {
      return 1;
    }
    local_3c = &local_24;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_24 = (uint *)CONCAT31(local_24._1_3_,1);
    local_44 = uVar1;
    local_40 = uVar6;
    iVar3 = FUN_018d5db0(puVar4[2],puVar4[3],&local_34);
  }
  else {
    if (uVar1 == 1) {
      local_34 = puVar4 + 1;
      uVar2 = FUN_013032f4(param_2,&DAT_0051d9af,0xe,&local_34,FUN_018a73ac);
      return uVar2;
    }
    uVar1 = *param_2;
    uVar6 = param_2[1];
    pcVar5 = *(code **)(uVar6 + 0xc);
    iVar3 = (*pcVar5)(uVar1,&DAT_0052e437,7);
    if (iVar3 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar5)(uVar1,"(",1);
      if (iVar3 != 0) {
        return 1;
      }
      local_34 = puVar4;
      iVar3 = FUN_01303d90(param_2,&DAT_00569738,0x10,&DAT_00520ee7,3,puVar4 + 3,&LAB_018ae71c,
                           &DAT_00532588,7,&local_34,FUN_018c3bb8);
      goto LAB_018b2494;
    }
    iVar3 = (*pcVar5)(uVar1,"(\n",2);
    if (iVar3 != 0) {
      return 1;
    }
    local_3c = (uint **)&local_35;
    local_35 = 1;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_44 = uVar1;
    local_40 = uVar6;
    local_24 = puVar4;
    iVar3 = FUN_01303d90(&local_34,&DAT_00569738,0x10,&DAT_00520ee7,3,puVar4 + 3,&LAB_018ae71c,
                         &DAT_00532588,7,&local_24,FUN_018c3bb8);
  }
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
LAB_018b2494:
  if (iVar3 == 0) {
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
    return uVar2;
  }
  return 1;
}

