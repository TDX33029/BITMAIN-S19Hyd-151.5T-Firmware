// FUN_00735dc8 @ 00735dc8 size=212 calls_out=1 calls_in=0
// strings: 

void FUN_00735dc8(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_20;
  undefined1 local_19;
  undefined1 *local_18;
  code *local_14;
  undefined1 *local_10;
  code *local_c;
  
  local_10 = (undefined1 *)&local_20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    local_20 = *(undefined4 *)(param_1 + 4);
    local_19 = param_1[1];
    uVar1 = *param_2;
    uVar4 = param_2[1];
    puVar3 = &DAT_005a822c;
    break;
  case 1:
    uVar1 = *param_2;
    uVar4 = 0x2b;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = 
    "Encoded text cannot have a 6-bit remainder.Impossible: must only have 0 to 8 input bytes in last chunk, with no invalid lengths"
    ;
    goto LAB_00735ea0;
  case 2:
    local_20 = *(undefined4 *)(param_1 + 4);
    local_19 = param_1[1];
    uVar1 = *param_2;
    uVar4 = param_2[1];
    puVar3 = &DAT_005955d8;
    break;
  case 3:
    uVar1 = *param_2;
    uVar4 = 0xf;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = 
    "Invalid paddingstring is not valid utf8invalid u8 while decoding boolchar is not validtag for enum is not validBincode doesn\'t support serde::Deserializer::deserialize_anythe size limit has been reachedBincode can only encode sequences and maps that have a knowable size ahead of timeBincode does not support the serde::Deserializer::deserialize_any method"
    ;
LAB_00735ea0:
                    /* WARNING: Could not recover jumptable at 0x00735ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,pcVar2,uVar4);
    return;
  }
  local_c = FUN_012fd02c;
  local_18 = &local_19;
  local_14 = FUN_012fcc70;
  FUN_012fa178(uVar1,uVar4,puVar3,&local_18);
  return;
}

