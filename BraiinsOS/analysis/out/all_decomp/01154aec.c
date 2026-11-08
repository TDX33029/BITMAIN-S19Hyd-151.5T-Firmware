// FUN_01154aec @ 01154aec size=1264 calls_out=2 calls_in=1
// strings: 

bool FUN_01154aec(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_90 [17];
  uint local_4a;
  uint local_46;
  uint local_42;
  uint local_3e;
  char local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  bVar1 = *param_1;
  FUN_016dd1aa(&local_4a,param_1 + 1,0x11);
  uVar2 = *(uint *)(param_2 + 5);
  uVar9 = *(uint *)(param_2 + 9);
  uVar11 = *(uint *)(param_2 + 0xd);
  uVar14 = *(uint *)(param_2 + 1);
  local_34 = uVar2;
  local_38 = uVar14;
  local_30 = uVar9;
  local_2c = uVar11;
  if ((bVar1 & 1) == 0) {
    if ((*param_2 & 1) != 0) {
      return false;
    }
    uVar9 = local_46 & 0xff;
    uVar2 = -1 << (0x20 - uVar9 & 0xff);
    local_28 = 0;
    if (0x20 - uVar9 < 0x20) {
      local_28 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                 uVar2 >> 0x18;
    }
    local_28 = local_28 & local_4a;
    iVar5 = FUN_016dd50a(&local_28,&local_38,4);
    if (0 < iVar5) {
      return false;
    }
    uVar2 = 0xffffffff >> uVar9;
    if (uVar9 < 0x20) {
      local_4a = local_4a |
                 uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                 uVar2 >> 0x18;
    }
    local_28 = local_4a;
    iVar5 = FUN_016dd50a(&local_38,&local_28,4);
    return iVar5 < 1;
  }
  if ((*param_2 & 1) == 0) {
    return false;
  }
  uVar22 = (uint)local_3a;
  uVar3 = (uint)(char)(-0x80 - local_3a);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
    uVar12 = 0;
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    local_90[0xf] = 0xffffffff;
    local_90[0xe] = 0xffffffff;
    local_90[0xd] = 0xffffffff;
    local_90[0xc] = 0xffffffff;
    local_90[0xb] = 0;
    local_90[10] = 0;
    local_90[9] = 0;
    local_90[8] = 0;
    uVar4 = uVar3 & 0x1f;
    uVar19 = uVar4 ^ 0x1f;
    iVar5 = -(uVar3 >> 3 & 0xc);
    uVar3 = *(uint *)((int)local_90 + iVar5 + 0x30);
    uVar13 = *(uint *)((int)local_90 + iVar5 + 0x34);
    uVar15 = *(uint *)((int)local_90 + iVar5 + 0x38);
    uVar12 = uVar13 << uVar4 | (uVar3 >> 1) >> uVar19;
    uVar6 = *(int *)((int)local_90 + iVar5 + 0x3c) << uVar4 | (uVar15 >> 1) >> uVar19;
    uVar3 = uVar3 << uVar4;
    uVar4 = uVar15 << uVar4 | (uVar13 >> 1) >> uVar19;
  }
  local_2c._2_2_ = (ushort)(uVar11 >> 0x10);
  uVar16 = (uint)local_2c._2_2_;
  uVar21 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18) & local_4a;
  local_30._2_2_ = (ushort)(uVar9 >> 0x10);
  uVar13 = (uint)local_30._2_2_;
  uVar6 = (uVar16 & 0xff) << 8 | (uint)(local_2c._2_2_ >> 8);
  uVar15 = (uVar13 & 0xff) << 8 | (uint)(local_30._2_2_ >> 8);
  local_34._2_2_ = (ushort)(uVar2 >> 0x10);
  uVar20 = (uint)local_34._2_2_;
  uVar17 = (uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff;
  uVar19 = (uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff;
  uVar10 = (uVar14 & 0xff) << 8 | uVar14 >> 8 & 0xff;
  uVar7 = (uVar20 & 0xff) << 8 | (uint)(local_34._2_2_ >> 8);
  uVar8 = (uVar2 & 0xff) << 8 | uVar2 >> 8 & 0xff;
  local_38._2_2_ = (ushort)(uVar14 >> 0x10);
  if ((uVar14 & 0xffff) == (uVar21 & 0xffff)) {
    if ((uint)local_38._2_2_ == uVar21 >> 0x10) {
      uVar4 = (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18) & local_46;
      if ((uVar2 & 0xffff) == (uVar4 & 0xffff)) {
        uVar12 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18) & local_42;
        if (uVar20 == uVar4 >> 0x10) {
          if ((uVar9 & 0xffff) == (uVar12 & 0xffff)) {
            uVar3 = (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                    uVar3 >> 0x18) & local_3e;
            if (uVar13 == uVar12 >> 0x10) {
              if ((uVar11 & 0xffff) == (uVar3 & 0xffff)) {
                if ((uVar16 != uVar3 >> 0x10) &&
                   (uVar6 < ((uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18))) {
                  return false;
                }
                goto LAB_01154de0;
              }
              uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10;
              uVar12 = uVar17;
            }
            else {
              uVar3 = (uVar12 >> 0x10) << 0x18 | (uVar12 >> 0x18) << 0x10;
              uVar12 = uVar15;
            }
          }
          else {
            uVar3 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10;
            uVar12 = uVar19;
          }
        }
        else {
          uVar3 = (uVar4 >> 0x10) << 0x18 | (uVar4 >> 0x18) << 0x10;
          uVar12 = uVar7;
        }
      }
      else {
        uVar3 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10;
        uVar12 = uVar8;
      }
      goto LAB_01154db0;
    }
    if (((local_38._2_2_ & 0xff) << 8 | (uint)(local_38._2_2_ >> 8)) <
        ((uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18)) {
      return false;
    }
  }
  else {
    uVar3 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10;
    uVar12 = uVar10;
LAB_01154db0:
    if (uVar12 < uVar3 >> 0x10) {
      return false;
    }
  }
LAB_01154de0:
  if ((int)uVar22 < 0) {
    uVar22 = 0;
    uVar12 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    local_90[7] = 0;
    local_90[6] = 0;
    local_90[5] = 0;
    local_90[4] = 0;
    local_90[3] = 0xffffffff;
    local_90[2] = 0xffffffff;
    local_90[1] = 0xffffffff;
    local_90[0] = 0xffffffff;
    uVar21 = (uVar22 & 0x7f) >> 5;
    uVar22 = uVar22 & 0x1f;
    uVar18 = uVar22 ^ 0x1f;
    uVar3 = local_90[uVar21 + 3] >> uVar22;
    uVar4 = local_90[uVar21 + 2] >> uVar22 | (local_90[uVar21 + 3] << 1) << uVar18;
    uVar12 = local_90[uVar21 + 1] >> uVar22 | (local_90[uVar21 + 2] << 1) << uVar18;
    uVar22 = local_90[uVar21] >> uVar22 | (local_90[uVar21 + 1] << 1) << uVar18;
  }
  local_4a = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18 | local_4a;
  if ((uVar14 & 0xffff) == (local_4a & 0xffff)) {
    if ((uint)local_38._2_2_ != local_4a >> 0x10) {
      uVar2 = (local_4a >> 0x10 & 0xff) << 8 | local_4a >> 0x18;
      uVar6 = (local_38._2_2_ & 0xff) << 8 | (uint)(local_38._2_2_ >> 8);
      goto LAB_01154f54;
    }
    local_46 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18 | local_46;
    if ((uVar2 & 0xffff) == (local_46 & 0xffff)) {
      local_42 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18 | local_42;
      if (uVar20 == local_46 >> 0x10) {
        if ((uVar9 & 0xffff) == (local_42 & 0xffff)) {
          local_3e = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                     uVar22 >> 0x18 | local_3e;
          if (uVar13 == local_42 >> 0x10) {
            if ((uVar11 & 0xffff) == (local_3e & 0xffff)) {
              if (uVar16 == local_3e >> 0x10) {
                return true;
              }
              uVar2 = (local_3e >> 0x10 & 0xff) << 8 | local_3e >> 0x18;
              goto LAB_01154f54;
            }
            uVar2 = local_3e << 0x18 | (local_3e >> 8 & 0xff) << 0x10;
            uVar6 = uVar17;
          }
          else {
            uVar2 = (local_42 >> 0x10) << 0x18 | (local_42 >> 0x18) << 0x10;
            uVar6 = uVar15;
          }
        }
        else {
          uVar2 = local_42 << 0x18 | (local_42 >> 8 & 0xff) << 0x10;
          uVar6 = uVar19;
        }
      }
      else {
        uVar2 = (local_46 >> 0x10) << 0x18 | (local_46 >> 0x18) << 0x10;
        uVar6 = uVar7;
      }
    }
    else {
      uVar2 = local_46 << 0x18 | (local_46 >> 8 & 0xff) << 0x10;
      uVar6 = uVar8;
    }
  }
  else {
    uVar2 = local_4a << 0x18 | (local_4a >> 8 & 0xff) << 0x10;
    uVar6 = uVar10;
  }
  uVar2 = uVar2 >> 0x10;
LAB_01154f54:
  return uVar6 <= uVar2;
}

