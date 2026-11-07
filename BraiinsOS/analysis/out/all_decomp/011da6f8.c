// FUN_011da6f8 @ 011da6f8 size=1340 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_011da6f8(int *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 ****ppppuVar5;
  code *pcVar6;
  undefined4 ***pppuVar7;
  int iVar8;
  undefined4 ***local_60;
  int local_5c;
  undefined1 *local_58;
  undefined1 local_51;
  undefined4 ****local_50;
  undefined *local_4c;
  undefined4 ****local_48;
  int local_44;
  undefined4 ****local_40;
  undefined *local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined4 ****local_30;
  undefined *local_2c;
  undefined4 ****local_28;
  int local_24;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011da760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar3;
  }
  pppuVar7 = (undefined4 ***)*param_2;
  iVar8 = param_2[1];
  pcVar6 = *(code **)(iVar8 + 0xc);
  iVar1 = (*pcVar6)(pppuVar7,&DAT_00569804,4);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar6)(pppuVar7,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar6)(pppuVar7,&DAT_0056a990,8);
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar4 + 0xb0) == 0) {
      if (iVar1 != 0) {
        return 1;
      }
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar4 = FUN_01205638(iVar4 + 8,param_2);
      }
      else {
        puVar2 = (undefined *)param_2[1];
        ppppuVar5 = (undefined4 ****)*param_2;
        iVar1 = (**(code **)(puVar2 + 0xc))(ppppuVar5,"(\n",2);
        if (iVar1 != 0) {
          return 1;
        }
        local_48 = &local_40;
        local_28 = (undefined4 ****)param_2[2];
        local_24 = param_2[3];
        local_2c = &DAT_01880dc4;
        local_30 = &local_50;
        local_40 = (undefined4 ****)CONCAT31(local_40._1_3_,1);
        local_50 = ppppuVar5;
        local_4c = puVar2;
        iVar4 = FUN_01205638(iVar4 + 8,&local_30);
        if (iVar4 != 0) {
          return 1;
        }
        iVar4 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
      }
    }
    else {
      if (iVar1 != 0) {
        return 1;
      }
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = *param_2;
        iVar8 = param_2[1];
        iVar4 = (**(code **)(iVar8 + 0xc))(iVar1,"(",1);
        if (iVar4 != 0) {
          return 1;
        }
        iVar4 = FUN_00fa948c(iVar1,iVar8,&DAT_0056aab8,0x11);
      }
      else {
        ppppuVar5 = (undefined4 ****)*param_2;
        puVar2 = (undefined *)param_2[1];
        iVar4 = (**(code **)(puVar2 + 0xc))(ppppuVar5,"(\n",2);
        if (iVar4 != 0) {
          return 1;
        }
        local_28 = &local_50;
        local_50 = (undefined4 ****)CONCAT31(local_50._1_3_,1);
        local_30 = ppppuVar5;
        local_2c = puVar2;
        iVar4 = FUN_00fa948c(&local_30,&DAT_01880dc4,&DAT_0056aab8,0x11);
        if (iVar4 != 0) {
          return 1;
        }
        iVar4 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
      }
    }
    if (iVar4 != 0) {
      return 1;
    }
    pcVar6 = *(code **)(param_2[1] + 0xc);
    uVar3 = 1;
    puVar2 = &DAT_00418e07;
    ppppuVar5 = (undefined4 ****)*param_2;
  }
  else {
    iVar1 = (*pcVar6)(pppuVar7,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_58 = &local_51;
    local_48 = (undefined4 ****)param_2[2];
    local_44 = param_2[3];
    local_51 = 1;
    local_4c = &DAT_01880dc4;
    local_60 = pppuVar7;
    local_5c = iVar8;
    local_50 = &local_60;
    iVar1 = FUN_00fb1f64(&local_60,&DAT_0056a990,8);
    puVar2 = local_4c;
    ppppuVar5 = local_50;
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar4 + 0xb0) == 0) {
      if (iVar1 != 0) {
        return 1;
      }
      if (((uint)local_48 & 0x800000) == 0) {
        iVar1 = (**(code **)(local_4c + 0xc))(local_50,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar4 = FUN_01205638(iVar4 + 8,&local_50);
      }
      else {
        iVar1 = (**(code **)(local_4c + 0xc))(local_50,"(\n",2);
        if (iVar1 != 0) {
          return 1;
        }
        local_38 = &local_31;
        local_30 = &local_40;
        local_31 = 1;
        local_28 = local_48;
        local_24 = local_44;
        local_3c = puVar2;
        local_40 = ppppuVar5;
        local_2c = &DAT_01880dc4;
        iVar4 = FUN_01205638(iVar4 + 8,&local_30);
        if (iVar4 != 0) {
          return 1;
        }
        iVar4 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
      }
    }
    else {
      if (iVar1 != 0) {
        return 1;
      }
      if (((uint)local_48 & 0x800000) == 0) {
        iVar4 = (**(code **)(local_4c + 0xc))(local_50,"(",1);
        if (iVar4 != 0) {
          return 1;
        }
        iVar4 = FUN_00fa948c(ppppuVar5,puVar2,&DAT_0056aab8,0x11);
      }
      else {
        iVar4 = (**(code **)(local_4c + 0xc))(local_50,"(\n",2);
        if (iVar4 != 0) {
          return 1;
        }
        local_28 = &local_40;
        local_40 = (undefined4 ****)CONCAT31(local_40._1_3_,1);
        local_2c = puVar2;
        local_30 = ppppuVar5;
        iVar4 = FUN_00fa948c(&local_30,&DAT_01880dc4,&DAT_0056aab8,0x11);
        if (iVar4 != 0) {
          return 1;
        }
        iVar4 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
      }
    }
    if ((iVar4 != 0) ||
       (iVar4 = (**(code **)(local_4c + 0xc))(local_50,&DAT_00418e07,1), iVar4 != 0)) {
      return 1;
    }
    uVar3 = 2;
    pcVar6 = *(code **)(local_4c + 0xc);
    puVar2 = &DAT_00414a81;
    ppppuVar5 = local_50;
  }
  iVar4 = (*pcVar6)(ppppuVar5,puVar2,uVar3);
  if (iVar4 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

