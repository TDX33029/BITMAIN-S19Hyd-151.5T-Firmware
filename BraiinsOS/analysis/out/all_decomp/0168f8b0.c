// FUN_0168f8b0 @ 0168f8b0 size=756 calls_out=8 calls_in=3
// strings: 

void FUN_0168f8b0(uint *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int unaff_r4;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_80;
  uint local_7c;
  uint local_70;
  int local_6c;
  uint local_68;
  
  if (param_3 <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00565b70,0x20,&DAT_018adea0);
  }
  iVar2 = param_2 + param_4 * 0x48;
  uVar1 = *(uint *)(iVar2 + 0xc);
  if (uVar1 == 0x80000003) {
LAB_0168f918:
    iVar5 = *(int *)(iVar2 + 4);
    uVar1 = 0;
    uVar7 = *(uint *)(iVar2 + 8);
    do {
      if (uVar7 == uVar1) {
        if (uVar7 != 0) {
          if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,uVar7);
          }
          iVar2 = thunk_FUN_016d4a50(uVar7);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar7);
          }
          FUN_016dd1aa(iVar2,iVar5,uVar7);
          local_70 = uVar7;
          local_6c = iVar2;
          local_68 = uVar7;
          if ((int)uVar7 < 0) goto LAB_0168fa88;
          goto LAB_0168fad0;
        }
        uVar7 = 0;
        break;
      }
      uVar4 = (uint)*(byte *)(iVar5 + uVar1);
      uVar1 = uVar1 + 1;
    } while (((uVar4 == 0x5f || uVar4 == 0x2d) || (uVar4 - 0x30 < 10)) ||
            ((uVar4 & 0xdf) - 0x41 < 0x1a));
    FUN_0168070c(&local_70,iVar5,uVar7,2);
    uVar7 = 1;
    uVar1 = 1;
    if ((int)local_70 < 0) {
      uVar7 = local_70 ^ 0x80000000;
    }
    if (uVar7 == 0) {
      iVar2 = 1;
      uVar7 = 0;
      uVar4 = local_70;
    }
    else {
      if (uVar7 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018adeb0);
      }
      if ((int)local_68 < 0) {
LAB_0168fa88:
        uVar3 = 0;
        uVar7 = local_68;
LAB_0168fa8c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar3,uVar7);
      }
LAB_0168fad0:
      uVar7 = local_68;
      iVar2 = local_6c;
      uVar4 = local_70;
      if (local_68 == 0) {
        uVar7 = 0;
        uVar1 = 1;
      }
      else {
        uVar1 = thunk_FUN_016d4a50(local_68);
        if (uVar1 == 0) {
          uVar3 = 1;
          goto LAB_0168fa8c;
        }
      }
      unaff_r4 = iVar2;
    }
    FUN_016dd1aa(uVar1,iVar2,uVar7);
    if (0 < (int)uVar4) {
      thunk_FUN_016d3fb4(local_6c);
    }
    if (0x1c71c71 < param_4) {
      uVar3 = 0;
      goto LAB_0168f9f4;
    }
  }
  else {
    uVar7 = 1;
    if ((int)uVar1 < 0) {
      uVar7 = uVar1 ^ 0x80000000;
    }
    uVar1 = 1;
    if (uVar7 == 0) {
      uVar3 = 1;
      uVar7 = 0;
    }
    else {
      if (uVar7 != 1) goto LAB_0168f918;
      uVar7 = *(uint *)(iVar2 + 0x14);
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar7);
      }
      uVar3 = *(undefined4 *)(iVar2 + 0x10);
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar1 = thunk_FUN_016d4a50(uVar7);
        if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar7);
        }
      }
    }
    FUN_016dd1aa(uVar1,uVar3,uVar7);
  }
  if (param_4 == 0) {
    local_7c = 4;
    local_80 = 0;
  }
  else {
    unaff_r4 = param_4 * 0x48;
    local_7c = thunk_FUN_016d4a50(unaff_r4);
    if (local_7c == 0) {
      uVar3 = 4;
LAB_0168f9f4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,unaff_r4);
    }
    iVar2 = param_4 * 0x48;
    uVar6 = 0;
    uVar4 = local_7c;
    do {
      local_80 = param_4;
      if (iVar2 == 0) break;
      FUN_01676758(&local_70,param_2);
      FUN_016dd1aa(uVar4,&local_70,0x48);
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 0x48;
      iVar2 = iVar2 + -0x48;
      param_2 = param_2 + 0x48;
    } while (param_4 != uVar6);
  }
  *param_1 = uVar7;
  param_1[1] = uVar1;
  param_1[2] = uVar7;
  param_1[3] = local_80;
  param_1[4] = local_7c;
  param_1[5] = param_4;
  return;
}

