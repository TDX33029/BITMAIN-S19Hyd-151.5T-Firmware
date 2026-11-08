// FUN_019e6a68 @ 019e6a68 size=284 calls_out=4 calls_in=9
// strings: 

void FUN_019e6a68(uint *param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint local_60 [4];
  uint local_50 [4];
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  bVar1 = *(byte *)(param_2 + 6);
  *(undefined1 *)(param_2 + 6) = 0x2a;
  if (bVar1 != 0x2a) {
    *param_1 = (uint)bVar1 << 8 | 1;
    param_1[1] = 0;
    return;
  }
  if (*param_2 == -0x7fffffff) {
    iVar6 = param_2[1];
    FUN_019edf98(local_50,iVar6);
    if (local_50[0] == 4) {
      FUN_019ecf50(param_1,local_40,local_3c);
      return;
    }
    if (local_50[0] != 5) {
      puVar7 = (uint *)((uint)local_50 | 4);
      puVar5 = (uint *)((uint)local_60 | 4);
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      *puVar5 = *puVar7;
      puVar5[1] = uVar3;
      puVar5[2] = uVar4;
      local_30 = local_40;
      iStack_2c = local_3c;
      iStack_28 = iStack_38;
      iStack_24 = iStack_34;
      local_60[0] = local_50[0];
      FUN_019e6988(0x80000001,iVar6);
      *param_2 = local_30;
      param_2[1] = iStack_2c;
      param_2[2] = iStack_28;
      param_2[3] = iStack_24;
      iVar6 = local_50[0] - 2;
      if (local_50[0] < 2) {
        iVar6 = 2;
      }
      if ((iVar6 == 0) || (iVar6 != 1)) {
        *(undefined1 *)param_1 = 4;
      }
      else {
        uVar3 = puVar5[1];
        *param_1 = *puVar5;
        param_1[1] = uVar3;
      }
      if (local_50[0] == 3) {
        return;
      }
      FUN_019e6ba4(local_60);
      return;
    }
    uVar2 = 5;
  }
  else {
    uVar2 = 4;
  }
  *(undefined1 *)param_1 = uVar2;
  return;
}

