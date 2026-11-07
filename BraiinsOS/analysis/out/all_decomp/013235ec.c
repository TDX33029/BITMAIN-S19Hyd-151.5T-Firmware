// FUN_013235ec @ 013235ec size=1476 calls_out=10 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013235ec(uint *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  char *pcVar11;
  uint local_58;
  uint local_54;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  
  puVar10 = (uint *)(param_3 + 0x30);
LAB_0132365c:
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
      uVar1 = local_30 & 0xff;
      if (local_38 != 4) {
        *(undefined1 *)((int)param_1 + 0xb) = local_30._3_1_;
        *(undefined2 *)((int)param_1 + 9) = local_30._1_2_;
        *(undefined1 *)(param_1 + 2) = (undefined1)local_30;
        *param_1 = local_38;
        param_1[1] = local_34;
        return;
      }
      if (local_34 != 1) break;
      if (uVar1 != 0) {
LAB_01323a78:
        *(undefined1 *)((int)param_1 + 5) = (undefined1)local_30;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 1;
        return;
      }
      FUN_0132e394(&local_38,param_3);
      if (local_38 != 4) goto LAB_01323ab0;
      *param_2 = 1;
      param_2[1] = local_34;
    }
    if (local_34 == 2) {
      if (uVar1 != 0) goto LAB_01323a78;
      FUN_0132e394(&local_38,param_3);
      if (local_38 != 4) goto LAB_01323ab0;
      param_2[2] = 1;
      param_2[3] = local_34;
      goto LAB_0132365c;
    }
    if (local_34 == 3) {
      if (uVar1 == 2) {
        uVar1 = *(uint *)(param_3 + 0x40);
        if (uVar1 < *(uint *)(param_3 + 0x44)) {
          puVar9 = (undefined4 *)param_2[4];
          *(undefined1 *)(param_2 + 5) = 1;
          *(uint *)(param_3 + 0x40) = uVar1 + 1;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x18);
            if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x18);
            }
            *puVar9 = 0;
            puVar9[3] = 0;
            puVar9[1] = 8;
            puVar9[2] = 0;
            puVar9[4] = 0;
            puVar9[5] = 0;
            param_2[4] = puVar9;
            iVar2 = *(int *)(param_3 + 0x38);
            uVar1 = *(int *)(param_3 + 0x3c) - iVar2;
            if (uVar1 == 0) goto LAB_01323870;
