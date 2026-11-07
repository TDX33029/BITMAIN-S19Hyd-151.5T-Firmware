// FUN_00697f28 @ 00697f28 size=488 calls_out=6 calls_in=2
// strings: user_agents_rotated_count | user_agents_rotated_endpoints_count | endpoints_rotated_count | endpoints_rotated_calls_count | internal error: entered unreachable code

int FUN_00697f28(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    FUN_01ac6cbc(*puVar3,",",1);
  }
  uVar2 = *puVar3;
  param_1[1] = '\x02';
  FUN_006bc51c(&local_28,uVar2,param_2,5);
  if ((char)local_28 != '\x04') {
    iVar1 = FUN_01966f50(local_28,local_24);
    return iVar1;
  }
  FUN_01ac6cbc(*puVar3,":",1);
  FUN_01ac6cbc(*puVar3,"{",1);
  local_30 = 0x100;
  local_2c = puVar3;
  iVar1 = FUN_00697b64(&local_30,"user_agents_rotated_count",0x19,param_3[1],*param_3,param_3[1]);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((char)local_30 == '\0') {
    iVar1 = FUN_00697b64(&local_30,"user_agents_rotated_endpoints_count",0x23,param_3[3],param_3[2],
                         param_3[3]);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((char)local_30 == '\0') {
      iVar1 = FUN_00697b64(&local_30,"endpoints_rotated_count",0x17,param_3[5],param_3[4],param_3[5]
                          );
      if (iVar1 != 0) {
        return iVar1;
      }
      if ((char)local_30 == '\0') {
        iVar1 = FUN_00697b64(&local_30,"endpoints_rotated_calls_count",0x1d,param_3[7],param_3[6],
                             param_3[7]);
        if (iVar1 != 0) {
          return iVar1;
        }
        if ((local_30 & 0xff00) == 0) {
          return 0;
        }
        if ((local_30 & 1) == 0) {
          FUN_01ac6cbc(*local_2c,"}",1);
          return 0;
        }
        return 0;
      }
    }
  }
  local_28 = 10;
  iVar1 = FUN_01966fbc(&local_28,0,0);
  return iVar1;
}

