// FUN_0157db7c @ 0157db7c size=1704 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_0157db7c(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined2 local_38;
  ushort local_36;
  undefined4 local_34;
  undefined4 local_30 [3];
  char local_24;
  undefined1 local_23;
  undefined4 local_20;
  
  uVar10 = param_1[2];
  if (uVar10 < (uint)param_1[1]) {
    local_23 = *(undefined1 *)(*param_1 + uVar10);
    param_1[2] = uVar10 + 1;
  }
  else {
    FUN_0157d8ec(&local_24,param_1,local_30 + 5);
    if (local_24 != '\0') {
      return local_20;
    }
  }
  switch(local_23) {
  case 0x22:
    iVar11 = param_2[2];
    if (iVar11 == *param_2) {
      FUN_006029c0(param_2);
    }
    iVar13 = param_2[1];
    uVar8 = 0x22;
    break;
  default:
    uVar4 = FUN_0157d8a0(param_1,local_30 + 5);
    return uVar4;
  case 0x2f:
    iVar11 = param_2[2];
    if (iVar11 == *param_2) {
      FUN_006029c0(param_2);
    }
    iVar13 = param_2[1];
    uVar8 = 0x2f;
    break;
  case 0x5c:
    iVar11 = param_2[2];
    if (iVar11 == *param_2) {
      FUN_006029c0(param_2);
    }
    iVar13 = param_2[1];
    uVar8 = 0x5c;
    break;
  case 0x62:
    iVar11 = param_2[2];
    if (iVar11 == *param_2) {
      FUN_006029c0(param_2);
    }
    iVar13 = param_2[1];
    uVar8 = 8;
    break;
  case 0x66:
    iVar11 = param_2[2];
    if (iVar11 == *param_2) {
      FUN_006029c0(param_2);
    }
    iVar13 = param_2[1];
    uVar8 = 0xc;
    break;
  case 0x6e:
    iVar11 = param_2[2];
    if (iVar11 == *param_2) {
      FUN_006029c0(param_2);
    }
    iVar13 = param_2[1];
    uVar8 = 10;
    break;
  case 0x72:
    iVar11 = param_2[2];
    if (iVar11 == *param_2) {
      FUN_006029c0(param_2);
    }
    iVar13 = param_2[1];
    uVar8 = 0xd;
    break;
  case 0x74:
    iVar11 = param_2[2];
    if (iVar11 == *param_2) {
      FUN_006029c0(param_2);
    }
    iVar13 = param_2[1];
    uVar8 = 9;
    break;
  case 0x75:
    uVar12 = param_1[1];
    uVar10 = param_1[2];
    if (uVar12 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar10,uVar12,uVar12,&DAT_018a94e4);
    }
    if (uVar12 - uVar10 < 4) {
      local_30[0] = 4;
      param_1[2] = uVar12;
      FUN_0157d948(&local_38,param_1,local_30);
      uVar10 = uVar12;
    }
    else {
      pbVar5 = (byte *)(*param_1 + uVar10);
      bVar1 = *pbVar5;
      uVar10 = uVar10 + 4;
      param_1[2] = uVar10;
      uVar6 = (int)*(short *)(&DAT_0040ebd0 + (uint)pbVar5[2] * 2) |
              (int)(short)(*(ushort *)(&DAT_0040e9d0 + (uint)pbVar5[1] * 2) |
                          *(ushort *)(&DAT_0040ebd0 + (uint)bVar1 * 2)) << 8 |
              (int)*(short *)(&DAT_0040e9d0 + (uint)pbVar5[3] * 2);
      if ((int)uVar6 < 0) {
        local_30[0] = 0xc;
        FUN_0157d948(&local_38,param_1,local_30);
      }
      else {
        local_36 = (ushort)uVar6;
        local_38 = 0;
      }
    }
    uVar3 = local_36;
    if (local_38 == 1) {
      return local_34;
    }
    uVar6 = (uint)local_36;
    if ((uVar6 & 0xfc00) == 0xdc00) {
LAB_0157e1d8:
      local_30[0] = 0x14;
    }
    else {
      if ((uVar6 + 0x2400 & 0xffff) < 0xfc00) {
        bVar1 = (byte)local_36;
        if (uVar6 < 0x80) {
          iVar11 = param_2[2];
          if (iVar11 == *param_2) {
            FUN_006029c0(param_2);
          }
          *(byte *)(param_2[1] + iVar11) = bVar1;
          param_2[2] = iVar11 + 1;
          return 0;
        }
        iVar11 = param_2[2];
        if ((uint)(*param_2 - iVar11) < 4) {
          FUN_0157eaa8(param_2,iVar11,4);
          iVar11 = param_2[2];
          pbVar5 = (byte *)(param_2[1] + iVar11);
        }
        else {
          pbVar5 = (byte *)(param_2[1] + iVar11);
        }
        if (uVar6 < 0x800) {
          iVar13 = 2;
          bVar9 = (byte)(uVar3 >> 6) | 0xc0;
        }
        else {
          pbVar5[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
          iVar13 = 3;
          bVar9 = (byte)(uVar3 >> 0xc) | 0xe0;
        }
        *pbVar5 = bVar9;
        param_2[2] = iVar11 + iVar13;
        pbVar5[iVar13 + -1] = bVar1 & 0x3f | 0x80;
        return 0;
      }
      iVar11 = *param_1;
      if (uVar10 < uVar12) {
        cVar2 = *(char *)(iVar11 + uVar10);
        param_1[2] = uVar10 + 1;
      }
      else {
        local_30[0] = 4;
        FUN_0157d8ec(&local_38,param_1,local_30);
        if ((char)local_38 == '\x01') {
          return local_34;
        }
        param_1[2] = uVar10 + 1;
        cVar2 = local_38._1_1_;
      }
      if (cVar2 == '\\') {
        if (uVar10 + 1 < uVar12) {
          cVar2 = *(char *)(iVar11 + uVar10 + 1);
          param_1[2] = uVar10 + 2;
        }
        else {
          local_30[0] = 4;
          FUN_0157d8ec(&local_38,param_1,local_30);
          if ((char)local_38 == '\x01') {
            return local_34;
          }
          param_1[2] = uVar10 + 2;
          cVar2 = local_38._1_1_;
        }
        if (cVar2 == 'u') {
          uVar7 = uVar10 + 2;
          if (uVar12 < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar7,uVar12,uVar12,&DAT_018a94e4);
          }
          if (uVar12 - uVar7 < 4) {
            param_1[2] = uVar12;
            local_30[0] = 4;
LAB_0157e290:
            FUN_0157d948(&local_38,param_1,local_30);
            if (local_38 == 1) {
              return local_34;
            }
          }
          else {
            pbVar5 = (byte *)(iVar11 + uVar7);
            bVar1 = *pbVar5;
            param_1[2] = uVar10 + 6;
            uVar10 = (int)*(short *)(&DAT_0040ebd0 + (uint)pbVar5[2] * 2) |
                     (int)(short)(*(ushort *)(&DAT_0040e9d0 + (uint)pbVar5[1] * 2) |
                                 *(ushort *)(&DAT_0040ebd0 + (uint)bVar1 * 2)) << 8 |
                     (int)*(short *)(&DAT_0040e9d0 + (uint)pbVar5[3] * 2);
            if ((int)uVar10 < 0) {
              local_30[0] = 0xc;
              goto LAB_0157e290;
            }
            local_36 = (ushort)uVar10;
            local_38 = 0;
          }
          uVar3 = local_36;
          if (0xfbff < (ushort)(local_36 + 0x2000)) {
            iVar11 = param_2[2];
            uVar12 = (uint)(ushort)(local_36 + 0x2400) | (uVar6 + 0x2800 & 0xffff) << 10;
            uVar10 = uVar12 + 0x10000;
            if ((uint)(*param_2 - iVar11) < 4) {
              FUN_0157eaa8(param_2,iVar11,4);
              iVar11 = param_2[2];
            }
            param_2[2] = iVar11 + 4;
            pbVar5 = (byte *)(param_2[1] + iVar11);
            *pbVar5 = (byte)(uVar10 >> 0x12) | 0xf0;
            pbVar5[2] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
            pbVar5[3] = (byte)uVar3 & 0x3f | 0x80;
            pbVar5[1] = (byte)(uVar10 >> 0xc) & 0x3f | 0x80;
            return 0;
          }
          goto LAB_0157e1d8;
        }
      }
      local_30[0] = 0x17;
    }
    uVar4 = FUN_0157d8a0(param_1,local_30);
    return uVar4;
  }
  *(undefined1 *)(iVar13 + iVar11) = uVar8;
  param_2[2] = iVar11 + 1;
  return 0;
}

