// FUN_016a27b8 @ 016a27b8 size=1428 calls_out=12 calls_in=0
// strings: invalid match span

void FUN_016a27b8(int *param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  uint ***pppuVar2;
  uint ***pppuVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  int iVar6;
  uint ***pppuVar7;
  int iVar8;
  int iVar9;
  uint ***pppuVar10;
  uint ***pppuVar11;
  uint ***pppuVar12;
  uint uVar13;
  uint ***pppuVar14;
  code *pcVar15;
  uint ***pppuVar16;
  uint ***pppuVar17;
  undefined4 ****unaff_r10;
  undefined4 ****ppppuVar18;
  bool bVar19;
  bool bVar20;
  int local_60;
  uint ***local_5c;
  uint ***local_58;
  uint ***local_54;
  uint ***local_50;
  uint ***local_4c;
  uint ***local_48;
  uint ***local_44;
  uint ***local_40;
  uint ***local_3c;
  uint ***local_38;
  undefined4 ****local_34;
  uint ***local_30;
  undefined4 ****local_2c;
  code *local_28;
  
  if (1 < *param_4 - 1U) {
    pcVar15 = *(code **)(param_2[0x305] + 0x10);
    pppuVar16 = (uint ***)param_4[3];
    pppuVar10 = (uint ***)param_4[2];
    iVar9 = param_2[0x304] + (*(int *)(param_2[0x305] + 8) - 1U & 0xfffffff8) + 8;
    pppuVar14 = (uint ***)param_4[4];
    pppuVar17 = (uint ***)param_4[5];
    (*pcVar15)(&local_60,iVar9,pppuVar10,pppuVar16,pppuVar14,pppuVar17);
    if (local_60 == 1) {
      iVar5 = *param_2;
      iVar6 = param_2[0x254];
      iVar8 = param_2[1];
      pppuVar7 = (uint ***)(uint)*(byte *)(param_4 + 6);
      pppuVar11 = (uint ***)0x0;
      pppuVar12 = pppuVar14;
      do {
        pppuVar3 = local_58;
        pppuVar2 = local_5c;
        bVar20 = pppuVar16 <= local_58;
        bVar19 = local_58 == pppuVar16;
        local_40 = local_58;
        if (!bVar20 || bVar19) {
          bVar20 = (uint ***)((int)local_58 + 1U) <= pppuVar14;
          bVar19 = pppuVar14 == (uint ***)((int)local_58 + 1U);
        }
        local_44 = pppuVar14;
        if (bVar20 && !bVar19) {
LAB_016a2a14:
          local_30 = (uint ***)FUN_0065fd28;
          local_34 = &local_44;
          local_28 = FUN_012fd02c;
          local_2c = &local_38;
          local_38 = pppuVar16;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
        }
        unaff_r10 = (undefined4 ****)((uint)unaff_r10 & 0xffffff00 | (uint)pppuVar7);
        local_4c = local_58;
        local_60 = 1;
        local_58 = pppuVar10;
        local_54 = pppuVar16;
        local_50 = pppuVar14;
        local_48 = (uint ***)unaff_r10;
        if (iVar6 == 2) {
          if (iVar5 == 2 && iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_004ce464,0x91,&DAT_01d07f54);
          }
          if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d08094);
          }
          FUN_016ab87c(&local_34,param_2 + 0xa2,param_3 + 0x198,&local_60,pppuVar11);
        }
        else {
          FUN_016ab12c(&local_34,param_2 + 0x1f2,&local_60);
        }
        ppppuVar4 = local_2c;
        pppuVar11 = local_30;
        if (local_34 == (undefined4 ****)0x2) {
          if (((uint)local_30 & 1) != 0) goto LAB_016a2ab4;
          if (iVar6 == 2) goto LAB_016a27f0;
          goto LAB_016a2a80;
        }
        if (((uint)local_34 & 1) != 0) {
          bVar20 = pppuVar16 <= pppuVar17;
          bVar19 = pppuVar17 == pppuVar16;
          if (!bVar20 || bVar19) {
            bVar20 = (uint ***)((int)pppuVar17 + 1U) <= local_2c;
            bVar19 = local_2c == (undefined4 ****)((int)pppuVar17 + 1U);
          }
          local_44 = (uint ***)local_2c;
          local_40 = pppuVar17;
          if (bVar20 && !bVar19) goto LAB_016a2a14;
          local_60 = 2;
          local_50 = (uint ***)local_2c;
          local_5c = local_30;
          local_4c = pppuVar17;
          local_48 = pppuVar7;
          if (iVar6 == 2) {
            if (iVar5 == 2 && iVar8 == 0) {
              local_58 = pppuVar10;
              local_54 = pppuVar16;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_004ce464,0x91,&DAT_01d07f34);
            }
            if (*(int *)(param_3 + 0x248) == 2) {
              local_58 = pppuVar10;
              local_54 = pppuVar16;
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d08064);
            }
            uVar13 = 0;
            if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
              uVar13 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
            }
            local_58 = pppuVar10;
            local_54 = pppuVar16;
            FUN_016845b8(&local_34,param_2,param_3 + 0xd8,&local_60);
            ppppuVar18 = local_2c;
            if (local_34 == (undefined4 ****)0x2) {
              ppppuVar18 = unaff_r10;
            }
            else if ((((uint)local_34 & uVar13 & 1) == 0) ||
                    (FUN_01686d30(&local_34,&local_60,local_30,local_2c,local_2c,param_2,
                                  param_3 + 0xd8), local_34 != (undefined4 ****)0x2))
            goto LAB_016a2bf8;
            FUN_016c2dec(local_30);
            local_34 = (undefined4 ****)0x2;
            local_2c = ppppuVar18;
          }
          else {
            iVar9 = param_2[0x1f1];
            cVar1 = *(char *)((int)param_2 + 0x7c5);
            local_58 = pppuVar10;
            local_54 = pppuVar16;
            FUN_0167efb0(&local_34,param_2 + 0x144,&local_60);
            if (local_34 == (undefined4 ****)0x2) {
LAB_016a2bbc:
              FUN_016c2dec(local_30);
              local_34 = (undefined4 ****)0x2;
              local_2c = unaff_r10;
            }
            else if ((((uint)local_34 & 1) != 0 && (char)iVar9 != '\0') && (cVar1 != '\0')) {
              FUN_01686b80(&local_44,&local_60,local_30,local_2c,local_2c,param_2 + 0x144);
              if (local_44 == (uint ***)0x2) {
                local_30 = local_40;
                unaff_r10 = local_2c;
                goto LAB_016a2bbc;
              }
              local_34 = (undefined4 ****)local_44;
              local_2c = (undefined4 ****)local_3c;
            }
          }
