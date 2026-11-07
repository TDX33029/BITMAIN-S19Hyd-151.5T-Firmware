// FUN_01433674 @ 01433674 size=128 calls_out=2 calls_in=0
// strings: <unknown status code>InvalidMethodinvalid HTTP methodInvalidStatusCodeinvalid status code

void FUN_01433674(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined2 local_2a;
  char *local_28;
  undefined4 local_24;
  undefined2 *local_20;
  code *local_1c;
  char **local_18;
  undefined4 *local_14;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  local_2a = *(undefined2 *)*param_1;
  uVar4 = FUN_010a4a80();
  local_24 = (undefined4)((ulonglong)uVar4 >> 0x20);
  pcVar1 = (char *)uVar4;
  if (pcVar1 == (char *)0x0) {
    local_24 = 0x15;
  }
  local_28 = 
  "<unknown status code>InvalidMethodinvalid HTTP methodInvalidStatusCodeinvalid status code";
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
  }
  local_18 = &local_28;
  local_20 = &local_2a;
  local_14 = &DAT_0157d360;
  local_1c = FUN_00fac370;
  FUN_00fa948c(uVar2,uVar3,&DAT_0057aaf2,&local_20);
  return;
}

