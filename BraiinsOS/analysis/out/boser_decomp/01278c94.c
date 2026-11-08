// FUN_01278c94 @ 01278c94 size=104 calls_out=2 calls_in=3
// strings: 

void FUN_01278c94(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char local_18;
  char local_17;
  undefined4 local_14;
  
  FUN_014db6fc(&local_18);
  if (local_18 != '\x01') {
    if (local_17 == '\0') {
      *param_1 = 0;
      return;
    }
    uVar2 = FUN_01278434(*param_2);
    local_14 = (undefined4)(uVar2 >> 0x20);
    if ((uVar2 & 1) == 0) {
      uVar1 = 1;
      goto LAB_01278cc0;
    }
  }
  uVar1 = 2;
LAB_01278cc0:
  *param_1 = uVar1;
  param_1[1] = local_14;
  return;
}

