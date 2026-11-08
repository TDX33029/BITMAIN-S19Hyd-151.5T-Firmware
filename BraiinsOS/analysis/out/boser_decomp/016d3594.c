// FUN_016d3594 @ 016d3594 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_016d3594(int *param_1,undefined4 param_2)

{
  uint3 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = *(uint3 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  if ((uVar1 & 1) != 0) {
    iVar3 = param_1[2];
    if (iVar3 == *param_1) {
      FUN_015f5ab8(param_1);
    }
    param_1[2] = iVar3 + 1;
    puVar2 = (undefined4 *)(param_1[1] + iVar3 * 8);
    *puVar2 = param_2;
    puVar2[1] = uVar1 >> 8 & 0xff | (uint)(uVar1 >> 0x10) << 8;
  }
  return;
}

