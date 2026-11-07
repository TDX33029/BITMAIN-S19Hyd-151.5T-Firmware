// FUN_011bcea4 @ 011bcea4 size=896 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_011bcea4(int *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_011bd224(&local_28,param_1);
  if ((short)local_28 == 1) {
    return local_24;
  }
  uVar8 = (uint)local_28._2_2_;
  if ((uVar8 & 0xfc00) == 0xdc00) {
LAB_011bd118:
    iVar7 = param_1[4];
    iVar6 = param_1[5];
    local_28 = 0x14;
  }
  else {
    if ((uVar8 + 0x2400 & 0xffff) < 0xfc00) {
      bVar2 = (byte)(local_28 >> 0x10);
      if (uVar8 < 0x80) {
        iVar7 = param_2[2];
        if (iVar7 == *param_2) {
          FUN_006029c0(param_2);
        }
        *(byte *)(param_2[1] + iVar7) = bVar2;
        param_2[2] = iVar7 + 1;
        return 0;
      }
      iVar7 = param_2[2];
      if ((uint)(*param_2 - iVar7) < 4) {
        FUN_011cf828(param_2,iVar7,4,1,1);
        iVar7 = param_2[2];
        pbVar3 = (byte *)(param_2[1] + iVar7);
      }
      else {
        pbVar3 = (byte *)(param_2[1] + iVar7);
      }
      if (uVar8 < 0x800) {
        iVar6 = 2;
        bVar5 = (byte)(local_28._2_2_ >> 6) | 0xc0;
      }
      else {
        pbVar3[1] = (byte)(local_28._2_2_ >> 6) & 0x3f | 0x80;
        iVar6 = 3;
        bVar5 = (byte)(local_28 >> 0x1c) | 0xe0;
      }
      *pbVar3 = bVar5;
      param_2[2] = iVar7 + iVar6;
      pbVar3[iVar6 + -1] = bVar2 & 0x3f | 0x80;
      return 0;
    }
    if ((char)param_1[7] != '\x01') {
      FUN_011ef738(&local_28,param_1 + 3);
      if ((local_28 & 0xff) != 5) {
        if ((local_28 & 0xff) != 4) goto LAB_011bd184;
        *(char *)((int)param_1 + 0x1d) = local_28._1_1_;
        *(undefined1 *)(param_1 + 7) = 1;
        cVar1 = local_28._1_1_;
        goto joined_r0x011bcfb0;
      }
LAB_011bd000:
      iVar7 = param_1[4];
      iVar6 = param_1[5];
      local_28 = 4;
      goto LAB_011bd008;
    }
    cVar1 = *(char *)((int)param_1 + 0x1d);
joined_r0x011bcfb0:
    if (cVar1 == '\\') {
      *(undefined1 *)(param_1 + 7) = 0;
      if (*param_1 == -0x80000000) {
LAB_011bcfe8:
        FUN_011ef738(&local_28,param_1 + 3);
        if ((local_28 & 0xff) == 5) goto LAB_011bd000;
        if ((local_28 & 0xff) != 4) {
LAB_011bd184:
          uVar4 = FUN_0157c4a0(local_28,local_24);
          return uVar4;
        }
        *(char *)((int)param_1 + 0x1d) = local_28._1_1_;
        *(undefined1 *)(param_1 + 7) = 1;
        cVar1 = local_28._1_1_;
      }
      else {
        iVar7 = param_1[2];
        if (iVar7 != *param_1) {
          *(undefined1 *)(param_1[1] + iVar7) = 0x5c;
          param_1[2] = iVar7 + 1;
          goto LAB_011bcfe8;
        }
        FUN_006029c0(param_1);
        iVar6 = param_1[7];
        *(undefined1 *)(param_1[1] + iVar7) = 0x5c;
        param_1[2] = iVar7 + 1;
        if ((char)iVar6 != '\x01') goto LAB_011bcfe8;
        cVar1 = *(char *)((int)param_1 + 0x1d);
      }
      if (cVar1 == 'u') {
        *(undefined1 *)(param_1 + 7) = 0;
        if (*param_1 != -0x80000000) {
          iVar7 = param_1[2];
          if (iVar7 == *param_1) {
            FUN_006029c0(param_1);
          }
          *(undefined1 *)(param_1[1] + iVar7) = 0x75;
          param_1[2] = iVar7 + 1;
        }
        FUN_011bd224(&local_28,param_1);
        if ((short)local_28 != 0) {
          return local_24;
        }
        if (0xfbff < (ushort)(local_28._2_2_ + 0x2000)) {
          iVar7 = param_2[2];
          uVar9 = (uint)(ushort)(local_28._2_2_ + 0x2400) | (uVar8 + 0x2800 & 0xffff) << 10;
          uVar8 = uVar9 + 0x10000;
          if ((uint)(*param_2 - iVar7) < 4) {
            FUN_011cf828(param_2,iVar7,4,1,1);
            iVar7 = param_2[2];
          }
          param_2[2] = iVar7 + 4;
          pbVar3 = (byte *)(param_2[1] + iVar7);
          *pbVar3 = (byte)(uVar8 >> 0x12) | 0xf0;
          pbVar3[2] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
          pbVar3[3] = (byte)(local_28 >> 0x10) & 0x3f | 0x80;
          pbVar3[1] = (byte)(uVar8 >> 0xc) & 0x3f | 0x80;
          return 0;
        }
        goto LAB_011bd118;
      }
    }
    FUN_011bca44(param_1);
    iVar7 = param_1[4];
    iVar6 = param_1[5];
    local_28 = 0x17;
  }
LAB_011bd008:
  uVar4 = FUN_0157c50c(&local_28,iVar7,iVar6);
  return uVar4;
}

