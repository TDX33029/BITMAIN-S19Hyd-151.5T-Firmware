// FUN_015321f0 @ 015321f0 size=1124 calls_out=5 calls_in=4
// strings: internal error: entered unreachable code

void FUN_015321f0(int *param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint local_40 [2];
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  
  local_2c = param_2 + (int)param_3;
  local_40[1] = 0x2f;
  local_40[0] = 0x7e;
  local_38 = param_2;
  local_34 = param_3;
  if (param_3 != (byte *)0x0) {
    pbVar2 = param_2;
    pbVar10 = (byte *)0x0;
    do {
      local_30 = pbVar2 + 1;
      uVar3 = (uint)*pbVar2;
      if (0x7fffffff < (uint)(int)(char)*pbVar2) {
        local_30 = pbVar2 + 2;
        if (uVar3 < 0xe0) {
          uVar3 = pbVar2[1] & 0x3f | (uVar3 & 0x1f) << 6;
        }
        else {
          local_30 = pbVar2 + 3;
          uVar5 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
          if (uVar3 < 0xf0) {
            uVar3 = uVar5 | (uVar3 & 0x1f) << 0xc;
          }
          else {
            local_30 = pbVar2 + 4;
            uVar3 = pbVar2[3] & 0x3f | uVar5 << 6 | (uVar3 & 7) << 0x12;
          }
        }
      }
      iVar8 = 0;
      local_28 = local_30 + ((int)pbVar10 - (int)pbVar2);
      while (iVar8 != 8) {
        puVar1 = (uint *)((int)local_40 + iVar8);
        iVar8 = iVar8 + 4;
        if (*puVar1 == uVar3) goto LAB_01532494;
      }
      pbVar2 = local_30;
      pbVar10 = local_28;
    } while (local_30 != local_2c);
    if ((byte *)(*param_1 - param_1[2]) < param_3) {
      FUN_01af7b44(param_1,param_1[2],param_3,1,1);
    }
  }
  iVar8 = param_1[2];
  FUN_01bed4e2(param_1[1] + iVar8,param_2);
  param_1[2] = (int)(param_3 + iVar8);
  return;
LAB_01532494:
  pbVar2 = local_34;
  local_40[1] = 0x2f;
  local_40[0] = 0x7e;
  local_38 = param_2;
  if (pbVar10 != (byte *)0x0) {
    if (pbVar10 < local_34) {
      if ((char)param_2[(int)pbVar10] < -0x40) goto LAB_01532634;
    }
    else if (local_34 != pbVar10) {
LAB_01532634:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_2,local_34,0,pbVar10,&DAT_01d2e668);
    }
  }
  iVar8 = param_1[2];
  if ((byte *)(*param_1 - iVar8) < pbVar10) {
    FUN_01af7b44(param_1,iVar8,pbVar10,1,1);
    iVar8 = param_1[2];
  }
  iVar9 = param_1[1];
  FUN_01bed4e2(iVar9 + iVar8,param_2,pbVar10);
  pbVar4 = pbVar10 + iVar8;
  param_1[2] = (int)pbVar4;
  if (pbVar2 == pbVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01cfb600);
  }
  pbVar6 = param_2 + (int)pbVar10;
  if (*pbVar6 == 0x2f) {
    uVar7 = 0x317e;
  }
  else {
    uVar7 = 0x307e;
    if (*pbVar6 != 0x7e) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cfb620);
    }
  }
  if ((uint)(*param_1 - (int)pbVar4) < 2) {
    FUN_01af7b44(param_1,pbVar4,2,1,1);
    iVar9 = param_1[1];
    pbVar4 = (byte *)param_1[2];
  }
  uVar3 = (int)pbVar2 - (int)pbVar10;
  pbVar12 = pbVar4 + 2;
  pbVar11 = pbVar6 + 1;
  param_1[2] = (int)pbVar12;
  *(undefined2 *)(pbVar4 + iVar9) = uVar7;
  if (uVar3 < 2) {
    pbVar4 = (byte *)0x0;
  }
  else {
    if ((char)*pbVar11 < -0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(pbVar6,uVar3,1,uVar3,&DAT_01cfb610);
    }
    local_2c = param_2 + (int)pbVar2;
    local_40[1] = 0x2f;
    pbVar4 = (byte *)(uVar3 - 1);
    local_40[0] = 0x7e;
    local_38 = pbVar11;
    pbVar2 = pbVar11;
    pbVar10 = (byte *)0x0;
    do {
      local_30 = pbVar2 + 1;
      uVar3 = (uint)*pbVar2;
      if (0x7fffffff < (uint)(int)(char)*pbVar2) {
        local_30 = pbVar2 + 2;
        if (uVar3 < 0xe0) {
          uVar3 = pbVar2[1] & 0x3f | (uVar3 & 0x1f) << 6;
        }
        else {
          local_30 = pbVar2 + 3;
          uVar5 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
          if (uVar3 < 0xf0) {
            uVar3 = uVar5 | (uVar3 & 0x1f) << 0xc;
          }
          else {
            local_30 = pbVar2 + 4;
            uVar3 = pbVar2[3] & 0x3f | uVar5 << 6 | (uVar3 & 7) << 0x12;
          }
        }
      }
      iVar8 = 0;
      local_28 = local_30 + ((int)pbVar10 - (int)pbVar2);
      while (local_34 = pbVar4, iVar8 != 8) {
        puVar1 = (uint *)((int)local_40 + iVar8);
        iVar8 = iVar8 + 4;
        if (*puVar1 == uVar3) {
          param_2 = pbVar11;
          goto LAB_01532494;
        }
      }
      pbVar2 = local_30;
      pbVar10 = local_28;
    } while (local_30 != local_2c);
    if ((byte *)(*param_1 - (int)pbVar12) < pbVar4) {
      FUN_01af7b44(param_1,pbVar12,pbVar4,1,1);
      iVar9 = param_1[1];
      pbVar12 = (byte *)param_1[2];
    }
  }
  FUN_01bed4e2(pbVar12 + iVar9,pbVar11);
  param_1[2] = (int)(pbVar12 + (int)pbVar4);
  return;
}

