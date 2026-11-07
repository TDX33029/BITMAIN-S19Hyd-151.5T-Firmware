// FUN_00732498 @ 00732498 size=1000 calls_out=4 calls_in=3
// strings: Pattern | PrereqDhDecryptParse error | State

undefined4 FUN_00732498(undefined1 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  pcVar1 = param_1 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar3 = *param_2;
    iVar7 = param_2[1];
    pcVar6 = *(code **)(iVar7 + 0xc);
    iVar2 = (*pcVar6)(uVar3,"Pattern",7);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar6)(uVar3,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00786ec4(pcVar1,uVar3,iVar7);
    }
    else {
      iVar2 = (*pcVar6)(uVar3,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_21 = 1;
      local_30 = uVar3;
      local_2c = iVar7;
      iVar2 = FUN_00786ec4(pcVar1,&local_30,&DAT_01880dc4);
LAB_00732854:
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    }
    break;
  case 1:
    uVar3 = *param_2;
    iVar7 = param_2[1];
    pcVar6 = *(code **)(iVar7 + 0xc);
    iVar2 = (*pcVar6)(uVar3,&DAT_00568fc8,4);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar2 = (*pcVar6)(uVar3,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_21 = 1;
      local_30 = uVar3;
      local_2c = iVar7;
      iVar2 = FUN_0078810c(pcVar1,&local_30,&DAT_01880dc4);
      goto LAB_00732854;
    }
    iVar2 = (*pcVar6)(uVar3,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_0078810c(pcVar1,uVar3,iVar7);
    break;
  case 2:
    uVar3 = *param_2;
    iVar7 = param_2[1];
    pcVar6 = *(code **)(iVar7 + 0xc);
    iVar2 = (*pcVar6)(uVar3,"PrereqDhDecryptParse error",6);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar6)(uVar3,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      puVar5 = &DAT_0040f88c;
      if (*pcVar1 == '\0') {
        puVar5 = &DAT_0040f87d;
      }
      iVar2 = (*pcVar6)(uVar3,puVar5,0xf);
    }
    else {
      iVar2 = (*pcVar6)(uVar3,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_28 = &local_21;
      puVar5 = &DAT_0040f88c;
      if (*pcVar1 == '\0') {
        puVar5 = &DAT_0040f87d;
      }
      local_21 = 1;
      local_30 = uVar3;
      local_2c = iVar7;
      iVar2 = FUN_00fb1f64(&local_30,puVar5,0xf);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    }
    if (iVar2 != 0) {
      return 1;
    }
    uVar4 = (*pcVar6)(uVar3,&DAT_00418e07,1);
    goto LAB_00732890;
  case 3:
    uVar3 = *param_2;
    iVar7 = param_2[1];
    pcVar6 = *(code **)(iVar7 + 0xc);
    iVar2 = (*pcVar6)(uVar3,"State",5);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar2 = (*pcVar6)(uVar3,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_21 = 1;
      local_30 = uVar3;
      local_2c = iVar7;
      iVar2 = FUN_00787740(pcVar1,&local_30,&DAT_01880dc4);
      goto LAB_00732854;
    }
    iVar2 = (*pcVar6)(uVar3,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00787740(pcVar1,uVar3,iVar7);
    break;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00732554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418607,5);
    return uVar3;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x007326c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"DhDecryptParse error",2);
    return uVar3;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x007326e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"DecryptParse error",7);
    return uVar3;
  }
  uVar4 = 1;
  if (iVar2 == 0) {
    uVar4 = (*pcVar6)(uVar3,&DAT_00418e07,1);
  }
LAB_00732890:
  return uVar4;
}

