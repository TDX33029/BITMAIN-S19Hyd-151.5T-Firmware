// FUN_01bc5a50 @ 01bc5a50 size=244 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01bc5a50(int *param_1,uint param_2,byte *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_1[0x10] != 2) {
    pbVar3 = param_3 + param_2;
    for (; pbVar3 != param_3; param_3 = param_3 + 1) {
      *(int *)(*param_1 + (uint)*param_3 * 4) = *(int *)(*param_1 + (uint)*param_3 * 4) + 2;
    }
    param_1[6] = param_1[6] + param_2 * 2;
  }
  if (param_2 < 0x40) {
    uVar2 = (uint)(byte)""[param_2];
  }
  else {
    uVar2 = 0x32 - LZCOUNT(param_2);
  }
  *(int *)(param_1[1] + uVar2 * 4) = *(int *)(param_1[1] + uVar2 * 4) + 1;
  param_1[7] = param_1[7] + 1;
  *(int *)(param_1[3] + (0x1f - LZCOUNT(param_4)) * 4) =
       *(int *)(param_1[3] + (0x1f - LZCOUNT(param_4)) * 4) + 1;
  param_1[9] = param_1[9] + 1;
  iVar1 = FUN_01bc5734(param_5 + -3);
  *(int *)(param_1[2] + iVar1 * 4) = *(int *)(param_1[2] + iVar1 * 4) + 1;
  param_1[8] = param_1[8] + 1;
  return 0;
}

