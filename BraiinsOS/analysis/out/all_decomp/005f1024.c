// FUN_005f1024 @ 005f1024 size=2888 calls_out=5 calls_in=2
// strings: 

void FUN_005f1024(int *param_1,int param_2,uint *param_3,uint param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int unaff_lr;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  uVar11 = *param_3;
  uVar14 = param_3[1];
  if (uVar14 < uVar11) goto LAB_005f103c;
  if (*(char *)(param_2 + 0x158) == '\0') {
    local_40 = (uint)(byte)param_3[4];
    cVar8 = '\x01';
    if (local_40 != 0) goto LAB_005f10b4;
    iVar5 = *(int *)(param_2 + 0x28);
    if (iVar5 == 0) goto LAB_005f134c;
LAB_005f10e0:
    uVar6 = *(uint *)(param_2 + 0x150);
    if (uVar6 == 0) goto LAB_005f1450;
    if (*(uint *)(param_2 + 0x14c) < uVar6) {
      pcVar10 = *(code **)(*(int *)(param_2 + 0x2c) + 0x10);
      uVar11 = param_3[2];
      uVar9 = param_3[3];
      iVar5 = iVar5 + (*(int *)(*(int *)(param_2 + 0x2c) + 8) - 1U & 0xfffffff8) + 8;
      (*pcVar10)(&local_34,iVar5,uVar11,uVar9);
      if (local_34 == 0) goto LAB_005f16f4;
      if (local_34 != 1) {
        if (local_30 < uVar14) {
          uVar3 = local_30;
          do {
            while( true ) {
              if (uVar9 <= uVar3) goto LAB_005f1afc;
              uVar4 = *(uint *)(param_2 + 8);
              uVar6 = uVar6 + *(byte *)(param_2 + 0x40 + (uint)*(byte *)(uVar11 + uVar3));
              if (uVar4 <= uVar6) goto LAB_005f1af0;
              uVar6 = *(uint *)(*(int *)(param_2 + 4) + uVar6 * 4);
              if (*(uint *)(param_2 + 0x148) < uVar6) break;
              if (uVar6 == 0) goto LAB_005f1544;
              if (uVar6 <= *(uint *)(param_2 + 0x14c)) {
                uVar4 = *(uint *)(param_2 + 0x14);
                uVar11 = (uVar6 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
                if (uVar4 <= uVar11) goto LAB_005f1b54;
                iVar5 = *(int *)(param_2 + 0x10) + uVar11 * 0xc;
                if (*(int *)(iVar5 + 8) == 0) goto LAB_005f1a80;
                uVar11 = *(uint *)(param_2 + 0x20);
                local_48 = **(uint **)(iVar5 + 4);
                if (uVar11 <= local_48) goto LAB_005f1b60;
                uVar3 = uVar3 + 1;
                uVar11 = *(uint *)(*(int *)(param_2 + 0x1c) + local_48 * 4);
                if (uVar11 <= uVar3) {
                  *param_1 = 1;
                  param_1[1] = uVar3 - uVar11;
                  param_1[2] = uVar3;
                  param_1[3] = local_48;
                  return;
                }
                goto LAB_005f196c;
              }
              (*pcVar10)(&local_34,iVar5,uVar11,uVar9);
              if (local_34 == 0) goto LAB_005f1544;
              uVar4 = local_30;
              if (local_30 <= uVar3) {
                uVar4 = uVar3 + 1;
              }
              uVar3 = uVar4;
              if (uVar14 <= uVar4) goto LAB_005f1544;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar14);
        }
LAB_005f1544:
        *param_1 = 0;
        return;
      }
      goto LAB_005f16d8;
    }
    uVar3 = *(uint *)(param_2 + 0x14);
    uVar6 = uVar6 >> (*(uint *)(param_2 + 0x3c) & 0x1f);
  }
  else {
    cVar8 = *(char *)((int)param_3 + 0x11);
    local_40 = (uint)(byte)param_3[4];
    if (local_40 != 0) {
LAB_005f10b4:
      uVar9 = *(uint *)(param_2 + 0x154);
      if (uVar9 == 0) {
        puVar1 = (undefined1 *)thunk_FUN_016d4a50(2);
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = 0;
          *param_1 = 2;
          param_1[1] = (int)puVar1;
          return;
        }
LAB_005f1a4c:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,2);
      }
      if (*(uint *)(param_2 + 0x14c) < uVar9) {
        local_3c = 0;
LAB_005f1210:
        local_44 = uVar11;
        if (uVar11 < uVar14) {
          uVar3 = param_3[3];
          uVar6 = uVar11;
          if (uVar11 < uVar3) {
            uVar6 = uVar3;
          }
          uVar4 = uVar11;
          do {
            if (uVar6 == uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar6,uVar3,&DAT_01856f48);
            }
            uVar7 = *(uint *)(param_2 + 8);
            uVar9 = uVar9 + *(byte *)(param_2 + 0x40 + (uint)*(byte *)(param_3[2] + uVar4));
            if (uVar7 <= uVar9) goto LAB_005f1a58;
            uVar9 = *(uint *)(*(int *)(param_2 + 4) + uVar9 * 4);
            if (uVar9 <= *(uint *)(param_2 + 0x148)) {
              if (uVar9 == 0) break;
              if (uVar9 <= *(uint *)(param_2 + 0x14c)) {
                uVar7 = (uVar9 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
                if (*(uint *)(param_2 + 0x14) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar7,*(uint *)(param_2 + 0x14),&DAT_01894718);
                }
                iVar5 = *(int *)(param_2 + 0x10) + uVar7 * 0xc;
                if (*(int *)(iVar5 + 8) == 0) goto LAB_005f1a80;
                uVar7 = **(uint **)(iVar5 + 4);
                if (*(uint *)(param_2 + 0x20) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar7,*(uint *)(param_2 + 0x20),&DAT_01894708);
                }
                uVar13 = uVar4 + 1;
                uVar12 = *(uint *)(*(int *)(param_2 + 0x1c) + uVar7 * 4);
                if (uVar13 < uVar12) goto LAB_005f196c;
                uVar12 = (uVar4 - uVar12) + 1;
                if (uVar12 <= uVar11) {
                  local_3c = 1;
                  if (cVar8 != '\0') {
                    *param_1 = 1;
                    param_1[1] = uVar12;
                    param_1[2] = uVar13;
                    param_1[3] = uVar7;
                    return;
                  }
                  param_4 = uVar12;
                  local_44 = uVar13;
                  local_40 = uVar7;
                }
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar14 != uVar4);
        }
        param_1[1] = param_4;
        param_1[2] = local_44;
        *param_1 = local_3c;
        param_1[3] = local_40;
        return;
      }
      uVar3 = *(uint *)(param_2 + 0x14);
      uVar6 = (uVar9 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
      if (uVar3 <= uVar6) goto LAB_005f1ad0;
      iVar5 = *(int *)(param_2 + 0x10) + uVar6 * 0xc;
      if (*(int *)(iVar5 + 8) == 0) goto LAB_005f1a80;
      uVar6 = *(uint *)(param_2 + 0x20);
      local_40 = **(uint **)(iVar5 + 4);
      if (uVar6 <= local_40) goto LAB_005f1ae0;
      uVar6 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
      param_4 = uVar11 - uVar6;
      if (uVar6 <= uVar11) {
        local_3c = 1;
        if (cVar8 != '\0') {
          *param_1 = 1;
          param_1[1] = param_4;
          param_1[2] = uVar11;
          param_1[3] = local_40;
          return;
        }
        goto LAB_005f1210;
      }
      goto LAB_005f196c;
    }
    iVar5 = *(int *)(param_2 + 0x28);
    if (iVar5 != 0) {
      if (cVar8 != '\0') goto LAB_005f10e0;
      uVar6 = *(uint *)(param_2 + 0x150);
      if (uVar6 == 0) goto LAB_005f1594;
      if (*(uint *)(param_2 + 0x14c) < uVar6) {
        local_44 = 0;
        local_4c = 0;
      }
      else {
        uVar9 = (uVar6 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
        if (*(uint *)(param_2 + 0x14) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar9,*(uint *)(param_2 + 0x14),&DAT_01894718);
        }
        iVar2 = *(int *)(param_2 + 0x10) + uVar9 * 0xc;
        if (*(int *)(iVar2 + 8) == 0) goto LAB_005f1a80;
        local_48 = **(uint **)(iVar2 + 4);
        if (*(uint *)(param_2 + 0x20) <= local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_48,*(uint *)(param_2 + 0x20),&DAT_01894708);
        }
        uVar9 = *(uint *)(*(int *)(param_2 + 0x1c) + local_48 * 4);
        local_4c = uVar11 - uVar9;
        if (uVar11 < uVar9) goto LAB_005f196c;
        local_44 = 1;
      }
      uVar13 = param_3[2];
      pcVar10 = *(code **)(*(int *)(param_2 + 0x2c) + 0x10);
      uVar9 = param_3[3];
      uVar7 = *(int *)(*(int *)(param_2 + 0x2c) + 8) - 1U & 0xfffffff8;
      (*pcVar10)(&local_34,iVar5 + uVar7 + 8,uVar13,uVar9);
      if (local_34 == 0) goto LAB_005f16f4;
      if (local_34 != 1) {
        uVar4 = local_30;
LAB_005f1718:
        do {
          uVar3 = uVar4;
          if (uVar14 <= uVar3) {
LAB_005f19a4:
            *param_1 = local_44;
            param_1[1] = local_4c;
            param_1[2] = uVar11;
            param_1[3] = local_48;
            return;
          }
          if (uVar9 <= uVar3) {
LAB_005f1afc:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar3,uVar9,&DAT_01856f48);
          }
          uVar4 = *(uint *)(param_2 + 8);
          uVar6 = uVar6 + *(byte *)(param_2 + 0x40 + (uint)*(byte *)(uVar13 + uVar3));
          if (uVar4 <= uVar6) {
LAB_005f1af0:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar6,uVar4,&DAT_018946f8);
          }
          uVar6 = *(uint *)(*(int *)(param_2 + 4) + uVar6 * 4);
          if (*(uint *)(param_2 + 0x148) < uVar6) {
            uVar4 = uVar3 + 1;
            goto LAB_005f1718;
          }
          if (uVar6 == 0) goto LAB_005f19a4;
          if (*(uint *)(param_2 + 0x14c) < uVar6) {
            (*pcVar10)(&local_34,*(int *)(param_2 + 0x28) + uVar7 + 8,uVar13,uVar9);
            if (local_34 == 0) goto LAB_005f1544;
            uVar4 = local_30;
            if (local_30 <= uVar3) {
              uVar4 = uVar3 + 1;
            }
            goto LAB_005f1718;
          }
          uVar4 = *(uint *)(param_2 + 0x14);
          uVar11 = (uVar6 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
          if (uVar4 <= uVar11) {
LAB_005f1b54:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar11,uVar4,&DAT_01894718);
          }
          iVar5 = *(int *)(param_2 + 0x10) + uVar11 * 0xc;
          if (*(int *)(iVar5 + 8) == 0) goto LAB_005f1a80;
          uVar11 = *(uint *)(param_2 + 0x20);
          local_48 = **(uint **)(iVar5 + 4);
          if (uVar11 <= local_48) {
LAB_005f1b60:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(local_48,uVar11,&DAT_01894708);
          }
          uVar11 = uVar3 + 1;
          uVar3 = *(uint *)(*(int *)(param_2 + 0x1c) + local_48 * 4);
          local_4c = uVar11 - uVar3;
          local_44 = 1;
          uVar4 = uVar11;
        } while (uVar3 <= uVar11);
        goto LAB_005f196c;
      }
LAB_005f16d8:
      param_1[1] = local_30;
      param_1[2] = local_2c;
      param_1[3] = local_28;
LAB_005f16f4:
      *param_1 = local_34;
      return;
    }
    if (cVar8 == '\0') {
      uVar9 = *(uint *)(param_2 + 0x150);
      if (uVar9 == 0) {
LAB_005f1594:
        iVar5 = FUN_005ffdc4();
        *param_1 = 2;
        param_1[1] = iVar5;
        return;
      }
      if (*(uint *)(param_2 + 0x14c) < uVar9) {
        iVar5 = 0;
        local_40 = 0;
LAB_005f1888:
        if (uVar11 < uVar14) {
          uVar13 = param_3[3];
          uVar4 = uVar11;
          if (uVar11 < uVar13) {
            uVar4 = uVar13;
          }
          uVar12 = uVar11;
          do {
            if (uVar4 == uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar4,uVar13,&DAT_01856f48);
            }
            uVar7 = *(uint *)(param_2 + 8);
            uVar9 = uVar9 + *(byte *)(param_2 + 0x40 + (uint)*(byte *)(param_3[2] + uVar12));
            if (uVar7 <= uVar9) {
LAB_005f1a58:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar9,uVar7,&DAT_018946f8);
            }
            uVar9 = *(uint *)(*(int *)(param_2 + 4) + uVar9 * 4);
            if (uVar9 <= *(uint *)(param_2 + 0x148)) {
              if (uVar9 == 0) break;
              if (uVar9 <= *(uint *)(param_2 + 0x14c)) {
                uVar3 = *(uint *)(param_2 + 0x14);
                uVar6 = (uVar9 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
                if (uVar3 <= uVar6) goto LAB_005f1ad0;
                iVar5 = *(int *)(param_2 + 0x10) + uVar6 * 0xc;
                if (*(int *)(iVar5 + 8) == 0) goto LAB_005f1a80;
                uVar6 = *(uint *)(param_2 + 0x20);
                local_40 = **(uint **)(iVar5 + 4);
                if (uVar6 <= local_40) goto LAB_005f1ae0;
                uVar11 = uVar12 + 1;
                uVar6 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
                if (uVar11 < uVar6) goto LAB_005f196c;
                iVar5 = 1;
                unaff_lr = (uVar12 - uVar6) + 1;
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar14 != uVar12);
        }
        *param_1 = iVar5;
        param_1[1] = unaff_lr;
        param_1[2] = uVar11;
        param_1[3] = local_40;
        return;
      }
      uVar3 = *(uint *)(param_2 + 0x14);
      uVar6 = (uVar9 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
      if (uVar3 <= uVar6) goto LAB_005f1ad0;
      iVar5 = *(int *)(param_2 + 0x10) + uVar6 * 0xc;
      if (*(int *)(iVar5 + 8) == 0) goto LAB_005f1a80;
      uVar6 = *(uint *)(param_2 + 0x20);
      local_40 = **(uint **)(iVar5 + 4);
      if (local_40 < uVar6) {
        uVar6 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
        unaff_lr = uVar11 - uVar6;
        if (uVar11 < uVar6) goto LAB_005f196c;
        iVar5 = 1;
        goto LAB_005f1888;
      }
      goto LAB_005f1ae0;
    }
LAB_005f134c:
    uVar6 = *(uint *)(param_2 + 0x150);
    if (uVar6 == 0) {
LAB_005f1450:
      puVar1 = (undefined1 *)thunk_FUN_016d4a50(2);
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 1;
        *param_1 = 2;
        param_1[1] = (int)puVar1;
        return;
      }
      goto LAB_005f1a4c;
    }
    if (*(uint *)(param_2 + 0x14c) < uVar6) {
      if (uVar11 < uVar14) {
        uVar3 = param_3[3];
        uVar9 = uVar11;
        if (uVar11 < uVar3) {
          uVar9 = uVar3;
        }
        do {
          if (uVar9 == uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar9,uVar3,&DAT_01856f48);
          }
          uVar6 = uVar6 + *(byte *)(param_2 + 0x40 + (uint)*(byte *)(param_3[2] + uVar11));
          if (*(uint *)(param_2 + 8) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar6,*(uint *)(param_2 + 8),&DAT_018946f8);
          }
          uVar6 = *(uint *)(*(int *)(param_2 + 4) + uVar6 * 4);
          if (uVar6 <= *(uint *)(param_2 + 0x148)) {
            if (uVar6 == 0) break;
            if (uVar6 <= *(uint *)(param_2 + 0x14c)) {
              uVar3 = *(uint *)(param_2 + 0x14);
              uVar6 = (uVar6 >> (*(uint *)(param_2 + 0x3c) & 0x1f)) - 2;
              if (uVar3 <= uVar6) goto LAB_005f1ad0;
              iVar5 = *(int *)(param_2 + 0x10) + uVar6 * 0xc;
              if (*(int *)(iVar5 + 8) == 0) goto LAB_005f1a80;
              uVar6 = *(uint *)(param_2 + 0x20);
              local_40 = **(uint **)(iVar5 + 4);
              if (uVar6 <= local_40) goto LAB_005f1ae0;
              uVar11 = uVar11 + 1;
              uVar14 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
              if (uVar14 <= uVar11) {
                *param_1 = 1;
                param_1[1] = uVar11 - uVar14;
                param_1[2] = uVar11;
                param_1[3] = local_40;
                return;
              }
              goto LAB_005f196c;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar14 != uVar11);
      }
LAB_005f103c:
      *param_1 = 0;
      return;
    }
    uVar3 = *(uint *)(param_2 + 0x14);
    uVar6 = uVar6 >> (*(uint *)(param_2 + 0x3c) & 0x1f);
  }
  uVar6 = uVar6 - 2;
  if (uVar3 <= uVar6) {
LAB_005f1ad0:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar6,uVar3,&DAT_01894718);
  }
  iVar5 = *(int *)(param_2 + 0x10) + uVar6 * 0xc;
  if (*(int *)(iVar5 + 8) == 0) {
LAB_005f1a80:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_01894728);
  }
  uVar6 = *(uint *)(param_2 + 0x20);
  local_40 = **(uint **)(iVar5 + 4);
  if (uVar6 <= local_40) {
LAB_005f1ae0:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(local_40,uVar6,&DAT_01894708);
  }
  uVar14 = *(uint *)(*(int *)(param_2 + 0x1c) + local_40 * 4);
  if (uVar14 <= uVar11) {
    *param_1 = 1;
    param_1[1] = uVar11 - uVar14;
    param_1[2] = uVar11;
    param_1[3] = local_40;
    return;
  }
LAB_005f196c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018945d8);
}

