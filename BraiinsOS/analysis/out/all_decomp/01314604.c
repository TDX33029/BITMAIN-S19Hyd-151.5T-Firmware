// FUN_01314604 @ 01314604 size=1992 calls_out=16 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01314604(uint *param_1,undefined4 *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_a8;
  uint local_a4;
  int local_90;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined8 local_30;
  
  puVar1 = (uint *)(param_3 + 0x30);
LAB_013146ac:
  if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
    FUN_0132e9b8(&local_50,param_3);
    if (local_50 != 4) {
      param_1[2] = local_48;
      *param_1 = local_50;
      *(char *)(param_1 + 1) = (char)local_4c;
      *(char *)((int)param_1 + 7) = (char)(local_4c >> 0x18);
      *(short *)((int)param_1 + 5) = (short)(local_4c >> 8);
      return;
    }
    if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
      *param_1 = 4;
      return;
    }
  }
  FUN_0129a648(&local_50,param_3);
  uVar5 = local_48 & 0xff;
  if (local_50 != 4) {
    *(undefined1 *)((int)param_1 + 0xb) = local_48._3_1_;
    *(undefined2 *)((int)param_1 + 9) = local_48._1_2_;
    *(undefined1 *)(param_1 + 2) = (undefined1)local_48;
    *param_1 = local_50;
    param_1[1] = local_4c;
    return;
  }
  switch(local_4c) {
  case 2:
    if (uVar5 == 2) {
      if (*(uint *)(param_3 + 0x40) < *(uint *)(param_3 + 0x44)) {
        uVar11 = param_2[0xe];
        uVar5 = param_2[0xf];
        *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
        if (uVar5 == uVar11) {
          local_38 = CONCAT31(local_38._1_3_,2);
          local_44 = local_44 & 0xffffff00;
          local_48 = 0;
          local_4c = 1;
          local_50 = 0;
          local_3c = 0;
          local_40 = 0;
          uVar13 = uVar5;
          if (uVar5 == param_2[0xc]) {
            FUN_0132f80c(param_2 + 0xc);
            uVar13 = param_2[0xf];
          }
          local_90 = param_2[0xd];
          puVar2 = (uint *)(local_90 + uVar5 * 0x1c);
          *puVar2 = local_50;
          puVar2[1] = local_4c;
          puVar2[2] = local_48;
          puVar2[3] = local_44;
          puVar2[4] = local_40;
          puVar2[5] = local_3c;
          puVar2[6] = local_38;
          uVar11 = uVar5 + 1;
          param_2[0xe] = uVar11;
          uVar5 = uVar13;
        }
        else {
          if (uVar11 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar5,uVar11,&DAT_01890558);
          }
          local_90 = param_2[0xd];
          iVar7 = local_90 + uVar5 * 0x1c;
          *(undefined1 *)(iVar7 + 0x18) = 2;
          *(undefined1 *)(iVar7 + 0xc) = 0;
          FUN_0133497c(*(undefined4 *)(iVar7 + 0x10));
        }
        uVar13 = uVar5 + 1;
        param_2[0xf] = uVar13;
        if (uVar11 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar13,uVar11,&DAT_01890578);
        }
        if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01890568);
        }
        iVar7 = *(int *)(param_3 + 0x38);
        uVar11 = *(int *)(param_3 + 0x3c) - iVar7;
        if (*(int *)(param_3 + 0x3c) == iVar7) {
LAB_01314948:
          FUN_0132d5a8(&local_50,param_3);
          if (local_50 != 0) {
            local_a8 = local_44;
            local_a4 = local_48;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            if (local_4c != 4) goto LAB_01314d3c;
            goto LAB_013146ac;
          }
          uVar3 = *(uint *)(param_3 + 0x38);
          uVar13 = local_48;
          uVar12 = local_44;
        }
        else {
          pcVar10 = (char *)(*(int *)(param_3 + 0x20) + iVar7);
          uVar13 = (uint)*pcVar10;
          if ((int)uVar13 < 0) {
            if (uVar11 < 2) goto LAB_01314948;
            uVar3 = (uint)pcVar10[1];
            if ((int)uVar3 < 0) {
              if (uVar11 < 10) goto LAB_01314948;
              uVar12 = 0;
              uVar13 = uVar13 & 0x7f | (uVar3 & 0x7f) << 7 | ((int)pcVar10[2] & 0x7fU) << 0xe;
              uVar3 = 3;
              if (0x7fffffff < (uint)(int)pcVar10[2]) {
                uVar13 = uVar13 | ((int)pcVar10[3] & 0x7fU) << 0x15;
                uVar3 = 4;
                if (pcVar10[3] < 0) {
                  uVar3 = (uint)pcVar10[4];
                  uVar13 = uVar13 | uVar3 << 0x1c;
                  uVar12 = (uVar3 & 0x7f) >> 4;
                  if ((int)uVar3 < 0) {
                    uVar12 = uVar12 | ((int)pcVar10[5] & 0x7fU) << 3;
                    uVar3 = 6;
                    if (0x7fffffff < (uint)(int)pcVar10[5]) {
                      uVar12 = uVar12 | ((int)pcVar10[6] & 0x7fU) << 10;
                      uVar3 = 7;
                      if (0x7fffffff < (uint)(int)pcVar10[6]) {
                        uVar12 = uVar12 | ((int)pcVar10[7] & 0x7fU) << 0x11;
                        uVar3 = 8;
                        if (0x7fffffff < (uint)(int)pcVar10[7]) {
                          uVar12 = uVar12 | ((int)pcVar10[8] & 0x7fU) << 0x18;
                          uVar3 = 9;
                          if (0x7fffffff < (uint)(int)pcVar10[8]) {
                            if (pcVar10[9] < 0) {
                              local_48 = CONCAT31(local_48._1_3_,4);
                              local_a8 = local_44;
                              local_a4 = local_48;
                              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                              goto LAB_01314cc4;
                            }
                            uVar12 = uVar12 | (int)pcVar10[9] << 0x1f;
                            uVar3 = 10;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar3 = 5;
                  }
                }
              }
            }
            else {
              uVar13 = uVar13 & 0x7f | uVar3 << 7;
              uVar12 = ((int)uVar3 >> 0x1f) << 7 | uVar3 >> 0x19;
              uVar3 = 2;
            }
          }
          else {
            uVar12 = (int)uVar13 >> 0x1f;
            uVar3 = 1;
          }
          if (uVar11 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44
                         ,&DAT_01890e80);
          }
          uVar3 = uVar3 + iVar7;
          *(uint *)(param_3 + 0x38) = uVar3;
        }
        uVar8 = *(uint *)(param_3 + 0x28);
        uVar4 = uVar8 + uVar3;
        uVar3 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar8,uVar3);
        uVar11 = uVar4 + uVar13;
        uVar9 = uVar3 + uVar12 + (uint)CARRY4(uVar4,uVar13);
        if (!CARRY4(uVar3,uVar12) && !CARRY4(uVar3 + uVar12,(uint)CARRY4(uVar4,uVar13))) {
          uVar13 = *puVar1;
          uVar3 = *(uint *)(param_3 + 0x34);
          if (uVar9 < uVar3 || uVar3 - uVar9 < (uint)(uVar11 <= uVar13)) {
            *puVar1 = uVar11;
            *(uint *)(param_3 + 0x34) = uVar9;
            uVar12 = *(uint *)(param_3 + 0x24);
            uVar4 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar8,uVar12);
            bVar14 = uVar8 + uVar12 <= uVar11;
            if (uVar9 <= uVar4 && (uint)bVar14 <= uVar9 - uVar4) {
              uVar12 = uVar11 - uVar8;
            }
            *(uint *)(param_3 + 0x3c) = uVar12;
            FUN_013213b8(&local_50,local_90 + uVar5 * 0x1c,param_3,uVar9 - (uVar4 + !bVar14));
            if (local_50 != 4) {
              local_a4 = local_4c;
              local_a8 = local_48;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_4c = local_50;
              goto LAB_01314d3c;
            }
            if (uVar3 <= *(uint *)(param_3 + 0x34) &&
                (uint)(*puVar1 <= uVar13) <= uVar3 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
            }
            uVar12 = *(uint *)(param_3 + 0x24);
            uVar5 = *(uint *)(param_3 + 0x28);
            *puVar1 = uVar13;
            *(uint *)(param_3 + 0x34) = uVar3;
            uVar11 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar5,uVar12);
            if (uVar3 <= uVar11 && (uint)(uVar5 + uVar12 <= uVar13) <= uVar3 - uVar11) {
              uVar12 = uVar13 - uVar5;
            }
            *(uint *)(param_3 + 0x3c) = uVar12;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            goto LAB_013146ac;
          }
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        local_a8 = 0;
        local_a4 = 9;
        local_4c = 1;
        goto LAB_01314d3c;
      }
      local_a4 = local_a4 & 0xffffff00 | 7;
    }
    else {
      local_a4 = local_a4 & 0xffff0000 | uVar5 << 8 | 1;
    }
