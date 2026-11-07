// FUN_014f92b0 @ 014f92b0 size=656 calls_out=7 calls_in=1
// strings: assertion failed: head.len() + tail.len() <= 8PrefixLenErrorDotDotDot

void FUN_014f92b0(undefined1 *param_1,int param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ushort local_68;
  ushort local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort local_38 [4];
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar11 = *(undefined4 *)(param_2 + 8);
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  uVar12 = FUN_014f955c(param_2,&local_58,8);
  uVar6 = (uint)uVar12;
  if (uVar6 == 8) {
    uVar3 = local_4c._2_2_ << 8 | local_4c._2_2_ >> 8;
    local_60 = (ushort)((local_4c & 0xff) << 8) | (ushort)(local_4c >> 8) & 0xff;
    uVar4 = local_50._2_2_ << 8 | local_50._2_2_ >> 8;
    local_68 = (ushort)((local_50 & 0xff) << 8) | (ushort)(local_50 >> 8) & 0xff;
    uVar10 = local_58._2_2_ << 8 | local_58._2_2_ >> 8;
    uVar5 = local_54._2_2_ << 8 | local_54._2_2_ >> 8;
    uVar9 = (ushort)local_54 << 8 | (ushort)local_54 >> 8;
    uVar1 = (ushort)local_58;
LAB_014f9340:
    iVar7 = FUN_014f96bc(param_2);
    if ((iVar7 == 0x2f) && (uVar12 = FUN_014f9708(param_2,10,3,0x81), (uVar12 & 1) != 0)) {
      if (0x80 < ((uint)(uVar12 >> 0x20) & 0xff)) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,local_38,&DAT_01cfa52c,&DAT_01cfa574);
      }
      *(ushort *)(param_1 + 0xf) = uVar3;
      *(ushort *)(param_1 + 0xd) = local_60;
      *(ushort *)(param_1 + 0xb) = uVar4;
      *(ushort *)(param_1 + 9) = local_68;
      *(ushort *)(param_1 + 7) = uVar5;
      uVar2 = 1;
      param_1[0x11] = (char)(uVar12 >> 0x20);
      *(ushort *)(param_1 + 5) = uVar9;
      *(ushort *)(param_1 + 3) = uVar10;
      *(ushort *)(param_1 + 1) = uVar1 << 8 | uVar1 >> 8;
      goto LAB_014f94c4;
    }
  }
  else if ((((uVar12 & 0x100000000) == 0) && (iVar7 = FUN_014f96bc(param_2), iVar7 == 0x3a)) &&
          (iVar7 = FUN_014f96bc(param_2), iVar7 == 0x3a)) {
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    uVar8 = FUN_014f955c(param_2,&local_48,8 - uVar6);
    if (8 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar6,8,&DAT_01cfa5b4);
    }
    if (8 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar8,8,&DAT_01cfa5c4);
    }
    if (8 < uVar8 + uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: head.len() + tail.len() <= 8PrefixLenErrorDotDotDot",0x2e,
                   &DAT_01cfa5d4);
    }
    local_2c = 0;
    local_30 = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_01bed4e2(local_38,&local_58,uVar6 << 1);
    FUN_01bed4e2(local_38 + (8 - uVar8),&local_48,uVar8 << 1);
    uVar3 = local_2c._2_2_ << 8 | local_2c._2_2_ >> 8;
    local_60 = (ushort)((local_2c & 0xff) << 8) | (ushort)(local_2c >> 8) & 0xff;
    uVar4 = local_30._2_2_ << 8 | local_30._2_2_ >> 8;
    local_68 = (ushort)((local_30 & 0xff) << 8) | (ushort)(local_30 >> 8) & 0xff;
    uVar5 = local_38[3] << 8 | local_38[3] >> 8;
    uVar9 = local_38[2] << 8 | local_38[2] >> 8;
    uVar10 = local_38[1] << 8 | local_38[1] >> 8;
    uVar1 = local_38[0];
    goto LAB_014f9340;
  }
  uVar2 = 0;
  *(undefined4 *)(param_2 + 8) = uVar11;
LAB_014f94c4:
  *param_1 = uVar2;
  return;
}

