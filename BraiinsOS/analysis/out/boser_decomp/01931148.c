// FUN_01931148 @ 01931148 size=88 calls_out=1 calls_in=12
// strings: 

void FUN_01931148(undefined4 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  bVar1 = 3;
  uVar4 = *(undefined4 *)(param_3 + 8);
  if (0x17 < *param_2) {
    bVar1 = *param_2 - 0x18;
  }
  FUN_01ac6cbc(param_3,*(undefined4 *)(&DAT_01d33f84 + (uint)bVar1 * 4),
               *(undefined4 *)(&DAT_005683a8 + (uint)bVar1 * 4));
  param_1[4] = param_3;
  param_1[5] = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

