// FUN_012c5df8 @ 012c5df8 size=600 calls_out=6 calls_in=0
// strings: 

undefined4 FUN_012c5df8(int param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_012c6050(&local_24,param_1);
  if ((short)local_24 == 1) {
    return local_20;
  }
  uVar9 = (uint)local_24._2_2_;
  if ((uVar9 & 0xfc00) == 0xdc00) {
LAB_012c5fd8:
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    uVar7 = *(undefined4 *)(param_1 + 0x28);
    local_24 = 0x14;
  }
  else {
    if ((uVar9 + 0x2400 & 0xffff) < 0xfc00) {
      bVar1 = (byte)((uint)local_24 >> 0x10);
      if (uVar9 < 0x80) {
        iVar8 = param_2[2];
        if (iVar8 == *param_2) {
          FUN_006666a0(param_2);
        }
        *(byte *)(param_2[1] + iVar8) = bVar1;
        param_2[2] = iVar8 + 1;
      }
      else {
        iVar8 = param_2[2];
        if ((uint)(*param_2 - iVar8) < 4) {
          FUN_01af7b44(param_2,iVar8,4,1,1);
          iVar8 = param_2[2];
        }
        pbVar3 = (byte *)(param_2[1] + iVar8);
        if (uVar9 < 0x800) {
          iVar6 = 2;
          bVar4 = (byte)(local_24._2_2_ >> 6) | 0xc0;
        }
        else {
          pbVar3[1] = (byte)(local_24._2_2_ >> 6) & 0x3f | 0x80;
          iVar6 = 3;
          bVar4 = (byte)((uint)local_24 >> 0x1c) | 0xe0;
        }
        *pbVar3 = bVar4;
        param_2[2] = iVar8 + iVar6;
        pbVar3[iVar6 + -1] = bVar1 & 0x3f | 0x80;
      }
      return 0;
    }
    FUN_012c5d50(&local_24,param_1);
    if ((char)local_24 == '\x01') {
      return local_20;
    }
    cVar2 = local_24._1_1_;
    FUN_012c6160(param_1);
    if (cVar2 == '\\') {
      FUN_012c5d50(&local_24,param_1);
      if ((char)local_24 == '\x01') {
        return local_20;
      }
      cVar2 = local_24._1_1_;
      FUN_012c6160(param_1);
      if (cVar2 == 'u') {
        FUN_012c6050(&local_24,param_1);
        if ((short)local_24 == 1) {
          return local_20;
        }
        if (0xfbff < (ushort)(local_24._2_2_ + 0x2000)) {
          iVar8 = param_2[2];
          uVar10 = (uint)(ushort)(local_24._2_2_ + 0x2400) | (uVar9 + 0x2800 & 0xffff) << 10;
          uVar9 = uVar10 + 0x10000;
          if ((uint)(*param_2 - iVar8) < 4) {
            FUN_01af7b44(param_2,iVar8,4,1,1);
            iVar8 = param_2[2];
          }
          param_2[2] = iVar8 + 4;
          pbVar3 = (byte *)(param_2[1] + iVar8);
          *pbVar3 = (byte)(uVar9 >> 0x12) | 0xf0;
          pbVar3[2] = (byte)(uVar10 >> 6) & 0x3f | 0x80;
          pbVar3[3] = (byte)((uint)local_24 >> 0x10) & 0x3f | 0x80;
          pbVar3[1] = (byte)(uVar9 >> 0xc) & 0x3f | 0x80;
          return 0;
        }
        goto LAB_012c5fd8;
      }
    }
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    uVar7 = *(undefined4 *)(param_1 + 0x28);
    local_24 = 0x17;
  }
  uVar5 = FUN_01966fbc(&local_24,uVar5,uVar7);
  return uVar5;
}

