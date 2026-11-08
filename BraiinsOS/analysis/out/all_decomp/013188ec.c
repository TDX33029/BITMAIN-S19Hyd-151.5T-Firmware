// FUN_013188ec @ 013188ec size=1384 calls_out=10 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013188ec(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  bool bVar12;
  uint local_5c;
  uint local_58;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  
  puVar1 = (uint *)(param_3 + 0x30);
LAB_01318960:
  do {
    while( true ) {
      if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
        FUN_0132e9b8(&local_38,param_3);
        if (local_38 != 4) {
          param_1[2] = local_30;
          *param_1 = local_38;
          *(char *)(param_1 + 1) = (char)local_34;
          *(char *)((int)param_1 + 7) = (char)(local_34 >> 0x18);
          *(short *)((int)param_1 + 5) = (short)(local_34 >> 8);
          return;
        }
        if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
          *param_1 = 4;
          return;
        }
      }
      FUN_0129a648(&local_38,param_3);
      uVar2 = local_30 & 0xff;
      if (local_38 != 4) {
        *(undefined1 *)((int)param_1 + 0xb) = local_30._3_1_;
        *(undefined2 *)((int)param_1 + 9) = local_30._1_2_;
        *(undefined1 *)(param_1 + 2) = (undefined1)local_30;
        *param_1 = local_38;
        param_1[1] = local_34;
        return;
      }
      if (local_34 != 1) break;
      if (uVar2 != 2) {
        local_34 = CONCAT31((uint3)local_30 & 0xff,1);
        local_38 = 1;
        goto LAB_01318d64;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined1 *)(param_2 + 0xc) = 1;
      FUN_0132e8a8(&local_38,param_3,param_2);
      if (local_38 != 4) {
LAB_01318d64:
        *param_1 = local_38;
        param_1[1] = local_34;
        param_1[2] = local_30;
        return;
      }
    }
    if (local_34 == 2) {
      if (uVar2 == 2) {
        uVar2 = *(uint *)(param_3 + 0x40);
        if (uVar2 < *(uint *)(param_3 + 0x44)) {
          puVar5 = *(undefined4 **)(param_2 + 0x10);
          *(undefined1 *)(param_2 + 0x14) = 1;
          *(uint *)(param_3 + 0x40) = uVar2 + 1;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x18);
            if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x18);
            }
            *puVar5 = 0;
            puVar5[3] = 0;
            puVar5[1] = 8;
            puVar5[2] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            *(undefined4 **)(param_2 + 0x10) = puVar5;
            iVar3 = *(int *)(param_3 + 0x38);
            uVar2 = *(int *)(param_3 + 0x3c) - iVar3;
            if (uVar2 == 0) goto LAB_01318b40;
