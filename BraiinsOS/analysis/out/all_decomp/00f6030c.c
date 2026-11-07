// FUN_00f6030c @ 00f6030c size=156 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00f6030c(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == 0 && (0xb < param_3) <= param_4) {
    iVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x78);
  }
  else {
    if (param_4 != param_3 < 0xc || param_4 - (param_3 < 0xc) < (uint)(0xb < param_3 - 0xc)) {
      return 0;
    }
    param_3 = param_3 - 0xc;
    iVar2 = 1;
    iVar1 = *(int *)(param_1 + 0x78);
  }
  if ((iVar1 != 1) || (*(int *)(param_1 + 0x7c) == iVar2)) {
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(int *)(param_1 + 0x7c) = iVar2;
    if ((*(int *)(param_1 + 0x80) != 1) || (*(uint *)(param_1 + 0x84) == param_3)) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      *(uint *)(param_1 + 0x84) = param_3;
      return 8;
    }
  }
  return 1;
}

