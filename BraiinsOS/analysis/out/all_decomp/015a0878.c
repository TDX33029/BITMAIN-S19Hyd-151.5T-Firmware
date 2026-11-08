// FUN_015a0878 @ 015a0878 size=332 calls_out=5 calls_in=0
// strings: 

void FUN_015a0878(int *param_1,char param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int local_30;
  byte *local_2c;
  int local_28;
  
  if (param_5 == 0) {
    uVar10 = 0;
LAB_015a0984:
    bVar9 = (byte)uVar10;
    pbVar2 = (byte *)thunk_FUN_016d4a50(1);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,1);
    }
    *param_1 = 1;
    if (param_3 != 0) {
      bVar9 = bVar9 | 0x20;
    }
    param_1[1] = (int)pbVar2;
    param_1[2] = 1;
    *pbVar2 = bVar9 | param_2 << 6;
    return;
  }
  iVar11 = param_5 * 4;
  if (0xfffffffa < iVar11 - 9U) {
    uVar10 = 0;
    iVar6 = 0;
    uVar5 = 0;
    puVar4 = param_4;
    do {
      uVar3 = *puVar4;
      uVar7 = uVar5 & 0xff;
      uVar8 = (uVar5 & 0xff) - 0x20;
      uVar5 = uVar5 + 0x20;
      uVar1 = uVar3 >> (0x20 - uVar7 & 0xff);
      if (-1 < (int)uVar8) {
        uVar1 = uVar3 << (uVar8 & 0xff);
      }
      uVar3 = uVar3 << uVar7;
      if (-1 < (int)uVar8) {
        uVar3 = 0;
      }
      bVar12 = CARRY4(uVar3,uVar10);
      uVar10 = uVar3 + uVar10;
      iVar6 = uVar1 + iVar6 + (uint)bVar12;
      iVar11 = iVar11 + -4;
      puVar4 = puVar4 + 1;
    } while (iVar11 != 0);
    if (((uint)-iVar6 < (uint)(uVar10 < 0x100)) && ((uVar10 & 0xff) < 0x1f)) goto LAB_015a0984;
  }
  FUN_0159da08(&local_30,param_4,param_5);
  bVar9 = 0x1f;
  if (param_3 != 0) {
    bVar9 = 0x3f;
  }
  if (local_28 == local_30) {
    FUN_006029c0(&local_30);
  }
  pbVar2 = local_2c;
  if (local_28 != 0) {
    FUN_016dd52c(local_2c + 1,local_2c,local_28);
  }
  *pbVar2 = param_2 << 6 | bVar9;
  *param_1 = local_30;
  param_1[1] = (int)local_2c;
  param_1[2] = local_28 + 1;
  return;
}