LAB_01314cc4:
    local_4c = 1;
LAB_01314d3c:
    *param_1 = local_4c;
    param_1[1] = local_a4;
    param_1[2] = local_a8;
    return;
  case 3:
    if (uVar5 == 2) {
      param_2[0x12] = 0;
      *(undefined1 *)(param_2 + 0x13) = 1;
      puVar6 = param_2 + 0x10;
LAB_013148ec:
      FUN_0132e8a8(&local_50,param_3,puVar6);
      goto LAB_013146a0;
    }
    break;
  case 4:
    if (uVar5 != 0) goto LAB_01314c68;
    FUN_0132e710(&local_50,param_3);
    if (local_50 != 0) {
LAB_01314c80:
      param_1[1] = local_48;
      param_1[2] = local_44;
      *param_1 = local_4c;
      return;
    }
    *param_2 = 1;
    param_2[1] = 0;
    param_2[2] = local_48;
    param_2[3] = local_44;
    goto LAB_013146ac;
  case 5:
    if (uVar5 != 0) goto LAB_01314c68;
    FUN_0132e53c(&local_50,param_3);
    if (local_50 != 0) goto LAB_01314c80;
    param_2[6] = local_48;
    param_2[7] = local_44;
    param_2[4] = 1;
    param_2[5] = 0;
    goto LAB_013146ac;
  case 6:
    if (uVar5 != 1) {
LAB_01314c68:
      *(undefined1 *)((int)param_1 + 5) = (undefined1)local_48;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 1;
      return;
    }
    FUN_0132e008(&local_50,param_3,&local_30,8);
    if (local_50 != 4) goto LAB_01314c54;
    *(undefined8 *)(param_2 + 10) = local_30;
    param_2[8] = 1;
    param_2[9] = 0;
    goto LAB_013146ac;
  case 7:
    if (uVar5 == 2) {
      param_2[0x16] = 0;
      *(undefined1 *)(param_2 + 0x17) = 1;
      FUN_0132d908(&local_50,param_3,param_2 + 0x14);
      goto LAB_013146a0;
    }
    break;
  case 8:
    if (uVar5 == 2) {
      param_2[0x1a] = 0;
      *(undefined1 *)(param_2 + 0x1b) = 1;
      puVar6 = param_2 + 0x18;
      goto LAB_013148ec;
    }
    break;
  default:
    FUN_01337f28(&local_50,local_4c,uVar5,param_3,param_2 + 0x1c);
LAB_013146a0:
    if (local_50 != 4) {
LAB_01314c54:
      param_1[1] = local_4c;
      *param_1 = local_50;
      param_1[2] = local_48;
      return;
    }
    goto LAB_013146ac;
  }
  local_4c = CONCAT31(CONCAT21(local_4c._2_2_,(undefined1)local_48),1);
  local_50 = 1;
  goto LAB_01314c54;
}

