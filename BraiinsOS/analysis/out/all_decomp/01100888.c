// FUN_01100888 @ 01100888 size=1008 calls_out=4 calls_in=0
// strings: IncorrectTagIncompleteMapIncorrectVarintOverRecursionLimit | UnexpectedWireType | InvalidEnumValueHandshakeFailure | WireTypeVarint

undefined4 FUN_01100888(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar1 = *param_2;
    iVar2 = param_2[1];
    pcVar3 = &DAT_00411fe9;
    goto LAB_01100990;
  case 1:
    puVar6 = (undefined1 *)*param_2;
    puVar7 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar7 + 0xc);
    iVar2 = (*pcVar5)(puVar6,"UnexpectedWireType",0x12);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar5)(puVar6,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_0110378c(param_1 + 1,puVar6,puVar7);
    }
    else {
      iVar2 = (*pcVar5)(puVar6,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      uVar4 = (uint)(byte)param_1[1];
      local_40 = CONCAT31(local_40._1_3_,1);
      local_30 = puVar6;
      local_2c = puVar7;
      local_28 = (undefined1 *)&local_40;
      iVar2 = FUN_00fb1f64(&local_30,(&PTR_s_WireTypeVarint_018b2120)[uVar4],
                           *(undefined4 *)(&DAT_00420248 + uVar4 * 4));
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    }
    if (iVar2 == 0) {
      uVar1 = (*pcVar5)(puVar6,&DAT_00418e07,1);
      return uVar1;
    }
    return 1;
  case 2:
    uVar1 = *param_2;
    iVar8 = param_2[1];
    pcVar5 = *(code **)(iVar8 + 0xc);
    iVar2 = (*pcVar5)(uVar1,"IncorrectTagIncompleteMapIncorrectVarintOverRecursionLimit",0xc);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar2 = (*pcVar5)(uVar1,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_28 = (undefined1 *)param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar1;
      local_3c = iVar8;
      local_30 = (undefined1 *)&local_40;
      iVar2 = FUN_011036a8(param_1 + 4,&local_30);
LAB_01100c50:
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_01100c7c;
    }
    iVar2 = (*pcVar5)(uVar1,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_011036a8(param_1 + 4,param_2);
    break;
  case 3:
    uVar1 = *param_2;
    iVar2 = param_2[1];
    pcVar3 = "IncompleteMapIncorrectVarintOverRecursionLimit";
LAB_01100990:
                    /* WARNING: Could not recover jumptable at 0x011009a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar2 + 0xc))(uVar1,pcVar3,0xd);
    return uVar1;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x011008f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"IncorrectVarintOverRecursionLimit",0xf);
    return uVar1;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x01100a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041d928,9);
    return uVar1;
  case 6:
    uVar1 = *param_2;
    iVar8 = param_2[1];
    pcVar5 = *(code **)(iVar8 + 0xc);
    iVar2 = (*pcVar5)(uVar1,"InvalidEnumValueHandshakeFailure",0x10);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar2 = (*pcVar5)(uVar1,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_28 = (undefined1 *)param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar1;
      local_3c = iVar8;
      local_30 = (undefined1 *)&local_40;
      iVar2 = FUN_010fe45c(param_1 + 4,&local_30);
      goto LAB_01100c50;
    }
    iVar2 = (*pcVar5)(uVar1,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_010fe45c(param_1 + 4,param_2);
    break;
  case 7:
                    /* WARNING: Could not recover jumptable at 0x011009c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"OverRecursionLimit",0x12);
    return uVar1;
  case 8:
                    /* WARNING: Could not recover jumptable at 0x01100aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00564e20,0x10);
    return uVar1;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x01100914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041200b,5);
    return uVar1;
  }
  if (iVar2 != 0) {
    return 1;
  }
  uVar1 = *param_2;
  pcVar5 = *(code **)(param_2[1] + 0xc);
LAB_01100c7c:
  uVar1 = (*pcVar5)(uVar1,&DAT_00418e07,1);
  return uVar1;
}

