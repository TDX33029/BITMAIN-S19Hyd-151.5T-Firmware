// FUN_015160c8 @ 015160c8 size=116 calls_out=2 calls_in=1
// strings: 

void FUN_015160c8(int param_1,undefined2 param_2,undefined2 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  uVar2 = param_4[1];
  uVar1 = param_4[2];
  if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_018a78e8);
  }
  local_14 = uVar2 - uVar1;
  param_4[2] = uVar2;
  local_18 = *param_4 + uVar1;
  local_1c = 0x80000000;
  FUN_0153f9a0(param_1,&local_1c);
  *(undefined2 *)(param_1 + 0xe) = param_3;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}

