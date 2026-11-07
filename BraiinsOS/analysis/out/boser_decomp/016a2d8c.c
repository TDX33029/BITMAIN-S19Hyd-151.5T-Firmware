// FUN_016a2d8c @ 016a2d8c size=2104 calls_out=10 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_016a2d8c(uint *param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  uint ***pppuVar2;
  uint ***pppuVar3;
  int iVar4;
  uint ***pppuVar5;
  undefined4 ****ppppuVar6;
  int iVar7;
  uint ***pppuVar8;
  int iVar9;
  int iVar10;
  uint ***pppuVar11;
  uint ***pppuVar12;
  code *pcVar13;
  uint ***pppuVar14;
  uint ***pppuVar15;
  undefined4 ****unaff_r8;
  undefined4 ****ppppuVar16;
  uint uVar17;
  uint ***pppuVar18;
  bool bVar19;
  bool bVar20;
  uint ***local_60;
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
    pppuVar8 = (uint ***)param_4[2];
    pppuVar15 = (uint ***)param_4[3];
    pppuVar14 = (uint ***)param_4[4];
    pppuVar18 = (uint ***)param_4[5];
    pcVar13 = *(code **)(param_2[0x305] + 0x10);
    iVar7 = param_2[0x304] + (*(int *)(param_2[0x305] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar13)(&local_60,iVar7,pppuVar8,pppuVar15,pppuVar14,pppuVar18);
    if (local_60 == (uint ***)0x1) {
      iVar10 = *param_2;
      iVar4 = param_2[0x254];
      iVar9 = param_2[1];
      pppuVar5 = (uint ***)(uint)*(byte *)(param_4 + 6);
      pppuVar11 = (uint ***)0x0;
      pppuVar12 = pppuVar14;
      do {
        pppuVar3 = local_58;
        pppuVar2 = local_5c;
        bVar20 = pppuVar15 <= local_58;
        bVar19 = local_58 == pppuVar15;
        local_40 = local_58;
        if (!bVar20 || bVar19) {
          bVar20 = (uint ***)((int)local_58 + 1U) <= pppuVar14;
          bVar19 = pppuVar14 == (uint ***)((int)local_58 + 1U);
        }
        local_44 = pppuVar14;
        if (bVar20 && !bVar19) {
LAB_016a30e8:
          local_30 = (uint ***)FUN_0065fd28;
          local_34 = &local_44;
          local_28 = FUN_012fd02c;
          local_2c = &local_38;
          local_38 = pppuVar15;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
        }
        unaff_r8 = (undefined4 ****)((uint)unaff_r8 & 0xffffff00 | (uint)pppuVar5);
        local_60 = (uint ***)0x1;
        local_4c = local_58;
        local_58 = pppuVar8;
        local_54 = pppuVar15;
        local_50 = pppuVar14;
        local_48 = (uint ***)unaff_r8;
        if (iVar4 == 2) {
          if (iVar10 == 2 && iVar9 == 0) {
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
        if (local_34 == (undefined4 ****)0x2) {
          if (((uint)local_30 & 1) != 0) {
            FUN_0169e4e0(&local_60,param_2,param_3,param_4);
            if (local_60 != (uint ***)0x0) {
              param_1[1] = (uint)local_54;
              param_1[2] = (uint)local_58;
            }
            *param_1 = (uint)(local_60 != (uint ***)0x0);
            return;
          }
          if (iVar4 == 2) {
            if (iVar10 == 2 && iVar9 == 0) goto LAB_016a32cc;
            if (*(int *)(param_3 + 0x248) == 2) goto LAB_016a33f4;
            uVar17 = 0;
            if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
              uVar17 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
            }
            FUN_016845b8(&local_60,param_2,param_3 + 0xd8,param_4);
            if (local_60 == (uint ***)0x2) goto LAB_016a32c4;
            if (((uint)local_60 & uVar17 & 1) == 0) {
LAB_016a31b4:
              *param_1 = (uint)local_60;
              param_1[1] = (uint)local_5c;
              param_1[2] = (uint)local_58;
              return;
            }
            FUN_01686d30(&local_34,param_4,local_5c,local_58,local_58,param_2,param_3 + 0xd8);
            if (local_34 != (undefined4 ****)0x2) {
              local_60 = (uint ***)local_34;
              local_5c = local_30;
              local_58 = (uint ***)local_2c;
              goto LAB_016a31b4;
            }
          }
          else {
            iVar7 = param_2[0x1f1];
            cVar1 = *(char *)((int)param_2 + 0x7c5);
            FUN_0167efb0(&local_60,param_2 + 0x144,param_4);
            if (local_60 == (uint ***)0x2) {
LAB_016a32c4:
              local_30 = local_5c;
            }
            else {
              if ((((uint)local_60 & 1) == 0) || ((char)iVar7 == '\0' || cVar1 == '\0')) {
LAB_016a3368:
                *param_1 = (uint)local_60;
                param_1[1] = (uint)local_5c;
                param_1[2] = (uint)local_58;
                return;
              }
              FUN_01686b80(&local_34,param_4,local_5c,local_58,local_58,param_2 + 0x144);
              if (local_34 != (undefined4 ****)0x2) {
                local_60 = (uint ***)local_34;
                local_5c = local_30;
                local_58 = (uint ***)local_2c;
                goto LAB_016a3368;
              }
            }
          }
          FUN_016c2dec(local_30);
LAB_016a32cc:
          FUN_0169e4e0(&local_60,param_2,param_3,param_4);
          if (local_60 != (uint ***)0x0) {
            param_1[1] = (uint)local_54;
            param_1[2] = (uint)local_58;
          }
          *param_1 = (uint)(local_60 != (uint ***)0x0);
          return;
        }
        if (((uint)local_34 & 1) != 0) {
          bVar20 = pppuVar15 <= pppuVar18;
          bVar19 = pppuVar18 == pppuVar15;
          if (!bVar20 || bVar19) {
            bVar20 = (uint ***)((int)pppuVar18 + 1U) <= local_2c;
            bVar19 = local_2c == (undefined4 ****)((int)pppuVar18 + 1U);
          }
          local_44 = (uint ***)local_2c;
          local_40 = pppuVar18;
          if (bVar20 && !bVar19) goto LAB_016a30e8;
          local_50 = (uint ***)local_2c;
          local_5c = local_30;
          local_60 = (uint ***)0x2;
          local_4c = pppuVar18;
          local_48 = pppuVar5;
          if (iVar4 == 2) {
            if (iVar10 == 2 && iVar9 == 0) {
              local_58 = pppuVar8;
              local_54 = pppuVar15;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_004ce464,0x91,&DAT_01d07f34);
            }
            local_58 = pppuVar8;
            local_54 = pppuVar15;
            if (*(int *)(param_3 + 0x248) == 2) goto LAB_016a33f4;
            uVar17 = 0;
            if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
              uVar17 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
            }
            FUN_016845b8(&local_34,param_2,param_3 + 0xd8,&local_60);
            ppppuVar16 = local_2c;
            if (local_34 != (undefined4 ****)0x2) {
              ppppuVar6 = local_34;
              unaff_r8 = local_2c;
              if (((uint)local_34 & uVar17 & 1) == 0) goto LAB_016a338c;
              FUN_01686d30(&local_34,&local_60,local_30,local_2c,local_2c,param_2,param_3 + 0xd8);
              if (local_34 != (undefined4 ****)0x2) {
                ppppuVar6 = local_34;
                local_3c = (uint ***)local_2c;
                goto LAB_016a3588;
              }
              goto LAB_016a3514;
            }
          }
          else {
            iVar7 = param_2[0x1f1];
            cVar1 = *(char *)((int)param_2 + 0x7c5);
            local_58 = pppuVar8;
            local_54 = pppuVar15;
            FUN_0167efb0(&local_34,param_2 + 0x144,&local_60);
            ppppuVar16 = local_2c;
            if (local_34 != (undefined4 ****)0x2) {
              ppppuVar6 = local_34;
              unaff_r8 = local_2c;
              if ((((uint)local_34 & 1) == 0) || ((char)iVar7 == '\0' || cVar1 == '\0'))
              goto LAB_016a338c;
              FUN_01686b80(&local_44,&local_60,local_30,local_2c,local_2c,param_2 + 0x144);
              local_30 = local_40;
              if (local_44 != (uint ***)0x2) {
                ppppuVar6 = (undefined4 ****)local_44;
LAB_016a3588:
                unaff_r8 = (undefined4 ****)local_3c;
                goto LAB_016a338c;
              }
LAB_016a3514:
              unaff_r8 = ppppuVar16;
            }
          }
          local_30 = (uint ***)FUN_016c2dec(local_30);
          ppppuVar6 = (undefined4 ****)(uint ***)0x2;
LAB_016a338c:
          if (ppppuVar6 == (undefined4 ****)0x2) {
            FUN_0169e4e0(&local_34,param_2,param_3,param_4);
            if (local_34 != (undefined4 ****)0x0) {
              param_1[1] = (uint)local_28;
              param_1[2] = (uint)local_2c;
            }
            *param_1 = (uint)(local_34 != (undefined4 ****)0x0);
            return;
          }
          if (((uint)ppppuVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_004ce324,0xcf,&DAT_01d07c9c);
          }
          *param_1 = 1;
          param_1[1] = (uint)local_30;
          param_1[2] = (uint)unaff_r8;
          return;
        }
        if (pppuVar18 <= pppuVar12) break;
        pppuVar12 = (uint ***)((int)pppuVar2 + 1);
        if ((uint ***)0xfffffffe < pppuVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d07f44);
        }
        (*pcVar13)(&local_60,iVar7,pppuVar8,pppuVar15,pppuVar12,pppuVar18);
        pppuVar11 = pppuVar3;
      } while (local_60 != (uint ***)0x0);
    }
    *param_1 = 0;
    return;
  }
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) goto LAB_016a3024;
    if (*(int *)(param_3 + 0x248) == 2) {
LAB_016a33f4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08064);
    }
    uVar17 = 0;
    if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
      uVar17 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
    }
    FUN_016845b8(&local_60,param_2,param_3 + 0xd8,param_4);
    if (local_60 == (uint ***)0x2) goto LAB_016a301c;
    if (((uint)local_60 & uVar17 & 1) == 0) {
LAB_016a2e28:
      *param_1 = (uint)local_60;
      param_1[1] = (uint)local_5c;
      param_1[2] = (uint)local_58;
      return;
    }
    FUN_01686d30(&local_34,param_4,local_5c,local_58,local_58,param_2,param_3 + 0xd8);
    if (local_34 != (undefined4 ****)0x2) {
      local_60 = (uint ***)local_34;
      local_5c = local_30;
      local_58 = (uint ***)local_2c;
      goto LAB_016a2e28;
    }
  }
  else {
    iVar7 = param_2[0x1f1];
    cVar1 = *(char *)((int)param_2 + 0x7c5);
    FUN_0167efb0(&local_60,param_2 + 0x144,param_4);
    if (local_60 == (uint ***)0x2) {
LAB_016a301c:
      local_30 = local_5c;
    }
    else {
      if ((((uint)local_60 & 1) == 0) || ((char)iVar7 == '\0' || cVar1 == '\0')) {
LAB_016a3080:
        *param_1 = (uint)local_60;
        param_1[1] = (uint)local_5c;
        param_1[2] = (uint)local_58;
        return;
      }
      FUN_01686b80(&local_34,param_4,local_5c,local_58,local_58,param_2 + 0x144);
      if (local_34 != (undefined4 ****)0x2) {
        local_60 = (uint ***)local_34;
        local_5c = local_30;
        local_58 = (uint ***)local_2c;
        goto LAB_016a3080;
      }
    }
  }
  FUN_016c2dec(local_30);
LAB_016a3024:
  FUN_0169e4e0(&local_60,param_2,param_3,param_4);
  if (local_60 != (uint ***)0x0) {
    param_1[1] = (uint)local_54;
    param_1[2] = (uint)local_58;
  }
  *param_1 = (uint)(local_60 != (uint ***)0x0);
  return;
}

