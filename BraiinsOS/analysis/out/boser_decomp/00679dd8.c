// FUN_00679dd8 @ 00679dd8 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_00679dd8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char local_18;
  char local_17;
  undefined4 local_14;
  
  FUN_00679a0c(&local_18);
  if (local_18 != '\x01') {
    if (local_17 == '\0') {
      *param_1 = 0;
      return;
    }
    uVar2 = FUN_0067924c(*param_2);
    local_14 = (undefined4)(uVar2 >> 0x20);
    if ((uVar2 & 1) == 0) {
      uVar1 = 1;
      goto LAB_00679e04;
    }
  }
  uVar1 = 2;
LAB_00679e04:
  *param_1 = uVar1;
  param_1[1] = local_14;
  return;
}

