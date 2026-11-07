// FUN_015144ac @ 015144ac size=200 calls_out=2 calls_in=1
// strings: 

void FUN_015144ac(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (uVar1 == uVar2) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = 1;
    param_1[2] = (uint)&DAT_0040bd5b;
    param_1[3] = 0x15;
    return;
  }
  param_2[2] = uVar2 + 1;
  if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar2,uVar2 + 1,uVar1,&DAT_018a78f8);
  }
  if (*(char *)(*param_2 + uVar2) == '\x01') {
    FUN_015405b4(&local_20);
    param_1[1] = uStack_1c;
    param_1[2] = uStack_18;
    param_1[3] = uStack_14;
    *param_1 = (uint)(local_20 == 1);
    return;
  }
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 4;
  return;
}

