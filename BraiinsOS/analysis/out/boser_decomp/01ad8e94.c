// FUN_01ad8e94 @ 01ad8e94 size=2176 calls_out=10 calls_in=2
// strings: assertion failed: edge.height == self.node.height - 1

void FUN_01ad8e94(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int local_3b84;
  int local_3b80;
  int local_3b7c;
  uint local_3b78;
  int *local_3b74;
  int local_3b70;
  int local_3b6c;
  int local_3b68;
  int *local_3b64;
  int local_3b60;
  uint local_3b5c;
  int *local_3b58;
  undefined1 auStack_3b50 [2520];
  undefined1 auStack_3178 [2516];
  int local_27a4;
  int iStack_27a0;
  int local_279c;
  undefined1 auStack_2798 [2512];
  int local_1dc8;
  int local_1dc4;
  uint local_1dc0;
  int *local_1dbc [629];
  int local_13e8;
  uint local_13e4;
  int local_13e0;
  uint local_13dc;
  undefined4 local_13d8;
  undefined4 local_13d4;
  undefined4 local_13d0;
  undefined1 auStack_13c8 [2512];
  int local_9f8;
  uint local_9f4;
  int *local_9f0;
  
  if (*param_2 == 0) {
    local_1dc4 = param_3[1];
    iVar14 = param_3[2];
    iVar11 = 0;
    local_3b70 = *param_3;
  }
  else {
    iVar12 = param_3[1];
    iVar14 = param_3[2];
    FUN_01ad4d04(&local_1dc8,*param_2,param_2[1],iVar12,iVar14);
    if (local_1dc8 == 0) {
      FUN_0134bd64(*param_3,iVar12);
      param_2 = local_1dbc[0];
      goto LAB_01ad8fb4;
    }
    local_3b70 = *param_3;
    local_3b78 = local_1dc0;
    local_3b74 = local_1dbc[0];
    iVar11 = local_1dc4;
    local_1dc4 = iVar12;
  }
  if (local_3b70 != -0x80000000) {
    local_3b58 = local_3b74;
    local_3b5c = local_3b78;
    local_3b6c = local_1dc4;
    local_3b68 = iVar14;
    local_3b64 = param_2;
    local_3b60 = iVar11;
    if (iVar11 == 0) {
      iVar11 = FUN_01adb68c();
      *(undefined4 *)(iVar11 + 0x6bf0) = 0;
      *(undefined2 *)(iVar11 + 0x6c7a) = 0;
      *param_2 = iVar11;
      param_2[1] = 0;
      *(undefined2 *)(iVar11 + 0x6c7a) = 1;
      *(int *)(iVar11 + 0x6bf4) = local_3b70;
      *(int *)(iVar11 + 0x6bf8) = local_3b6c;
      *(int *)(iVar11 + 0x6bfc) = local_3b68;
      FUN_01bed4e2(iVar11,param_4,0x9d0);
    }
    else if (*(ushort *)(iVar11 + 0x6c7a) < 0xb) {
      FUN_01ad38f8(&local_1dc8,&local_3b60,&local_3b70,param_4);
    }
    else {
      uVar15 = 4;
      bVar2 = false;
      if (&SUB_00000004 < local_3b74) {
        if (local_3b74 == (int *)&DAT_00000005) {
          uVar15 = 5;
        }
        else {
          if (local_3b74 == (int *)&DAT_00000006) {
            uVar15 = 5;
            local_3b74 = (int *)0x0;
          }
          else {
            local_3b74 = (int *)((int)local_3b74 + -7);
            uVar15 = 6;
          }
          bVar2 = true;
        }
      }
      local_3b84 = FUN_01adb68c();
      *(undefined4 *)(local_3b84 + 0x6bf0) = 0;
      *(undefined2 *)(local_3b84 + 0x6c7a) = 0;
      piVar7 = (int *)(iVar11 + 0x6bf4 + uVar15 * 0xc);
      iVar14 = *piVar7;
      uVar13 = ~uVar15 + (uint)*(ushort *)(iVar11 + 0x6c7a);
      local_3b80 = piVar7[1];
      uVar8 = piVar7[2];
      *(short *)(local_3b84 + 0x6c7a) = (short)uVar13;
      FUN_01bed4e2(auStack_3b50,uVar15 * 0x9d0 + iVar11,0x9d0);
      if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar13,0xb,&DAT_01d2ff10);
      }
      FUN_01bed4e2(local_3b84 + 0x6bf4,iVar11 + 0x6bf4 + (uVar15 + 1) * 0xc,uVar13 * 0xc);
      FUN_01bed4e2(local_3b84,(uVar15 + 1) * 0x9d0 + iVar11,uVar13 * 0x9d0);
      *(short *)(iVar11 + 0x6c7a) = (short)uVar15;
      FUN_01bed4e2((uint)&local_13d8 | 4,auStack_3b50,0x9d0);
      local_1dc8 = iVar14;
      local_1dc4 = local_3b80;
      local_1dc0 = uVar8;
      FUN_01bed4e2(local_1dbc,&local_13d8,0x9d4);
      local_13dc = 0;
      local_13e4 = local_3b78;
      if (bVar2) {
        local_9f4 = 0;
        local_9f8 = local_3b84;
      }
      else {
        local_9f8 = iVar11;
        local_9f4 = local_3b78;
      }
      local_13e8 = iVar11;
      local_13e0 = local_3b84;
      local_9f0 = local_3b74;
      FUN_01ad38f8(&local_13d8,&local_9f8,&local_3b70,param_4);
      FUN_01bed4e2(auStack_3178,local_1dbc,0x9d4);
      if (iVar14 != -0x80000000) {
        FUN_01bed4e2(auStack_3b50,auStack_3178,0x9d4);
        local_3b7c = *(int *)(iVar11 + 0x6bf0);
        if (local_3b7c == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          do {
            uVar13 = (uint)*(ushort *)(iVar11 + 0x6c78);
            iStack_27a0 = local_3b80;
            local_27a4 = iVar14;
            local_279c = uVar8;
            FUN_01bed4e2(auStack_2798,(uint)auStack_3b50 | 4,0x9d0);
            if (uVar15 != local_3b78) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("assertion failed: edge.height == self.node.height - 1",0x35,
                           &DAT_01d2ff30);
            }
            puVar9 = (ushort *)(local_3b7c + 0x6c7a);
            uVar1 = *puVar9;
            if (uVar1 < 0xb) {
              FUN_01ad39e0(local_3b7c,uVar13,&local_27a4,auStack_2798,local_3b84);
              goto LAB_01ad9640;
            }
            uVar8 = 4;
            piVar7 = &local_13e8;
            if (4 < uVar13) {
              if (uVar13 == 5) {
                uVar8 = 5;
              }
              else {
                if (uVar13 == 6) {
                  uVar13 = 0;
                  uVar8 = 5;
                }
                else {
                  uVar13 = uVar13 - 7;
                  uVar8 = 6;
                }
                piVar7 = &local_13e0;
              }
            }
            iVar11 = FUN_01adb64c();
            *(undefined4 *)(iVar11 + 0x6bf0) = 0;
            *(undefined2 *)(iVar11 + 0x6c7a) = 0;
            puVar5 = (undefined4 *)(local_3b7c + 0x6bf4 + uVar8 * 0xc);
            uVar3 = *puVar5;
            uVar15 = ~uVar8 + (uint)*puVar9;
            uVar4 = puVar5[2];
            uVar6 = puVar5[1];
            *(short *)(iVar11 + 0x6c7a) = (short)uVar15;
            FUN_01bed4e2(&local_9f8,uVar8 * 0x9d0 + local_3b7c,0x9d0);
            if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar15,0xb,&DAT_01d2ff10);
            }
            FUN_01bed4e2(iVar11 + 0x6bf4,local_3b7c + 0x6bf4 + (uVar8 + 1) * 0xc,uVar15 * 0xc);
            FUN_01bed4e2(iVar11,(uVar8 + 1) * 0x9d0 + local_3b7c,uVar15 * 0x9d0);
            *puVar9 = (ushort)uVar8;
            local_13d8 = uVar3;
            local_13d4 = uVar6;
            local_13d0 = uVar4;
            FUN_01bed4e2(auStack_13c8,&local_9f8,0x9d0);
            uVar10 = (uint)*(ushort *)(iVar11 + 0x6c7a);
            iVar14 = uVar10 + 1;
            if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,iVar14,0xc,&DAT_01d2ff20);
            }
            if (uVar1 - uVar8 != iVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
            }
            uVar15 = local_3b78 + 1;
            FUN_01bed4e2(iVar11 + 0x6c80,local_3b7c + uVar8 * 4 + 0x6c84,iVar14 * 4);
            uVar8 = 0;
            do {
              iVar14 = *(int *)(iVar11 + 0x6c80 + uVar8 * 4);
              *(int *)(iVar14 + 0x6bf0) = iVar11;
              *(short *)(iVar14 + 0x6c78) = (short)uVar8;
              if (uVar10 <= uVar8) break;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= uVar10);
            FUN_01bed4e2(&local_1dc8,&local_13d8,0x9e0);
            local_13e8 = local_3b7c;
            local_13e4 = uVar15;
            local_13e0 = iVar11;
            local_13dc = uVar15;
            FUN_01ad39e0(*piVar7,uVar13,&local_27a4,auStack_2798,local_3b84);
            uVar8 = local_1dc0;
            iVar14 = local_1dc8;
            local_3b80 = local_1dc4;
            FUN_01bed4e2(auStack_3178,local_1dbc,0x9d4);
            iVar11 = local_13e8;
            if (iVar14 == -0x80000000) goto LAB_01ad9640;
            local_3b84 = local_13e0;
            FUN_01bed4e2(auStack_3b50,auStack_3178,0x9d4);
            local_3b7c = *(int *)(iVar11 + 0x6bf0);
            local_3b78 = uVar15;
          } while (local_3b7c != 0);
        }
        local_1dc4 = local_3b80;
        local_1dc8 = iVar14;
        local_1dc0 = uVar8;
        FUN_01bed4e2(local_1dbc,auStack_3b50,0x9d4);
        iVar12 = *param_2;
        local_13e0 = local_3b84;
        local_13e8 = iVar11;
        local_13e4 = local_3b78;
        local_13dc = uVar15;
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fee0);
        }
        uVar13 = param_2[1];
        iVar11 = FUN_01adb64c();
        *(undefined4 *)(iVar11 + 0x6bf0) = 0;
        *(int *)(iVar11 + 0x6c80) = iVar12;
        *(undefined2 *)(iVar11 + 0x6c7a) = 0;
        if (0xfffffffe < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d305e8);
        }
        uVar10 = (uint)auStack_3b50 | 4;
        *(undefined2 *)(iVar12 + 0x6c78) = 0;
        *(int *)(iVar12 + 0x6bf0) = iVar11;
        *param_2 = iVar11;
        param_2[1] = uVar13 + 1;
        FUN_01bed4e2(&local_13d8,uVar10,0x9d0);
        if (uVar15 != uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
        }
        *(int *)(iVar11 + 0x6bf8) = local_3b80;
        *(int *)(iVar11 + 0x6bf4) = iVar14;
        *(uint *)(iVar11 + 0x6bfc) = uVar8;
        *(undefined2 *)(iVar11 + 0x6c7a) = 1;
        FUN_01bed4e2(iVar11,uVar10,0x9d0);
        *(int *)(iVar11 + 0x6c84) = local_3b84;
        *(int *)(local_3b84 + 0x6bf0) = iVar11;
        *(undefined2 *)(local_3b84 + 0x6c78) = 1;
      }
    }
LAB_01ad9640:
    iVar11 = param_2[2];
    *(undefined4 *)(param_1 + 0x9c4) = 0x80000001;
    param_2[2] = iVar11 + 1;
    return;
  }
LAB_01ad8fb4:
  iVar11 = (int)param_2 * 0x9d0 + local_1dc4;
  FUN_01bed4e2(param_1,iVar11,0x9d0);
  FUN_01bed4e2(iVar11,param_4,0x9d0);
  return;
}

