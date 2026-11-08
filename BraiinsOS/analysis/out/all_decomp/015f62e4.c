// FUN_015f62e4 @ 015f62e4 size=572 calls_out=7 calls_in=105
// strings: failed to generate random datathe number of hardware threads is not known for the target platforminvalid stack size | failed to generate random datathe number of hardware threads is not known for the target platforminvalid stack size

void FUN_015f62e4(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_24;
  
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  if (DAT_018d9110 != '\0') {
    uVar5 = 0x10;
    puVar6 = &local_38;
switchD_015f6364_caseD_4:
    while( true ) {
      cVar1 = DAT_018d9111;
      uVar4 = 4;
      if (DAT_018d9111 == '\0') {
        uVar4 = 1;
      }
      uVar2 = FUN_016d37ea(puVar6,uVar5,uVar4);
      if (uVar2 == 0xffffffff) break;
      if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar5,uVar5,&DAT_018aada8);
      }
      puVar6 = (undefined4 *)((int)puVar6 + uVar2);
      uVar5 = uVar5 - uVar2;
      if (uVar5 == 0) goto LAB_015f64e0;
    }
    puVar3 = (undefined4 *)FUN_016d2bc8();
    switch(*puVar3) {
    case 1:
    case 0x26:
      goto switchD_015f6364_caseD_1;
    case 4:
      goto switchD_015f6364_caseD_4;
    case 0xb:
      if (cVar1 == '\0') goto LAB_015f6448;
      break;
    case 0x16:
      if (cVar1 != '\0') {
        DAT_018d9111 = '\0';
        goto switchD_015f6364_caseD_4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("failed to generate random datathe number of hardware threads is not known for the target platforminvalid stack size"
                 ,0x3d,&DAT_018aad98);
  }
  puVar6 = &local_38;
  uVar5 = 0x10;
LAB_015f6448:
  DataMemoryBarrier(0xb);
  puVar3 = &DAT_018d91fc;
  if (DAT_018d91f8 != 0) {
    FUN_015f6600(&local_28);
    if (((char)local_28 != '\x04') && (uVar2 = local_28 & 0xff, puVar3 = local_24, uVar2 != 4)) {
LAB_015f64d8:
      if (uVar2 != 4) {
        uVar5 = local_28 >> 8 | (int)local_24 << 0x18;
LAB_015f656c:
        local_28 = uVar2 | uVar5 << 8;
        local_24 = (undefined4 *)((uint)local_24 & 0xffffff00 | uVar5 >> 0x18);
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("failed to generate random datathe number of hardware threads is not known for the target platforminvalid stack size"
                     ,0x1e,&local_28,&DAT_018ab298,&DAT_018aad88);
      }
      goto LAB_015f64e0;
    }
  }
  uVar4 = *puVar3;
  do {
    while (uVar2 = FUN_016e0250(uVar4,puVar6,uVar5), uVar2 != 0xffffffff) {
      if (uVar2 == 0) {
        local_28 = 0;
        local_24 = (undefined4 *)&DAT_018aab20;
        uVar2 = 2;
        goto LAB_015f64d8;
      }
      if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar5,uVar5,&DAT_018aab38);
      }
      puVar6 = (undefined4 *)((int)puVar6 + uVar2);
      uVar5 = uVar5 - uVar2;
      if (uVar5 == 0) goto LAB_015f64e0;
    }
    local_24 = (undefined4 *)FUN_016d2bc8();
    local_24 = (undefined4 *)*local_24;
    if (local_24 != (undefined4 *)&DAT_00000004) {
      uVar5 = (int)local_24 << 0x18;
      uVar2 = 0;
      goto LAB_015f656c;
    }
  } while (uVar5 != 0);
LAB_015f64e0:
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  param_1[3] = local_2c;
  return;
switchD_015f6364_caseD_1:
  DAT_018d9110 = '\0';
  goto LAB_015f6448;
}

