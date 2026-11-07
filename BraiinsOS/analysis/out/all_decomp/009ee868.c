// FUN_009ee868 @ 009ee868 size=1212 calls_out=9 calls_in=4
// strings: 

/* WARNING: Type propagation algorithm not settling */

int ** FUN_009ee868(undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int **ppiVar5;
  int *piVar6;
  uint uVar7;
  int **unaff_r7;
  bool bVar8;
  undefined8 uVar9;
  int **local_54;
  int **local_50;
  int local_4c;
  undefined4 ***local_48;
  undefined4 local_44;
  undefined4 ****local_40;
  undefined4 *local_3c;
  undefined4 ****local_38;
  undefined4 *local_34;
  undefined4 ****local_30;
  undefined4 *local_2c;
  undefined *local_28;
  undefined1 *local_24;
  
  local_50 = (int **)&DAT_018d8a98;
  DataMemoryBarrier(0xb);
  if (DAT_018d8ab4 != 0) {
    local_48 = &local_50;
    local_40 = &local_48;
    FUN_015eedc4(&DAT_018d8ab4,0,&local_40,&DAT_018a9f9c,&DAT_018a9fb0);
  }
  do {
    if (DAT_018d8a98 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018d8a98);
      goto LAB_009ee8ac;
    }
    bVar8 = (bool)hasExclusiveAccess(0x18d8a98);
  } while (!bVar8);
  DAT_018d8a98 = 1;
  DataMemoryBarrier(0xb);
LAB_009ee8ac:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (DAT_018d8a9c != '\0') {
LAB_009ee8d0:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
        DAT_018d8a9c = '\x01';
      }
      goto LAB_009ee8e0;
    }
    uVar4 = 0;
    uVar2 = DAT_018d8aac;
joined_r0x009eeb80:
    DAT_018d8aac = uVar2;
    if (1 < uVar2) {
      DAT_018d8aac = uVar2 - 1;
      uVar7 = DAT_018d8aa8 + 1;
      unaff_r7 = *(int ***)(DAT_018d8aa4 + DAT_018d8aa8 * 4);
      DAT_018d8aa8 = uVar7 - DAT_018d8aa0;
      if (uVar7 < DAT_018d8aa0) {
        DAT_018d8aa8 = uVar7;
      }
    }
    if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0)
       ) {
      DAT_018d8a9c = '\x01';
    }
    iVar3 = DAT_018d8a98;
    DataMemoryBarrier(0xb);
    do {
      bVar8 = (bool)hasExclusiveAccess(0x18d8a98);
    } while (!bVar8);
    DAT_018d8a98 = 0;
    if (iVar3 == 2) {
      FUN_016d6968(0xf0,&DAT_018d8a98,0x81,1);
    }
    if (1 < uVar2) goto LAB_009ee9d8;
  }
  else {
    uVar4 = FUN_015bf3f8();
    if (DAT_018d8a9c == '\0') {
      uVar4 = uVar4 ^ 1;
      uVar2 = DAT_018d8aac;
      goto joined_r0x009eeb80;
    }
    if (uVar4 != 0) goto LAB_009ee8d0;
LAB_009ee8e0:
    iVar3 = DAT_018d8a98;
    DataMemoryBarrier(0xb);
    do {
      bVar8 = (bool)hasExclusiveAccess(0x18d8a98);
    } while (!bVar8);
    DAT_018d8a98 = 0;
    if (iVar3 == 2) {
      FUN_016d6968(0xf0,&DAT_018d8a98,0x81,1);
    }
  }
  local_50 = (int **)&DAT_018d8a98;
  DataMemoryBarrier(0xb);
  if (DAT_018d8ab4 != 0) {
    local_48 = &local_50;
    local_40 = &local_48;
    FUN_015eedc4(&DAT_018d8ab4,0,&local_40,&DAT_018a9f9c,&DAT_018a9fb0);
  }
  DataMemoryBarrier(0xb);
  do {
    local_54 = DAT_018d8ab0;
    ppiVar5 = (int **)((int)DAT_018d8ab0 + 1);
    bVar8 = (bool)hasExclusiveAccess(0x18d8ab0);
  } while (!bVar8);
  DataMemoryBarrier(0xb);
  bVar8 = DAT_018d8ab0 < (int **)0x100;
  unaff_r7 = DAT_018d8ab0;
  DAT_018d8ab0 = ppiVar5;
  if (bVar8) goto LAB_009ee9d8;
  if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar3 = FUN_015bf3f8(), iVar3 != 0)) {
    local_2c = (undefined4 *)&LAB_00fac484;
    local_3c = (undefined4 *)&LAB_00fac484;
    local_40 = (undefined4 ****)&local_54;
    local_30 = (undefined4 ****)&DAT_00568ff4;
    local_38 = &local_48;
    local_44 = 0x20;
    local_48 = (undefined4 ***)&DAT_00565a50;
    local_34 = &DAT_0157d360;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00589bbf,&local_40,&DAT_018ae77c);
  }
  uVar9 = thunk_FUN_016de0ee(0,0x248);
  uVar4 = *(uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if (uVar4 < 3) {
    piVar6 = (int *)FUN_015f7ed0();
    ppiVar5 = (int **)piVar6[4];
    if (ppiVar5 == (int **)0x0) goto LAB_009eec20;
LAB_009eeb18:
    local_4c = piVar6[5] + -1;
  }
  else {
    piVar6 = (int *)(uVar4 - 8);
    do {
      iVar3 = *piVar6;
      bVar8 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar8);
    *piVar6 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x9eed20);
      (*pcVar1)();
    }
    ppiVar5 = *(int ***)(uVar4 + 8);
    if (ppiVar5 != (int **)0x0) goto LAB_009eeb18;
LAB_009eec20:
    ClearExclusiveLocal();
    if (DAT_018dd9a0 == 0 && DAT_018dd9a4 == 0) {
      ppiVar5 = (int **)0x0;
      local_4c = DAT_018dd9a0;
    }
    else {
      ppiVar5 = (int **)&DAT_00569764;
      local_4c = 4;
      if (DAT_018dd9a0 != piVar6[2] || DAT_018dd9a4 != piVar6[3]) {
        ppiVar5 = (int **)0x0;
      }
    }
  }
  if (ppiVar5 == (int **)0x0) {
    local_4c = 9;
  }
  local_48 = (undefined4 ***)&DAT_00565a50;
  local_50 = (int **)&DAT_00415090;
  if (ppiVar5 != (int **)0x0) {
    local_50 = ppiVar5;
  }
  local_44 = 0x20;
  local_30 = &local_48;
  local_38 = (undefined4 ****)&local_54;
  local_40 = (undefined4 ****)&local_50;
  local_24 = &LAB_00fac484;
  local_28 = &DAT_00568ff4;
  local_2c = &DAT_0157d360;
  local_34 = (undefined4 *)&LAB_00fac484;
  local_3c = &DAT_0157d360;
  FUN_015f02e0(&DAT_00415099,&local_40);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar6;
    bVar8 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar8);
  *piVar6 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(piVar6);
  }
  unaff_r7 = local_54;
LAB_009ee9d8:
  *param_1 = 1;
  param_1[1] = unaff_r7;
  return unaff_r7;
}

