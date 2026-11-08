// FUN_015d243c @ 015d243c size=632 calls_out=8 calls_in=1
// strings: 

void FUN_015d243c(char *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint local_78;
  int local_74;
  uint local_70;
  int local_68;
  int local_64;
  undefined1 auStack_58 [4];
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_47;
  char local_45;
  uint local_44;
  int local_40;
  uint local_3c;
  char local_38;
  undefined2 local_37;
  char local_35;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_3 + 0xf0) == 0) {
    local_70 = 0;
    local_74 = 1;
    uVar14 = 0;
  }
  else {
    FUN_006008c8((uint)&local_38 | 4,*(int *)(param_3 + 0xf0),*(undefined4 *)(param_3 + 0xf4));
    local_70 = local_2c;
    iVar4 = local_30;
    local_74 = local_30;
    uVar14 = local_34;
    if (local_34 == 0x80000000) {
      if (local_2c == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(local_2c);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_70);
        }
      }
      FUN_016dd1aa(iVar5,iVar4,local_70);
      local_74 = iVar5;
      uVar14 = local_70;
    }
  }
  uVar6 = *(uint *)(param_4 + 0x20);
  local_78 = uVar14;
  if (uVar6 != 0 || *(int *)(param_4 + 0x24) != 0) {
    if (*(ushort *)(param_5 + 0x92) < 5) {
      uVar6 = uVar6 - 1;
      if (uVar6 < *(uint *)(param_5 + 0x74)) {
LAB_015d252c:
        FUN_015d186c(&local_68,*(int *)(param_5 + 0x70) + uVar6 * 0x10);
        if (local_68 != 0x2e || local_64 != 0) {
          FUN_015d2860(&local_38,param_2,*(undefined1 *)(param_3 + 0xd9),
                       *(undefined4 *)(param_3 + 0x104),&local_68);
          if (local_38 != 'R') {
            local_44 = local_34;
            local_40 = local_30;
            local_3c = local_2c;
            local_45 = local_35;
            local_47 = local_37;
            local_48 = local_38;
            goto LAB_015d2668;
          }
          FUN_006008c8((uint)&local_48 | 4,local_34,local_30);
          iVar4 = local_40;
          uVar14 = local_44;
          FUN_005e8e4c(&local_78,local_40,local_3c);
          if ((uVar14 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(iVar4);
          }
        }
      }
    }
    else if (uVar6 < *(uint *)(param_5 + 0x74)) goto LAB_015d252c;
  }
  FUN_015d186c(&local_38,param_4);
  FUN_015d2860(&local_48,param_2,*(undefined1 *)(param_3 + 0xd9),*(undefined4 *)(param_3 + 0x104),
               &local_38);
  if (local_48 == 'R') {
    FUN_006008c8((uint)auStack_58 | 4,local_44,local_40);
    FUN_005e8e4c(&local_78,local_50,local_4c);
    if ((local_54 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_50);
    }
    *(uint *)(param_1 + 4) = local_78;
    *(int *)(param_1 + 8) = local_74;
    *(uint *)(param_1 + 0xc) = local_70;
    *param_1 = 'R';
    return;
  }
  uVar14 = local_78;
LAB_015d2668:
  iVar4 = local_74;
  param_1[3] = local_45;
  *(undefined2 *)(param_1 + 1) = local_47;
  *(uint *)(param_1 + 4) = local_44;
  *(int *)(param_1 + 8) = local_40;
  *(uint *)(param_1 + 0xc) = local_3c;
  *param_1 = local_48;
  if (uVar14 == 0) {
    return;
  }
  if (local_74 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar6 - 0x10, uVar6 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar6 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar13 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar8 * uVar14 + iVar8 + -4;
  iVar8 = iVar13 + iVar11;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar6 = *(uint *)(iVar8 + -4);
    if (uVar6 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - iVar4) < uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar6 = 1 << uVar14;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar6 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar9 + uVar6 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar7;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar7 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar6 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar9 = *puVar15;
      if (uVar12 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar6 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

