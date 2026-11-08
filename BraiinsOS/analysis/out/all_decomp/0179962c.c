// FUN_0179962c @ 0179962c size=1232 calls_out=7 calls_in=2
// strings: 

void FUN_0179962c(int param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  code *pcVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  if (param_3 < &DAT_00000007) {
    if (*(uint *)(param_1 + 0xd8) < 7) {
      FUN_01804c94(param_1 + 0x84c,param_3,*(undefined4 *)(param_1 + 0xd0));
      uVar6 = extraout_r1;
    }
    else {
      FUN_01804d94(param_1 + 0x84c,param_3);
      uVar6 = extraout_r1_00;
    }
    lVar16 = CONCAT44(uVar6,1);
    goto LAB_01799860;
  }
  uVar7 = param_2 - *(int *)(param_1 + 0x86c);
  iVar11 = param_1 + 0x868;
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0xfc);
  iVar2 = *(int *)(param_1 + 0x860);
  *(int *)(param_1 + 0x914) = iVar2;
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (*(int *)(param_1 + 0x884) + 0x180U < uVar7) {
    uVar5 = (uVar7 - *(int *)(param_1 + 0x884)) - 0x180;
    if (uVar5 < 0xc1) {
      iVar8 = uVar7 - uVar5;
    }
    else {
      iVar8 = uVar7 - 0xc0;
    }
    *(int *)(param_1 + 0x884) = iVar8;
  }
  if (*(uint *)(param_1 + 0x878) < *(uint *)(param_1 + 0x874)) {
    iVar8 = 1;
  }
  else if (*(int *)(param_1 + 0x91c) == 0) {
    iVar8 = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 0x91c) + 0x6c) == 0) {
    iVar8 = 2;
  }
  else {
    iVar8 = 3;
  }
  iVar9 = *(int *)(param_1 + 0x864);
  pcVar13 = *(code **)(param_1 + 0x160);
  uVar6 = *(undefined4 *)(iVar2 + 0x11ec);
  uVar12 = *(undefined4 *)(iVar2 + 0x11e8);
  *(undefined4 *)(iVar9 + 0x11f0) = *(undefined4 *)(iVar2 + 0x11f0);
  *(undefined4 *)(iVar9 + 0x11e8) = uVar12;
  *(undefined4 *)(iVar9 + 0x11ec) = uVar6;
  puVar3 = *(undefined4 **)(param_1 + 0x850);
  if (puVar3 < *(undefined4 **)(param_1 + 0x858)) {
    if (pcVar13 != (code *)0x0) {
LAB_0179985c:
      lVar16 = CONCAT44(puVar3,0xffffffd7);
      goto LAB_01799860;
    }
    iVar2 = FUN_01804e64(param_1 + 0x84c,iVar11,param_1 + 0x2f4,iVar9 + 0x11e8,
                         *(undefined4 *)(param_1 + 0x140),param_2,param_3);
  }
  else if (*(int *)(param_1 + 0x110) == 1) {
    puVar3 = &local_38;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    if (pcVar13 != (code *)0x0) goto LAB_0179985c;
    local_38 = *(undefined4 *)(param_1 + 0x844);
    local_28 = *(undefined4 *)(param_1 + 0x848);
    lVar16 = FUN_01803758(param_1 + 800,puVar3,param_1 + 0x110,param_2,param_3);
    if (0xffffff88 < (uint)lVar16) goto LAB_01799860;
    iVar2 = FUN_01804e64(puVar3,iVar11,param_1 + 0x2f4,*(int *)(param_1 + 0x864) + 0x11e8,
                         *(undefined4 *)(param_1 + 0x140),param_2,param_3);
  }
  else if (pcVar13 == (code *)0x0) {
    uVar7 = *(int *)(param_1 + 0xd8) - 3;
    bVar14 = uVar7 == 2;
    if (uVar7 < 3) {
      bVar14 = *(int *)(param_1 + 0x140) == 1;
    }
    if (bVar14) {
      pcVar13 = (code *)(&PTR_FUN_018bc198)[iVar8 * 3 + uVar7];
    }
    else {
      pcVar13 = (code *)(&PTR_FUN_018bc0f8)[iVar8 * 10 + *(int *)(param_1 + 0xd8)];
    }
    *(undefined4 *)(param_1 + 0x93c) = 0;
    iVar2 = (*pcVar13)(iVar11,param_1 + 0x2f4,iVar9 + 0x11e8,param_2,param_3);
  }
  else {
    uVar15 = (*pcVar13)(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0xec4),
                        *(undefined4 *)(param_1 + 0xec8),param_2,param_3,0,0,
                        *(undefined4 *)(param_1 + 0xe8),1 << (*(uint *)(param_1 + 0xc0) & 0xff));
    uVar5 = (uint)((ulonglong)uVar15 >> 0x20);
    uVar7 = (uint)uVar15;
    if ((*(uint *)(param_1 + 0xec8) < uVar7) || (uVar7 == 0)) {
LAB_0179997c:
      uVar7 = 0xffffff96;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xec4);
      iVar2 = (uVar7 + 0xfffffff) * 0x10;
      uVar5 = *(uint *)(iVar9 + (uVar7 + 0xfffffff) * 0x10) | *(uint *)(iVar9 + iVar2 + 8);
      if (uVar5 == 0) {
        if (uVar7 < 0xffffff89) {
LAB_01799814:
          local_30 = 0;
          iVar8 = 0;
          iVar11 = 0;
          iVar2 = iVar9;
          do {
            iVar10 = iVar2 + 0x10;
            iVar11 = iVar11 + *(int *)(iVar2 + 4);
            iVar8 = iVar8 + *(int *)(iVar2 + 8);
            iVar2 = iVar10;
          } while (iVar10 != iVar9 + uVar7 * 0x10);
          puVar4 = (undefined1 *)(iVar11 + iVar8);
          local_38 = local_30;
          local_34 = local_30;
          if (puVar4 <= param_3) {
LAB_01799a74:
            local_30 = 0;
            local_38 = local_30;
            local_34 = local_30;
            uVar15 = FUN_01799034(param_1,&local_38,iVar9,uVar7,param_2,param_3,
                                  *(undefined4 *)(param_1 + 0x168));
            puVar4 = (undefined1 *)((ulonglong)uVar15 >> 0x20);
            if ((uint)uVar15 < 0xffffff89) {
              lVar16 = ZEXT48(puVar4) << 0x20;
              *(undefined4 *)(param_1 + 0x93c) = 0;
              goto LAB_01799860;
            }
          }
          lVar16 = CONCAT44(puVar4,0xffffff95);
          goto LAB_01799860;
        }
      }
      else {
        if (*(uint *)(param_1 + 0xec8) == uVar7) goto LAB_0179997c;
        iVar2 = iVar2 + 0x10;
        uVar1 = uVar7 + 1;
        bVar14 = uVar7 == 0xffffff87;
        *(undefined4 *)(iVar9 + iVar2) = 0;
        iVar9 = iVar9 + iVar2;
        *(undefined4 *)(iVar9 + 4) = 0;
        *(undefined4 *)(iVar9 + 8) = 0;
        *(undefined4 *)(iVar9 + 0xc) = 0;
        uVar7 = uVar1;
        if (uVar1 < 0xffffff88 || bVar14) {
          iVar9 = *(int *)(param_1 + 0xec4);
          if (uVar1 != 0) goto LAB_01799814;
          goto LAB_01799a74;
        }
      }
    }
    lVar16 = CONCAT44(uVar5,uVar7);
    if (*(int *)(param_1 + 0x158) == 0) goto LAB_01799860;
    uVar7 = *(int *)(param_1 + 0xd8) - 3;
    bVar14 = uVar7 == 2;
    if (uVar7 < 3) {
      bVar14 = *(int *)(param_1 + 0x140) == 1;
    }
    if (bVar14) {
      pcVar13 = (code *)(&PTR_FUN_018bc198)[iVar8 * 3 + uVar7];
    }
    else {
      pcVar13 = (code *)(&PTR_FUN_018bc0f8)[iVar8 * 10 + *(int *)(param_1 + 0xd8)];
    }
    *(undefined4 *)(param_1 + 0x93c) = 0;
    iVar2 = (*pcVar13)(iVar11,param_1 + 0x2f4,*(int *)(param_1 + 0x864) + 0x11e8,param_2,param_3);
  }
  FUN_016dd1aa(*(undefined4 *)(param_1 + 0x300),param_3 + (param_2 - iVar2),iVar2);
  lVar16 = (ulonglong)extraout_r1_01 << 0x20;
  *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + iVar2;
LAB_01799860:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar16,(int)((ulonglong)lVar16 >> 0x20),local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