LAB_01318a74:
            pcVar11 = (char *)(*(int *)(param_3 + 0x20) + iVar3);
            uVar9 = (uint)*pcVar11;
            if ((int)uVar9 < 0) {
              if (uVar2 < 2) goto LAB_01318b40;
              uVar4 = (uint)pcVar11[1];
              if ((int)uVar4 < 0) {
                if (uVar2 < 10) goto LAB_01318b40;
                uVar10 = 0;
                uVar7 = 3;
                uVar9 = uVar9 & 0x7f | (uVar4 & 0x7f) << 7 | ((int)pcVar11[2] & 0x7fU) << 0xe;
                if (0x7fffffff < (uint)(int)pcVar11[2]) {
                  uVar7 = 4;
                  uVar9 = uVar9 | ((int)pcVar11[3] & 0x7fU) << 0x15;
                  if (0x7fffffff < (uint)(int)pcVar11[3]) {
                    uVar4 = (uint)pcVar11[4];
                    uVar9 = uVar9 | uVar4 << 0x1c;
                    uVar10 = (uVar4 & 0x7f) >> 4;
                    if ((int)uVar4 < 0) {
                      uVar7 = 6;
                      uVar10 = uVar10 | ((int)pcVar11[5] & 0x7fU) << 3;
                      if (0x7fffffff < (uint)(int)pcVar11[5]) {
                        uVar7 = 7;
                        uVar10 = uVar10 | ((int)pcVar11[6] & 0x7fU) << 10;
                        if (0x7fffffff < (uint)(int)pcVar11[6]) {
                          uVar7 = 8;
                          uVar10 = uVar10 | ((int)pcVar11[7] & 0x7fU) << 0x11;
                          if (0x7fffffff < (uint)(int)pcVar11[7]) {
                            uVar7 = 9;
                            uVar10 = uVar10 | ((int)pcVar11[8] & 0x7fU) << 0x18;
                            if (0x7fffffff < (uint)(int)pcVar11[8]) {
                              if (pcVar11[9] < 0) {
                                local_30 = CONCAT31(local_30._1_3_,4);
                                local_58 = local_30;
                                local_5c = local_2c;
                                *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                                goto LAB_01318dac;
                              }
                              uVar10 = uVar10 | (int)pcVar11[9] << 0x1f;
                              uVar7 = 10;
                            }
                          }
                        }
                      }
                    }
                    else {
                      uVar7 = 5;
                    }
                  }
                }
              }
              else {
                uVar9 = uVar9 & 0x7f | uVar4 << 7;
                uVar10 = ((int)uVar4 >> 0x1f) << 7 | uVar4 >> 0x19;
                uVar7 = 2;
              }
            }
            else {
              uVar10 = (int)uVar9 >> 0x1f;
              uVar7 = 1;
            }
            if (uVar2 < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",
                           0x44,&DAT_01890e80);
            }
            uVar7 = uVar7 + iVar3;
            *(uint *)(param_3 + 0x38) = uVar7;
          }
          else {
            puVar5[3] = 0;
            FUN_0133497c(puVar5[4]);
            iVar3 = *(int *)(param_3 + 0x38);
            uVar2 = *(int *)(param_3 + 0x3c) - iVar3;
            if (uVar2 != 0) goto LAB_01318a74;
LAB_01318b40:
            FUN_0132d5a8(&local_38,param_3);
            if (local_38 != 0) {
              local_58 = local_30;
              local_5c = local_2c;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              if (local_34 != 4) goto LAB_01318dd0;
              goto LAB_01318960;
            }
            uVar7 = *(uint *)(param_3 + 0x38);
            uVar9 = local_30;
            uVar10 = local_2c;
          }
          uVar6 = *(uint *)(param_3 + 0x28);
          uVar8 = uVar6 + uVar7;
          uVar7 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar6,uVar7);
          uVar2 = uVar8 + uVar9;
          uVar4 = uVar7 + uVar10 + (uint)CARRY4(uVar8,uVar9);
          if (!CARRY4(uVar7,uVar10) && !CARRY4(uVar7 + uVar10,(uint)CARRY4(uVar8,uVar9))) {
            uVar9 = *puVar1;
            uVar10 = *(uint *)(param_3 + 0x34);
            if (uVar4 < uVar10 || uVar10 - uVar4 < (uint)(uVar2 <= uVar9)) {
              uVar7 = *(uint *)(param_3 + 0x24);
              uVar8 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar6,uVar7);
              bVar12 = uVar6 + uVar7 <= uVar2;
              *puVar1 = uVar2;
              *(uint *)(param_3 + 0x34) = uVar4;
              if (uVar4 <= uVar8 && (uint)bVar12 <= uVar4 - uVar8) {
                uVar7 = uVar2 - uVar6;
              }
              *(uint *)(param_3 + 0x3c) = uVar7;
              FUN_01300da4(&local_38,puVar5,param_3,uVar4 - (uVar8 + !bVar12));
              if (local_38 != 4) {
                local_58 = local_34;
                local_5c = local_30;
                *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                local_34 = local_38;
                goto LAB_01318dd0;
              }
              if (uVar10 <= *(uint *)(param_3 + 0x34) &&
                  (uint)(*puVar1 <= uVar9) <= uVar10 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
              }
              uVar2 = *(uint *)(param_3 + 0x28);
              uVar7 = *(uint *)(param_3 + 0x24);
              *puVar1 = uVar9;
              *(uint *)(param_3 + 0x34) = uVar10;
              uVar4 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar2,uVar7);
              if (uVar10 <= uVar4 && (uint)(uVar2 + uVar7 <= uVar9) <= uVar10 - uVar4) {
                uVar7 = uVar9 - uVar2;
              }
              *(uint *)(param_3 + 0x3c) = uVar7;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              goto LAB_01318960;
            }
          }
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          local_5c = 0;
          local_58 = 9;
        }
        else {
          local_58 = local_58 & 0xffffff00 | 7;
        }
      }
      else {
        local_58 = local_58 & 0xffff0000 | uVar2 << 8 | 1;
      }
LAB_01318dac:
      local_34 = 1;
LAB_01318dd0:
      *param_1 = local_34;
      param_1[1] = local_58;
      param_1[2] = local_5c;
      return;
    }
    FUN_01337f28(&local_38,local_34,uVar2,param_3,param_2 + 0x18);
    if (local_38 != 4) goto LAB_01318d64;
  } while( true );
}