LAB_013237a8:
            pcVar11 = (char *)(*(int *)(param_3 + 0x20) + iVar2);
            uVar5 = (uint)*pcVar11;
            if ((int)uVar5 < 0) {
              if (uVar1 < 2) goto LAB_01323870;
              uVar6 = (uint)pcVar11[1];
              if ((int)uVar6 < 0) {
                if (uVar1 < 10) goto LAB_01323870;
                uVar8 = 0;
                uVar5 = uVar5 & 0x7f | (uVar6 & 0x7f) << 7 | ((int)pcVar11[2] & 0x7fU) << 0xe;
                uVar6 = 3;
                if (0x7fffffff < (uint)(int)pcVar11[2]) {
                  uVar5 = uVar5 | ((int)pcVar11[3] & 0x7fU) << 0x15;
                  uVar6 = 4;
                  if (0x7fffffff < (uint)(int)pcVar11[3]) {
                    uVar6 = (uint)pcVar11[4];
                    uVar5 = uVar5 | uVar6 << 0x1c;
                    uVar8 = (uVar6 & 0x7f) >> 4;
                    if ((int)uVar6 < 0) {
                      uVar8 = uVar8 | ((int)pcVar11[5] & 0x7fU) << 3;
                      uVar6 = 6;
                      if (0x7fffffff < (uint)(int)pcVar11[5]) {
                        uVar8 = uVar8 | ((int)pcVar11[6] & 0x7fU) << 10;
                        uVar6 = 7;
                        if (0x7fffffff < (uint)(int)pcVar11[6]) {
                          uVar8 = uVar8 | ((int)pcVar11[7] & 0x7fU) << 0x11;
                          uVar6 = 8;
                          if (0x7fffffff < (uint)(int)pcVar11[7]) {
                            uVar8 = uVar8 | ((int)pcVar11[8] & 0x7fU) << 0x18;
                            uVar6 = 9;
                            if (0x7fffffff < (uint)(int)pcVar11[8]) {
                              if (pcVar11[9] < 0) {
                                local_30 = CONCAT31(local_30._1_3_,4);
                                local_54 = local_30;
                                local_58 = local_2c;
                                *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                                goto LAB_01323afc;
                              }
                              uVar8 = uVar8 | (int)pcVar11[9] << 0x1f;
                              uVar6 = 10;
                            }
                          }
                        }
                      }
                    }
                    else {
                      uVar6 = 5;
                    }
                  }
                }
              }
              else {
                uVar5 = uVar5 & 0x7f | uVar6 << 7;
                uVar8 = ((int)uVar6 >> 0x1f) << 7 | uVar6 >> 0x19;
                uVar6 = 2;
              }
            }
            else {
              uVar8 = (int)uVar5 >> 0x1f;
              uVar6 = 1;
            }
            if (uVar1 < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",
                           0x44,&DAT_01890e80);
            }
            uVar6 = uVar6 + iVar2;
            *(uint *)(param_3 + 0x38) = uVar6;
          }
          else {
            puVar9[3] = 0;
            FUN_0133497c(puVar9[4]);
            iVar2 = *(int *)(param_3 + 0x38);
            uVar1 = *(int *)(param_3 + 0x3c) - iVar2;
            if (uVar1 != 0) goto LAB_013237a8;
LAB_01323870:
            FUN_0132d5a8(&local_38,param_3);
            if (local_38 != 0) {
              local_54 = local_30;
              local_58 = local_2c;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              if (local_34 != 4) goto LAB_01323b24;
              goto LAB_0132365c;
            }
            uVar6 = *(uint *)(param_3 + 0x38);
            uVar5 = local_30;
            uVar8 = local_2c;
          }
          uVar3 = *(uint *)(param_3 + 0x28);
          uVar7 = uVar3 + uVar6;
          uVar4 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar3,uVar6);
          uVar1 = uVar7 + uVar5;
          uVar6 = uVar4 + uVar8 + (uint)CARRY4(uVar7,uVar5);
          if (!CARRY4(uVar4,uVar8) && !CARRY4(uVar4 + uVar8,(uint)CARRY4(uVar7,uVar5))) {
            uVar5 = *puVar10;
            uVar8 = *(uint *)(param_3 + 0x34);
            if (uVar6 < uVar8 || uVar8 - uVar6 < (uint)(uVar1 <= uVar5)) {
              uVar7 = *(uint *)(param_3 + 0x24);
              *puVar10 = uVar1;
              *(uint *)(param_3 + 0x34) = uVar6;
              uVar4 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar3,uVar7);
              if (uVar6 <= uVar4 && (uint)(uVar3 + uVar7 <= uVar1) <= uVar6 - uVar4) {
                uVar7 = uVar1 - uVar3;
              }
              *(uint *)(param_3 + 0x3c) = uVar7;
              FUN_01300da4(&local_38,puVar9,param_3);
              if (local_38 != 4) {
                local_54 = local_34;
                local_58 = local_30;
                *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                local_34 = local_38;
                goto LAB_01323b24;
              }
              if (uVar8 <= *(uint *)(param_3 + 0x34) &&
                  (uint)(*puVar10 <= uVar5) <= uVar8 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
              }
              uVar3 = *(uint *)(param_3 + 0x24);
              uVar1 = *(uint *)(param_3 + 0x28);
              *puVar10 = uVar5;
              *(uint *)(param_3 + 0x34) = uVar8;
              uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar1,uVar3);
              if (uVar8 <= uVar6 && (uint)(uVar1 + uVar3 <= uVar5) <= uVar8 - uVar6) {
                uVar3 = uVar5 - uVar1;
              }
              *(uint *)(param_3 + 0x3c) = uVar3;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              goto LAB_0132365c;
            }
          }
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          local_58 = 0;
          local_54 = 9;
        }
        else {
          local_54 = local_54 & 0xffffff00 | 7;
        }
      }
      else {
        local_54 = local_54 & 0xffff0000 | uVar1 << 8 | 1;
      }
LAB_01323afc:
      local_34 = 1;
LAB_01323b24:
      *param_1 = local_34;
      param_1[1] = local_54;
      param_1[2] = local_58;
      return;
    }
    FUN_01337f28(&local_38,local_34,uVar1,param_3,param_2 + 6);
    if (local_38 != 4) {
LAB_01323ab0:
      param_1[1] = local_34;
      *param_1 = local_38;
      param_1[2] = local_30;
      return;
    }
  } while( true );
}

