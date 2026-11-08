// FUN_016a35f8 @ 016a35f8 size=936 calls_out=10 calls_in=0
// strings: 

uint FUN_016a35f8(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  uint *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  code *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  if (1 < *param_3 - 1U) {
    uVar16 = param_3[2];
    uVar14 = param_3[3];
    uVar10 = param_3[4];
    uVar11 = param_3[5];
    pcVar12 = *(code **)(param_1[0x305] + 0x10);
    iVar6 = param_1[0x304] + (*(int *)(param_1[0x305] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar12)(&local_5c,iVar6,uVar16,uVar14,uVar10,uVar11);
    if (local_5c == (uint *)0x1) {
      iVar8 = *param_1;
      iVar5 = param_1[0x254];
      iVar7 = param_1[1];
      bVar1 = *(byte *)(param_3 + 6);
      uVar9 = 0;
      pcVar13 = pcVar12;
      uVar15 = uVar10;
      do {
        uVar4 = local_54;
        uVar3 = local_58;
        bVar18 = uVar14 <= local_54;
        bVar17 = local_54 == uVar14;
        local_3c = local_54;
        if (!bVar18 || bVar17) {
          bVar18 = local_54 + 1 <= uVar10;
          bVar17 = uVar10 == local_54 + 1;
        }
        local_40 = uVar10;
        if (bVar18 && !bVar17) {
          local_30 = FUN_0065fd28;
          local_34 = &local_40;
          local_28 = FUN_012fd02c;
          local_2c = &local_38;
          local_38 = uVar14;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
        }
        local_48 = local_54;
        pcVar13 = (code *)((uint)pcVar13 & 0xffffff00 | (uint)bVar1);
        local_5c = (uint *)0x1;
        local_54 = uVar16;
        local_50 = uVar14;
        local_4c = uVar10;
        local_44 = pcVar13;
        if (iVar5 == 2) {
          if (iVar8 == 2 && iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_004ce464,0x91,&DAT_01d07f54);
          }
          if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d08094);
          }
          FUN_016ab87c(&local_34,param_1 + 0xa2,param_2 + 0x198,&local_5c,uVar9);
        }
        else {
          FUN_016ab12c(&local_34,param_1 + 0x1f2,&local_5c);
        }
        if (local_34 == (uint *)0x2) {
          uVar11 = FUN_0169f1f8(param_1,param_2,param_3);
          return uVar11;
        }
        if (((uint)local_34 & 1) != 0) {
          return 1;
        }
        if (uVar11 <= uVar15) {
          return 0;
        }
        uVar15 = uVar3 + 1;
        if (0xfffffffe < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d07f44);
        }
        (*pcVar12)(&local_5c,iVar6,uVar16,uVar14,uVar15,uVar11);
        uVar9 = uVar4;
      } while (local_5c != (uint *)0x0);
    }
    return 0;
  }
  if (param_1[0x254] == 2) {
    if (*param_1 == 2 && param_1[1] == 0) goto LAB_016a3894;
    if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08064);
    }
    uVar11 = 0;
    if (*(char *)(param_1[0x9e] + 0x15a) == '\x01') {
      uVar11 = (uint)*(byte *)(param_1[0x9e] + 0x15b);
    }
    FUN_016845b8(&local_5c,param_1,param_2 + 0xd8,param_3);
    if (local_5c == (uint *)0x2) goto LAB_016a388c;
    if (((uint)local_5c & uVar11 & 1) == 0) goto LAB_016a3904;
    FUN_01686d30(&local_34,param_3,local_58,local_54,local_54,param_1,param_2 + 0xd8);
LAB_016a3974:
    local_5c = local_34;
    if (local_34 != (uint *)0x2) {
LAB_016a3904:
      return (uint)(local_5c != (uint *)0x0);
    }
  }
  else {
    iVar6 = param_1[0x1f1];
    cVar2 = *(char *)((int)param_1 + 0x7c5);
    FUN_0167efb0(&local_5c,param_1 + 0x144,param_3);
    if (local_5c != (uint *)0x2) {
      if ((((uint)local_5c & 1) == 0) || ((char)iVar6 == '\0' || cVar2 == '\0')) goto LAB_016a3904;
      FUN_01686b80(&local_34,param_3,local_58,local_54,local_54,param_1 + 0x144);
      goto LAB_016a3974;
    }
LAB_016a388c:
    local_30 = (code *)local_58;
  }
  FUN_016c2dec(local_30);
LAB_016a3894:
  uVar11 = FUN_0169f1f8(param_1,param_2,param_3);
  return uVar11;
}