LAB_016a2bf8:
          if (local_34 != (undefined4 ****)0x2) {
            if (((uint)local_34 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_004ce324,0xcf,&DAT_01d07cac);
            }
            if (local_2c < ppppuVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
            }
            *param_1 = 1;
            param_1[1] = (int)ppppuVar4;
            param_1[2] = (int)local_2c;
            param_1[3] = (int)pppuVar11;
            return;
          }
          goto LAB_016a2ab4;
        }
        if (pppuVar17 <= pppuVar12) break;
        pppuVar12 = (uint ***)((int)pppuVar2 + 1);
        if ((uint ***)0xfffffffe < pppuVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d07f44);
        }
        (*pcVar15)(&local_60,iVar9,pppuVar10,pppuVar16,pppuVar12,pppuVar17);
        pppuVar11 = pppuVar3;
      } while (local_60 != 0);
    }
    *param_1 = 0;
    return;
  }
  if (param_2[0x254] == 2) {
    iVar5 = *param_2;
    iVar8 = param_2[1];
LAB_016a27f0:
    if (iVar5 == 2 && iVar8 == 0) goto LAB_016a2ab4;
    if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08054);
    }
    FUN_0169e7e8(&local_60,param_2,param_3 + 0xd8,param_4);
  }
  else {
LAB_016a2a80:
    FUN_0169e238(&local_60,param_2 + 0x144,param_4);
  }
  if (local_60 != 2) {
    param_1[2] = (int)local_58;
    *param_1 = local_60;
    param_1[1] = (int)local_5c;
    param_1[3] = (int)local_54;
    return;
  }
  FUN_016c2dec(local_5c);
LAB_016a2ab4:
  FUN_0169e4e0(param_1,param_2,param_3,param_4);
  return;
}

