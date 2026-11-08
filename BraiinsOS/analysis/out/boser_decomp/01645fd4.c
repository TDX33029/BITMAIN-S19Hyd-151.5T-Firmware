// FUN_01645fd4 @ 01645fd4 size=132 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01645fd4(undefined4 *param_1,undefined4 param_2)

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
  if ((*pcVar4 == '\0') || (iVar1 = (**(code **)(iVar3 + 0x14))(uVar2,";",3), iVar1 == 0)) {
    *pcVar4 = '\x01';
    local_14 = FUN_012fbb84;
    local_18 = &local_1c;
    uVar2 = (**(code **)(iVar3 + 0x14))(uVar2,&DAT_00590e5f,&local_18);
    return uVar2;
  }
  return 1;
}

