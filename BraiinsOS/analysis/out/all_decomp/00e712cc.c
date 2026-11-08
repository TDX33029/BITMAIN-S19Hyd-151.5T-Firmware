// FUN_00e712cc @ 00e712cc size=860 calls_out=3 calls_in=2
// strings: 

void FUN_00e712cc(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40 [2];
  uint local_38;
  uint local_34;
  uint local_30;
  
  uVar6 = param_1[7];
  uVar3 = 1;
  if (((uVar6 != 0 || uVar6 < (0xfa < param_1[6])) &&
      (uVar3 = 3, uVar6 != 0 || uVar6 < (0xffff < param_1[6]))) && (uVar3 = 9, uVar6 == 0)) {
    uVar3 = 5;
  }
  uVar4 = *param_2 + uVar3;
  uVar6 = 5;
  if (param_1[8] < 0x10000) {
    uVar6 = 3;
  }
  if (param_1[8] < 0xfb) {
    uVar6 = 1;
  }
  uVar1 = uVar6 + uVar4;
  iVar5 = param_2[1] + (uint)CARRY4(*param_2,uVar3) + (uint)CARRY4(uVar6,uVar4);
  if ((undefined1 *)param_1[0x10] == &DAT_3b9aca00) {
    uVar11 = uVar1 + 1;
    iVar5 = iVar5 + (uint)(0xfffffffe < uVar1);
    uVar3 = *param_1;
  }
  else {
    uVar3 = uVar1 + 1;
    uVar6 = iVar5 + (uint)(0xfffffffe < uVar1);
    *param_2 = uVar3;
    param_2[1] = uVar6;
    local_4c = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_015f3c24(local_40,param_1 + 0xe,&local_50);
    if ((local_40[0] & 1) != 0) {
      iVar5 = thunk_FUN_016d4a50(0x28);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x28);
      }
      FUN_016dd1aa(iVar5,&DAT_003594c0,0x28);
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar2 = 0x28;
      puVar2[1] = iVar5;
      puVar2[2] = 0x28;
      return;
    }
    uVar4 = 1;
    if (local_34 == 0 && (0xfa < local_38) <= local_34) {
      uVar1 = 1;
    }
    else {
      uVar1 = 3;
      if ((local_34 != 0 || local_34 < (0xffff < local_38)) && (uVar1 = 9, local_34 == 0)) {
        uVar1 = 5;
      }
    }
    uVar8 = 5;
    if (local_30 < 0x10000) {
      uVar8 = 3;
    }
    if (local_30 < 0xfb) {
      uVar8 = 1;
    }
    uVar10 = uVar1 + uVar8 + uVar3;
    uVar11 = param_1[0xb];
    uVar9 = param_1[0xc];
    uVar7 = param_1[0xd];
    if (((uVar7 != 0 ||
          uVar7 < (uVar9 != 0 || uVar9 < (uVar11 != 0 || uVar11 < (0xfa < param_1[10])))) &&
        (uVar4 = 3,
        uVar7 != 0 ||
        uVar7 < (uVar9 != 0 || uVar9 < (uVar11 != 0 || uVar11 < (0xffff < param_1[10]))))) &&
       ((uVar4 = 5, uVar7 != 0 || uVar7 < (uVar9 != 0 || uVar9 < (uVar11 != 0)) &&
        (uVar4 = 0x11, uVar7 == 0 && (uVar9 != 0) <= uVar7)))) {
      uVar4 = 9;
    }
    uVar11 = uVar10 + uVar4;
    iVar5 = CARRY4(uVar1,uVar8) + uVar6 + (uint)CARRY4(uVar1 + uVar8,uVar3) +
            (uint)CARRY4(uVar10,uVar4);
    uVar3 = *param_1;
  }
  if ((uVar3 & 1) != 0) {
    uVar4 = param_1[3];
    uVar1 = param_1[4];
    uVar6 = 1;
    uVar3 = param_1[5];
    if ((((uVar3 != 0 || uVar3 < (uVar1 != 0 || uVar1 < (uVar4 != 0 || uVar4 < (0xfa < param_1[2])))
          ) && (uVar6 = 3,
               uVar3 != 0 ||
               uVar3 < (uVar1 != 0 || uVar1 < (uVar4 != 0 || uVar4 < (0xffff < param_1[2]))))) &&
        (uVar6 = 5, uVar3 != 0 || uVar3 < (uVar1 != 0 || uVar1 < (uVar4 != 0)))) &&
       (uVar6 = 0x11, uVar3 == 0 && (uVar1 != 0) <= uVar3)) {
      uVar6 = 9;
    }
    bVar12 = CARRY4(uVar11,uVar6);
    uVar11 = uVar11 + uVar6;
    iVar5 = iVar5 + (uint)bVar12;
  }
  uVar4 = param_1[0x13];
  uVar3 = 1;
  uVar6 = 1;
  if (((uVar4 != 0 || uVar4 < (0xfa < param_1[0x12])) &&
      (uVar6 = 3, uVar4 != 0 || uVar4 < (0xffff < param_1[0x12]))) && (uVar6 = 9, uVar4 == 0)) {
    uVar6 = 5;
  }
  uVar4 = uVar11 + 1 + uVar6;
  uVar8 = param_1[0x15];
  uVar1 = param_1[0x16];
  uVar9 = param_1[0x17];
  if (((uVar9 != 0 || uVar9 < (uVar1 != 0 || uVar1 < (uVar8 != 0 || uVar8 < (0xfa < param_1[0x14])))
       ) && (uVar3 = 3,
            uVar9 != 0 ||
            uVar9 < (uVar1 != 0 || uVar1 < (uVar8 != 0 || uVar8 < (0xffff < param_1[0x14]))))) &&
     ((uVar3 = 5, uVar9 != 0 || uVar9 < (uVar1 != 0 || uVar1 < (uVar8 != 0)) &&
      (uVar3 = 0x11, uVar9 == 0 && (uVar1 != 0) <= uVar9)))) {
    uVar3 = 9;
  }
  uVar8 = uVar4 + uVar3;
  uVar1 = param_1[0x18];
  uVar3 = iVar5 + (uint)(0xfffffffe < uVar11) + (uint)CARRY4(uVar11 + 1,uVar6) +
          (uint)CARRY4(uVar4,uVar3);
  *param_2 = uVar8;
  param_2[1] = uVar3;
  if (uVar1 == 0x80000000) {
    *param_2 = uVar8 + 1;
    param_2[1] = uVar3 + (0xfffffffe < uVar8);
  }
  else {
    iVar5 = FUN_00ea158c(param_2,param_1[0x19],param_1[0x1a]);
    if (iVar5 != 0) {
      return;
    }
  }
  iVar5 = FUN_00e71628(param_2,param_1 + 0x1c);
  if ((iVar5 == 0) && (iVar5 = FUN_00e71628(param_2,param_1 + 0x26), iVar5 == 0)) {
    FUN_00e71628(param_2,param_1 + 0x30);
    return;
  }
  return;
}

