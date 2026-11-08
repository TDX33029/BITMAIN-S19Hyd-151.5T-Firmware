// FUN_015afae8 @ 015afae8 size=264 calls_out=1 calls_in=1
// strings: 

void FUN_015afae8(int *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar4 = (int)param_3 - (int)param_2;
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  if (iVar4 != 0) {
    FUN_015afa68(&local_30,0,iVar4,1,1);
  }
  if (param_2 != param_3) {
    do {
      iVar1 = local_28;
      uVar3 = 2;
      bVar5 = *param_2;
      if ((uint)(int)(char)bVar5 < 0x80000000) {
        uVar3 = 1;
      }
      if ((uint)(local_30 - local_28) < uVar3) {
        FUN_015afa68(&local_30,local_28,uVar3,1,1);
        pbVar2 = (byte *)(local_2c + local_28);
      }
      else {
        pbVar2 = (byte *)(local_2c + local_28);
      }
      if (0x7fffffff < (uint)(int)(char)bVar5) {
        pbVar2[1] = bVar5 & 0xbf;
        bVar5 = bVar5 >> 6 | 0xc0;
      }
      local_28 = uVar3 + iVar1;
      iVar4 = iVar4 + -1;
      *pbVar2 = bVar5;
      param_2 = param_2 + 1;
    } while (iVar4 != 0);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

