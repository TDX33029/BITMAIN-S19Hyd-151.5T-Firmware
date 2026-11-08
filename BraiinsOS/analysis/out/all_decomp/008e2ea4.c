// FUN_008e2ea4 @ 008e2ea4 size=556 calls_out=2 calls_in=1
// strings: 

void FUN_008e2ea4(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  byte *local_2c;
  code **local_28;
  code *local_24;
  byte **local_20;
  byte **local_1c;
  code **local_18;
  byte **local_14;
  code *local_10;
  code *local_c;
  
  cVar3 = *param_1 - 4;
  if (*param_1 < 4) {
    cVar3 = '\x04';
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar3) {
  case '\0':
    local_2c = param_1 + 8;
    local_18 = &local_10;
    local_10 = (code *)(param_1 + 0xc);
    local_c = (code *)(param_1 + 4);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_20 = &local_2c;
    puVar4 = &DAT_003468ec;
    local_14 = (byte **)FUN_00d47d08;
    local_28 = &local_c;
    local_1c = (byte **)FUN_00d47d08;
    break;
  case '\x01':
    local_10 = (code *)(param_1 + 4);
    local_c = (code *)(param_1 + 8);
    local_20 = (byte **)&local_c;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_28 = &local_10;
    puVar4 = &DAT_00586076;
    local_1c = (byte **)FUN_00933120;
    break;
  case '\x02':
                    /* WARNING: Could not recover jumptable at 0x008e2f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00346939,0x2f);
    return;
  case '\x03':
                    /* WARNING: Could not recover jumptable at 0x008e2f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00346968,0x22);
    return;
  case '\x04':
    local_1c = (byte **)&local_20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    case 0:
      local_20 = (byte **)(param_1 + 8);
      local_c = (code *)(param_1 + 0x10);
      local_14 = (byte **)&local_c;
      uVar1 = *param_2;
      uVar2 = param_2[1];
      puVar4 = &DAT_0057df47;
      local_10 = FUN_008eccb8;
      local_18 = (code **)FUN_008eccb8;
      goto LAB_008e3110;
    case 1:
      local_c = (code *)(param_1 + 8);
      uVar1 = *param_2;
      uVar2 = param_2[1];
      local_18 = (code **)FUN_008eccb8;
      puVar4 = &DAT_0057690f;
      break;
    case 2:
      local_c = (code *)(param_1 + 1);
      uVar1 = *param_2;
      uVar2 = param_2[1];
      local_18 = (code **)FUN_0127337c;
      puVar4 = &DAT_00572228;
      break;
    case 3:
      local_c = (code *)(param_1 + 4);
      uVar1 = *param_2;
      uVar2 = param_2[1];
      local_18 = (code **)&LAB_00f1eff0;
      puVar4 = &DAT_003469bb;
    }
    local_1c = (byte **)&local_c;
LAB_008e3110:
    FUN_00fa948c(uVar1,uVar2,puVar4,&local_1c);
    return;
  case '\x05':
    FUN_00604528(param_1 + 4);
    return;
  case '\x06':
                    /* WARNING: Could not recover jumptable at 0x008e3020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_0034698a,0x31);
    return;
  case '\a':
                    /* WARNING: Could not recover jumptable at 0x008e2fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00411fde,0xb);
    return;
  }
  local_24 = FUN_00933120;
  FUN_00fa948c(uVar1,uVar2,puVar4,&local_28);
  return;
}

