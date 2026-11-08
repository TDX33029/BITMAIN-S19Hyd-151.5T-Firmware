// FUN_01bc5884 @ 01bc5884 size=288 calls_out=2 calls_in=2
// strings: 

longlong FUN_01bc5884(int param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(uint *)(param_1 + 0xc) == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 4)) {
    return CONCAT44(param_2,param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 <= param_4) {
    if (uVar1 < param_4) {
      FUN_01bc0850(param_1,param_4 - uVar1);
    }
    FUN_01bc0948(param_1,param_4,param_5);
  }
  uVar1 = *(uint *)(param_1 + 0x18) - param_4;
  if (uVar1 < 3 || (param_4 < *(uint *)(param_1 + 0x14) || *(uint *)(param_1 + 0x18) <= param_4)) {
    return (ulonglong)uVar1 << 0x20;
  }
  uVar3 = *param_3;
  if ((uVar3 == 0) || (uVar3 < 0x1000 && *(uint *)(param_2 + uVar3 * 8 + -4) < uVar1)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    *(uint *)(param_2 + uVar3 * 8 + 4) = uVar1;
    *(int *)(param_2 + *param_3 * 8) = iVar2 + 3;
    *param_3 = *param_3 + 1;
    return 0;
  }
  return (ulonglong)uVar1 << 0x20;
}

