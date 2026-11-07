// FUN_01bbffe0 @ 01bbffe0 size=220 calls_out=0 calls_in=2
// strings: 

ulonglong FUN_01bbffe0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  while( true ) {
    if (param_2 == 0) {
      return ZEXT48(param_1);
    }
    uVar5 = param_1[1];
    uVar3 = param_1[3];
    if (uVar3 <= uVar5) {
      return CONCAT44(param_2,param_1);
    }
    iVar4 = uVar5 * 0xc + *param_1;
    uVar1 = *(uint *)(iVar4 + 4);
    if (param_2 <= uVar1) {
      *(uint *)(iVar4 + 4) = uVar1 - param_2;
      return 0;
    }
    uVar2 = *(uint *)(iVar4 + 8);
    *(undefined4 *)(iVar4 + 4) = 0;
    if (param_2 - uVar1 < uVar2) break;
    *(undefined4 *)(iVar4 + 8) = 0;
    param_2 = (param_2 - uVar1) - uVar2;
    param_1[1] = uVar5 + 1;
  }
  param_2 = (uVar1 + uVar2) - param_2;
  *(uint *)(iVar4 + 8) = param_2;
  if (param_3 <= param_2) {
    return CONCAT44(param_2,param_1);
  }
  if (uVar5 + 1 < uVar3) {
    *(uint *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + param_2;
  }
  param_1[1] = uVar5 + 1;
  return 0;
}

