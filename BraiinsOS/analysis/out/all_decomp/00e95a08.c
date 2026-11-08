// FUN_00e95a08 @ 00e95a08 size=252 calls_out=3 calls_in=2
// strings: failed to write frame to transport

void FUN_00e95a08(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  char local_20;
  undefined3 local_1f;
  int local_1c;
  
  do {
    if (*(int *)(param_2 + 0x38) == 0) goto LAB_00e95af4;
    FUN_0098b2b8(&local_20,param_2,param_3,param_2 + 0x34);
    if (local_20 == '\x05') {
      local_20 = '\x05';
      local_30 = CONCAT31(local_30._1_3_,5);
      goto LAB_00e95a9c;
    }
    if (local_20 != '\x04') {
      local_2c = local_1c;
      local_30 = CONCAT31(local_1f,local_20);
      if (local_20 == '\x04') goto LAB_00e95af4;
      goto LAB_00e95a9c;
    }
  } while (local_1c != 0);
  FUN_015e79d4(&local_30,0x17,"failed to write frame to transport",0x22);
  local_20 = (char)local_30;
  if ((char)local_30 != '\x04') {
LAB_00e95a9c:
    if (local_20 == '\x05') {
      *param_1 = 5;
      return;
    }
    local_24 = local_2c;
    local_28 = local_30;
    FUN_014b3ad4(param_1,&local_28);
    return;
  }
LAB_00e95af4:
  *param_1 = 4;
  return;
}

