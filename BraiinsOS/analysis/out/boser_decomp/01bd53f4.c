// FUN_01bd53f4 @ 01bd53f4 size=184 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01bd53f4(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int extraout_r2;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  if ((param_3 & 0xf) != 0) {
    return 0;
  }
  for (puVar1 = param_1; puVar1 != param_1 + param_3; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  iVar3 = 0;
  uVar2 = 0;
  do {
    uVar5 = FUN_01bd4e8c(param_4 ^ uVar2);
    puVar4 = (uint *)((int)((ulonglong)uVar5 >> 0x20) + iVar3 * 4);
    for (puVar1 = param_1; puVar1 != param_1 + param_3; puVar1 = puVar1 + 1) {
      *puVar1 = (*puVar4 ^ *puVar1) & (uint)uVar5 ^ *puVar1;
      puVar4 = puVar4 + 1;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + extraout_r2;
  } while (uVar2 != 0x20);
  return 1;
}

