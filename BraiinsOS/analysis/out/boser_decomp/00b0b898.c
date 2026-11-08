// FUN_00b0b898 @ 00b0b898 size=772 calls_out=8 calls_in=2
// strings: assertion failed: indices.capacity() - indices.len() >= entries.len()value is out of rangerecursion limit exceeded

void FUN_00b0b898(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  uint local_40;
  uint *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 uStack_2c;
  
  FUN_00b09be0(&local_58);
  iVar8 = local_44;
  if (local_40 == 0) {
    uVar7 = 0;
  }
  else {
    iVar5 = local_44;
    uVar7 = 0;
    do {
      uVar4 = uVar7 + 1;
      if (*(char *)(iVar5 + 0xc5) == '\x03') {
        FUN_00963688(iVar5);
        if (uVar4 < local_40) {
          uVar4 = uVar7 + 2;
          do {
            iVar2 = iVar5 + 0xd8;
            if (*(char *)(iVar5 + 0x19d) == '\x03') {
              FUN_019bb7e0(*(undefined4 *)(iVar5 + 0x1a4),*(undefined4 *)(iVar5 + 0x1a8));
              FUN_009636a4(iVar2);
            }
            else {
              FUN_01bed4e2(uVar7 * 0xd8 + iVar8,iVar2,0xd8);
              uVar7 = uVar7 + 1;
            }
            bVar9 = uVar4 < local_40;
            uVar4 = uVar4 + 1;
            iVar5 = iVar2;
          } while (bVar9);
        }
        local_40 = uVar7;
        goto LAB_00b0b8f4;
      }
      iVar5 = iVar5 + 0xd8;
      uVar7 = uVar4;
    } while (local_40 != uVar4);
    uVar7 = local_40;
  }
LAB_00b0b8f4:
  uVar4 = local_38;
  if (uVar7 < local_30) {
    local_34 = 0;
    if (local_38 != 0) {
      FUN_01bed93e(local_3c,0xff,local_38 + 5);
      local_34 = uVar4;
      if (7 < uVar4) {
        local_34 = (uVar4 + 1 & 0xfffffff8) - (uVar4 + 1 >> 3);
      }
    }
    local_30 = 0;
    if (local_34 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: indices.capacity() - indices.len() >= entries.len()value is out of rangerecursion limit exceeded"
                   ,0x45,&DAT_01d2c0f4);
    }
    if (uVar7 != 0) {
      iVar5 = uVar7 * 0xd8 + local_44;
      iVar8 = local_44;
      do {
        uVar7 = local_30;
        uVar3 = *(uint *)(iVar8 + 200);
        uVar4 = local_38 & uVar3;
        uVar6 = *(uint *)((int)local_3c + uVar4) & 0x80808080;
        if (uVar6 == 0) {
          iVar2 = 4;
          do {
            uVar4 = uVar4 + iVar2;
            iVar2 = iVar2 + 4;
            uVar4 = uVar4 & local_38;
            uVar6 = *(uint *)((int)local_3c + uVar4) & 0x80808080;
          } while (uVar6 == 0);
        }
        uVar4 = uVar4 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                       (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & local_38
        ;
        bVar1 = *(byte *)((int)local_3c + uVar4);
        if (-1 < (char)bVar1) {
          uVar4 = *local_3c & 0x80808080;
          uVar4 = LZCOUNT((*local_3c & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
          bVar1 = *(byte *)((int)local_3c + (uVar4 >> 3));
          uVar4 = uVar4 >> 3;
        }
        uVar6 = bVar1 & 1;
        if ((local_34 == 0) && (uVar6 = 0, (bVar1 & 1) != 0)) {
          FUN_00944238(&local_3c);
          uVar4 = local_38 & uVar3;
          uVar6 = *(uint *)((int)local_3c + uVar4) & 0x80808080;
          if (uVar6 == 0) {
            iVar2 = 4;
            do {
              uVar4 = uVar4 + iVar2;
              iVar2 = iVar2 + 4;
              uVar4 = uVar4 & local_38;
              uVar6 = *(uint *)((int)local_3c + uVar4) & 0x80808080;
            } while (uVar6 == 0);
          }
          uVar4 = uVar4 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                         (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                  local_38;
          uVar6 = (uint)*(char *)((int)local_3c + uVar4);
          if (-1 < (int)uVar6) {
            uVar4 = *local_3c & 0x80808080;
            uVar4 = LZCOUNT((*local_3c & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
            uVar6 = (uint)*(byte *)((int)local_3c + (uVar4 >> 3));
            uVar4 = uVar4 >> 3;
          }
          local_34 = local_34 - (uVar6 & 1);
        }
        else {
          local_34 = local_34 - uVar6;
        }
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)local_3c + uVar4) = bVar1;
        iVar8 = iVar8 + 0xd8;
        *(byte *)((int)local_3c + (uVar4 - 4 & local_38) + 4) = bVar1;
        local_30 = local_30 + 1;
        local_3c[-1 - uVar4] = uVar7;
      } while (iVar8 != iVar5);
    }
  }
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = uStack_4c;
  param_1[4] = uStack_48;
  param_1[5] = local_44;
  param_1[6] = local_40;
  param_1[7] = local_3c;
  param_1[8] = local_38;
  param_1[9] = local_34;
  param_1[10] = local_30;
  param_1[0xb] = uStack_2c;
  return;
}

