// FUN_01514440 @ 01514440 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_01514440(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar2,uVar1,uVar1,&DAT_018a78e8);
  }
  local_14 = uVar1 - uVar2;
  param_2[2] = uVar1;
  local_18 = *param_2 + uVar2;
  local_1c = 0x80000000;
  FUN_0153f9a0(param_1 + 1,&local_1c);
  *param_1 = 0x80000000;
  return;
}

