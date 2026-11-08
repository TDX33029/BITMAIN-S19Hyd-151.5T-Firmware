// FUN_008bb198 @ 008bb198 size=176 calls_out=1 calls_in=2
// strings: 

int FUN_008bb198(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar3 = uVar1 * 8 - (param_4 >> 3);
    param_1 = FUN_008bb198(param_1,param_1 + uVar1 * 0x40,param_1 + iVar3 * 0x10,uVar1);
    param_2 = FUN_008bb198(param_2,param_2 + uVar1 * 0x40,param_2 + iVar3 * 0x10,uVar1);
    param_3 = FUN_008bb198(param_3,param_3 + uVar1 * 0x40,param_3 + iVar3 * 0x10,uVar1);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 < uVar1 != uVar1 < *(uint *)(param_3 + 0xc)) {
    param_2 = param_3;
  }
  if (uVar2 < uVar1 != uVar2 < *(uint *)(param_3 + 0xc)) {
    param_2 = param_1;
  }
  return param_2;
}

