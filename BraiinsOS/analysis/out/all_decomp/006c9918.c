// FUN_006c9918 @ 006c9918 size=128 calls_out=0 calls_in=0
// strings: 

void FUN_006c9918(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pbVar2 = (byte *)*param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (pbVar2 == (byte *)param_2[1]) goto LAB_006c998c;
    pbVar2 = pbVar2 + 1;
    *param_2 = pbVar2;
  }
  if (pbVar2 != (byte *)param_2[1]) {
    bVar1 = *pbVar2;
    *param_2 = pbVar2 + 1;
    uVar3 = *(undefined4 *)(&DAT_018af670 + (uint)bVar1 * 4);
    uVar4 = *(undefined4 *)(&DAT_0041daf8 + (uint)bVar1 * 4);
    *(undefined1 *)(param_1 + 8) = 0;
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 0x80000000;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    return;
  }
LAB_006c998c:
  *param_1 = 0x80000000;
  return;
}

