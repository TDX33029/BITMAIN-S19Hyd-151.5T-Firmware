// FUN_01b84f70 @ 01b84f70 size=160 calls_out=1 calls_in=3
// strings: 

uint FUN_01b84f70(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_01b84ee4(param_1,param_3);
  if (param_2 != 0 && uVar1 < 0xffffff89) {
    uVar1 = *(int *)(param_1 + 0x14) - param_2;
    if (*(uint *)(param_1 + 0xc) <= uVar1) {
      *(uint *)(param_1 + 0x14) = uVar1;
      if (uVar1 < *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 0x10) = uVar1;
      }
      return uVar1;
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return 0;
}

