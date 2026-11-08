// FUN_00fca8e0 @ 00fca8e0 size=908 calls_out=1 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fca8e0(uint *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  FUN_00fcac6c(&local_78);
  uVar6 = local_58 >> 0x1a | local_54 << 6;
  uVar8 = local_50 + uVar6;
  uVar2 = local_4c + (local_54 >> 0x1a) + (uint)CARRY4(local_50,uVar6);
  uVar7 = uVar8 >> 0x19 | uVar2 * 0x80;
  uVar6 = local_48 + uVar7;
  local_88 = uVar6 & 0x3ffffff;
  uVar7 = local_44 + (uVar2 >> 0x19) + (uint)CARRY4(local_48,uVar7);
  uVar6 = uVar6 >> 0x1a | uVar7 * 0x40;
  uVar2 = local_40 + uVar6;
  uVar6 = local_3c + (uVar7 >> 0x1a) + (uint)CARRY4(local_40,uVar6);
  local_84 = uVar2 & 0x1ffffff;
  uVar2 = uVar2 >> 0x19 | uVar6 * 0x80;
  local_80 = uVar2 + local_38;
  uVar6 = (uVar6 >> 0x19) + local_34 + (uint)CARRY4(uVar2,local_38);
  uVar2 = local_80 >> 0x1a | uVar6 * 0x40;
  local_7c = uVar2 + local_30;
  iVar4 = (uVar6 >> 0x1a) + local_2c + (uint)CARRY4(uVar2,local_30);
  uVar6 = local_78 >> 0x1a | local_74 << 6;
  uVar3 = local_70 + uVar6;
  uVar6 = local_6c + (local_74 >> 0x1a) + (uint)CARRY4(local_70,uVar6);
  uVar2 = uVar3 >> 0x19 | uVar6 * 0x80;
  uVar7 = local_68 + uVar2;
  uVar6 = local_64 + (uVar6 >> 0x19) + (uint)CARRY4(local_68,uVar2);
  local_98 = uVar7 & 0x3ffffff;
  uVar2 = uVar7 >> 0x1a | uVar6 * 0x40;
  uVar7 = local_60 + uVar2;
  local_94 = uVar7 & 0x1ffffff;
  local_80 = local_80 & 0x3ffffff;
  lVar1 = (ulonglong)(local_7c >> 0x19 | iVar4 * 0x80) * 0x13 +
          (CONCAT44((short)(ushort)((uint)iVar4 >> 0x19) * 0x13,local_78) & 0xffffffff03ffffff);
  uVar5 = (uint)lVar1;
  uVar6 = local_5c + (uVar6 >> 0x1a) + (uint)CARRY4(local_60,uVar2);
  uVar2 = uVar7 >> 0x19 | uVar6 * 0x80;
  uVar7 = uVar2 + (local_58 & 0x3ffffff);
  local_90 = uVar7 & 0x3ffffff;
  local_8c = (uVar7 >> 0x1a | ((uVar6 >> 0x19) + (uint)CARRY4(uVar2,local_58 & 0x3ffffff)) * 0x40) +
             (uVar8 & 0x1ffffff);
  local_7c = local_7c & 0x1ffffff;
  local_a0 = uVar5 & 0x3ffffff;
  param_3 = param_3 + -1;
  local_9c = (uVar5 >> 0x1a | (int)((ulonglong)lVar1 >> 0x20) << 6) + (uVar3 & 0x1ffffff);
  do {
    FUN_00fcac6c(&local_78,&local_a0);
    uVar6 = local_58 >> 0x1a | local_54 << 6;
    uVar8 = local_50 + uVar6;
    uVar6 = local_4c + (local_54 >> 0x1a) + (uint)CARRY4(local_50,uVar6);
    uVar2 = uVar8 >> 0x19 | uVar6 * 0x80;
    uVar7 = local_48 + uVar2;
    local_88 = uVar7 & 0x3ffffff;
    uVar6 = local_44 + (uVar6 >> 0x19) + (uint)CARRY4(local_48,uVar2);
    uVar2 = uVar7 >> 0x1a | uVar6 * 0x40;
    local_84 = local_40 + uVar2;
    uVar6 = local_3c + (uVar6 >> 0x1a) + (uint)CARRY4(local_40,uVar2);
    uVar2 = local_84 >> 0x19 | uVar6 * 0x80;
    local_80 = uVar2 + local_38;
    uVar6 = (uVar6 >> 0x19) + local_34 + (uint)CARRY4(uVar2,local_38);
    uVar2 = local_80 >> 0x1a | uVar6 * 0x40;
    local_7c = uVar2 + local_30;
    iVar4 = (uVar6 >> 0x1a) + local_2c + (uint)CARRY4(uVar2,local_30);
    uVar6 = local_78 >> 0x1a | local_74 << 6;
    uVar3 = local_70 + uVar6;
    uVar7 = local_6c + (local_74 >> 0x1a) + (uint)CARRY4(local_70,uVar6);
    uVar2 = uVar3 >> 0x19 | uVar7 * 0x80;
    uVar6 = local_68 + uVar2;
    local_98 = uVar6 & 0x3ffffff;
    local_84 = local_84 & 0x1ffffff;
    uVar7 = local_64 + (uVar7 >> 0x19) + (uint)CARRY4(local_68,uVar2);
    uVar6 = uVar6 >> 0x1a | uVar7 * 0x40;
    uVar2 = local_60 + uVar6;
    local_94 = uVar2 & 0x1ffffff;
    local_80 = local_80 & 0x3ffffff;
    uVar7 = local_5c + (uVar7 >> 0x1a) + (uint)CARRY4(local_60,uVar6);
    uVar6 = uVar2 >> 0x19 | uVar7 * 0x80;
    uVar2 = uVar6 + (local_58 & 0x3ffffff);
    lVar1 = (ulonglong)(local_7c >> 0x19 | iVar4 * 0x80) * 0x13 +
            (CONCAT44((short)(ushort)((uint)iVar4 >> 0x19) * 0x13,local_78) & 0xffffffff03ffffff);
    uVar5 = (uint)lVar1;
    local_90 = uVar2 & 0x3ffffff;
    local_8c = (uVar2 >> 0x1a | ((uVar7 >> 0x19) + (uint)CARRY4(uVar6,local_58 & 0x3ffffff)) * 0x40)
               + (uVar8 & 0x1ffffff);
    local_7c = local_7c & 0x1ffffff;
    local_a0 = uVar5 & 0x3ffffff;
    param_3 = param_3 + -1;
    local_9c = (uVar5 >> 0x1a | (int)((ulonglong)lVar1 >> 0x20) << 6) + (uVar3 & 0x1ffffff);
  } while (param_3 != 0);
  *param_1 = local_a0;
  param_1[1] = local_9c;
  param_1[2] = local_98;
  param_1[3] = local_94;
  param_1[4] = local_90;
  param_1[5] = local_8c;
  param_1[6] = local_88;
  param_1[7] = local_84;
  param_1[8] = local_80;
  param_1[9] = local_7c;
  return;
}

