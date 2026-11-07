// FUN_01805980 @ 01805980 size=272 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01805980(int *param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (param_1[0x10] == 2) {
LAB_018059d8:
    if (0x3f < param_2) {
      uVar3 = 0x32 - LZCOUNT(param_2);
      goto LAB_018059e8;
    }
  }
  else if (param_2 != 0) {
    iVar1 = *param_1;
    pbVar2 = (byte *)(param_3 + -1);
    do {
      pbVar2 = pbVar2 + 1;
      *(int *)(iVar1 + (uint)*pbVar2 * 4) = *(int *)(iVar1 + (uint)*pbVar2 * 4) + 2;
    } while ((byte *)(param_3 + param_2 + -1) != pbVar2);
    param_1[6] = param_1[6] + param_2 * 2;
    goto LAB_018059d8;
  }
  uVar3 = (uint)(byte)""[param_2];
LAB_018059e8:
  *(int *)(param_1[1] + uVar3 * 4) = *(int *)(param_1[1] + uVar3 * 4) + 1;
  param_1[7] = param_1[7] + 1;
  *(int *)(param_1[3] + (0x1f - LZCOUNT(param_4)) * 4) =
       *(int *)(param_1[3] + (0x1f - LZCOUNT(param_4)) * 4) + 1;
  param_1[9] = param_1[9] + 1;
  if (param_5 - 3U < 0x80) {
    uVar3 = (uint)(&BYTE_00451f99)[param_5];
  }
  else {
    uVar3 = 0x43 - LZCOUNT(param_5 - 3U);
  }
  *(int *)(param_1[2] + uVar3 * 4) = *(int *)(param_1[2] + uVar3 * 4) + 1;
  param_1[8] = param_1[8] + 1;
  return 0;
}

