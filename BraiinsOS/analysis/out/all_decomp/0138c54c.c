// FUN_0138c54c @ 0138c54c size=512 calls_out=1 calls_in=1
// strings: HaystackTooLong | lenGeneric | UnsupportedAnchored | GaveUp

byte FUN_0138c54c(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 **ppuVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined1 *local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  puVar5 = (undefined1 *)*param_1;
  local_18 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar5) {
  case 0:
    local_1c = puVar5 + 4;
    local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00567260,4);
    local_13 = 0;
    ppuVar2 = (undefined4 **)FUN_00fb2258(&local_18,&DAT_00567548,4,puVar5 + 1,FUN_0078955c);
    break;
  case 1:
    local_1c = puVar5 + 4;
    local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"GaveUp",6);
    local_13 = 0;
    ppuVar2 = &local_18;
    break;
  case 2:
    local_1c = puVar5 + 4;
    local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"HaystackTooLong",0xf);
    local_13 = 0;
    pcVar3 = "lenGeneric";
    pcVar6 = FUN_00d47d08;
    ppuVar2 = &local_18;
    uVar4 = 3;
    goto LAB_0138c6dc;
  case 3:
    local_1c = puVar5 + 4;
    local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"UnsupportedAnchored",0x13);
    local_13 = 0;
    pcVar3 = &DAT_005675d0;
    pcVar6 = FUN_013c7400;
    ppuVar2 = &local_18;
    uVar4 = 4;
    goto LAB_0138c6dc;
  }
  pcVar6 = FUN_00d47d08;
  pcVar3 = &DAT_00414716;
  uVar4 = 6;
LAB_0138c6dc:
  FUN_00fb2258(ppuVar2,pcVar3,uVar4,&local_1c,pcVar6);
  if (local_13 != 1 || (local_14 & 1) != 0) {
    return (local_13 | local_14) & 1;
  }
  if ((*(byte *)((int)local_18 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_18[1] + 0xc))(*local_18," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_18[1] + 0xc))(*local_18,"}",1);
  return bVar1 & 1;
}

