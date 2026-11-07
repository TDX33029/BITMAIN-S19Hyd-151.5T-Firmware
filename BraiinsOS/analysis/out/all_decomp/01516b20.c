// FUN_01516b20 @ 01516b20 size=1148 calls_out=7 calls_in=1
// strings: 

void FUN_01516b20(int *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined *unaff_r9;
  undefined *unaff_r10;
  int iVar12;
  bool bVar13;
  bool bVar14;
  int local_4c;
  undefined *local_48;
  undefined *local_44;
  int local_40;
  undefined *local_3c;
  int local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  
  FUN_0152d84c(&local_34,&DAT_018a76a0,param_2);
  if ((char)local_34 == '\x18') {
    puVar8 = (undefined *)param_2[1];
    uVar11 = param_2[2];
    if (local_30 <= puVar8 + -uVar11) {
      puVar5 = local_30 + uVar11;
      param_2[2] = (int)puVar5;
      if ((CARRY4(uVar11,(uint)local_30)) || (puVar8 < puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar11,puVar5,puVar8,&DAT_018a78f8);
      }
      puVar8 = (undefined *)0x4;
      local_4c = *param_2 + uVar11;
      local_44 = (undefined *)0x0;
      local_48 = local_30;
      local_38 = 0;
      local_3c = (undefined *)0x4;
      local_40 = 0;
      if (local_30 != (undefined *)0x0) {
        iVar9 = 8;
        do {
          iVar1 = local_38;
          FUN_015409a4(&local_34,&local_4c);
          puVar2 = local_28;
          puVar7 = local_2c;
          puVar5 = local_30;
          if (local_34 == (undefined *)0x1) {
            unaff_r9 = local_28;
            unaff_r10 = local_2c;
            puVar8 = local_30;
LAB_01516ce0:
            puVar5 = local_3c;
            for (iVar9 = 0; iVar1 != iVar9; iVar9 = iVar9 + 1) {
              if (*(int *)(puVar5 + iVar9 * 0x10) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(puVar5 + iVar9 * 0x10 + 4));
              }
            }
            if (local_40 != 0) {
              thunk_FUN_016d3fb4(puVar5);
            }
            local_34 = puVar8;
            goto LAB_01516b88;
          }
          if ((uint)((int)local_48 - (int)local_44) < 4) {
            unaff_r10 = &DAT_00410f5a;
            if (local_30 != (undefined *)0x0) {
              thunk_FUN_016d3fb4(local_2c);
            }
            puVar8 = (undefined *)0xc;
            unaff_r9 = (undefined *)0x3;
            goto LAB_01516ce0;
          }
          puVar6 = local_44 + 4;
          bVar14 = (undefined *)0xfffffffa < local_44;
          bVar13 = local_44 == (undefined *)0xfffffffb;
          if (local_44 < (undefined *)0xfffffffc) {
            bVar14 = local_48 <= puVar6;
            bVar13 = puVar6 == local_48;
          }
          if (bVar14 && !bVar13) {
            local_44 = puVar6;
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c();
          }
          uVar11 = *(uint *)(local_44 + local_4c);
          unaff_r9 = (undefined *)
                     (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                     uVar11 >> 0x18);
          if (local_30 == (undefined *)0x80000000) {
            unaff_r10 = local_28;
            puVar8 = local_2c;
            local_44 = puVar6;
            goto LAB_01516ce0;
          }
          local_44 = puVar6;
          if (iVar1 == local_40) {
            FUN_0154e184(&local_40);
            puVar8 = local_3c;
          }
          *(undefined **)(puVar8 + iVar1 * 0x10) = puVar5;
          local_38 = iVar1 + 1;
          *(undefined **)((int)(puVar8 + iVar1 * 0x10) + 4) = puVar7;
          puVar4 = (undefined4 *)(puVar8 + iVar9);
          *puVar4 = puVar2;
          iVar9 = iVar9 + 0x10;
          puVar4[1] = unaff_r9;
        } while (local_44 < local_48);
      }
      iVar1 = local_38;
      puVar8 = local_3c;
      iVar9 = local_40;
      FUN_0152d84c(&local_34,&DAT_018a7670,param_2);
      puVar5 = (undefined *)((uint)local_34 & 0xff);
      if (puVar5 == (undefined *)0x18) {
        puVar5 = (undefined *)param_2[1];
        uVar11 = param_2[2];
        if (local_30 <= puVar5 + -uVar11) {
          puVar7 = local_30 + uVar11;
          param_2[2] = (int)puVar7;
          if ((CARRY4(uVar11,(uint)local_30)) || (puVar5 < puVar7)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar11,puVar7,puVar5,&DAT_018a78f8);
          }
          iVar10 = 0;
          local_48 = local_30;
          local_4c = *param_2 + uVar11;
          local_44 = (undefined *)0x0;
          local_38 = 0;
          local_3c = (undefined *)0x4;
          local_40 = 0;
          iVar12 = 0;
          puVar5 = (undefined *)0x4;
          if (local_30 != (undefined *)0x0) {
            puVar5 = (undefined *)0x4;
            iVar12 = 0;
            do {
              iVar10 = local_38;
              FUN_015406c4(&local_34,&local_4c);
              puVar3 = local_28;
              puVar6 = local_2c;
              puVar2 = local_30;
              puVar7 = local_3c;
              if (local_34 != (undefined *)0x0) {
                puVar4 = (undefined4 *)(local_3c + 4);
                for (; iVar10 != 0; iVar10 = iVar10 + -1) {
                  if (puVar4[-1] != 0) {
                    thunk_FUN_016d3fb4(*puVar4);
                  }
                  puVar4 = puVar4 + 3;
                }
                uVar11 = (uint)local_30 >> 8;
                puVar5 = local_30;
                if (local_40 != 0) {
                  thunk_FUN_016d3fb4(puVar7);
                }
                goto LAB_01516db0;
              }
              if (iVar10 == local_40) {
                FUN_0154e248(&local_40);
                puVar5 = local_3c;
              }
              iVar10 = iVar10 + 1;
              puVar4 = (undefined4 *)(puVar5 + iVar12);
              *puVar4 = puVar2;
              iVar12 = iVar12 + 0xc;
              puVar4[1] = puVar6;
              puVar4[2] = puVar3;
              local_38 = iVar10;
            } while (local_44 < local_48);
            iVar12 = local_40;
            puVar5 = local_3c;
          }
          *param_1 = iVar9;
          param_1[3] = iVar12;
          param_1[4] = (int)puVar5;
          param_1[5] = iVar10;
          param_1[1] = (int)puVar8;
          param_1[2] = iVar1;
          return;
        }
        uVar11 = 0;
        local_28 = (undefined *)0x0;
        puVar5 = (undefined *)0xb;
        local_2c = puVar8;
      }
      else {
        uVar11 = (uint)local_34 >> 8;
        local_28 = local_2c;
        local_2c = local_30;
      }
LAB_01516db0:
      *param_1 = -0x80000000;
      param_1[1] = (uint)puVar5 & 0xff | uVar11 << 8;
      param_1[2] = (int)local_2c;
      param_1[3] = (int)local_28;
      for (iVar10 = 0; iVar1 != iVar10; iVar10 = iVar10 + 1) {
        if (*(int *)(puVar8 + iVar10 * 0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(puVar8 + iVar10 * 0x10 + 4));
        }
      }
      if (iVar9 != 0) {
        thunk_FUN_016d3fb4(puVar8);
      }
      return;
    }
    local_34 = (undefined *)0xb;
  }
  else {
    unaff_r9 = local_2c;
    unaff_r10 = local_30;
  }
LAB_01516b88:
  param_1[2] = (int)unaff_r10;
  *param_1 = -0x80000000;
  param_1[1] = (int)local_34;
  param_1[3] = (int)unaff_r9;
  return;
}

