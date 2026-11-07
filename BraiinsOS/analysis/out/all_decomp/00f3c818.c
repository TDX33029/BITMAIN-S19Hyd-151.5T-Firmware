// FUN_00f3c818 @ 00f3c818 size=656 calls_out=4 calls_in=7
// strings: 

void FUN_00f3c818(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = 0;
    do {
      iVar8 = iVar2 + 1;
      puVar5 = (uint *)(iVar1 + iVar2 * 0x18);
      iVar2 = 4;
      if (1 < *puVar5) {
        iVar2 = *puVar5 - 2;
      }
      if (3 < iVar2 - 1U) {
        if (iVar2 == 0) {
          uVar3 = puVar5[1];
joined_r0x00f3c8bc:
          if (uVar3 == 0) goto LAB_00f3c854;
          uVar3 = puVar5[2];
        }
        else {
          if (iVar2 == 5) {
            FUN_00f3c818(puVar5 + 1);
            uVar3 = puVar5[1];
            goto joined_r0x00f3c8bc;
          }
          uVar3 = puVar5[1];
          if (uVar3 == 0) {
            local_2c = 0;
          }
          else {
            local_2c = puVar5[3];
            local_40 = puVar5[2];
            local_38 = 0;
            local_48 = 0;
            local_44 = uVar3;
            local_34 = uVar3;
            local_30 = local_40;
          }
          local_4c = (uint)(uVar3 != 0);
          local_3c = local_4c;
          while (local_2c != 0) {
            local_2c = local_2c - 1;
            if (local_4c != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018af368);
            }
            uVar3 = local_44;
            uVar7 = local_40;
            if (local_48 == 0) {
              for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                uVar3 = *(uint *)(uVar3 + 0x198);
              }
              uVar7 = 0;
              uVar9 = 0;
              local_4c = 1;
              if (*(short *)(uVar3 + 0x192) == 0) goto LAB_00f3c98c;
LAB_00f3c94c:
              uVar6 = uVar3;
            }
            else {
              uVar3 = local_48;
              uVar9 = local_44;
              if (local_40 < *(ushort *)(local_48 + 0x192)) goto LAB_00f3c94c;
LAB_00f3c98c:
              do {
                uVar6 = *(uint *)(uVar3 + 0x108);
                if (uVar6 == 0) {
                  thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_018af358);
                }
                uVar7 = (uint)*(ushort *)(uVar3 + 400);
                thunk_FUN_016d3fb4();
                uVar9 = uVar9 + 1;
                uVar3 = uVar6;
              } while (*(ushort *)(uVar6 + 0x192) <= uVar7);
            }
            if (uVar9 == 0) {
              local_40 = uVar7 + 1;
              local_48 = uVar6;
            }
            else {
              puVar5 = (uint *)(uVar6 + uVar7 * 4 + 0x19c);
              do {
                local_48 = *puVar5;
                uVar9 = uVar9 - 1;
                puVar5 = (uint *)(local_48 + 0x198);
              } while (uVar9 != 0);
              local_40 = 0;
            }
            iVar2 = uVar6 + uVar7 * 0xc;
            local_44 = 0;
            local_28 = &local_4c;
            if (*(int *)(iVar2 + 0x10c) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x110));
            }
            FUN_00f46ad4(uVar6 + uVar7 * 0x18);
          }
          local_2c = 0;
          if ((local_4c & 1) == 0) goto LAB_00f3c854;
          uVar3 = local_48;
          uVar9 = local_44;
          uVar7 = local_40;
          if (local_48 == 0) {
            for (; uVar3 = uVar9, uVar7 != 0; uVar7 = uVar7 - 1) {
              uVar9 = *(uint *)(uVar3 + 0x198);
            }
          }
          uVar7 = uVar3;
          uVar9 = *(uint *)(uVar3 + 0x108);
          if (*(uint *)(uVar3 + 0x108) != 0) {
            do {
              uVar3 = uVar9;
              thunk_FUN_016d3fb4(uVar7);
              uVar7 = uVar3;
              uVar9 = *(uint *)(uVar3 + 0x108);
            } while (*(uint *)(uVar3 + 0x108) != 0);
          }
        }
        thunk_FUN_016d3fb4(uVar3);
      }
LAB_00f3c854:
      iVar2 = iVar8;
    } while (iVar8 != iVar4);
  }
  return;
}

