// FUN_01ad62e8 @ 01ad62e8 size=108 calls_out=1 calls_in=1
// strings: 

void FUN_01ad62e8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c [2];
  int local_14;
  
  FUN_01ad6354(local_1c);
  if (local_1c[0] == 0) {
    param_1[4] = 8;
    return;
  }
  iVar1 = local_1c[0] + local_14 * 0xc;
  uVar2 = *(undefined4 *)(iVar1 + 0x1030);
  uVar3 = *(undefined4 *)(iVar1 + 0x1034);
  *param_1 = *(undefined4 *)(iVar1 + 0x102c);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  FUN_01bed4e2(param_1 + 4,local_14 * 0x178 + local_1c[0],0x178);
  return;
}

