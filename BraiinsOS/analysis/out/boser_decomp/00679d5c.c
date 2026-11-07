// FUN_00679d5c @ 00679d5c size=124 calls_out=2 calls_in=1
// strings: 

void FUN_00679d5c(undefined2 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char local_18;
  char local_17;
  undefined4 local_14;
  
  FUN_00679a0c(&local_18);
  if (local_18 != '\x01') {
    if (local_17 == '\0') {
      *param_1 = 0x200;
      return;
    }
    FUN_00697a0c(&local_18,*param_2);
    if (local_18 == '\0') {
      *(char *)((int)param_1 + 1) = local_17;
      uVar1 = 0;
      goto LAB_00679d8c;
    }
  }
  *(undefined4 *)(param_1 + 2) = local_14;
  uVar1 = 1;
LAB_00679d8c:
  *(undefined1 *)param_1 = uVar1;
  return;
}

