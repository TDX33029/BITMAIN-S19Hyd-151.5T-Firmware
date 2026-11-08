// FUN_01418b34 @ 01418b34 size=1444 calls_out=2 calls_in=0
// strings: HalfClosedLocal | local | AwaitingHeaders | StreamingEndStream | remote | StreamingEndStream

undefined4 FUN_01418b34(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined4 *******pppppppuVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 *******local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *******local_34;
  undefined *local_30;
  undefined4 *******local_2c;
  int local_28;
  
  pbVar5 = (byte *)*param_1;
  cVar1 = *pbVar5 - 6;
  if (*pbVar5 < 6) {
    cVar1 = '\x06';
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar1) {
  case '\0':
                    /* WARNING: Could not recover jumptable at 0x01418b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_005672a0,4);
    return uVar4;
  case '\x01':
                    /* WARNING: Could not recover jumptable at 0x01418d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"ReservedLocalReservedRemote",0xd);
    return uVar4;
  case '\x02':
                    /* WARNING: Could not recover jumptable at 0x01418bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"ReservedRemote",0xe);
    return uVar4;
  case '\x03':
    pppppppuVar7 = (undefined4 *******)*param_2;
    puVar8 = (undefined *)param_2[1];
    pcVar6 = *(code **)(puVar8 + 0xc);
    iVar2 = (*pcVar6)(pppppppuVar7,&DAT_00567c34,4);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar6)(pppppppuVar7,&DAT_00414a79,3);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (*pcVar6)(pppppppuVar7,"local",5);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (*pcVar6)(pppppppuVar7,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      uVar4 = 0xf;
      pcVar3 = "AwaitingHeaders";
      if (pbVar5[1] != 0) {
        uVar4 = 9;
        pcVar3 = "StreamingEndStream";
      }
      iVar2 = (*pcVar6)(pppppppuVar7,pcVar3,uVar4);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (*pcVar6)(pppppppuVar7,&DAT_0041950f,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (*pcVar6)(pppppppuVar7,"remote",6);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (*pcVar6)(pppppppuVar7,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      uVar4 = 0xf;
      pcVar3 = "AwaitingHeaders";
      if (pbVar5[2] != 0) {
        uVar4 = 9;
        pcVar3 = "StreamingEndStream";
      }
      iVar2 = (*pcVar6)(pppppppuVar7,pcVar3,uVar4);
      if (iVar2 != 0) {
        return 1;
      }
      uVar4 = 2;
      pcVar3 = " }";
      goto LAB_014190b4;
    }
    iVar2 = (*pcVar6)(pppppppuVar7,&DAT_00414a7e,3);
    if (iVar2 != 0) {
      return 1;
    }
    local_44._0_1_ = 1;
    local_34 = pppppppuVar7;
    local_30 = puVar8;
    local_2c = &local_44;
    iVar2 = FUN_00fb1f64(&local_34,"local",5);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_34,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    uVar4 = 0xf;
    pcVar3 = "AwaitingHeaders";
    if (pbVar5[1] != 0) {
      uVar4 = 9;
      pcVar3 = "StreamingEndStream";
    }
    iVar2 = FUN_00fb1f64(&local_34,pcVar3,uVar4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_34,&DAT_00414a81,2);
    if (iVar2 != 0) {
      return 1;
    }
    local_44 = (undefined4 *******)CONCAT31(local_44._1_3_,1);
    local_34 = pppppppuVar7;
    local_30 = puVar8;
    local_2c = &local_44;
    iVar2 = FUN_00fb1f64(&local_34,"remote",6);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_34,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    uVar4 = 0xf;
    pcVar3 = "AwaitingHeaders";
    if (pbVar5[2] != 0) {
      uVar4 = 9;
      pcVar3 = "StreamingEndStream";
    }
    iVar2 = FUN_00fb1f64(&local_34,pcVar3,uVar4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_34,&DAT_00414a81,2);
    if (iVar2 != 0) {
      return 1;
    }
    pcVar3 = "}";
    goto LAB_014190ac;
  case '\x04':
    pppppppuVar7 = (undefined4 *******)*param_2;
    puVar8 = (undefined *)param_2[1];
    pcVar6 = *(code **)(puVar8 + 0xc);
    iVar2 = (*pcVar6)(pppppppuVar7,"HalfClosedLocal",0xf);
    break;
  case '\x05':
    pppppppuVar7 = (undefined4 *******)*param_2;
    puVar8 = (undefined *)param_2[1];
    pcVar6 = *(code **)(puVar8 + 0xc);
    iVar2 = (*pcVar6)(pppppppuVar7,&DAT_00565720,0x10);
    break;
  case '\x06':
    pppppppuVar7 = (undefined4 *******)*param_2;
    iVar9 = param_2[1];
    pcVar6 = *(code **)(iVar9 + 0xc);
    iVar2 = (*pcVar6)(pppppppuVar7,"Closed",6);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar2 = (*pcVar6)(pppppppuVar7,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_30 = &DAT_01880dc4;
      local_34 = &local_44;
      local_2c = (undefined4 *******)param_2[2];
      local_28 = param_2[3];
      local_35 = 1;
      local_44 = pppppppuVar7;
      local_40 = iVar9;
      iVar2 = FUN_0141918c(pbVar5,&local_34);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      goto LAB_0141909c;
    }
    iVar2 = (*pcVar6)(pppppppuVar7,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_0141918c(pbVar5,param_2);
    if (iVar2 != 0) {
      return 1;
    }
    pppppppuVar7 = (undefined4 *******)*param_2;
    pcVar6 = *(code **)(param_2[1] + 0xc);
    goto LAB_014190a4;
  }
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar6)(pppppppuVar7,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    pcVar3 = "AwaitingHeaders";
    uVar4 = 0xf;
    if (pbVar5[1] != 0) {
      uVar4 = 9;
      pcVar3 = "StreamingEndStream";
    }
    iVar2 = (*pcVar6)(pppppppuVar7,pcVar3,uVar4);
  }
  else {
    iVar2 = (*pcVar6)(pppppppuVar7,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_2c = &local_44;
    pcVar3 = "AwaitingHeaders";
    uVar4 = 0xf;
    if (pbVar5[1] != 0) {
      uVar4 = 9;
      pcVar3 = "StreamingEndStream";
    }
    local_44 = (undefined4 *******)CONCAT31(local_44._1_3_,1);
    local_34 = pppppppuVar7;
    local_30 = puVar8;
    iVar2 = FUN_00fb1f64(&local_34,pcVar3,uVar4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_34,&DAT_00414a81,2);
  }
LAB_0141909c:
  if (iVar2 != 0) {
    return 1;
  }
LAB_014190a4:
  pcVar3 = &DAT_00418e07;
LAB_014190ac:
  uVar4 = 1;
LAB_014190b4:
  uVar4 = (*pcVar6)(pppppppuVar7,pcVar3,uVar4);
  return uVar4;
}

