// FUN_010114a0 @ 010114a0 size=764 calls_out=11 calls_in=1
// strings: Invalid UTF-8 | Invalid UTF-8

void FUN_010114a0(uint *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  FUN_016dd606(auStack_78,0,0x44);
  iVar3 = FUN_016d6590(param_2,0x8044b401,auStack_78);
  if (iVar3 == -1) {
    uVar11 = FUN_0126ead8();
    param_1[2] = uVar11;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0x80000000;
    return;
  }
  FUN_00fab1e0(&local_34,auStack_78,0x20);
  iVar3 = local_30;
  if (local_34 == 1) {
    FUN_015e79d4(&local_28,0x15,"Invalid UTF-8",0xd);
    *param_1 = 0x80000000;
    param_1[1] = local_28;
    param_1[2] = local_24;
    return;
  }
  uVar11 = local_2c;
  do {
    uVar10 = uVar11;
    if (uVar10 == 0) {
      uVar11 = 1;
      uVar10 = 0;
      goto LAB_010115f0;
    }
    iVar8 = local_30 + uVar10;
    pbVar7 = (byte *)(iVar8 + -1);
    uVar4 = (uint)(char)*pbVar7;
    if (0x7fffffff < uVar4) {
      pbVar7 = (byte *)(iVar8 + -2);
      bVar1 = *pbVar7;
      if ((char)bVar1 < -0x40) {
        pbVar7 = (byte *)(iVar8 + -3);
        bVar2 = *pbVar7;
        if ((char)bVar2 < -0x40) {
          pbVar7 = (byte *)(iVar8 + -4);
          uVar11 = (int)(char)bVar2 & 0x3fU | (*pbVar7 & 7) << 6;
        }
        else {
          uVar11 = bVar2 & 0xf;
        }
        uVar11 = (int)(char)bVar1 & 0x3fU | uVar11 << 6;
      }
      else {
        uVar11 = bVar1 & 0x1f;
      }
      uVar4 = uVar4 & 0x3f | uVar11 << 6;
    }
    uVar11 = (int)pbVar7 - local_30;
  } while (uVar4 == 0);
  if (0x7fffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  uVar11 = thunk_FUN_016d4a50(uVar10);
  if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar10);
  }
LAB_010115f0:
  FUN_016dd1aa(uVar11,iVar3,uVar10);
  FUN_00fab1e0(&local_34,auStack_58,0x20);
  if (local_34 == 1) {
    FUN_015e79d4(&local_28,0x15,"Invalid UTF-8",0xd);
    *param_1 = 0x80000000;
    param_1[1] = local_28;
    param_1[2] = local_24;
    if (uVar10 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(uVar11);
    return;
  }
  do {
    uVar4 = local_2c;
    if (uVar4 == 0) {
      uVar5 = 1;
      uVar4 = 0;
      goto LAB_01011704;
    }
    iVar3 = local_30 + uVar4;
    pbVar7 = (byte *)(iVar3 + -1);
    uVar5 = (uint)(char)*pbVar7;
    if (0x7fffffff < uVar5) {
      pbVar7 = (byte *)(iVar3 + -2);
      bVar1 = *pbVar7;
      if ((char)bVar1 < -0x40) {
        pbVar7 = (byte *)(iVar3 + -3);
        bVar2 = *pbVar7;
        if ((char)bVar2 < -0x40) {
          pbVar7 = (byte *)(iVar3 + -4);
          uVar9 = (int)(char)bVar2 & 0x3fU | (*pbVar7 & 7) << 6;
        }
        else {
          uVar9 = bVar2 & 0xf;
        }
        uVar9 = (int)(char)bVar1 & 0x3fU | uVar9 << 6;
      }
      else {
        uVar9 = bVar1 & 0x1f;
      }
      uVar5 = uVar5 & 0x3f | uVar9 << 6;
    }
    local_2c = (int)pbVar7 - local_30;
  } while (uVar5 == 0);
  uVar6 = 0;
  if (-1 < (int)uVar4) {
    uVar5 = FUN_0063f47c(uVar4,1);
    uVar6 = 1;
    if (uVar5 != 0) {
LAB_01011704:
      FUN_016dd1aa(uVar5,local_30,uVar4);
      *param_1 = uVar10;
      param_1[1] = uVar11;
      param_1[2] = uVar10;
      param_1[3] = uVar4;
      param_1[4] = uVar5;
      param_1[5] = uVar4;
      param_1[6] = local_38;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar6,uVar4);
}

