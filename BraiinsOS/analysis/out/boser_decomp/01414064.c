// FUN_01414064 @ 01414064 size=120 calls_out=2 calls_in=0
// strings: <unknown status code>

void FUN_01414064(undefined2 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined2 local_22;
  char *local_20;
  undefined4 local_1c;
  undefined2 *local_18;
  code *local_14;
  char **local_10;
  undefined1 *local_c;
  
  local_22 = *param_1;
  uVar2 = FUN_014136b4();
  local_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
  pcVar1 = (char *)uVar2;
  if (pcVar1 == (char *)0x0) {
    local_1c = 0x15;
  }
  local_20 = "<unknown status code>";
  if (pcVar1 != (char *)0x0) {
    local_20 = pcVar1;
  }
  local_c = &LAB_018a13b8;
  local_10 = &local_20;
  local_18 = &local_22;
  local_14 = FUN_012fcf18;
  FUN_012fa178(*param_2,param_2[1],&DAT_0057d5fc,&local_18);
  return;
}

