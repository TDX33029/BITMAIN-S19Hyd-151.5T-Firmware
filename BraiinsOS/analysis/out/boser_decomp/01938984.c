// FUN_01938984 @ 01938984 size=576 calls_out=4 calls_in=2
// strings: 

void FUN_01938984(undefined1 *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  char *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  
  if (param_3 < 0x10) {
    local_38 = param_2;
    local_34 = param_3;
    FUN_0193a9c4(&local_28,&local_38);
    if ((local_34 == 0) && ((local_28 & 1) != 0)) {
      *(uint *)(param_1 + 1) = CONCAT13((undefined1)local_24,local_28._1_3_);
      uVar2 = 0;
      goto LAB_01938b74;
    }
  }
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (char *)0x0;
  local_40 = param_2;
  local_3c = param_3;
  uVar11 = FUN_0193ab8c(&local_40,&local_38,8);
  uVar4 = (uint)uVar11;
  if (uVar4 == 8) {
    uVar9 = local_2c._2_2_ << 8 | local_2c._2_2_ >> 8;
    uVar10 = (ushort)local_2c << 8 | (ushort)local_2c >> 8;
    uVar8 = local_30._2_2_ << 8 | local_30._2_2_ >> 8;
    uVar3 = local_38._2_2_ << 8 | local_38._2_2_ >> 8;
    uVar5 = (ushort)local_30 << 8 | (ushort)local_30 >> 8;
    uVar7 = local_34._2_2_ << 8 | local_34._2_2_ >> 8;
    uVar6 = (ushort)local_34 << 8 | (ushort)local_34 >> 8;
LAB_01938a0c:
    if (local_3c == 0) {
      *(ushort *)(param_1 + 3) = uVar3;
      uVar2 = 1;
      *(ushort *)(param_1 + 0xf) = uVar9;
      *(ushort *)(param_1 + 0xd) = uVar10;
      *(ushort *)(param_1 + 0xb) = uVar8;
      *(ushort *)(param_1 + 9) = uVar5;
      *(ushort *)(param_1 + 7) = uVar7;
      *(ushort *)(param_1 + 5) = uVar6;
      param_1[2] = (char)local_38;
      param_1[1] = (char)((uint)local_38 >> 8);
      goto LAB_01938b74;
    }
  }
  else if (((((uVar11 & 0x100000000) == 0) && (local_3c != 0)) && (*local_40 == ':')) &&
          (local_3c != 1)) {
    pcVar1 = local_40 + 1;
    local_3c = local_3c - 2;
    local_40 = local_40 + 2;
    if (*pcVar1 == ':') {
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0;
      if (7 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,7 - uVar4,7,&DAT_01d25b88);
      }
      uVar4 = FUN_0193ab8c(&local_40,&local_28);
      if (8 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(8 - uVar4,8,8,&DAT_01d25b98);
      }
      if (uVar4 == 8) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,8,7,&DAT_01d25ba8);
      }
      FUN_01bed4e2((int)&local_38 + (8 - uVar4) * 2,&local_28,uVar4 << 1);
      uVar6 = (ushort)local_34 << 8 | (ushort)local_34 >> 8;
      uVar9 = local_2c._2_2_ << 8 | local_2c._2_2_ >> 8;
      uVar10 = (ushort)local_2c << 8 | (ushort)local_2c >> 8;
      uVar8 = local_30._2_2_ << 8 | local_30._2_2_ >> 8;
      uVar3 = local_38._2_2_ << 8 | local_38._2_2_ >> 8;
      uVar5 = (ushort)local_30 << 8 | (ushort)local_30 >> 8;
      uVar7 = local_34._2_2_ << 8 | local_34._2_2_ >> 8;
      goto LAB_01938a0c;
    }
  }
  param_1[1] = 1;
  uVar2 = 2;
LAB_01938b74:
  *param_1 = uVar2;
  return;
}

