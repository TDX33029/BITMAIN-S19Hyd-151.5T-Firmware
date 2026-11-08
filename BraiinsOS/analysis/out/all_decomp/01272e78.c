// FUN_01272e78 @ 01272e78 size=140 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01272e78(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_14;
  
  pcVar4 = (char *)*param_1;
  uVar2 = param_1[1];
  iVar3 = param_1[2];
  local_1c = param_2;
  if ((*pcVar4 == '\0') || (iVar1 = (**(code **)(iVar3 + 0x14))(uVar2,&DAT_003b6539,3), iVar1 == 0))
  {
    *pcVar4 = '\x01';
    local_14 = FUN_00faaf34;
    local_18 = &local_1c;
    uVar2 = (**(code **)(iVar3 + 0x14))(uVar2,&DAT_00590e71,&local_18);
    return uVar2;
  }
  return 1;
}

