// FUN_018fc7f0 @ 018fc7f0 size=956 calls_out=13 calls_in=4
// strings: 

void FUN_018fc7f0(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 ***pppuVar2;
  undefined4 ***pppuVar3;
  undefined4 ***pppuVar4;
  undefined4 ***pppuVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 ***pppuVar10;
  undefined4 ***pppuVar11;
  undefined4 ***pppuVar12;
  undefined4 ***local_130;
  undefined4 ***local_12c;
  undefined4 ***local_128;
  undefined4 ***pppuStack_124;
  undefined4 ***local_120;
  undefined4 ***local_11c;
  undefined4 ***local_118;
  undefined4 ***local_114;
  undefined4 ***local_110;
  undefined4 ***pppuStack_10c;
  undefined4 ***pppuStack_108;
  undefined4 ***pppuStack_104;
  undefined4 ***local_100;
  undefined4 ***local_fc;
  undefined4 ***local_f8;
  undefined4 ***local_f4;
  undefined4 ***local_f0;
  undefined4 ***local_ec;
  undefined4 ***local_e8;
  undefined4 ***pppuStack_e4;
  undefined4 ***pppuStack_e0;
  undefined4 ***pppuStack_dc;
  undefined4 ***local_d8;
  undefined4 ***local_d4;
  undefined4 ***local_d0;
  undefined1 auStack_c8 [8];
  int local_c0;
  undefined1 auStack_78 [8];
  int local_70;
  
  piVar9 = *(int **)(param_2 + 0xc);
  if (piVar9[4] == 0) {
    *param_1 = 0xc;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa8c4(*(undefined4 *)(param_2 + 0xc));
    }
    FUN_0190f040(param_2);
    return;
  }
  local_d8 = *(undefined4 ****)(param_2 + 4);
  local_100 = (undefined4 ***)0x8000002d;
  local_d0 = &local_100;
  local_d4 = local_d8 + *(int *)(param_2 + 8) * 3;
  FUN_01915ae8(auStack_c8,&local_d8);
  if (local_c0 == -0x7fffffff) {
    pppuVar12 = (undefined4 ***)&DAT_00000008;
    pppuVar10 = (undefined4 ***)0x0;
    pppuVar11 = (undefined4 ***)0x0;
  }
  else {
    pppuVar12 = (undefined4 ***)FUN_01298504(0x140,8);
    if (pppuVar12 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,0x140);
    }
    FUN_01bed4e2(pppuVar12,auStack_c8,0x50);
    local_128 = (undefined4 ***)&DAT_00000001;
    local_130 = (undefined4 ***)&SUB_00000004;
    iVar8 = 0x50;
    local_120 = local_d8;
    local_11c = local_d4;
    local_118 = local_d0;
    local_12c = pppuVar12;
    while (pppuVar10 = local_128, FUN_01915ae8(auStack_78,&local_120), local_70 != -0x7fffffff) {
      if (pppuVar10 == local_130) {
        FUN_006520b4(&local_130,pppuVar10,1,8,0x50);
        pppuVar12 = local_12c;
      }
      FUN_01bed4e2((int)pppuVar12 + iVar8,auStack_78,0x50);
      local_128 = (undefined4 ***)((int)pppuVar10 + 1);
      iVar8 = iVar8 + 0x50;
    }
    pppuVar11 = local_130;
  }
  pppuVar5 = local_f4;
  pppuVar4 = local_f8;
  pppuVar3 = local_fc;
  pppuVar2 = local_100;
  if (local_100 == (undefined4 ***)0x8000002d) goto LAB_018fcb44;
  local_130 = local_f0;
  local_12c = local_ec;
  local_128 = local_e8;
  pppuStack_124 = pppuStack_e4;
  FUN_018e21a4(pppuVar12,pppuVar10);
  FUN_0134aee0(pppuVar11,pppuVar12,8,0x50);
  pppuVar12 = pppuStack_124;
  local_114 = pppuVar5;
  local_118 = pppuVar4;
  local_11c = pppuVar3;
  local_120 = pppuVar2;
  local_110 = local_130;
  pppuStack_10c = local_12c;
  pppuStack_108 = local_128;
  pppuStack_104 = pppuStack_124;
  uVar6 = 4;
  if ((int)pppuVar2 < 0) {
    uVar6 = (uint)pppuVar2 ^ 0x80000000;
  }
  switch(uVar6) {
  case 0x21:
    pppuVar11 = (undefined4 ***)&DAT_00000008;
    break;
  case 0x22:
  case 0x26:
  case 0x28:
  case 0x2a:
switchD_018fca0c_caseD_22:
    local_ec = pppuVar5;
    local_f0 = pppuVar4;
    local_f4 = pppuVar3;
    local_f8 = pppuVar2;
    local_e8 = local_130;
    pppuStack_e4 = local_12c;
    pppuStack_e0 = local_128;
    pppuStack_dc = pppuStack_124;
    local_fc = (undefined4 ***)&DAT_00000001;
    local_100 = (undefined4 ***)&DAT_00000001;
    pppuVar12 = (undefined4 ***)thunk_FUN_01be5118(0x28);
    if (pppuVar12 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x28);
    }
    *pppuVar12 = local_100;
    pppuVar12[1] = local_fc;
    pppuVar12[2] = local_f8;
    pppuVar12[3] = local_f4;
    pppuVar12[4] = local_f0;
    pppuVar11 = (undefined4 ***)&DAT_00000005;
    pppuVar12[5] = local_ec;
    pppuVar12[6] = local_e8;
    pppuVar12[7] = pppuStack_e4;
    pppuVar12[8] = pppuStack_e0;
    pppuVar12[9] = pppuStack_dc;
    goto LAB_018fcb38;
  case 0x23:
    pppuVar11 = (undefined4 ***)&DAT_00000007;
    break;
  case 0x24:
    pppuVar11 = (undefined4 ***)&DAT_00000009;
    break;
  case 0x25:
    pppuVar11 = (undefined4 ***)&DAT_0000000a;
    break;
  case 0x27:
    pppuVar11 = (undefined4 ***)&DAT_0000000b;
    break;
  case 0x29:
  case 0x2b:
    pppuVar11 = (undefined4 ***)&DAT_00000001;
    break;
  default:
    pppuVar11 = (undefined4 ***)&DAT_00000006;
    switch(uVar6) {
    case 0xb:
      pppuVar11 = (undefined4 ***)0x2;
      break;
    case 0xc:
    case 0xf:
    case 0x11:
      goto switchD_018fca0c_caseD_22;
    case 0xd:
      pppuVar11 = (undefined4 ***)&DAT_00000003;
      break;
    case 0xe:
      pppuVar11 = (undefined4 ***)0x0;
      break;
    case 0x10:
      pppuVar11 = (undefined4 ***)&SUB_00000004;
      break;
    case 0x12:
      break;
    default:
      if (1 < uVar6) goto switchD_018fca0c_caseD_22;
    }
  }
  FUN_01918228(&local_120);
LAB_018fcb38:
  pppuVar10 = (undefined4 ***)&DAT_01d25344;
LAB_018fcb44:
  FUN_0190f040(param_2);
  if (pppuVar2 == (undefined4 ***)0x8000002d) {
    uVar7 = FUN_018fccd8();
    *param_1 = 0xd;
    param_1[1] = uVar7;
  }
  else {
    *param_1 = pppuVar11;
    param_1[1] = pppuVar12;
    param_1[2] = pppuVar10;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa8c4(piVar9);
    }
  }
  return;
}

