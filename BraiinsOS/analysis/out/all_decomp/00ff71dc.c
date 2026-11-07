// FUN_00ff71dc @ 00ff71dc size=676 calls_out=8 calls_in=25
// strings: 

void FUN_00ff71dc(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int extraout_r2;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined8 uVar17;
  int local_48;
  uint local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  undefined1 local_30;
  int local_2c;
  int local_28;
  int local_24;
  byte local_20;
  int local_1c;
  
  if (*param_2 == 2) {
    FUN_00febdf4(&local_48,param_2[0xe] + 8,param_3,param_4,param_2[0xc]);
    if (local_48 != 0x12) {
      param_1[1] = local_44;
      *param_1 = local_48;
      param_1[2] = local_40;
      param_1[3] = (int)local_3c;
      param_1[4] = local_38;
      return;
    }
    *param_1 = 0x12;
    *(bool *)(param_1 + 1) = local_44 != 0x80000000;
    if ((local_44 & 0x7fffffff) == 0) {
      return;
    }
    if (local_40 == 0) {
      return;
    }
    iVar13 = FUN_016d3bc8();
    uVar14 = *(byte *)(local_40 + -3) & 0x1f;
    if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
      iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) <<
              4;
    }
    uVar11 = (uint)(*(byte *)(local_40 + -3) >> 5);
    iVar7 = *(int *)(iVar13 + 8) + 0x10;
    iVar6 = iVar8 * uVar14 + iVar8 + -4;
    iVar8 = iVar7 + iVar6;
    if (4 < uVar11) {
      if (uVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar11 = *(uint *)(iVar8 + -4);
      if (uVar11 < 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar2)();
      }
      if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar2)();
      }
    }
    if ((uint)(iVar8 - local_40) < uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar7 + iVar6) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar1 = *(byte *)(iVar13 + 0x14);
    uVar11 = 1 << uVar14;
    *(undefined1 *)(local_40 + -3) = 0xff;
    *(undefined2 *)(local_40 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar13 + 0x10);
      uVar9 = *(uint *)(iVar13 + 0xc) | uVar12;
      if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar12 == 0) || (uVar9 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&local_28,iVar13,uVar14);
        FUN_016dddc0(&DAT_018ddd48);
        if (local_24 == 0) {
          return;
        }
        puVar5 = (undefined4 *)FUN_016d2bc8();
        uVar10 = *puVar5;
        FUN_016d6ac4(local_28,local_24);
        *puVar5 = uVar10;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar13 + 0x10) = uVar11 + uVar12;
        return;
      }
      puVar15 = (uint *)(iVar13 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar9 = *puVar15;
        if (uVar12 != uVar9) goto LAB_016d409c;
        bVar16 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar16);
      *puVar15 = uVar11 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar9) {
        return;
      }
    } while( true );
  }
  iVar13 = param_2[0x10];
  uVar3 = 0;
  local_30 = 1;
  local_38 = 0;
  piVar4 = *(int **)(*(int *)(iVar13 + 0x10) + 0x58);
  local_48 = 0;
  if (*piVar4 == 1) {
    if (param_4 < (int *)piVar4[1]) goto LAB_00ff738c;
    bVar1 = *(byte *)(piVar4 + 7);
    bVar16 = (bVar1 & 1) != 0;
    if (bVar16) {
      bVar1 = *(byte *)(piVar4 + 8);
    }
    if (((bVar16 && (bVar1 & 2) != 0) && (piVar4[2] == 1)) &&
       (piVar4 = (int *)piVar4[3], piVar4 < param_4)) goto LAB_00ff738c;
  }
  local_40 = param_3;
  local_3c = param_4;
  local_34 = param_4;
  uVar17 = thunk_FUN_016de0ee(piVar4,param_2[0x11],0x230);
  iVar8 = (int)((ulonglong)uVar17 >> 0x20);
  piVar4 = (int *)((int)uVar17 + extraout_r2);
  if ((char)piVar4[1] == '\0') {
    do {
      bVar16 = (bool)hasExclusiveAccess(0x18d912c);
    } while (!bVar16);
    if (DAT_018d912c == 0) {
      DAT_018d912c = DAT_018d912c + 1;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0038c190,0x57,&DAT_0188a500);
    }
    iVar6 = DAT_018d912c + 1;
    *piVar4 = DAT_018d912c;
    DAT_018d912c = iVar6;
    *(undefined1 *)(piVar4 + 1) = 1;
  }
  iVar6 = *piVar4;
  DataMemoryBarrier(0xb);
  if (iVar6 == *(int *)(iVar8 + 0x2f8)) {
    bVar16 = true;
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar8 + 0x2f8) = 1;
    iVar7 = *(int *)(iVar13 + 0xc);
    local_20 = 0;
    local_2c = 1;
    iVar13 = *(int *)(iVar13 + 8) + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8;
    local_28 = iVar6;
    local_24 = iVar8;
  }
  else {
    FUN_010046b4(&local_2c);
    iVar7 = *(int *)(iVar13 + 0xc);
    iVar13 = *(int *)(iVar13 + 8) + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8;
    if (local_2c == 1) {
      bVar16 = true;
      iVar8 = local_24;
    }
    else {
      bVar16 = false;
      iVar8 = local_28;
    }
  }
  uVar3 = (**(code **)(iVar7 + 0x2c))(iVar13,iVar8,&local_48);
  iVar13 = local_28;
  if (bVar16) {
    local_1c = local_28;
    if (local_28 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(1,&DAT_00414ca0,&local_1c,0);
    }
    DataMemoryBarrier(0xb);
    *(int *)(local_24 + 0x2f8) = local_28;
  }
  else if ((local_20 & 1) == 0) {
    FUN_00ff6600(local_24,local_28);
  }
  else {
    FUN_00ff4c68(local_28);
    thunk_FUN_016d3fb4(iVar13);
  }
LAB_00ff738c:
  *(undefined1 *)(param_1 + 1) = uVar3;
  *param_1 = 0x12;
  return;
}

