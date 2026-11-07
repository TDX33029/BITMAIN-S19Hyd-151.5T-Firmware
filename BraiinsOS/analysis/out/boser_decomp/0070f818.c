// FUN_0070f818 @ 0070f818 size=828 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_0070f818(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  byte *pbVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  byte *local_34;
  undefined *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  byte *local_24;
  
  pbVar4 = (byte *)*param_1;
  cVar2 = '\x05';
  if (1 < *pbVar4) {
    cVar2 = *pbVar4 - 2;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar2) {
  case '\0':
    puVar3 = &DAT_0056f774;
    pcVar5 = FUN_01ac58cc;
    uVar7 = 4;
    goto LAB_0070f8b4;
  case '\x01':
    pbVar6 = (byte *)*param_2;
    puVar8 = (undefined *)param_2[1];
    uVar7 = 6;
    pcVar5 = *(code **)(puVar8 + 0xc);
    puVar3 = &DAT_0053243e;
    goto LAB_0070f908;
  case '\x02':
    pbVar6 = (byte *)*param_2;
    puVar8 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar8 + 0xc);
    puVar3 = &DAT_0056c9ec;
    break;
  case '\x03':
    pbVar6 = (byte *)*param_2;
    puVar8 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar8 + 0xc);
    puVar3 = &DAT_0056d138;
    break;
  case '\x04':
    pcVar5 = FUN_00711618;
    puVar3 = &DAT_0053244a;
    uVar7 = 5;
LAB_0070f8b4:
    local_34 = pbVar4 + 4;
    uVar7 = FUN_013032f4(param_2,puVar3,uVar7,&local_34,pcVar5);
    return uVar7;
  case '\x05':
    uVar7 = *param_2;
    iVar9 = param_2[1];
    pcVar5 = *(code **)(iVar9 + 0xc);
    iVar1 = (*pcVar5)(uVar7,&DAT_0053257d,5);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(uVar7,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      local_34 = pbVar4 + 0xc;
      iVar1 = FUN_01303d90(param_2,&DAT_0053257d,5,&DAT_00532582,6,pbVar4,FUN_0070ef20,&DAT_00532588
                           ,7,&local_34,&LAB_01388cd4);
    }
    else {
      iVar1 = (*pcVar5)(uVar7,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_35 = 1;
      local_2c = (undefined4 *)param_2[2];
      local_28 = param_2[3];
      local_24 = pbVar4 + 0xc;
      local_30 = &DAT_01ce45f8;
      local_34 = (byte *)&local_44;
      local_44 = uVar7;
      local_40 = iVar9;
      iVar1 = FUN_01303d90(&local_34,&DAT_0053257d,5,&DAT_00532582,6,pbVar4,FUN_0070ef20,
                           &DAT_00532588,7,&local_24,&LAB_01388cd4);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    }
    goto LAB_0070fb3c;
  }
  uVar7 = 4;
LAB_0070f908:
  iVar1 = (*pcVar5)(pbVar6,puVar3,uVar7);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar5)(pbVar6,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_012845dc(*(undefined4 *)(pbVar4 + 8),*(undefined4 *)(pbVar4 + 0xc),*param_2,
                         param_2[1]);
  }
  else {
    iVar1 = (*pcVar5)(pbVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_2c = &local_44;
    local_44 = CONCAT31(local_44._1_3_,1);
    local_34 = pbVar6;
    local_30 = puVar8;
    iVar1 = FUN_012845dc(*(undefined4 *)(pbVar4 + 8),*(undefined4 *)(pbVar4 + 0xc),&local_34,
                         &DAT_01ce45f8);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01302620(&local_34,&DAT_005312e2,2);
  }
LAB_0070fb3c:
  if (iVar1 == 0) {
    uVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
    return uVar7;
  }
  return 1;
}

