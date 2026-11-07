// FUN_0110ff28 @ 0110ff28 size=968 calls_out=8 calls_in=2
// strings: 

void FUN_0110ff28(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  undefined4 uVar10;
  undefined1 unaff_r9;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  int local_68;
  uint local_64;
  uint local_60;
  int *local_5c;
  int *local_58;
  int local_50;
  uint local_4c;
  int local_48;
  int *local_44;
  int local_3c;
  uint local_38;
  int local_34;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  
  FUN_0166558c(&local_68,param_2 + 0x1c);
  piVar5 = local_5c;
  uVar7 = local_60;
  uVar11 = local_64;
  if (local_68 == 1) {
    *param_1 = 1;
    param_1[1] = 0x80000000;
    param_1[2] = local_64;
    param_1[3] = local_60;
    return;
  }
  bVar1 = *(byte *)((int)param_2 + 0x6e);
  if (bVar1 == 2) {
    *param_1 = 0;
    goto LAB_01110218;
  }
  if (local_64 == 0) {
    local_64 = 0;
    *param_1 = 0;
    goto LAB_01110218;
  }
  uVar10 = 0;
  bVar13 = (int)local_60 < 0;
  bVar14 = local_60 == 0;
  local_48 = (int)local_5c;
  local_4c = local_60;
  local_50 = local_64;
  local_44 = local_58;
  local_30 = (int *)&DAT_00000001;
  local_34 = 0;
  local_38 = 0;
  local_3c = 1;
  local_5c = local_58;
  local_60 = (uint)piVar5;
  local_64 = uVar7;
  local_68 = uVar11;
  if (bVar13) {
LAB_0110ffd8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar10,uVar7);
  }
  if (bVar14) {
    cVar9 = '\x06';
    unaff_r9 = 6;
    if (*(byte *)(param_2 + 0xd) < 3) {
      cVar9 = '\x03';
    }
    if ((bVar1 & 1) == 0) {
      cVar9 = '\x06';
    }
    if (((uint)local_58 & 1) != 0) goto LAB_011101d8;
LAB_0111004c:
    piVar5 = local_5c;
    piVar6 = local_5c + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar6;
      bVar13 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar13);
    *piVar6 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      if (*local_5c != 0) {
        thunk_FUN_016d3fb4(local_5c[1]);
      }
LAB_011101f4:
      thunk_FUN_016d3fb4(piVar5);
    }
  }
  else {
    uVar10 = 1;
    iVar3 = FUN_016d38c8(uVar7,1);
    if (iVar3 == 0) goto LAB_0110ffd8;
    if (uVar7 >> 0x10 == 0) {
      cVar9 = '\x03';
      uVar2 = unaff_r9;
      if ((bVar1 & 1) != 0) {
        unaff_r9 = 6;
        uVar2 = 6;
        if (*(byte *)(param_2 + 0xd) < 3) goto LAB_011101c8;
      }
      unaff_r9 = uVar2;
      if ((bVar1 & 1) != 0) {
        param_2 = param_2 + 6;
      }
      if (uVar7 < 0x10) {
        cVar9 = '\x06';
      }
      else {
        unaff_r9 = 0;
        if (*(char *)(param_2 + 4) == '\x01') {
          uVar12 = param_2[2];
          uVar11 = param_2[3];
          if ((uVar12 & uVar11) == 0xffffffff) {
            unaff_r9 = 8;
          }
          else {
            (**(code **)(param_2[1] + 0x18))
                      (&local_2c,*param_2,uVar12,uVar11,1,0,local_68,uVar7,iVar3,uVar7);
            if ((char)local_2c == '\x01') {
              uVar11 = local_2c >> 0x10 & 0xff;
            }
            else {
              param_2[2] = uVar12 + 1;
              param_2[3] = uVar11 + (0xfffffffe < uVar12);
              if (uVar7 < local_28) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,local_28,uVar7,&DAT_01886e20);
              }
              if (local_28 == 0) {
                iVar4 = 1;
                iVar8 = 0;
                uVar7 = 0;
              }
              else {
                FUN_00f5f538(&local_3c,local_28);
                iVar4 = local_3c;
                uVar7 = local_38;
                iVar8 = local_34;
              }
              FUN_016dd1aa(iVar4 + uVar7,iVar3,local_28);
              if (iVar8 - uVar7 < local_28) {
                local_2c = local_28;
                local_28 = iVar8 - uVar7;
                    /* WARNING: Subroutine does not return */
                FUN_00f600c0(&local_2c);
              }
              local_2c._1_1_ = '\a';
              local_38 = uVar7 + local_28;
            }
            unaff_r9 = (undefined1)uVar11;
            cVar9 = local_2c._1_1_;
          }
        }
      }
    }
    else {
      cVar9 = '\x04';
    }
LAB_011101c8:
    thunk_FUN_016d3fb4(iVar3);
    if (((uint)local_5c & 1) == 0) goto LAB_0111004c;
LAB_011101d8:
    if (local_60 + ((uint)local_5c >> 5) != 0) {
      piVar5 = (int *)(local_68 - ((uint)local_5c >> 5));
      goto LAB_011101f4;
    }
  }
  piVar5 = local_30;
  if (cVar9 != '\a') {
    *param_1 = 1;
    *(undefined1 *)((int)param_1 + 9) = unaff_r9;
    *(char *)(param_1 + 2) = cVar9;
    param_1[1] = 0x80000001;
    if (((uint)local_30 & 1) == 0) {
      piVar6 = local_30 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar13 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar13);
      *piVar6 = iVar3 + -1;
      if (iVar3 != 1) {
        return;
      }
      DataMemoryBarrier(0xb);
      if (*local_30 != 0) {
        thunk_FUN_016d3fb4(local_30[1]);
      }
    }
    else {
      if (local_34 + ((uint)local_30 >> 5) == 0) {
        return;
      }
      piVar5 = (int *)(local_3c - ((uint)local_30 >> 5));
    }
    thunk_FUN_016d3fb4(piVar5);
    return;
  }
  *param_1 = 0;
  local_5c = (int *)local_34;
  local_58 = local_30;
  local_64 = local_3c;
  local_60 = local_38;
LAB_01110218:
  param_1[3] = local_5c;
  param_1[1] = local_64;
  param_1[2] = local_60;
  param_1[4] = local_58;
  return;
}

