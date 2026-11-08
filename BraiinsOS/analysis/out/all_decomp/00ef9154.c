// FUN_00ef9154 @ 00ef9154 size=1008 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_00ef9154(int *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_00ef8cd4(&local_24,param_1);
  if ((short)local_24 == 1) {
    return local_20;
  }
  uVar9 = (uint)local_24._2_2_;
  if ((uVar9 & 0xfc00) == 0xdc00) {
LAB_00ef9434:
    iVar8 = param_1[5];
    iVar7 = param_1[6];
    local_24 = 0x14;
  }
  else {
    if ((uVar9 + 0x2400 & 0xffff) < 0xfc00) {
      bVar2 = (byte)((uint)local_24 >> 0x10);
      if (uVar9 < 0x80) {
        iVar8 = param_2[2];
        if (iVar8 == *param_2) {
          FUN_006029c0(param_2);
        }
        *(byte *)(param_2[1] + iVar8) = bVar2;
        param_2[2] = iVar8 + 1;
        return 0;
      }
      iVar8 = param_2[2];
      if ((uint)(*param_2 - iVar8) < 4) {
        FUN_00edff4c(param_2,iVar8,4,1,1);
        iVar8 = param_2[2];
        pbVar3 = (byte *)(param_2[1] + iVar8);
      }
      else {
        pbVar3 = (byte *)(param_2[1] + iVar8);
      }
      if (uVar9 < 0x800) {
        iVar7 = 2;
        bVar5 = (byte)(local_24._2_2_ >> 6) | 0xc0;
      }
      else {
        pbVar3[1] = (byte)(local_24._2_2_ >> 6) & 0x3f | 0x80;
        iVar7 = 3;
        bVar5 = (byte)((uint)local_24 >> 0x1c) | 0xe0;
      }
      *pbVar3 = bVar5;
      param_2[2] = iVar8 + iVar7;
      pbVar3[iVar7 + -1] = bVar2 & 0x3f | 0x80;
      return 0;
    }
    if ((char)param_1[8] == '\x01') {
      cVar1 = *(char *)((int)param_1 + 0x21);
    }
    else {
      pcVar6 = (char *)param_1[3];
      if (param_1[4] == 0) goto LAB_00ef9404;
      param_1[4] = param_1[4] + -1;
      cVar1 = *pcVar6;
      iVar8 = param_1[6] + 1;
      param_1[3] = (int)(pcVar6 + 1);
      if (cVar1 == '\n') {
        param_1[7] = iVar8 + param_1[7];
        param_1[5] = param_1[5] + 1;
        iVar8 = 0;
      }
      *(char *)((int)param_1 + 0x21) = cVar1;
      *(undefined1 *)(param_1 + 8) = 1;
      param_1[6] = iVar8;
    }
    if (cVar1 == '\\') {
      *(undefined1 *)(param_1 + 8) = 0;
      if (*param_1 == -0x80000000) {
LAB_00ef92c8:
        pcVar6 = (char *)param_1[3];
        if (param_1[4] == 0) {
LAB_00ef9404:
          param_1[3] = (int)pcVar6;
          local_24 = 4;
          uVar4 = FUN_0157c50c(&local_24,param_1[5],param_1[6]);
          return uVar4;
        }
        param_1[4] = param_1[4] + -1;
        cVar1 = *pcVar6;
        iVar8 = param_1[6] + 1;
        param_1[3] = (int)(pcVar6 + 1);
        if (cVar1 == '\n') {
          param_1[7] = iVar8 + param_1[7];
          param_1[5] = param_1[5] + 1;
          iVar8 = 0;
        }
        *(char *)((int)param_1 + 0x21) = cVar1;
        *(undefined1 *)(param_1 + 8) = 1;
        param_1[6] = iVar8;
      }
      else {
        iVar8 = param_1[2];
        if (iVar8 != *param_1) {
          *(undefined1 *)(param_1[1] + iVar8) = 0x5c;
          param_1[2] = iVar8 + 1;
          goto LAB_00ef92c8;
        }
        FUN_006029c0(param_1);
        iVar7 = param_1[8];
        *(undefined1 *)(param_1[1] + iVar8) = 0x5c;
        param_1[2] = iVar8 + 1;
        if ((char)iVar7 != '\x01') goto LAB_00ef92c8;
        cVar1 = *(char *)((int)param_1 + 0x21);
      }
      if (cVar1 == 'u') {
        *(undefined1 *)(param_1 + 8) = 0;
        if (*param_1 != -0x80000000) {
          iVar8 = param_1[2];
          if (iVar8 == *param_1) {
            FUN_006029c0(param_1);
          }
          *(undefined1 *)(param_1[1] + iVar8) = 0x75;
          param_1[2] = iVar8 + 1;
        }
        FUN_00ef8cd4(&local_24,param_1);
        if ((short)local_24 != 0) {
          return local_20;
        }
        if (0xfbff < (ushort)(local_24._2_2_ + 0x2000)) {
          iVar8 = param_2[2];
          uVar10 = (uint)(ushort)(local_24._2_2_ + 0x2400) | (uVar9 + 0x2800 & 0xffff) << 10;
          uVar9 = uVar10 + 0x10000;
          if ((uint)(*param_2 - iVar8) < 4) {
            FUN_00edff4c(param_2,iVar8,4,1,1);
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
        goto LAB_00ef9434;
      }
    }
    FUN_00ef8de4(param_1);
    iVar8 = param_1[5];
    iVar7 = param_1[6];
    local_24 = 0x17;
  }
  uVar4 = FUN_0157c50c(&local_24,iVar8,iVar7);
  return uVar4;
}

