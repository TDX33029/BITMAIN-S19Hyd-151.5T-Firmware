// FUN_019ae6ac @ 019ae6ac size=572 calls_out=7 calls_in=241
// strings: failed to generate random datathe number of hardware threads is not known for the target platforminvalid stack size | failed to generate random datathe number of hardware threads is not known for the target platforminvalid stack size

void FUN_019ae6ac(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 *local_2c;
  
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  if (DAT_01d50349 != '\0') {
    uVar6 = 0x10;
    puVar7 = &local_40;
switchD_019ae734_caseD_4:
    while( true ) {
      cVar1 = DAT_01d5034a;
      uVar4 = 4;
      if (DAT_01d5034a == '\0') {
        uVar4 = 1;
      }
      uVar2 = FUN_01be3ea0(puVar7,uVar6,uVar4);
      if (uVar2 == 0xffffffff) break;
      if (uVar6 < uVar2) {
        puVar5 = &DAT_01d279d4;
        goto LAB_019ae8cc;
      }
      puVar7 = (undefined4 *)((int)puVar7 + uVar2);
      uVar6 = uVar6 - uVar2;
      if (uVar6 == 0) goto LAB_019ae8b0;
    }
    puVar3 = (undefined4 *)FUN_01be3244();
    switch(*puVar3) {
    case 1:
    case 0x26:
      goto switchD_019ae734_caseD_1;
    case 4:
      goto switchD_019ae734_caseD_4;
    case 0xb:
      if (cVar1 == '\0') goto LAB_019ae818;
      break;
    case 0x16:
      if (cVar1 != '\0') {
        DAT_01d5034a = '\0';
        goto switchD_019ae734_caseD_4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("failed to generate random datathe number of hardware threads is not known for the target platforminvalid stack size"
                 ,0x3d,&DAT_01d279c4);
  }
  puVar7 = &local_40;
  uVar6 = 0x10;
LAB_019ae818:
  DataMemoryBarrier(0xb);
  puVar3 = &DAT_01d50350;
  if (DAT_01d5034c != 0) {
    FUN_019ae9cc(&local_30);
    if (((char)local_30 != '\x04') && (uVar2 = local_30 & 0xff, puVar3 = local_2c, uVar2 != 4)) {
LAB_019ae8a8:
      if (uVar2 != 4) {
        uVar6 = local_30 >> 8 | (int)local_2c << 0x18;
LAB_019ae934:
        local_30 = uVar2 | uVar6 << 8;
        local_2c = (undefined4 *)((uint)local_2c & 0xffffff00 | uVar6 >> 0x18);
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("failed to generate random datathe number of hardware threads is not known for the target platforminvalid stack size"
                     ,0x1e,&local_30,&DAT_01d27e94,&DAT_01d279b4);
      }
      goto LAB_019ae8b0;
    }
  }
  uVar4 = *puVar3;
  do {
    while (uVar2 = FUN_01bf0424(uVar4,puVar7,uVar6), uVar2 != 0xffffffff) {
      if (uVar2 == 0) {
        local_30 = 0;
        local_2c = (undefined4 *)&DAT_01d30824;
        uVar2 = 2;
        goto LAB_019ae8a8;
      }
      if (uVar6 < uVar2) {
        puVar5 = &DAT_01d27734;
LAB_019ae8cc:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar2,uVar6,uVar6,puVar5);
      }
      puVar7 = (undefined4 *)((int)puVar7 + uVar2);
      uVar6 = uVar6 - uVar2;
      if (uVar6 == 0) goto LAB_019ae8b0;
    }
    local_2c = (undefined4 *)FUN_01be3244();
    local_2c = (undefined4 *)*local_2c;
    if (local_2c != (undefined4 *)&SUB_00000004) {
      uVar6 = (int)local_2c << 0x18;
      uVar2 = 0;
      goto LAB_019ae934;
    }
  } while (uVar6 != 0);
LAB_019ae8b0:
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  param_1[3] = local_34;
  return;
switchD_019ae734_caseD_1:
  DAT_01d50349 = '\0';
  goto LAB_019ae818;
}

