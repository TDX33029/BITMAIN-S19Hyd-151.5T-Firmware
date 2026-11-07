// FUN_0169dccc @ 0169dccc size=752 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_0169dccc(int *param_1,int param_2,int *param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r2;
  uint extraout_r2_00;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 ***local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint ***local_40;
  code *local_3c;
  uint *local_38;
  code *local_34;
  uint **local_30;
  undefined1 local_28;
  uint local_24;
  
  if ((uint)(*(int *)(*(int *)(param_1[0x301] + 0x13c) + 0x10) * 2) < param_5) {
    if ((param_1[0x2b1] != 3) &&
       ((*param_3 - 1U < 2 || (*(int *)(param_1[0x2ba] + 0x128) == *(int *)(param_1[0x2ba] + 300))))
       ) {
      uVar1 = FUN_0169ea74(param_1,param_2,param_3,param_4);
      return uVar1;
    }
    if (param_1[0x254] == 2) {
      if (*param_1 != 2 || param_1[1] != 0) {
        if (*(int *)(param_2 + 0x248) == 2) {
LAB_0169df98:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d08054);
        }
        FUN_0169e7e8(&local_40,param_1,param_2 + 0xd8,param_3);
        if (local_40 != (undefined4 ***)0x2) goto LAB_0169dea4;
        uVar5 = FUN_016c2dec(local_3c);
        local_38 = (uint *)extraout_r2;
        goto LAB_0169deb0;
      }
    }
    else {
      FUN_0169e238(&local_40,param_1 + 0x144,param_3);
      if (local_40 == (undefined4 ***)0x2) {
        uVar5 = FUN_016c2dec(local_3c);
        local_38 = (uint *)extraout_r2_00;
      }
      else {
LAB_0169dea4:
        uVar5 = CONCAT44(local_34,local_3c);
      }
LAB_0169deb0:
      local_3c = (code *)((ulonglong)uVar5 >> 0x20);
      local_50 = (undefined4 ***)uVar5;
      if (local_40 != (undefined4 ***)0x2) {
        if (((uint)local_40 & 1) != 0) {
          local_24 = param_3[3];
          bVar4 = (uint **)((int)local_38 + 1U) <= local_50;
          bVar3 = local_50 == (undefined4 ***)((int)local_38 + 1U);
          local_28 = (undefined1)param_3[6];
          if (!bVar4 || bVar3) {
            bVar4 = local_24 <= local_38;
            bVar3 = local_38 == (uint *)local_24;
          }
          if (!bVar4 || bVar3) {
            local_40 = (undefined4 ***)0x2;
            local_38 = (uint *)param_3[2];
            local_34 = (code *)local_24;
            local_30 = (uint **)local_50;
            uVar2 = FUN_0169ea74(param_1,param_2,&local_40,param_4,param_5);
            if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c(&DAT_004ce55a,0x13,&DAT_01d0827c);
            }
            return 1;
          }
          local_3c = FUN_0065fd28;
          local_40 = (uint ***)&local_50;
          local_38 = &local_24;
          local_34 = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a4e9e,&local_40,&DAT_01d08154);
        }
        goto LAB_0169df44;
      }
    }
    uVar1 = FUN_0169ea74(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    if (param_1[0x254] == 2) {
      if (*param_1 != 2 || param_1[1] != 0) {
        if (*(int *)(param_2 + 0x248) == 2) goto LAB_0169df98;
        FUN_0169e7e8(&local_40,param_1,param_2 + 0xd8,param_3);
        goto LAB_0169ddf0;
      }
LAB_0169de04:
      FUN_0169e4e0(&local_50,param_1,param_2,param_3);
    }
    else {
      FUN_0169e238(&local_40,param_1 + 0x144,param_3);
LAB_0169ddf0:
      if (local_40 == (undefined4 ***)0x2) {
        FUN_016c2dec(local_3c);
        goto LAB_0169de04;
      }
      local_44 = (int)local_34;
      local_48 = (uint)local_38;
      local_4c = (int)local_3c;
      local_50 = local_40;
    }
    if (local_50 != (undefined4 ***)0x0) {
      uVar2 = local_44 << 1 | 1;
      if ((uint)(local_44 * 2) < param_5) {
        *(int *)(param_4 + local_44 * 8) = local_4c + 1;
      }
      if (uVar2 < param_5) {
        *(uint *)(param_4 + uVar2 * 4) = local_48 + 1;
        return 1;
      }
      return 1;
    }
LAB_0169df44:
    uVar1 = 0;
  }
  return uVar1;
}

