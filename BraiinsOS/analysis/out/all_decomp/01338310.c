// FUN_01338310 @ 01338310 size=1424 calls_out=4 calls_in=2
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf | assertion failed: limit >= self.limit

void FUN_01338310(int *param_1,char param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  if (param_2 == '\0') {
    FUN_0132e394(&local_40,param_3);
    if (local_40 != 4) {
      *param_1 = local_40;
      param_1[1] = local_3c;
      param_1[2] = local_38;
      return;
    }
    iVar4 = param_4[2];
    if (iVar4 == *param_4) {
      FUN_0132f568(param_4);
    }
    *(int *)(param_4[1] + iVar4 * 4) = local_3c;
    param_4[2] = iVar4 + 1;
    *param_1 = 4;
    return;
  }
  if (param_2 != '\x02') {
    *(char *)((int)param_1 + 5) = param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 1;
    return;
  }
  iVar4 = param_3[0xe];
  uVar1 = param_3[0xf] - iVar4;
  if (param_3[0xf] == iVar4) {
LAB_01338348:
    FUN_0132d5a8(&local_40,param_3);
    if (local_40 == 1) {
LAB_01338364:
      param_1[1] = local_38;
      param_1[2] = local_34;
      *param_1 = local_3c;
      return;
    }
    uVar5 = param_3[0xe];
    uVar8 = local_38;
    uVar10 = local_34;
  }
  else {
    pcVar6 = (char *)(param_3[8] + iVar4);
    uVar8 = (uint)*pcVar6;
    if ((int)uVar8 < 0) {
      if (uVar1 < 2) goto LAB_01338348;
      uVar10 = (uint)pcVar6[1];
      if ((int)uVar10 < 0) {
        if (uVar1 < 10) goto LAB_01338348;
        uVar5 = 3;
        uVar8 = uVar8 & 0x7f | (uVar10 & 0x7f) << 7 | ((int)pcVar6[2] & 0x7fU) << 0xe;
        uVar10 = 0;
        if (0x7fffffff < (uint)(int)pcVar6[2]) {
          uVar8 = uVar8 | ((int)pcVar6[3] & 0x7fU) << 0x15;
          uVar5 = 4;
          if (0x7fffffff < (uint)(int)pcVar6[3]) {
            uVar5 = (uint)pcVar6[4];
            uVar8 = uVar8 | uVar5 << 0x1c;
            uVar10 = (uVar5 & 0x7f) >> 4;
            if ((int)uVar5 < 0) {
              uVar10 = uVar10 | ((int)pcVar6[5] & 0x7fU) << 3;
              uVar5 = 6;
              if (0x7fffffff < (uint)(int)pcVar6[5]) {
                uVar10 = uVar10 | ((int)pcVar6[6] & 0x7fU) << 10;
                uVar5 = 7;
                if (0x7fffffff < (uint)(int)pcVar6[6]) {
                  uVar10 = uVar10 | ((int)pcVar6[7] & 0x7fU) << 0x11;
                  uVar5 = 8;
                  if (0x7fffffff < (uint)(int)pcVar6[7]) {
                    uVar10 = uVar10 | ((int)pcVar6[8] & 0x7fU) << 0x18;
                    uVar5 = 9;
                    if (pcVar6[8] < 0) {
                      if (pcVar6[9] < 0) {
                        local_38 = CONCAT31(local_38._1_3_,4);
                        local_3c = 1;
                        goto LAB_01338364;
                      }
                      uVar10 = uVar10 | (int)pcVar6[9] << 0x1f;
                      uVar5 = 10;
                    }
                  }
                }
              }
            }
            else {
              uVar5 = 5;
            }
          }
        }
      }
      else {
        uVar8 = uVar8 & 0x7f | uVar10 << 7;
        uVar10 = ((int)uVar10 >> 0x1f) << 7 | uVar10 >> 0x19;
        uVar5 = 2;
      }
    }
    else {
      uVar10 = (int)uVar8 >> 0x1f;
      uVar5 = 1;
    }
    if (uVar1 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                   &DAT_01890e80);
    }
    uVar5 = uVar5 + iVar4;
    param_3[0xe] = uVar5;
  }
  puVar11 = (uint *)(param_3 + 10);
  uVar12 = *puVar11;
  uVar2 = uVar12 + uVar5;
  uVar9 = param_3[0xb] + (uint)CARRY4(uVar12,uVar5);
  uVar1 = uVar2 + uVar8;
  uVar3 = uVar9 + uVar10 + (uint)CARRY4(uVar2,uVar8);
  if (!CARRY4(uVar9,uVar10) && !CARRY4(uVar9 + uVar10,(uint)CARRY4(uVar2,uVar8))) {
    puVar7 = (uint *)(param_3 + 0xc);
    uVar10 = *puVar7;
    uVar8 = param_3[0xd];
    if (uVar3 < uVar8 || uVar8 - uVar3 < (uint)(uVar1 <= uVar10)) {
      uVar2 = param_3[9];
      uVar9 = param_3[0xb] + (uint)CARRY4(uVar12,uVar2);
      *puVar7 = uVar1;
      param_3[0xd] = uVar3;
      if (uVar3 <= uVar9 && (uint)(uVar12 + uVar2 <= uVar1) <= uVar3 - uVar9) {
        uVar2 = uVar1 - uVar12;
      }
      param_3[0xf] = uVar2;
      do {
        if (uVar5 == uVar2) {
          uVar5 = *puVar7;
          uVar3 = param_3[0xd];
          uVar1 = *puVar11;
          iVar4 = param_3[0xb];
          if (uVar5 == uVar1 + uVar2 && uVar3 == iVar4 + (uint)CARRY4(uVar1,uVar2))
          goto LAB_013386d0;
          uVar2 = param_3[9];
          bVar14 = CARRY4(uVar1,uVar2);
          uVar1 = uVar1 + uVar2;
          param_3[8] = 1;
          iVar4 = iVar4 + (uint)bVar14;
          param_3[0xe] = 0;
          param_3[0xf] = 0;
          param_3[9] = 0;
          *puVar11 = uVar1;
          param_3[0xb] = iVar4;
          if (*param_3 != 0) goto LAB_013386d0;
          iVar13 = param_3[1];
          if (iVar13 == 0) {
            iVar13 = param_3[3];
            (**(code **)(iVar13 + 0x30))(param_3[2]);
            (**(code **)(iVar13 + 0x2c))(&local_4c,param_3[2]);
          }
          else {
            uVar9 = param_3[3] + uVar2;
            if ((uint)param_3[4] < param_3[3] + uVar2) {
              uVar9 = param_3[4];
            }
            param_3[3] = uVar9;
            uVar2 = param_3[4];
            if ((uint)param_3[4] <= uVar9) {
              local_3c = param_3[2];
              local_34 = param_3[5];
              local_38 = 0;
              local_40 = iVar13;
              (**(code **)(param_3[7] + 0x24))(&local_30,param_3[6],&local_40);
              param_3[3] = 0;
              param_3[4] = local_38;
              param_3[5] = local_34;
              if ((char)local_30 != '\x04') {
                local_48 = local_30;
                local_44 = local_2c;
                local_4c = 1;
                goto LAB_0133863c;
              }
              uVar9 = 0;
              uVar2 = local_38;
            }
            local_44 = uVar2 - uVar9;
            local_48 = iVar13 + uVar9;
            local_4c = 0;
          }
LAB_0133863c:
          if (local_4c != 0) {
            *param_1 = 0;
            param_1[2] = local_44;
            *(char *)(param_1 + 1) = (char)local_48;
            *(char *)((int)param_1 + 7) = (char)((uint)local_48 >> 0x18);
            *(short *)((int)param_1 + 5) = (short)((uint)local_48 >> 8);
            return;
          }
          param_3[8] = local_48;
          param_3[9] = local_44;
          uVar9 = iVar4 + (uint)CARRY4(uVar1,local_44);
          uVar2 = local_44;
          if (uVar3 <= uVar9 && (uint)(uVar1 + local_44 <= uVar5) <= uVar3 - uVar9) {
            uVar2 = uVar5 - uVar1;
          }
          param_3[0xf] = uVar2;
          if (uVar2 == 0) {
LAB_013386d0:
            if (uVar8 <= uVar3 && (uint)(uVar5 <= uVar10) <= uVar8 - uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
            }
            *param_1 = 4;
            uVar5 = param_3[9];
            *puVar7 = uVar10;
            param_3[0xd] = uVar8;
            uVar2 = iVar4 + (uint)CARRY4(uVar1,uVar5);
            if (uVar8 <= uVar2 && (uint)(uVar1 + uVar5 <= uVar10) <= uVar8 - uVar2) {
              uVar5 = uVar10 - uVar1;
            }
            param_3[0xf] = uVar5;
            return;
          }
        }
        FUN_0132e394(&local_40,param_3);
        iVar4 = local_3c;
        if (local_40 != 4) {
          *param_1 = local_40;
          param_1[1] = local_3c;
          param_1[2] = local_38;
          return;
        }
        iVar13 = param_4[2];
        if (iVar13 == *param_4) {
          FUN_0132f568(param_4);
        }
        uVar5 = param_3[0xe];
        uVar2 = param_3[0xf];
        *(int *)(param_4[1] + iVar13 * 4) = iVar4;
        param_4[2] = iVar13 + 1;
      } while( true );
    }
  }
  param_1[1] = 9;
  param_1[2] = 0;
  *param_1 = 1;
  return;
}

