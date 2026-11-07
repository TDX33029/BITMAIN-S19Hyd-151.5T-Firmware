// FUN_013064fc @ 013064fc size=1556 calls_out=12 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013064fc(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_a0;
  uint local_98;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar1 = (uint *)(param_3 + 0x30);
LAB_01306574:
  do {
    while( true ) {
      if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
        FUN_0132e9b8(&local_78,param_3);
        if (local_78 != 4) {
          param_1[2] = local_70;
          *param_1 = local_78;
          *(char *)(param_1 + 1) = (char)local_74;
          *(char *)((int)param_1 + 7) = (char)(local_74 >> 0x18);
          *(short *)((int)param_1 + 5) = (short)(local_74 >> 8);
          return;
        }
        if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
          *param_1 = 4;
          return;
        }
      }
      FUN_0129a648(&local_78,param_3);
      uVar2 = local_70 & 0xff;
      if (local_78 != 4) {
        *(undefined1 *)((int)param_1 + 0xb) = local_70._3_1_;
        *(undefined2 *)((int)param_1 + 9) = local_70._1_2_;
        *(undefined1 *)(param_1 + 2) = (undefined1)local_70;
        *param_1 = local_78;
        param_1[1] = local_74;
        return;
      }
      if (local_74 == 1) break;
      FUN_01337f28(&local_78,local_74,uVar2,param_3,param_2 + 4);
      if (local_78 != 4) {
        *param_1 = local_78;
        param_1[1] = local_74;
        param_1[2] = local_70;
        return;
      }
    }
    if (uVar2 != 2) {
      local_98 = local_98 & 0xffff0000 | uVar2 << 8 | 1;
LAB_01306a34:
      local_74 = 1;
      goto LAB_01306a5c;
    }
    if (*(uint *)(param_3 + 0x44) <= *(uint *)(param_3 + 0x40)) {
      local_98 = local_98 & 0xffffff00 | 7;
      goto LAB_01306a34;
    }
    uVar10 = param_2[2];
    uVar2 = param_2[3];
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
    if (uVar2 == uVar10) {
      local_40 = 0;
      local_44 = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_3c = 4;
      local_68 = 4;
      local_74 = 4;
      local_48 = 0;
      local_4c = 1;
      local_50 = 0;
      local_54 = 0;
      local_58 = 0;
      local_5c = 1;
      local_60 = 0;
      local_64 = 0;
      local_6c = 0;
      local_70 = 0;
      local_78 = 0;
      uVar9 = uVar2;
      if (uVar2 == *param_2) {
        FUN_0132f444(param_2);
        uVar9 = param_2[3];
      }
      uVar6 = param_2[1];
      FUN_016dd1aa(uVar6 + uVar2 * 0x50,&local_78,0x50);
      uVar10 = uVar2 + 1;
      param_2[2] = uVar10;
      uVar2 = uVar9;
    }
    else {
      if (uVar10 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,uVar10,&DAT_01890558);
      }
      uVar6 = param_2[1];
      iVar3 = uVar6 + uVar2 * 0x50;
      *(undefined4 *)(iVar3 + 0x44) = 0;
      *(undefined1 *)(iVar3 + 0x34) = 0;
      *(undefined1 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      FUN_0133497c(*(undefined4 *)(iVar3 + 0x48));
    }
    uVar9 = uVar2 + 1;
    param_2[3] = uVar9;
    if (uVar10 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar9,uVar10,&DAT_01890578);
    }
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890568);
    }
    iVar3 = *(int *)(param_3 + 0x38);
    uVar10 = *(int *)(param_3 + 0x3c) - iVar3;
    if (*(int *)(param_3 + 0x3c) != iVar3) {
      pcVar7 = (char *)(*(int *)(param_3 + 0x20) + iVar3);
      uVar9 = (uint)*pcVar7;
      if ((int)uVar9 < 0) {
        if (uVar10 < 2) goto LAB_013066e8;
        uVar12 = (uint)pcVar7[1];
        if ((int)uVar12 < 0) {
          if (uVar10 < 10) goto LAB_013066e8;
          uVar4 = 3;
          uVar9 = uVar9 & 0x7f | (uVar12 & 0x7f) << 7 | ((int)pcVar7[2] & 0x7fU) << 0xe;
          uVar12 = 0;
          if (0x7fffffff < (uint)(int)pcVar7[2]) {
            uVar9 = uVar9 | ((int)pcVar7[3] & 0x7fU) << 0x15;
            uVar4 = 4;
            if (0x7fffffff < (uint)(int)pcVar7[3]) {
              uVar4 = (uint)pcVar7[4];
              uVar9 = uVar9 | uVar4 << 0x1c;
              uVar12 = (uVar4 & 0x7f) >> 4;
              if ((int)uVar4 < 0) {
                uVar12 = uVar12 | ((int)pcVar7[5] & 0x7fU) << 3;
                uVar4 = 6;
                if (0x7fffffff < (uint)(int)pcVar7[5]) {
                  uVar12 = uVar12 | ((int)pcVar7[6] & 0x7fU) << 10;
                  uVar4 = 7;
                  if (0x7fffffff < (uint)(int)pcVar7[6]) {
                    uVar12 = uVar12 | ((int)pcVar7[7] & 0x7fU) << 0x11;
                    uVar4 = 8;
                    if (0x7fffffff < (uint)(int)pcVar7[7]) {
                      uVar12 = uVar12 | ((int)pcVar7[8] & 0x7fU) << 0x18;
                      uVar4 = 9;
                      if (0x7fffffff < (uint)(int)pcVar7[8]) {
                        if (pcVar7[9] < 0) {
                          local_70 = CONCAT31(local_70._1_3_,4);
                          local_98 = local_70;
                          local_a0 = local_6c;
                          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                          goto LAB_01306a34;
                        }
                        uVar12 = uVar12 | (int)pcVar7[9] << 0x1f;
                        uVar4 = 10;
                      }
                    }
                  }
                }
              }
              else {
                uVar4 = 5;
              }
            }
          }
        }
        else {
          uVar9 = uVar9 & 0x7f | uVar12 << 7;
          uVar12 = ((int)uVar12 >> 0x1f) << 7 | uVar12 >> 0x19;
          uVar4 = 2;
        }
      }
      else {
        uVar12 = (int)uVar9 >> 0x1f;
        uVar4 = 1;
      }
      if (uVar10 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                     &DAT_01890e80);
      }
      uVar4 = uVar4 + iVar3;
      *(uint *)(param_3 + 0x38) = uVar4;
