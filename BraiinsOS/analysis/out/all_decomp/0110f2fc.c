// FUN_0110f2fc @ 0110f2fc size=244 calls_out=1 calls_in=0
// strings: 

void FUN_0110f2fc(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 *local_14;
  undefined1 **local_10;
  undefined1 *local_c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    local_14 = param_1 + 1;
    local_c = &LAB_0110f440;
    goto LAB_0110f3e8;
  case 1:
    local_14 = param_1 + 1;
    local_c = &LAB_0110f258;
    goto LAB_0110f3e8;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0110f384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))
              (*param_2,
               "Noise handshake Connection shutdownFirst NX-handshake step error: Failed to parse initiator\'s public key"
               ,0x23);
    return;
  case 3:
    local_c = &DAT_0110fe84;
    break;
  case 4:
    local_14 = param_1 + 4;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = &LAB_008b9b38;
    puVar3 = &DAT_0057aeae;
    goto LAB_0110f3f8;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x0110f3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))
              (*param_2,"First NX-handshake step error: Failed to parse initiator\'s public key",
               0x45);
    return;
  case 6:
    local_c = &LAB_008b9b38;
    break;
  case 7:
    local_c = &LAB_0110f6e4;
    break;
  case 8:
    local_c = &DAT_0110f700;
  }
  local_14 = param_1 + 4;
LAB_0110f3e8:
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar3 = &DAT_00590e71;
LAB_0110f3f8:
  local_10 = &local_14;
  FUN_00fa948c(uVar1,uVar2,puVar3,&local_10);
  return;
}

