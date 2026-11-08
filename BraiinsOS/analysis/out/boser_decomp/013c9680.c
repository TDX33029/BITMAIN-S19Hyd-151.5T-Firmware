// FUN_013c9680 @ 013c9680 size=664 calls_out=10 calls_in=2
// strings: 

void FUN_013c9680(undefined2 *param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  byte *pbVar18;
  uint uVar19;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*param_2 == 1) {
    pbVar18 = *(byte **)(param_2 + 4);
    uVar19 = *(uint *)(param_2 + 6);
  }
  else {
    uVar19 = (uint)(ushort)param_2[1];
    if (0x20 < uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar19,0x20,&DAT_01cf2da0);
    }
    pbVar18 = (byte *)(param_2 + 2);
  }
  FUN_01bed93e(&local_58,0,0x24);
  FUN_013d9264(&local_58,uVar19);
  pbVar14 = pbVar18 + uVar19;
  if ((local_58 & 1) == 0) {
    uVar2 = local_58 >> 0x10;
    if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar2,0x20,0x20,&DAT_01cf1f9c);
    }
    uVar12 = 0;
    if (uVar2 == 0x20) {
      uVar9 = 0;
    }
    else {
      uVar7 = 0x20 - uVar2;
      uVar9 = 0;
      do {
        if (uVar19 == uVar9) break;
        if (uVar7 == uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7,uVar7,&DAT_01cf1fac);
        }
        bVar11 = pbVar18[uVar9];
        if (bVar11 - 0x41 < 0x1a) {
          bVar11 = bVar11 | 0x20;
        }
        *(byte *)((int)&local_54 + uVar9 + uVar2) = bVar11;
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
      pbVar18 = pbVar18 + uVar9;
    }
    local_58 = CONCAT22((short)(uVar9 + uVar2),(undefined2)local_58);
    if (pbVar18 != pbVar14) {
      bVar11 = *pbVar18;
      uVar19 = (uint)&local_58 | 2;
      if (bVar11 - 0x41 < 0x1a) {
        bVar11 = bVar11 | 0x20;
      }
      FUN_013db314(&local_30,uVar19,uVar9 + uVar2 & 0xffff);
      if (local_28 == local_30) {
        FUN_006666a0(&local_30);
      }
      *(byte *)(local_2c + local_28) = bVar11;
      local_28 = local_28 + 1;
      FUN_013e0a2c(&local_30,pbVar18 + 1,pbVar14);
      FUN_01bed4e2((uint)&local_70 | 2,&local_30,0xc);
      if ((local_58 & 0xffff) != 0) {
        FUN_019bb7e0(local_54,local_50);
      }
      uVar12 = 1;
      local_58 = CONCAT22(local_58._2_2_,1);
      FUN_01bed4e2(uVar19,&local_70,0xe);
    }
  }
  else {
    FUN_013e0a2c((uint)&local_58 | 4,pbVar18,pbVar14);
    uVar12 = (undefined2)local_58;
  }
  uVar6 = local_50;
  uVar5 = local_54;
  uVar4 = local_58._2_2_;
  local_70 = local_4c;
  uStack_6c = uStack_48;
  uStack_68 = uStack_44;
  uStack_64 = uStack_40;
  uStack_60 = uStack_3c;
  uStack_5c = uStack_38;
  sVar3 = param_2[0x20];
  sVar1 = param_2[0x12];
  if (sVar1 != 1) {
    puVar8 = (undefined4 *)((uint)&local_58 | 4);
    uVar10 = *(undefined4 *)(param_2 + 0x16);
    uVar13 = *(undefined4 *)(param_2 + 0x18);
    uVar15 = *(undefined4 *)(param_2 + 0x1a);
    uVar16 = *(undefined4 *)(param_2 + 0x1c);
    uVar17 = *(undefined4 *)(param_2 + 0x1e);
    *puVar8 = *(undefined4 *)(param_2 + 0x14);
    puVar8[1] = uVar10;
    puVar8[2] = uVar13;
    puVar8[3] = uVar15;
    puVar8[4] = uVar16;
    puVar8[5] = uVar17;
    local_58 = (uint)(ushort)param_2[0x13] << 0x10;
  }
  else {
    FUN_015e8ad4((uint)&local_58 | 4,*(undefined4 *)(param_2 + 0x16),*(undefined4 *)(param_2 + 0x18)
                );
  }
  *(char *)(param_1 + 0x20) = (char)sVar3;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *param_1 = uVar12;
  param_1[1] = uVar4;
  local_58 = CONCAT22(local_58._2_2_,(ushort)(sVar1 == 1));
  *(undefined4 *)(param_1 + 6) = local_70;
  *(undefined4 *)(param_1 + 8) = uStack_6c;
  *(undefined4 *)(param_1 + 10) = uStack_68;
  *(undefined4 *)(param_1 + 0xc) = uStack_64;
  *(undefined4 *)(param_1 + 0xe) = uStack_60;
  *(undefined4 *)(param_1 + 0x10) = uStack_5c;
  *(uint *)(param_1 + 0x12) = local_58;
  *(undefined4 *)(param_1 + 0x14) = local_54;
  *(undefined4 *)(param_1 + 0x16) = local_50;
  *(undefined4 *)(param_1 + 0x18) = local_4c;
  *(undefined4 *)(param_1 + 0x1a) = uStack_48;
  *(undefined4 *)(param_1 + 0x1c) = uStack_44;
  *(undefined4 *)(param_1 + 0x1e) = uStack_40;
  return;
}

