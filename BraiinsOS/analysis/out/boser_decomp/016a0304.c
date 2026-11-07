// FUN_016a0304 @ 016a0304 size=2120 calls_out=12 calls_in=0
// strings: invalid match span

/* WARNING: Type propagation algorithm not settling */

void FUN_016a0304(uint ****param_1,int *param_2,int param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  uint ****ppppuVar3;
  uint ****ppppuVar4;
  uint ****ppppuVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint ****ppppuVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint ****ppppuVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint ****ppppuVar17;
  uint ****ppppuVar18;
  code *pcVar19;
  uint ****ppppuVar20;
  uint ****ppppuVar21;
  uint uVar22;
  uint ****ppppuVar23;
  uint ****ppppuVar24;
  bool bVar25;
  bool bVar26;
  uint local_9c;
  uint ****local_78;
  uint ****local_74;
  uint ****local_70;
  uint ****local_6c;
  uint ****local_68;
  uint ****local_64;
  uint local_60;
  uint *****local_5c;
  uint ****local_58;
  uint ****local_54;
  uint ****local_50;
  uint ****local_4c;
  uint ****local_48;
  uint local_44;
  uint ****local_40;
  uint ****local_3c;
  uint ****local_38;
  uint ****local_34;
  uint ****local_30;
  uint ****local_2c;
  code *local_28;
  
  if (1 < *param_4 - 1U) {
    ppppuVar20 = (uint ****)param_4[5];
    pcVar19 = *(code **)(param_2[0x455] + 0x10);
    ppppuVar13 = (uint ****)param_4[2];
    ppppuVar21 = (uint ****)param_4[3];
    ppppuVar24 = (uint ****)param_4[4];
    iVar10 = param_2[0x454] + (*(int *)(param_2[0x455] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar19)(&local_5c,iVar10,ppppuVar13,ppppuVar21,ppppuVar24,ppppuVar20);
    if (local_5c == (uint *****)0x1) {
      ppppuVar23 = (uint ****)0x0;
      piVar6 = param_2 + 0x144;
      iVar14 = param_2[1];
      iVar7 = param_2[0x254];
      iVar16 = *param_2;
      iVar11 = param_3 + 0xd8;
      iVar8 = param_2[0x304];
      uVar12 = param_2[0x305];
      iVar15 = param_2[0x408];
      bVar1 = *(byte *)(param_4 + 6);
      uVar22 = uVar12;
      ppppuVar17 = (uint ****)0x0;
      ppppuVar18 = param_1;
      ppppuVar9 = ppppuVar24;
      do {
        ppppuVar4 = local_54;
        ppppuVar3 = local_58;
        if (local_58 < ppppuVar23) {
LAB_016a07fc:
          if (iVar7 != 2) {
            iVar10 = param_2[0x1f1];
            cVar2 = *(char *)((int)param_2 + 0x7c5);
            FUN_0167efb0(&local_5c,piVar6,param_4);
            if (local_5c == (uint *****)0x2) {
LAB_016a0870:
              FUN_016c2dec(local_58);
              FUN_0169e4e0(&local_5c,param_2,param_3,param_4);
              if (local_5c != (uint *****)0x0) {
                param_1[1] = (uint ***)local_50;
                param_1[2] = (uint ***)local_54;
              }
              *param_1 = (uint ***)(uint)(local_5c != (uint *****)0x0);
              return;
            }
            if ((((uint)local_5c & 1) != 0) && ((char)iVar10 != '\0' && cVar2 != '\0')) {
              FUN_01686b80(&local_78,param_4,local_58,local_54,local_54,piVar6);
              local_58 = local_74;
              if (local_78 == (uint ****)0x2) goto LAB_016a0870;
              local_5c = (uint *****)local_78;
              local_54 = local_70;
            }
            *param_1 = (uint ***)local_5c;
            param_1[1] = (uint ***)local_58;
            param_1[2] = (uint ***)local_54;
            return;
          }
          if (iVar16 != 2 || iVar14 != 0) {
            if (*(int *)(param_3 + 0x248) == 2) goto LAB_016a09b4;
            uVar22 = 0;
            if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
              uVar22 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
            }
            FUN_016845b8(&local_5c,param_2,iVar11,param_4);
            if (local_5c != (uint *****)0x2) {
              if (((uint)local_5c & uVar22 & 1) == 0) {
LAB_016a098c:
                *param_1 = (uint ***)local_5c;
                param_1[1] = (uint ***)local_58;
                param_1[2] = (uint ***)local_54;
                return;
              }
              FUN_01686d30(&local_78,param_4,local_58,local_54,local_54,param_2,iVar11);
              local_58 = local_74;
              if (local_78 != (uint ****)0x2) {
                local_5c = (uint *****)local_78;
                local_54 = local_70;
                goto LAB_016a098c;
              }
            }
            FUN_016c2dec(local_58);
          }
          FUN_0169e4e0(&local_5c,param_2,param_3,param_4);
          if (local_5c != (uint *****)0x0) {
            param_1[1] = (uint ***)local_50;
            param_1[2] = (uint ***)local_54;
          }
          *param_1 = (uint ***)(uint)(local_5c != (uint *****)0x0);
          return;
        }
        bVar26 = ppppuVar21 <= local_58;
        bVar25 = local_58 == ppppuVar21;
        if (!bVar26 || bVar25) {
          ppppuVar18 = (uint ****)((int)local_58 + 1);
        }
        local_30 = local_58;
        if (!bVar26 || bVar25) {
          bVar26 = ppppuVar18 <= ppppuVar24;
          bVar25 = ppppuVar24 == ppppuVar18;
        }
        local_34 = ppppuVar24;
        if (bVar26 && !bVar25) {
          local_58 = (uint ****)FUN_0065fd28;
          local_5c = &local_34;
          local_50 = (uint ****)FUN_012fd02c;
          local_54 = (uint ****)&local_40;
          local_40 = ppppuVar21;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a4e9e,&local_5c,&DAT_01d08154);
        }
        local_64 = local_58;
        uVar22 = uVar22 & 0xffffff00 | (uint)bVar1;
        local_78 = (uint ****)0x1;
        local_70 = ppppuVar13;
        local_6c = ppppuVar21;
        local_68 = ppppuVar24;
        local_60 = uVar22;
        if (iVar15 == 2) {
          if (iVar8 == 2 && uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_004ce41d,0x8f,&DAT_01d07f24);
          }
          if (*(int *)(param_3 + 200) == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d08104);
          }
          FUN_016ab87c(&local_5c,param_2 + 0x304,param_3 + 0x18,&local_78,ppppuVar17);
        }
        else {
          FUN_016ab12c(&local_5c,param_2 + 0x3a6,&local_78);
        }
        ppppuVar5 = local_54;
        ppppuVar17 = local_58;
        if (local_5c == (uint *****)0x2) {
          if (((uint)local_58 & 1) != 0) {
LAB_016a07c4:
            FUN_0169e4e0(&local_5c,param_2,param_3,param_4);
            if (local_5c != (uint *****)0x0) {
              param_1[1] = (uint ***)local_50;
              param_1[2] = (uint ***)local_54;
            }
            *param_1 = (uint ***)(uint)(local_5c != (uint *****)0x0);
            return;
          }
          goto LAB_016a07fc;
        }
        if (((uint)local_5c & 1) == 0) {
          if (ppppuVar20 <= ppppuVar9) break;
          if (ppppuVar3 == (uint ****)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d07ef4);
          }
        }
        else {
          bVar26 = ppppuVar21 <= ppppuVar20;
          bVar25 = ppppuVar20 == ppppuVar21;
          ppppuVar9 = ppppuVar20;
          if (!bVar26 || bVar25) {
            ppppuVar9 = (uint ****)((int)ppppuVar20 + 1);
          }
          local_40 = local_54;
          if (!bVar26 || bVar25) {
            bVar26 = ppppuVar9 <= local_54;
            bVar25 = local_54 == ppppuVar9;
          }
          local_3c = ppppuVar20;
          if (bVar26 && !bVar25) {
            local_30 = (uint ****)FUN_0065fd28;
            local_34 = (uint ****)&local_40;
            local_28 = FUN_012fd02c;
            local_2c = (uint ****)&local_38;
            local_38 = ppppuVar21;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
          }
          local_4c = local_54;
          local_9c = local_9c & 0xffffff00 | (uint)bVar1;
          local_5c = (uint *****)0x2;
          local_54 = ppppuVar13;
          local_50 = ppppuVar21;
          local_48 = ppppuVar20;
          local_44 = local_9c;
          if (iVar7 == 2) {
            if (iVar16 == 2 && iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_004ce41d,0x8f,&DAT_01d07f14);
            }
            if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d08084);
            }
            FUN_016aaa2c(&local_34,param_2,iVar11,&local_5c);
          }
          else {
            FUN_016a9b88(&local_34,piVar6,&local_5c);
          }
          if (local_34 == (uint ****)0x2) goto LAB_016a07c4;
          if (((uint)local_34 & 1) == 0) {
            if (local_2c < ppppuVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
            }
            *param_1 = (uint ***)0x1;
            param_1[1] = (uint ***)ppppuVar17;
            param_1[2] = (uint ***)local_2c;
            return;
          }
          if (ppppuVar3 == (uint ****)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d07f04);
          }
          ppppuVar23 = local_30;
        }
        (*pcVar19)(&local_5c,iVar10,ppppuVar13,ppppuVar21,ppppuVar18,ppppuVar20);
        ppppuVar17 = ppppuVar4;
        ppppuVar9 = ppppuVar18;
      } while (local_5c != (uint *****)0x0);
    }
    *param_1 = (uint ***)0x0;
    return;
  }
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) goto LAB_016a06cc;
    if (*(int *)(param_3 + 0x248) == 2) {
LAB_016a09b4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08064);
    }
    uVar22 = 0;
    if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
      uVar22 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
    }
    FUN_016845b8(&local_5c,param_2,param_3 + 0xd8,param_4);
    if (local_5c == (uint *****)0x2) goto LAB_016a06c4;
    if (((uint)local_5c & uVar22 & 1) == 0) {
LAB_016a03a0:
      *param_1 = (uint ***)local_5c;
      param_1[1] = (uint ***)local_58;
      param_1[2] = (uint ***)local_54;
      return;
    }
    FUN_01686d30(&local_78,param_4,local_58,local_54,local_54,param_2,param_3 + 0xd8);
    if (local_78 != (uint ****)0x2) {
      local_5c = (uint *****)local_78;
      local_58 = local_74;
      local_54 = local_70;
      goto LAB_016a03a0;
    }
  }
  else {
    iVar10 = param_2[0x1f1];
    cVar2 = *(char *)((int)param_2 + 0x7c5);
    FUN_0167efb0(&local_5c,param_2 + 0x144,param_4);
    if (local_5c == (uint *****)0x2) {
LAB_016a06c4:
      local_74 = local_58;
    }
    else {
      if ((((uint)local_5c & 1) == 0) || ((char)iVar10 == '\0' || cVar2 == '\0')) {
LAB_016a076c:
        *param_1 = (uint ***)local_5c;
        param_1[1] = (uint ***)local_58;
        param_1[2] = (uint ***)local_54;
        return;
      }
      FUN_01686b80(&local_78,param_4,local_58,local_54,local_54,param_2 + 0x144);
      if (local_78 != (uint ****)0x2) {
        local_5c = (uint *****)local_78;
        local_58 = local_74;
        local_54 = local_70;
        goto LAB_016a076c;
      }
    }
  }
  FUN_016c2dec(local_74);
LAB_016a06cc:
  FUN_0169e4e0(&local_5c,param_2,param_3,param_4);
  if (local_5c != (uint *****)0x0) {
    param_1[1] = (uint ***)local_50;
    param_1[2] = (uint ***)local_54;
  }
  *param_1 = (uint ***)(uint)(local_5c != (uint *****)0x0);
  return;
}

