// FUN_00effe50 @ 00effe50 size=200 calls_out=2 calls_in=1
// strings: 

void FUN_00effe50(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar2 = *(uint *)(param_2 + 8);
  iVar1 = 0;
  iVar3 = 0;
  if (uVar2 != 0) {
    iVar3 = uVar2 + ((LZCOUNT(uVar2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar5 = *(uint *)(param_2 + 0xc);
  if (uVar5 != 0) {
    iVar1 = ((LZCOUNT(uVar5 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar4 = *(uint *)(param_3 + 4) ^ 0x7fffffff;
  if (uVar4 < (uint)(iVar1 + iVar3)) {
    uVar6 = 1;
    param_1[1] = iVar1 + iVar3;
    param_1[2] = uVar4;
  }
  else {
    if (uVar2 != 0) {
      FUN_01016f10(1,*(undefined4 *)(param_2 + 4),uVar2,param_3);
    }
    uVar6 = 0;
    if (uVar5 != 0) {
      FUN_00efc9fc(2,uVar5,param_3);
    }
  }
  *param_1 = uVar6;
  return;
}

