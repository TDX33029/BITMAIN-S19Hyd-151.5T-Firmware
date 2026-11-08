// FUN_00aaea54 @ 00aaea54 size=1508 calls_out=8 calls_in=1
// strings: IpAddress

undefined4 FUN_00aaea54(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined1 ****ppppuVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 ***pppuVar6;
  code *pcVar7;
  undefined4 ***pppuVar8;
  undefined1 ***local_44;
  code *local_40;
  undefined4 **local_3c;
  undefined1 local_35;
  undefined4 ***local_34;
  undefined *local_30;
  undefined1 *local_2c;
  int local_28;
  undefined1 **local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    pppuVar6 = (undefined1 ***)*param_2;
    pcVar7 = (code *)param_2[1];
    pcVar5 = *(code **)(pcVar7 + 0xc);
    iVar1 = (*pcVar5)(pppuVar6,&DAT_004145d2,7);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(pppuVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_010fe45c(param_1 + 4,param_2);
      goto LAB_00aaf02c;
    }
    iVar1 = (*pcVar5)(pppuVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_24;
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_2c = (undefined1 *)param_2[2];
    local_28 = param_2[3];
    local_24 = (undefined1 **)CONCAT31(local_24._1_3_,1);
    local_44 = pppuVar6;
    local_40 = pcVar7;
    iVar1 = FUN_010fe45c(param_1 + 4,&local_34);
    break;
  case 1:
    pppuVar6 = (undefined1 ***)*param_2;
    pcVar5 = (code *)param_2[1];
    puVar4 = &DAT_004145cc;
    goto LAB_00aaec00;
  case 2:
    pppuVar8 = (undefined4 ***)*param_2;
    puVar4 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar4 + 0xc);
    iVar1 = (*pcVar5)(pppuVar8,&DAT_00569b40,8);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(pppuVar8,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00aaf0e0(param_1 + 4,*param_2,param_2[1]);
      goto LAB_00aaf02c;
    }
    iVar1 = (*pcVar5)(pppuVar8,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_2c = &local_35;
    local_40 = FUN_00fc28a0;
    local_44 = &local_24;
    local_35 = 1;
    local_34 = pppuVar8;
    local_30 = puVar4;
    local_24 = (undefined1 **)(param_1 + 4);
    iVar1 = FUN_00fa948c(&local_34,&DAT_01880dc4,&DAT_0058370d,&local_44);
    if (iVar1 != 0) {
      return 1;
    }
    ppppuVar2 = (undefined1 ****)&local_34;
    goto LAB_00aaef30;
  case 3:
    pppuVar6 = (undefined1 ***)*param_2;
    pcVar7 = (code *)param_2[1];
    pcVar5 = *(code **)(pcVar7 + 0xc);
    iVar1 = (*pcVar5)(pppuVar6,"IpAddress",9);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(pppuVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00fb974c(param_1 + 1,param_2);
      goto LAB_00aaf02c;
    }
    iVar1 = (*pcVar5)(pppuVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_24;
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_2c = (undefined1 *)param_2[2];
    local_28 = param_2[3];
    local_24 = (undefined1 **)CONCAT31(local_24._1_3_,1);
    local_44 = pppuVar6;
    local_40 = pcVar7;
    iVar1 = FUN_00fb974c(param_1 + 1,&local_34);
    if (iVar1 != 0) {
      return 1;
    }
    ppppuVar2 = &local_44;
LAB_00aaef30:
    iVar1 = FUN_00fb1f64(ppppuVar2,&DAT_00414a81,2);
    goto LAB_00aaf02c;
  case 4:
    pppuVar6 = (undefined1 ***)*param_2;
    pcVar5 = (code *)param_2[1];
    puVar4 = &DAT_0036df6d;
    goto LAB_00aaeca4;
  case 5:
    pppuVar6 = (undefined1 ***)*param_2;
    pcVar5 = (code *)param_2[1];
    local_24 = (undefined1 **)(param_1 + 4);
    pcVar7 = *(code **)(pcVar5 + 0xc);
    iVar1 = (*pcVar7)(pppuVar6,&DAT_0036df76,10);
    goto joined_r0x00aaec88;
  case 6:
    pppuVar6 = (undefined1 ***)*param_2;
    pcVar5 = (code *)param_2[1];
    puVar4 = &DAT_0036df80;
LAB_00aaeca4:
    pcVar7 = *(code **)(pcVar5 + 0xc);
    local_24 = (undefined1 **)(param_1 + 4);
    iVar1 = (*pcVar7)(pppuVar6,puVar4,9);
joined_r0x00aaec88:
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar7)(pppuVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00d47d08(&local_24,param_2);
      goto LAB_00aaf02c;
    }
    iVar1 = (*pcVar7)(pppuVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = (undefined4 **)&local_35;
    local_2c = (undefined1 *)param_2[2];
    local_28 = param_2[3];
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = pppuVar6;
    local_40 = pcVar5;
    iVar1 = FUN_00d47d08(&local_24,&local_34);
    break;
  case 7:
    pppuVar6 = (undefined1 ***)*param_2;
    pcVar5 = (code *)param_2[1];
    puVar4 = &DAT_0036df89;
LAB_00aaec00:
    local_24 = (undefined1 **)(param_1 + 4);
    pcVar7 = *(code **)(pcVar5 + 0xc);
    iVar1 = (*pcVar7)(pppuVar6,puVar4,6);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar7)(pppuVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_007b88ec(&local_24,param_2);
      goto LAB_00aaf02c;
    }
    iVar1 = (*pcVar7)(pppuVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = (undefined4 **)&local_35;
    local_2c = (undefined1 *)param_2[2];
    local_28 = param_2[3];
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = pppuVar6;
    local_40 = pcVar5;
    iVar1 = FUN_007b88ec(&local_24,&local_34);
    break;
  case 8:
    pppuVar6 = (undefined1 ***)*param_2;
    pcVar7 = (code *)param_2[1];
    local_24 = (undefined1 **)(param_1 + 8);
    pcVar5 = *(code **)(pcVar7 + 0xc);
    iVar1 = (*pcVar5)(pppuVar6,&DAT_0036df8f,9);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(pppuVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_016a5a58(&local_24,param_2);
      goto LAB_00aaf02c;
    }
    iVar1 = (*pcVar5)(pppuVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = (undefined4 **)&local_35;
    local_2c = (undefined1 *)param_2[2];
    local_28 = param_2[3];
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = pppuVar6;
    local_40 = pcVar7;
    iVar1 = FUN_016a5a58(&local_24,&local_34);
  }
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
LAB_00aaf02c:
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

