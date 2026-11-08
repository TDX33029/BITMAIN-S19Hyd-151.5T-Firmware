// FUN_00e95b08 @ 00e95b08 size=272 calls_out=3 calls_in=1
// strings: failed to write frame to transport

/* WARNING: Removing unreachable block (ram,0x00e95bbc) */

void FUN_00e95b08(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  char local_20;
  undefined3 local_1f;
  int local_1c;
  
  if (*(uint *)(param_2 + 0x44) <= *(uint *)(param_2 + 0x38)) {
    do {
      if (*(int *)(param_2 + 0x38) == 0) goto LAB_00e95b28;
      FUN_0098b2b8(&local_20,param_2,param_3,param_2 + 0x34);
      if (local_20 == '\x05') {
        local_20 = '\x05';
        local_30 = CONCAT31(local_30._1_3_,5);
        goto LAB_00e95be0;
      }
      if (local_20 != '\x04') {
        local_30 = CONCAT31(local_1f,local_20);
        local_2c = local_1c;
        goto joined_r0x00e95bdc;
      }
    } while (local_1c != 0);
    FUN_015e79d4(&local_30,0x17,"failed to write frame to transport",0x22);
    local_20 = (char)local_30;
joined_r0x00e95bdc:
    if (local_20 != '\x04') {
LAB_00e95be0:
      if (local_20 == '\x05') {
        *param_1 = 5;
        return;
      }
      local_24 = local_2c;
      local_28 = local_30;
      FUN_014b3ad4(param_1,&local_28);
      return;
    }
  }
LAB_00e95b28:
  *param_1 = 4;
  return;
}

