// FUN_012c1fd4 @ 012c1fd4 size=212 calls_out=0 calls_in=1
// strings: 

void FUN_012c1fd4(undefined4 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  pbVar7 = *(byte **)(param_2 + 8);
  if (pbVar7 == *(byte **)(param_2 + 0xc)) {
    iVar5 = *(int *)(param_2 + 0x14);
    if (iVar5 == 0) {
      uVar3 = 0;
      goto LAB_012c20a0;
    }
    uVar6 = *(uint *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  else {
    pbVar4 = pbVar7 + 1;
    bVar1 = *pbVar7;
    uVar6 = (uint)bVar1;
    *(byte **)(param_2 + 8) = pbVar4;
    if (0x7fffffff < (uint)(int)(char)bVar1) {
      bVar1 = pbVar7[1];
      pbVar4 = pbVar7 + 2;
      *(byte **)(param_2 + 8) = pbVar4;
      if (uVar6 < 0xe0) {
        uVar6 = bVar1 & 0x3f | (uVar6 & 0x1f) << 6;
      }
      else {
        bVar2 = pbVar7[2];
        pbVar4 = pbVar7 + 3;
        *(byte **)(param_2 + 8) = pbVar4;
        uVar8 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar8 | (uVar6 & 0x1f) << 0xc;
        }
        else {
          bVar1 = pbVar7[3];
          pbVar4 = pbVar7 + 4;
          *(byte **)(param_2 + 8) = pbVar4;
          uVar6 = bVar1 & 0x3f | uVar8 << 6 | (uVar6 & 7) << 0x12;
        }
      }
    }
    *(byte **)(param_2 + 0x10) = pbVar4 + (*(int *)(param_2 + 0x10) - (int)pbVar7);
    iVar5 = 0;
  }
  param_1[1] = iVar5;
  param_1[2] = uVar6;
  uVar3 = 1;
LAB_012c20a0:
  *param_1 = uVar3;
  return;
}

