// FUN_0155a354 @ 0155a354 size=1416 calls_out=4 calls_in=3
// strings: 

void FUN_0155a354(char *param_1,int param_2,undefined4 param_3,code *param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int local_248;
  int local_244 [128];
  uint local_44;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined1 *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    *param_1 = '\x04';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    return;
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar8 = *(uint *)(param_2 + 0x14);
  iVar3 = 0;
  uVar13 = *(uint *)(param_2 + 8);
  local_244[0x7e] = 0;
  local_244[0x7d] = 1;
  local_244[0x7c] = 0;
  local_244[0x7b] = 1;
  local_244[0x7a] = 0;
  local_244[0x79] = 1;
  local_244[0x78] = 0;
  local_244[0x77] = 1;
  local_244[0x76] = 0;
  local_244[0x75] = 1;
  local_244[0x74] = 0;
  local_244[0x73] = 1;
  local_244[0x72] = 0;
  local_244[0x71] = 1;
  local_244[0x70] = 0;
  local_244[0x6f] = 1;
  local_244[0x6e] = 0;
  local_244[0x6d] = 1;
  local_244[0x6c] = 0;
  local_244[0x6b] = 1;
  local_244[0x6a] = 0;
  local_244[0x69] = 1;
  local_244[0x68] = 0;
  local_244[0x67] = 1;
  local_244[0x66] = 0;
  local_244[0x65] = 1;
  local_244[100] = 0;
  local_244[99] = 1;
  local_244[0x62] = 0;
  local_244[0x61] = 1;
  local_244[0x60] = 0;
  local_244[0x5f] = 1;
  local_244[0x5e] = 0;
  local_244[0x5d] = 1;
  local_244[0x5c] = 0;
  local_244[0x5b] = 1;
  local_244[0x5a] = 0;
  local_244[0x59] = 1;
  local_244[0x58] = 0;
  local_244[0x57] = 1;
  local_244[0x56] = 0;
  local_244[0x55] = 1;
  local_244[0x54] = 0;
  local_244[0x53] = 1;
  local_244[0x52] = 0;
  local_244[0x51] = 1;
  local_244[0x50] = 0;
  local_244[0x4f] = 1;
  local_244[0x4e] = 0;
  local_244[0x4d] = 1;
  local_244[0x4c] = 0;
  local_244[0x4b] = 1;
  local_244[0x4a] = 0;
  local_244[0x49] = 1;
  local_244[0x48] = 0;
  local_244[0x47] = 1;
  local_244[0x46] = 0;
  local_244[0x45] = 1;
  local_244[0x44] = 0;
  local_244[0x43] = 1;
  local_244[0x42] = 0;
  local_244[0x41] = 1;
  local_244[0x40] = 0;
  local_244[0x3f] = 1;
  local_244[0x3e] = 0;
  local_244[0x3d] = 1;
  local_244[0x3c] = 0;
  local_244[0x3b] = 1;
  local_244[0x3a] = 0;
  local_244[0x39] = 1;
  local_244[0x38] = 0;
  local_244[0x37] = 1;
  local_244[0x36] = 0;
  local_244[0x35] = 1;
  local_244[0x34] = 0;
  local_244[0x33] = 1;
  local_244[0x32] = 0;
  local_244[0x31] = 1;
  local_244[0x30] = 0;
  local_244[0x2f] = 1;
  local_244[0x2e] = 0;
  local_244[0x2d] = 1;
  local_244[0x2c] = 0;
  local_244[0x2b] = 1;
  local_244[0x2a] = 0;
  local_244[0x29] = 1;
  local_244[0x28] = 0;
  local_244[0x27] = 1;
  local_244[0x26] = 0;
  local_244[0x25] = 1;
  local_244[0x24] = 0;
  local_244[0x23] = 1;
  local_244[0x22] = 0;
  local_244[0x21] = 1;
  local_244[0x20] = 0;
  local_244[0x1f] = 1;
  local_244[0x1e] = 0;
  local_244[0x1d] = 1;
  local_244[0x1c] = 0;
  local_244[0x1b] = 1;
  local_244[0x1a] = 0;
  local_244[0x19] = 1;
  local_244[0x18] = 0;
  local_244[0x17] = 1;
  local_244[0x16] = 0;
  local_244[0x15] = 1;
  local_244[0x14] = 0;
  local_244[0x13] = 1;
  local_244[0x12] = 0;
  local_244[0x11] = 1;
  local_244[0x10] = 0;
  local_244[0xf] = 1;
  local_244[0xe] = 0;
  local_244[0xd] = 1;
  local_244[0xc] = 0;
  local_244[0xb] = 1;
  local_244[10] = 0;
  local_244[9] = 1;
  local_244[8] = 0;
  local_244[7] = 1;
  local_244[6] = 0;
  local_244[5] = 1;
  local_244[4] = 0;
  local_244[3] = 1;
  local_244[2] = 0;
  local_244[1] = 1;
  local_244[0] = 0;
  local_248 = 1;
  if (uVar8 == 0) {
    uVar12 = 0;
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)(param_2 + 0x10);
    uVar12 = uVar11 - uVar13;
    if (uVar11 < uVar13) {
      uVar12 = uVar11;
    }
    if (uVar13 - uVar12 < uVar8) {
      iVar3 = uVar8 - (uVar13 - uVar12);
      uVar11 = uVar13;
    }
    else {
      uVar11 = uVar12 + uVar8;
    }
  }
  uVar14 = (uVar11 - uVar12) * 0xc >> 2;
  iVar15 = *(int *)(param_2 + 0xc);
  uVar9 = uVar14 * -0x55555555 + iVar3;
  uVar6 = 0x40;
  if (uVar9 < 0x40) {
    uVar6 = uVar9;
  }
  if (uVar9 != 0) {
    iVar3 = iVar15;
    if ((uVar11 - uVar12) * 0xc != 0) {
      iVar3 = iVar15 + uVar12 * 0xc;
    }
    uVar11 = *(uint *)(iVar3 + 8);
    if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar1,uVar11,uVar11,&DAT_018a8b68);
    }
    local_244[0] = uVar11 - uVar1;
    local_248 = *(int *)(iVar3 + 4) + uVar1;
    if (uVar9 != 1) {
      iVar4 = uVar12 * 0xc + iVar15;
      iVar3 = iVar15 + uVar14 * -4;
      uVar1 = 0;
      do {
        iVar3 = iVar3 + 0xc;
        iVar4 = iVar4 + 0xc;
        uVar12 = uVar1 + 1;
        iVar10 = iVar3;
        if (uVar12 < uVar14 * -0x55555555) {
          iVar10 = iVar4;
        }
        iVar7 = *(int *)(iVar10 + 8);
        local_244[uVar1 * 2 + 1] = *(int *)(iVar10 + 4);
        local_244[uVar1 * 2 + 2] = iVar7;
        uVar1 = uVar12;
      } while (uVar6 - 1 != uVar12);
    }
  }
  uVar1 = 0x40;
  if (uVar8 < 0x40) {
    uVar1 = uVar8;
  }
  (*param_4)(&local_34,param_3,&local_248,uVar1);
  if ((char)local_34 != '\x04') {
    param_1[3] = local_34._3_1_;
    *(undefined2 *)(param_1 + 1) = local_34._1_2_;
    *(undefined1 **)(param_1 + 4) = local_30;
    *param_1 = (char)local_34;
    return;
  }
  local_244[0x7f] = (int)local_30;
  if (uVar8 == 0) {
    local_44 = 0;
    if (local_30 == (undefined1 *)0x0) {
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      goto LAB_0155a8b4;
    }
  }
  else {
    local_44 = 0;
    piVar5 = local_244;
    do {
      uVar1 = uVar1 - 1;
      local_44 = *piVar5 + local_44;
      piVar5 = piVar5 + 2;
    } while (uVar1 != 0);
    if (local_30 <= local_44) {
      uVar1 = *(uint *)(param_2 + 0x10);
      uVar12 = *(int *)(param_2 + 0x18) + (int)local_30;
      *(uint *)(param_2 + 0x18) = uVar12;
      do {
        uVar8 = uVar8 - 1;
        uVar11 = uVar1 - uVar13;
        if (uVar1 < uVar13) {
          uVar11 = uVar1;
        }
        uVar11 = *(uint *)(iVar15 + uVar11 * 0xc + 8);
        if (uVar12 < uVar11) break;
        uVar6 = uVar1 + 1;
        uVar12 = uVar12 - uVar11;
        *(uint *)(param_2 + 0x14) = uVar8;
        puVar2 = (uint *)(iVar15 + uVar1 * 0xc);
        uVar11 = *puVar2;
        uVar1 = uVar6 - uVar13;
        if (uVar6 < uVar13) {
          uVar1 = uVar6;
        }
        *(uint *)(param_2 + 0x18) = uVar12;
        *(uint *)(param_2 + 0x10) = uVar1;
        if ((uVar11 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(puVar2[1]);
        }
      } while (uVar8 != 0);
LAB_0155a8b4:
      *param_1 = '\x04';
      *(undefined1 **)(param_1 + 4) = local_30;
      return;
    }
    uVar1 = *(uint *)(param_2 + 0x10);
    uVar12 = *(int *)(param_2 + 0x18) + local_44;
    *(uint *)(param_2 + 0x18) = uVar12;
    do {
      uVar8 = uVar8 - 1;
      uVar11 = uVar1 - uVar13;
      if (uVar1 < uVar13) {
        uVar11 = uVar1;
      }
      uVar11 = *(uint *)(iVar15 + uVar11 * 0xc + 8);
      if (uVar12 < uVar11) break;
      uVar6 = uVar1 + 1;
      uVar12 = uVar12 - uVar11;
      *(uint *)(param_2 + 0x14) = uVar8;
      puVar2 = (uint *)(iVar15 + uVar1 * 0xc);
      uVar11 = *puVar2;
      uVar1 = uVar6 - uVar13;
      if (uVar6 < uVar13) {
        uVar1 = uVar6;
      }
      *(uint *)(param_2 + 0x18) = uVar12;
      *(uint *)(param_2 + 0x10) = uVar1;
      if ((uVar11 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar2[1]);
      }
    } while (uVar8 != 0);
  }
  local_2c = &local_44;
  local_34 = local_244 + 0x7f;
  local_28 = &LAB_00fac484;
  local_30 = &LAB_00fac484;
  FUN_00600d2c(auStack_40,&DAT_0058d7f0,&local_34);
  FUN_0156a5a0(param_1,0x28,auStack_40);
  return;
}

