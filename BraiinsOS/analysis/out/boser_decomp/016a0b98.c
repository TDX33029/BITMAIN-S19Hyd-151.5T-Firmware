// FUN_016a0b98 @ 016a0b98 size=1392 calls_out=12 calls_in=0
// strings: invalid match span

/* WARNING: Type propagation algorithm not settling */

uint FUN_016a0b98(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  code ****ppppcVar3;
  code ****ppppcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  code ***pppcVar10;
  int iVar11;
  int iVar12;
  code ****ppppcVar13;
  code ****ppppcVar14;
  code ****ppppcVar15;
  code ****ppppcVar16;
  int iVar17;
  code ****ppppcVar18;
  uint unaff_r8;
  code ****ppppcVar19;
  code ****ppppcVar20;
  bool bVar21;
  bool bVar22;
  uint local_a0;
  code ****local_80;
  code ****local_78;
  code ****local_74;
  code ***local_70;
  code ****local_6c;
  code ****local_68;
  code ****local_64;
  uint local_60;
  code *****local_5c;
  code ****local_58;
  code ****local_54;
  code ****local_50;
  code ***local_4c;
  code ****ppppcStack_48;
  uint uStack_44;
  code ****local_40;
  code ****local_3c;
  code ****local_38;
  code ****local_34;
  code ****local_30;
  code ****local_2c;
  code *local_28;
  
  if (1 < *param_3 - 1U) {
    pppcVar10 = (code ***)param_3[2];
    ppppcVar20 = (code ****)param_3[3];
    ppppcVar16 = (code ****)param_3[4];
    ppppcVar18 = (code ****)param_3[5];
    ppppcVar14 = *(code *****)(param_1[0x455] + 0x10);
    iVar8 = param_1[0x454] + (*(int *)(param_1[0x455] + 8) - 1U & 0xfffffff8) + 8;
    (*(code *)ppppcVar14)(&local_5c,iVar8,pppcVar10,ppppcVar20,ppppcVar16,ppppcVar18);
    if (local_5c == (code *****)0x1) {
      iVar11 = *param_1;
      iVar12 = param_1[1];
      iVar5 = param_1[0x254];
      iVar6 = param_1[0x304];
      iVar9 = param_1[0x305];
      iVar17 = param_1[0x408];
      bVar1 = *(byte *)(param_3 + 6);
      local_80 = (code ****)0x0;
      ppppcVar13 = (code ****)(code ***)0x0;
      ppppcVar15 = ppppcVar14;
      ppppcVar19 = ppppcVar16;
      do {
        ppppcVar4 = local_54;
        ppppcVar3 = local_58;
        if (local_58 < local_80) {
LAB_016a102c:
          uVar7 = FUN_0169f1f8(param_1,param_2,param_3);
          return uVar7;
        }
        bVar22 = ppppcVar20 <= local_58;
        bVar21 = local_58 == ppppcVar20;
        if (!bVar22 || bVar21) {
          ppppcVar15 = (code ****)((int)local_58 + 1);
        }
        local_30 = local_58;
        if (!bVar22 || bVar21) {
          bVar22 = ppppcVar15 <= ppppcVar16;
          bVar21 = ppppcVar16 == ppppcVar15;
        }
        local_34 = ppppcVar16;
        if (bVar22 && !bVar21) {
          local_58 = (code ****)FUN_0065fd28;
          local_5c = &local_34;
          local_50 = (code ****)FUN_012fd02c;
          local_54 = (code ****)&local_40;
          local_40 = ppppcVar20;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a4e9e,&local_5c,&DAT_01d08154);
        }
        local_64 = local_58;
        unaff_r8 = unaff_r8 & 0xffffff00 | (uint)bVar1;
        local_78 = (code ****)0x1;
        local_70 = pppcVar10;
        local_6c = ppppcVar20;
        local_68 = ppppcVar16;
        local_60 = unaff_r8;
        if (iVar17 == 2) {
          if (iVar6 == 2 && iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_004ce41d,0x8f,&DAT_01d07f24);
          }
          if (*(int *)(param_2 + 200) == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d08104);
          }
          FUN_016ab87c(&local_5c,param_1 + 0x304,param_2 + 0x18,&local_78,ppppcVar13);
        }
        else {
          FUN_016ab12c(&local_5c,param_1 + 0x3a6,&local_78);
        }
        ppppcVar13 = local_54;
        if (local_5c == (code *****)0x2) goto LAB_016a102c;
        if (((uint)local_5c & 1) == 0) {
          if (ppppcVar18 <= ppppcVar19) {
            return 0;
          }
          if (ppppcVar3 == (code ****)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d07ef4);
          }
        }
        else {
          bVar22 = ppppcVar20 <= ppppcVar18;
          bVar21 = ppppcVar18 == ppppcVar20;
          if (!bVar22 || bVar21) {
            bVar22 = (code ***)((int)ppppcVar18 + 1) <= local_54;
            bVar21 = local_54 == (code ****)((int)ppppcVar18 + 1);
          }
          local_40 = local_54;
          local_3c = ppppcVar18;
          if (bVar22 && !bVar21) {
            local_30 = (code ****)FUN_0065fd28;
            local_34 = (code ****)&local_40;
            local_28 = FUN_012fd02c;
            local_2c = (code ****)&local_38;
            local_38 = ppppcVar20;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
          }
          local_a0 = local_a0 & 0xffffff00 | (uint)bVar1;
          local_5c = (code *****)0x2;
          local_4c = (code ***)local_54;
          local_54 = (code ****)pppcVar10;
          local_50 = ppppcVar20;
          ppppcStack_48 = ppppcVar18;
          uStack_44 = local_a0;
          if (iVar5 == 2) {
            if (iVar11 == 2 && iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_004ce41d,0x8f,&DAT_01d07f14);
            }
            if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d08084);
            }
            FUN_016aaa2c(&local_34,param_1,param_2 + 0xd8,&local_5c);
          }
          else {
            FUN_016a9b88(&local_34,param_1 + 0x144,&local_5c);
          }
          if (local_34 == (code ****)0x2) goto LAB_016a102c;
          if (((uint)local_34 & 1) == 0) {
            if (local_2c < ppppcVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
            }
            return 1;
          }
          if (ppppcVar3 == (code ****)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d07f04);
          }
          local_80 = local_30;
        }
        (*(code *)ppppcVar14)(&local_5c,iVar8,pppcVar10,ppppcVar20,ppppcVar15,ppppcVar18);
        ppppcVar13 = ppppcVar4;
        ppppcVar19 = ppppcVar15;
      } while (local_5c != (code *****)0x0);
    }
    return 0;
  }
  if (param_1[0x254] == 2) {
    if (*param_1 == 2 && param_1[1] == 0) goto LAB_016a0fb8;
    if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08064);
    }
    uVar7 = 0;
    if (*(char *)(param_1[0x9e] + 0x15a) == '\x01') {
      uVar7 = (uint)*(byte *)(param_1[0x9e] + 0x15b);
    }
    FUN_016845b8(&local_5c,param_1,param_2 + 0xd8,param_3);
    if (local_5c != (code *****)0x2) {
      if (((uint)local_5c & uVar7 & 1) == 0) goto LAB_016a0fd4;
      FUN_01686d30(&local_78,param_3,local_58,local_54,local_54,param_1,param_2 + 0xd8);
      goto LAB_016a10a0;
    }
  }
  else {
    iVar8 = param_1[0x1f1];
    cVar2 = *(char *)((int)param_1 + 0x7c5);
    FUN_0167efb0(&local_5c,param_1 + 0x144,param_3);
    if (local_5c != (code *****)0x2) {
      if ((((uint)local_5c & 1) == 0) || ((char)iVar8 == '\0' || cVar2 == '\0')) goto LAB_016a0fd4;
      FUN_01686b80(&local_78,param_3,local_58,local_54,local_54,param_1 + 0x144);
LAB_016a10a0:
      local_5c = (code *****)local_78;
      if (local_78 != (code ****)0x2) {
LAB_016a0fd4:
        return (uint)(local_5c != (code *****)0x0);
      }
      local_58 = local_74;
    }
  }
  FUN_016c2dec(local_58);
LAB_016a0fb8:
  uVar7 = FUN_0169f1f8(param_1,param_2,param_3);
  return uVar7;
}

