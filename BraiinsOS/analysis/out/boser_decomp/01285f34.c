// FUN_01285f34 @ 01285f34 size=136 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01285f34(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 == 0 && (0xb < param_3) <= param_4) {
    iVar2 = 0;
  }
  else {
    if (param_4 != param_3 < 0xc || param_4 - (param_3 < 0xc) < (uint)(0xb < param_3 - 0xc)) {
      return 0;
    }
    param_3 = param_3 - 0xc;
    iVar2 = 1;
  }
  if ((*(int *)(param_1 + 0x78) != 1) || (uVar1 = 1, *(int *)(param_1 + 0x7c) == iVar2)) {
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(int *)(param_1 + 0x7c) = iVar2;
    if ((*(int *)(param_1 + 0x80) != 1) || (*(uint *)(param_1 + 0x84) == param_3)) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      uVar1 = 8;
      *(uint *)(param_1 + 0x84) = param_3;
    }
  }
  return uVar1;
}

