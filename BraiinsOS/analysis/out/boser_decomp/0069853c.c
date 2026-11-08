// FUN_0069853c @ 0069853c size=232 calls_out=5 calls_in=1
// strings: next_telemetry_send_atstruct ApiUsageStatestruct UserAgentEntrytoo many temporary files exist | internal error: entered unreachable code

int FUN_0069853c(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
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
  FUN_006bc51c(&local_18,uVar2,
               "next_telemetry_send_atstruct ApiUsageStatestruct UserAgentEntrytoo many temporary files exist"
               ,0x16);
  if ((char)local_18 != '\x04') {
    iVar1 = FUN_01966f50(local_18,uStack_14);
    return iVar1;
  }
  FUN_01ac6cbc(*puVar3,":",1);
  if (*param_2 == 0) {
    FUN_01ac6cbc(*puVar3,&DAT_0056d030,4);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0069c3f8(param_2,puVar3);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

