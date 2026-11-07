// FUN_01698b2c @ 01698b2c size=676 calls_out=11 calls_in=1
// strings: 

void FUN_01698b2c(int *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_3c [3];
  uint *local_30;
  code *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  iVar7 = *param_1;
  iVar8 = param_1[1];
  local_3c[0] = 0x80000000;
  FUN_015f3b0c(&local_28,1);
  if (local_20 < 900000000) {
    uVar5 = 100000000;
    iVar4 = local_20 + 100000000;
    uVar3 = local_28;
    uVar6 = local_24;
    if (iVar7 != 0) {
LAB_01698c40:
      if (iVar7 == 1) {
        FUN_016997a8(&local_4c,iVar8,local_3c);
        uVar5 = local_48;
        uVar1 = local_44;
        uVar3 = local_28;
        uVar6 = local_24;
      }
      else {
        FUN_01696334(&local_4c,iVar8 + 8,local_3c,uVar5,uVar3,uVar6,iVar4);
        uVar5 = local_48;
        uVar1 = local_44;
        uVar3 = local_28;
        uVar6 = local_24;
      }
      goto joined_r0x01698c60;
    }
  }
  else {
    uVar5 = local_24 + (0xfffffffe < local_28);
    if ((int)((local_24 ^ uVar5) & ~local_24) < 0) {
      FUN_01698a1c(&local_28,iVar7,iVar8,local_3c);
      local_4c = 2;
      uVar5 = local_48;
      uVar1 = local_44;
      uVar3 = local_28;
      uVar6 = local_24;
      if (local_28 != 0x80000001) {
        local_4c = 1;
        uVar5 = local_28;
        uVar1 = local_24;
      }
      goto joined_r0x01698c60;
    }
    iVar4 = local_20 + 0xca5b1700;
    uVar3 = local_28 + 1;
    uVar6 = uVar5;
    if (iVar7 != 0) goto LAB_01698c40;
  }
  FUN_01695734(&local_4c,iVar8,local_3c,uVar5,uVar3,uVar6,iVar4);
  uVar5 = local_48;
  uVar1 = local_44;
  uVar3 = local_28;
  uVar6 = local_24;
joined_r0x01698c60:
  local_24 = uVar1;
  local_28 = uVar5;
  if (local_4c != 2) {
    if ((local_4c & 1) == 0) {
      local_2c = FUN_01698e04;
      local_30 = &local_28;
      FUN_015ef1b0(&DAT_0056c729,&local_30);
      if ((local_28 & 0x7fffffff) == 0) {
        return;
      }
      thunk_FUN_016d3fb4(local_24);
      return;
    }
    if ((local_28 & 0x7fffffff) == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_24);
    return;
  }
  iVar7 = param_1[2];
  iVar8 = param_1[3];
  local_28 = uVar3;
  local_24 = uVar6;
  FUN_015f3b0c(&local_28,1);
  uVar6 = local_24 + (0xfffffffe < local_28);
  uVar3 = (local_24 ^ uVar6) & ~local_24;
  if ((int)uVar3 < 0) {
    if (iVar7 == 0) {
      bVar2 = FUN_01694a68(iVar8,uVar3,local_28 + 1,uVar6,&DAT_3b9aca00);
    }
    else if (iVar7 == 1) {
      bVar2 = FUN_016990a4(iVar8);
    }
    else {
      bVar2 = FUN_01697478(iVar8 + 8);
    }
    if ((bVar2 != 2) && ((bVar2 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae200);
    }
    return;
  }
  if (iVar7 == 0) {
    FUN_01694a68(iVar8,uVar3,local_28 + 1,uVar6,local_20);
    return;
  }
  if (iVar7 == 1) {
    FUN_016990a4(iVar8);
    return;
  }
  FUN_01697478(iVar8 + 8);
  return;
}

