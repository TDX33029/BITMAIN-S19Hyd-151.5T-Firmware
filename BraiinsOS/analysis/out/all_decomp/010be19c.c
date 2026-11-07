// FUN_010be19c @ 010be19c size=812 calls_out=3 calls_in=1
// strings: Parse | UserN;

undefined4 FUN_010be19c(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  puVar1 = param_1 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar2 = *param_2;
    iVar8 = param_2[1];
    pcVar6 = *(code **)(iVar8 + 0xc);
    iVar5 = (*pcVar6)(uVar2,"Parse",5);
    if (iVar5 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar5 = (*pcVar6)(uVar2,"(",1);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_010be590(puVar1,param_2);
    }
    else {
      iVar5 = (*pcVar6)(uVar2,"(\n",2);
      if (iVar5 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_28 = (undefined1 *)param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar2;
      local_3c = iVar8;
      local_30 = (undefined1 *)&local_40;
      iVar5 = FUN_010be590(puVar1,&local_30);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
    }
    if (iVar5 != 0) {
      return 1;
    }
    uVar2 = (*pcVar6)(uVar2,&DAT_00418e07,1);
    break;
  case 1:
    puVar7 = (undefined1 *)*param_2;
    puVar4 = (undefined *)param_2[1];
    pcVar6 = *(code **)(puVar4 + 0xc);
    iVar5 = (*pcVar6)(puVar7,"UserN,",4);
    if (iVar5 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar5 = (*pcVar6)(puVar7,"(",1);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_010be550(puVar1,puVar7,puVar4);
    }
    else {
      iVar5 = (*pcVar6)(puVar7,"(\n",2);
      if (iVar5 != 0) {
        return 1;
      }
      local_40 = CONCAT31(local_40._1_3_,1);
      local_30 = puVar7;
      local_2c = puVar4;
      local_28 = (undefined1 *)&local_40;
      iVar5 = FUN_010be550(puVar1,&local_30,&DAT_01880dc4);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    }
    if (iVar5 != 0) {
      return 1;
    }
    uVar2 = (*pcVar6)(puVar7,&DAT_00418e07,1);
    break;
  case 2:
    uVar2 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = "IncompleteMessageHeaderTimeoutBodyWriteHttp2";
    goto LAB_010be2b8;
  case 3:
    uVar2 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = &UNK_0040cb75;
LAB_010be2b8:
                    /* WARNING: Could not recover jumptable at 0x010be2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar5 + 0xc))(uVar2,pcVar3,0x11);
    return uVar2;
  case 4:
    uVar2 = *param_2;
    iVar5 = param_2[1];
    puVar4 = &DAT_0056a840;
    goto LAB_010be394;
  case 5:
    uVar2 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = "ChannelClosed";
    goto LAB_010be354;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x010be384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"Io",2);
    return uVar2;
  case 7:
    uVar2 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = "HeaderTimeoutBodyWriteHttp2";
LAB_010be354:
                    /* WARNING: Could not recover jumptable at 0x010be364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar5 + 0xc))(uVar2,pcVar3,0xd);
    return uVar2;
  case 8:
                    /* WARNING: Could not recover jumptable at 0x010be3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568094,4);
    return uVar2;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x010be298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"BodyWriteHttp2",9);
    return uVar2;
  case 10:
    uVar2 = *param_2;
    iVar5 = param_2[1];
    puVar4 = &UNK_0056a920;
LAB_010be394:
                    /* WARNING: Could not recover jumptable at 0x010be3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar5 + 0xc))(uVar2,puVar4,8);
    return uVar2;
  case 0xb:
                    /* WARNING: Could not recover jumptable at 0x010be268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"Http2",5);
    return uVar2;
  }
  return uVar2;
}

