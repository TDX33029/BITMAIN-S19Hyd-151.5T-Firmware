// FUN_0137acac @ 0137acac size=596 calls_out=3 calls_in=0
// strings: HalfClosedLocalevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/window_update.rs:51 | remote | local | AwaitingHeaders | StreamingEndStream | Closed

undefined4 FUN_0137acac(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  byte *pbVar6;
  code *UNRECOVERED_JUMPTABLE;
  byte *pbVar7;
  int iVar8;
  byte *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  pbVar6 = (byte *)*param_1;
  cVar1 = *pbVar6 - 6;
  if (*pbVar6 < 6) {
    cVar1 = '\x06';
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar1) {
  case '\0':
    uVar3 = *param_2;
    uVar5 = 4;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = &UNK_0056cfac;
    break;
  case '\x01':
    uVar3 = *param_2;
    uVar5 = 0xd;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "ReservedLocalReservedRemote";
    break;
  case '\x02':
    uVar3 = *param_2;
    uVar5 = 0xe;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "ReservedRemote";
    break;
  case '\x03':
    local_30 = pbVar6 + 2;
    uVar3 = FUN_01303d90(param_2,&DAT_0056daac,4,"local",5,pbVar6 + 1,FUN_013b6368,"remote",6,
                         &local_30,FUN_013b6890);
    return uVar3;
  case '\x04':
    pbVar7 = (byte *)*param_2;
    iVar8 = param_2[1];
    uVar3 = 0xf;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar8 + 0xc);
    pcVar4 = 
    "HalfClosedLocalevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/window_update.rs:51"
    ;
    goto LAB_0137add4;
  case '\x05':
    pbVar7 = (byte *)*param_2;
    iVar8 = param_2[1];
    uVar3 = 0x10;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar8 + 0xc);
    pcVar4 = &DAT_0056ab68;
LAB_0137add4:
    iVar2 = (*UNRECOVERED_JUMPTABLE)(pbVar7,pcVar4,uVar3);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar8 = (*UNRECOVERED_JUMPTABLE)(pbVar7,"(",1);
      if (iVar8 != 0) {
        return 1;
      }
      uVar3 = 0xf;
      pcVar4 = "AwaitingHeaders";
      if (pbVar6[1] != 0) {
        uVar3 = 9;
        pcVar4 = "StreamingEndStream";
      }
      iVar8 = (**(code **)(param_2[1] + 0xc))(*param_2,pcVar4,uVar3);
    }
    else {
      iVar2 = (*UNRECOVERED_JUMPTABLE)(pbVar7,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_28 = &local_21;
      pcVar4 = "AwaitingHeaders";
      uVar3 = 0xf;
      if (pbVar6[1] != 0) {
        uVar3 = 9;
        pcVar4 = "StreamingEndStream";
      }
      local_21 = 1;
      local_30 = pbVar7;
      local_2c = iVar8;
      iVar8 = FUN_01302620(&local_30,pcVar4,uVar3);
      if (iVar8 != 0) {
        return 1;
      }
      iVar8 = FUN_01302620(&local_30,&DAT_005312e2,2);
    }
    if (iVar8 == 0) {
      uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
      return uVar3;
    }
    return 1;
  case '\x06':
    local_30 = pbVar6;
    uVar3 = FUN_013032f4(param_2,"Closed",6,&local_30,FUN_0137af6c);
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0137adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3,pcVar4,uVar5);
  return uVar3;
}

