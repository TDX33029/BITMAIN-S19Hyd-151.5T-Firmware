// FUN_01520114 @ 01520114 size=860 calls_out=14 calls_in=0
// strings: 

void FUN_01520114(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint local_3c;
  undefined1 *local_38;
  uint local_34;
  uint local_30;
  undefined1 *local_2c;
  uint local_28;
  undefined4 *local_24;
  
  iVar1 = FUN_0173b2e0(0x3ca,0);
  if (iVar1 != 0) {
    iVar2 = FUN_0173bce8();
    if ((iVar2 == 1) && (iVar2 = FUN_017400fc(iVar1,0x3dd), iVar2 == 1)) {
      local_30 = 0;
      iVar2 = FUN_0173bd84(iVar1,&local_30);
      uVar9 = local_30;
      if (iVar2 == 1) {
        FUN_01739f80(iVar1);
        if (uVar9 == 0) goto LAB_015201cc;
        local_30 = FUN_01739fe0(uVar9);
        if (local_30 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_015f3600(&DAT_00568c80,&local_30,&DAT_0033d89f,&DAT_01857738);
        }
        FUN_0155e294(&local_30,0x4a0,uVar9);
        if (local_30 == 0x80000001) {
          FUN_01739ee4(uVar9);
        }
        else {
          if (local_30 != 0x80000000) {
            if (local_28 != 0) {
              puVar8 = local_2c;
              do {
                *puVar8 = 0;
                local_28 = local_28 + -1;
                puVar8 = puVar8 + 1;
              } while (local_28 != 0);
            }
            local_28 = 0;
            puVar8 = local_2c;
            for (uVar6 = local_30; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            if ((local_30 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(local_2c);
            }
          }
          FUN_0155e294(&local_3c,0x4a0,uVar9);
          FUN_01739ee4(uVar9);
          if (local_3c != 0x80000001) {
            puVar3 = (undefined4 *)thunk_FUN_016d4a50(8);
            if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,8);
            }
            *puVar3 = &DAT_0040b0e8;
            puVar3[1] = uVar9;
            if ((int)local_34 < 0) {
              uVar4 = 0;
LAB_0152033c:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar4,local_34);
            }
            if (local_34 == 0) {
              uVar9 = 0;
              uVar6 = 1;
            }
            else {
              uVar6 = thunk_FUN_016d4a50(local_34);
              if (uVar6 == 0) {
                uVar4 = 1;
                goto LAB_0152033c;
              }
              uVar9 = local_34;
            }
            FUN_016dd1aa(uVar6,local_38,local_34);
            local_28 = local_34;
            local_30 = uVar9;
            local_2c = (undefined1 *)uVar6;
            local_24 = puVar3;
            puVar5 = (uint *)thunk_FUN_016d4a50(0x10);
            if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x10);
            }
            *puVar5 = local_30;
            puVar5[1] = (uint)local_2c;
            puVar5[2] = local_28;
            puVar5[3] = (uint)local_24;
            *param_1 = 0x80000029;
            param_1[1] = puVar5;
            param_1[2] = &DAT_018a782c;
            if (local_3c != 0x80000000) {
              uVar9 = local_3c;
              puVar8 = local_38;
              if (local_34 != 0) {
                puVar7 = local_38;
                do {
                  *puVar7 = 0;
                  local_34 = local_34 - 1;
                  puVar7 = puVar7 + 1;
                } while (local_34 != 0);
              }
              for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
              }
              if ((local_3c & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(local_38);
              }
            }
            return;
          }
        }
        puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xd);
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4();
        }
        param_1[1] = 0xd;
        param_1[2] = puVar3;
        param_1[3] = 0xd;
        *(undefined1 *)(puVar3 + 3) = 100;
        puVar3[2] = 0x656c6961;
        puVar3[1] = 0x66207370;
        *puVar3 = 0x61636e65;
        *param_1 = 0x80000020;
        FUN_01739ee4(uVar9);
        return;
      }
    }
    FUN_01739f80(iVar1);
  }
LAB_015201cc:
  iVar1 = thunk_FUN_016d4a50(0x15);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x15);
  }
  FUN_016dd1aa(iVar1,&DAT_0040b100,0x15);
  param_1[2] = iVar1;
  *param_1 = 0x80000020;
  param_1[1] = 0x15;
  param_1[3] = 0x15;
  return;
}

