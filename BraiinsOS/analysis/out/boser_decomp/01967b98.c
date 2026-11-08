// FUN_01967b98 @ 01967b98 size=1480 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_01967b98(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  short local_34;
  ushort local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_1c;
  undefined4 in_stack_ffffffe8;
  
  FUN_01967918(&local_1c,param_1);
  if ((char)local_1c == '\x01') {
    return in_stack_ffffffe8;
  }
  if (local_1c._1_1_ < 0x62) {
    if (local_1c._1_1_ == 0x22) {
      iVar9 = param_2[2];
      if (iVar9 == *param_2) {
        FUN_006666a0(param_2);
      }
      iVar4 = param_2[1];
      uVar7 = 0x22;
    }
    else if (local_1c._1_1_ == 0x2f) {
      iVar9 = param_2[2];
      if (iVar9 == *param_2) {
        FUN_006666a0(param_2);
      }
      iVar4 = param_2[1];
      uVar7 = 0x2f;
    }
    else {
      if (local_1c._1_1_ != 0x5c) goto switchD_01967be8_caseD_6f;
      iVar9 = param_2[2];
      if (iVar9 == *param_2) {
        FUN_006666a0(param_2);
      }
      iVar4 = param_2[1];
      uVar7 = 0x5c;
    }
    goto LAB_01967d28;
  }
  switch(local_1c._1_1_) {
  case 0x6e:
    iVar9 = param_2[2];
    if (iVar9 == *param_2) {
      FUN_006666a0(param_2);
    }
    iVar4 = param_2[1];
    uVar7 = 10;
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
switchD_01967be8_caseD_6f:
    local_1c = 0xc;
    uVar5 = FUN_01967db4(param_1,&local_1c);
    return uVar5;
  case 0x72:
    iVar9 = param_2[2];
    if (iVar9 == *param_2) {
      FUN_006666a0(param_2);
    }
    iVar4 = param_2[1];
    uVar7 = 0xd;
    break;
  case 0x74:
    iVar9 = param_2[2];
    if (iVar9 == *param_2) {
      FUN_006666a0(param_2);
    }
    iVar4 = param_2[1];
    uVar7 = 9;
    break;
  case 0x75:
    uVar12 = param_1[1];
    uVar13 = param_1[2];
    if (uVar12 < uVar13) {
LAB_01968174:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar13,uVar12,uVar12,&DAT_01d27364);
    }
    if (uVar12 - uVar13 < 4) {
      local_2c = 4;
      param_1[2] = uVar12;
      FUN_019681e4(&local_34,param_1,&local_2c);
      uVar11 = uVar12;
    }
    else {
      uVar11 = uVar13 + 4;
      pbVar6 = (byte *)(*param_1 + uVar13);
      bVar1 = pbVar6[1];
      bVar8 = pbVar6[2];
      bVar2 = pbVar6[3];
      uVar3 = *(ushort *)(&DAT_00525616 + (uint)*pbVar6 * 2);
      param_1[2] = uVar11;
      uVar13 = (int)*(short *)(&DAT_00525616 + (uint)bVar8 * 2) |
               (int)(short)(*(ushort *)(&DAT_00525416 + (uint)bVar1 * 2) | uVar3) << 8 |
               (int)*(short *)(&DAT_00525416 + (uint)bVar2 * 2);
      if ((int)uVar13 < 0) {
        local_2c = 0xc;
        FUN_019681e4(&local_34,param_1,&local_2c);
      }
      else {
        local_32 = (ushort)uVar13;
        local_34 = 0;
      }
    }
    uVar3 = local_32;
    if (local_34 == 1) {
      return local_30;
    }
    uVar10 = (uint)local_32;
    if ((uVar10 & 0xfc00) == 0xdc00) {
LAB_01968114:
      local_2c = 0x14;
    }
    else {
      if ((uVar10 + 0x2400 & 0xffff) < 0xfc00) {
        bVar1 = (byte)local_32;
        if (uVar10 < 0x80) {
          iVar9 = param_2[2];
          if (iVar9 == *param_2) {
            FUN_006666a0(param_2);
          }
          *(byte *)(param_2[1] + iVar9) = bVar1;
          param_2[2] = iVar9 + 1;
          return 0;
        }
        iVar9 = param_2[2];
        if ((uint)(*param_2 - iVar9) < 4) {
          FUN_006520b4(param_2,iVar9,4,1,1);
          iVar9 = param_2[2];
        }
        pbVar6 = (byte *)(param_2[1] + iVar9);
        if (uVar10 < 0x800) {
          iVar4 = 2;
          bVar8 = (byte)(uVar3 >> 6) | 0xc0;
        }
        else {
          pbVar6[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
          iVar4 = 3;
          bVar8 = (byte)(uVar3 >> 0xc) | 0xe0;
        }
        *pbVar6 = bVar8;
        param_2[2] = iVar9 + iVar4;
        pbVar6[iVar4 + -1] = bVar1 & 0x3f | 0x80;
        return 0;
      }
      iVar9 = *param_1;
      FUN_01967b58(&local_2c,param_1);
      if ((char)local_2c == '\x01') {
        return local_28;
      }
      param_1[2] = uVar11 + 1;
      if (local_2c._1_1_ == '\\') {
        FUN_01967b58(&local_2c,param_1);
        if ((char)local_2c == '\x01') {
          return local_28;
        }
        uVar13 = uVar11 + 2;
        param_1[2] = uVar13;
        if (local_2c._1_1_ == 'u') {
          if (uVar12 < uVar13) goto LAB_01968174;
          if (uVar12 - uVar13 < 4) {
            param_1[2] = uVar12;
            local_2c = 4;
LAB_01968150:
            FUN_019681e4(&local_34,param_1,&local_2c);
          }
          else {
            pbVar6 = (byte *)(iVar9 + uVar13);
            bVar1 = *pbVar6;
            bVar8 = pbVar6[1];
            bVar2 = pbVar6[2];
            param_1[2] = uVar11 + 6;
            uVar13 = (int)*(short *)(&DAT_00525616 + (uint)bVar2 * 2) |
                     (int)(short)(*(ushort *)(&DAT_00525416 + (uint)bVar8 * 2) |
                                 *(ushort *)(&DAT_00525616 + (uint)bVar1 * 2)) << 8 |
                     (int)*(short *)(&DAT_00525416 + (uint)pbVar6[3] * 2);
            if ((int)uVar13 < 0) {
              local_2c = 0xc;
              goto LAB_01968150;
            }
            local_32 = (ushort)uVar13;
            local_34 = 0;
          }
          uVar3 = local_32;
          if (local_34 == 1) {
            return local_30;
          }
          if (0xfbff < (ushort)(local_32 + 0x2000)) {
            iVar9 = param_2[2];
            uVar12 = (uint)(ushort)(local_32 + 0x2400) | (uVar10 + 0x2800 & 0xffff) << 10;
            uVar13 = uVar12 + 0x10000;
            if ((uint)(*param_2 - iVar9) < 4) {
              FUN_006520b4(param_2,iVar9,4,1,1);
              iVar9 = param_2[2];
            }
            param_2[2] = iVar9 + 4;
            pbVar6 = (byte *)(param_2[1] + iVar9);
            *pbVar6 = (byte)(uVar13 >> 0x12) | 0xf0;
            pbVar6[2] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
            pbVar6[3] = (byte)uVar3 & 0x3f | 0x80;
            pbVar6[1] = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
            return 0;
          }
          goto LAB_01968114;
        }
      }
      local_2c = 0x17;
    }
    uVar5 = FUN_01967db4(param_1,&local_2c);
    return uVar5;
  default:
    if (local_1c._1_1_ == 0x62) {
      iVar9 = param_2[2];
      if (iVar9 == *param_2) {
        FUN_006666a0(param_2);
      }
      iVar4 = param_2[1];
      uVar7 = 8;
    }
    else {
      if (local_1c._1_1_ != 0x66) goto switchD_01967be8_caseD_6f;
      iVar9 = param_2[2];
      if (iVar9 == *param_2) {
        FUN_006666a0(param_2);
      }
      iVar4 = param_2[1];
      uVar7 = 0xc;
    }
  }
LAB_01967d28:
  *(undefined1 *)(iVar4 + iVar9) = uVar7;
  param_2[2] = iVar9 + 1;
  return 0;
}