LAB_0130674c:
      uVar11 = *(uint *)(param_3 + 0x28);
      uVar5 = uVar11 + uVar4;
      uVar8 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar11,uVar4);
      uVar10 = uVar5 + uVar9;
      uVar4 = uVar8 + uVar12 + (uint)CARRY4(uVar5,uVar9);
      if (!CARRY4(uVar8,uVar12) && !CARRY4(uVar8 + uVar12,(uint)CARRY4(uVar5,uVar9))) {
        uVar9 = *puVar1;
        uVar12 = *(uint *)(param_3 + 0x34);
        if (uVar4 < uVar12 || uVar12 - uVar4 < (uint)(uVar10 <= uVar9)) {
          uVar5 = *(uint *)(param_3 + 0x24);
          *puVar1 = uVar10;
          *(uint *)(param_3 + 0x34) = uVar4;
          uVar8 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar11,uVar5);
          bVar13 = uVar11 + uVar5 <= uVar10;
          if (uVar4 <= uVar8 && (uint)bVar13 <= uVar4 - uVar8) {
            uVar5 = uVar10 - uVar11;
          }
          *(uint *)(param_3 + 0x3c) = uVar5;
          FUN_0131e7d4(&local_78,uVar6 + uVar2 * 0x50,param_3,uVar4 - (uVar8 + !bVar13));
          if (local_78 != 4) {
            local_98 = local_74;
            local_a0 = local_70;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            local_74 = local_78;
            goto LAB_01306a5c;
          }
          if (uVar12 <= *(uint *)(param_3 + 0x34) &&
              (uint)(*puVar1 <= uVar9) <= uVar12 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
          }
          uVar6 = *(uint *)(param_3 + 0x24);
          uVar2 = *(uint *)(param_3 + 0x28);
          *puVar1 = uVar9;
          *(uint *)(param_3 + 0x34) = uVar12;
          uVar10 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar2,uVar6);
          if (uVar12 <= uVar10 && (uint)(uVar2 + uVar6 <= uVar9) <= uVar12 - uVar10) {
            uVar6 = uVar9 - uVar2;
          }
          *(uint *)(param_3 + 0x3c) = uVar6;
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          goto LAB_01306574;
        }
      }
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
      local_a0 = 0;
      local_98 = 9;
      goto LAB_01306a34;
    }
LAB_013066e8:
    FUN_0132d5a8(&local_78,param_3);
    if (local_78 == 0) {
      uVar4 = *(uint *)(param_3 + 0x38);
      uVar9 = local_70;
      uVar12 = local_6c;
      goto LAB_0130674c;
    }
    local_98 = local_70;
    local_a0 = local_6c;
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
    if (local_74 != 4) {
LAB_01306a5c:
      *param_1 = local_74;
      param_1[1] = local_98;
      param_1[2] = local_a0;
      return;
    }
  } while( true );
}

