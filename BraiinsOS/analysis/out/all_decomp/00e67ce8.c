// FUN_00e67ce8 @ 00e67ce8 size=2192 calls_out=22 calls_in=1
// strings: enabled | hw_details | chips | cores | frequency_mhz | voltage_v

int FUN_00e67ce8(int *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50 [16];
  undefined4 local_30;
  int *local_2c;
  
  piVar8 = (int *)*param_2;
  iVar5 = piVar8[2];
  iVar11 = *piVar8;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[3] = param_2[3] + 1;
  if (iVar11 == iVar5) {
    FUN_00edff4c(piVar8,iVar5,1,1,1);
    iVar5 = piVar8[2];
  }
  *(undefined1 *)(piVar8[1] + iVar5) = 0x7b;
  piVar8[2] = iVar5 + 1;
  local_60 = CONCAT22(local_60._2_2_,0x100);
  uVar12 = param_1[0xa8];
  uVar10 = param_1[0xa9];
  local_5c = param_2;
  iVar5 = FUN_00e5b230(&local_60,"id",2);
  piVar8 = local_5c;
  if (iVar5 != 0) {
    return iVar5;
  }
  if ((char)local_60 == '\x01') goto LAB_00e6840c;
  piVar9 = (int *)*local_5c;
  iVar5 = piVar9[2];
  if ((uint)(*piVar9 - iVar5) < 2) {
    FUN_00edff4c(piVar9,iVar5,2,1,1);
    iVar5 = piVar9[2];
  }
  piVar9[2] = iVar5 + 2;
  *(undefined2 *)(piVar9[1] + iVar5) = 0x203a;
  piVar9 = (int *)*piVar8;
  if ((uVar12 & 1) == 0) {
    iVar5 = piVar9[2];
    if ((uint)(*piVar9 - iVar5) < 4) {
      FUN_00edff4c(piVar9,iVar5,4,1,1);
      iVar5 = piVar9[2];
    }
    *(undefined4 *)(piVar9[1] + iVar5) = 0x6c6c756e;
    iVar5 = iVar5 + 4;
  }
  else {
    iVar5 = 10;
    if (uVar10 < 10000) {
      uVar12 = uVar10;
      if (uVar10 < 100) goto LAB_00e67e68;
LAB_00e67ec8:
      iVar11 = iVar5 + -2;
      uVar12 = (uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_50 + iVar5 + -10) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar12 * 0xff9c + uVar10 & 0xffff) * 2);
      if (9 < uVar12) goto LAB_00e67e74;
LAB_00e67f04:
      iVar4 = iVar11 + -1;
      *(byte *)((int)local_50 + iVar11 + -9) = (byte)uVar12 | 0x30;
    }
    else {
      iVar11 = 0;
      uVar12 = uVar10;
      do {
        iVar5 = iVar11;
        uVar10 = uVar12 / 10000;
        uVar7 = uVar10 * 0xd8f0 + uVar12;
        uVar2 = (uint)((short)((uVar7 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_50 + iVar5 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
        *(undefined2 *)((int)local_50 + iVar5) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar2 * 0xff9c + uVar7 & 0xffff) * 2);
        bVar1 = 99999999 < uVar12;
        iVar11 = iVar5 + -4;
        uVar12 = uVar10;
      } while (bVar1);
      iVar5 = iVar5 + 6;
      if (99 < uVar10) goto LAB_00e67ec8;
LAB_00e67e68:
      iVar11 = iVar5;
      if (uVar12 < 10) goto LAB_00e67f04;
LAB_00e67e74:
      iVar4 = iVar11 + -2;
      *(undefined2 *)((int)local_50 + iVar11 + -10) = *(undefined2 *)(&DAT_0040f4ca + uVar12 * 2);
    }
    iVar5 = piVar9[2];
    uVar10 = 10 - iVar4;
    if ((uint)(*piVar9 - iVar5) < uVar10) {
      FUN_00edff4c(piVar9,iVar5,uVar10,1,1);
      iVar5 = piVar9[2];
    }
    FUN_016dd1aa(piVar9[1] + iVar5,(int)local_50 + iVar4 + -8,uVar10);
    iVar5 = iVar5 + uVar10;
  }
  piVar9[2] = iVar5;
  *(undefined1 *)(piVar8 + 4) = 1;
  bVar3 = *(byte *)(param_1 + 0xb6);
  iVar5 = FUN_00e5b230(&local_60,"enabled",7);
  piVar8 = local_5c;
  if (iVar5 != 0) {
    return iVar5;
  }
  if ((char)local_60 == '\x01') goto LAB_00e6840c;
  piVar9 = (int *)*local_5c;
  iVar5 = piVar9[2];
  if ((uint)(*piVar9 - iVar5) < 2) {
    FUN_00edff4c(piVar9,iVar5,2,1,1);
    iVar5 = piVar9[2];
  }
  piVar9[2] = iVar5 + 2;
  *(undefined2 *)(piVar9[1] + iVar5) = 0x203a;
  piVar9 = (int *)*piVar8;
  if (bVar3 == 2) {
    iVar5 = piVar9[2];
    if ((uint)(*piVar9 - iVar5) < 4) {
      FUN_00edff4c(piVar9,iVar5,4,1,1);
      iVar5 = piVar9[2];
    }
    iVar11 = piVar9[1];
    uVar6 = 0x6c6c756e;
LAB_00e6800c:
    *(undefined4 *)(iVar11 + iVar5) = uVar6;
    iVar5 = iVar5 + 4;
  }
  else {
    if ((bVar3 & 1) != 0) {
      iVar5 = piVar9[2];
      if ((uint)(*piVar9 - iVar5) < 4) {
        FUN_00edff4c(piVar9,iVar5,4,1,1);
        iVar5 = piVar9[2];
      }
      iVar11 = piVar9[1];
      uVar6 = 0x65757274;
      goto LAB_00e6800c;
    }
    iVar5 = piVar9[2];
    if ((uint)(*piVar9 - iVar5) < 5) {
      FUN_00edff4c(piVar9,iVar5,5,1,1);
      iVar5 = piVar9[2];
    }
    iVar11 = piVar9[1];
    *(undefined4 *)(iVar11 + iVar5) = 0x736c6166;
    *(undefined1 *)((undefined4 *)(iVar11 + iVar5) + 1) = 0x65;
    iVar5 = iVar5 + 5;
  }
  piVar9[2] = iVar5;
  *(undefined1 *)(piVar8 + 4) = 1;
  iVar5 = FUN_00e5b230(&local_60,&DAT_00564eb0,0x10);
  piVar8 = local_5c;
  if (iVar5 != 0) {
    return iVar5;
  }
  if ((char)local_60 != '\x01') {
    piVar9 = (int *)*local_5c;
    iVar5 = piVar9[2];
    if ((uint)(*piVar9 - iVar5) < 2) {
      FUN_00edff4c(piVar9,iVar5,2,1,1);
      iVar5 = piVar9[2];
    }
    iVar4 = param_1[0x88];
    iVar11 = param_1[0x89];
    piVar9[2] = iVar5 + 2;
    *(undefined2 *)(piVar9[1] + iVar5) = 0x203a;
    if (iVar4 == 5 && iVar11 == 0) {
      piVar9 = (int *)*piVar8;
      iVar5 = piVar9[2];
      if ((uint)(*piVar9 - iVar5) < 4) {
        FUN_00edff4c(piVar9,iVar5,4,1,1);
        iVar5 = piVar9[2];
      }
      *(undefined4 *)(piVar9[1] + iVar5) = 0x6c6c756e;
      piVar9[2] = iVar5 + 4;
    }
    else {
      iVar5 = FUN_00efde8c(param_1 + 0x88,piVar8);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    *(undefined1 *)(piVar8 + 4) = 1;
    iVar5 = FUN_00e5b230(&local_60,"hw_details",10);
    piVar8 = local_5c;
    if (iVar5 != 0) {
      return iVar5;
    }
    if ((char)local_60 != '\x01') {
      FUN_00f1f6ac(*local_5c,&DAT_00414a7c,2);
      iVar5 = *param_1;
      iVar11 = param_1[1];
      if (iVar5 == 2 && iVar11 == 0) {
        FUN_00f1f6ac(*piVar8,&DAT_00567318,4);
LAB_00e68178:
        *(undefined1 *)(piVar8 + 4) = 1;
        iVar5 = FUN_00e689ec(&local_60,param_1 + 0xb0);
        if ((((((iVar5 == 0) && (iVar5 = FUN_00e69848(&local_60,param_1 + 0x12), iVar5 == 0)) &&
              (iVar5 = FUN_00e69cfc(&local_60,param_1 + 0xb3), iVar5 == 0)) &&
             ((iVar5 = FUN_00e6a364(&local_60,param_1 + 0x20), iVar5 == 0 &&
              (iVar5 = FUN_00e6a804(&local_60,param_1 + 0x8e), iVar5 == 0)))) &&
            ((iVar5 = FUN_00e6aec4(&local_60,param_1 + 0xa2), iVar5 == 0 &&
             ((iVar5 = FUN_00e6b710(&local_60,param_1 + 0x30), iVar5 == 0 &&
              (iVar5 = FUN_00e6ba34(&local_60,param_1 + 0x46), iVar5 == 0)))))) &&
           ((iVar5 = FUN_00e6bd18(&local_60,param_1 + 0xaa), iVar5 == 0 &&
            (iVar5 = FUN_00e6c0c8(&local_60,param_1[0xae],param_1[0xaf]), iVar5 == 0)))) {
          local_58 = local_60;
          local_54 = local_5c;
          FUN_00e5c7e0(&local_58);
          return 0;
        }
        return iVar5;
      }
      piVar8[3] = piVar8[3] + 1;
      *(undefined1 *)(piVar8 + 4) = 0;
      FUN_00f1f6ac(*piVar8,&DAT_004144eb,1);
      local_30 = CONCAT22(local_30._2_2_,0x100);
      local_2c = piVar8;
      iVar4 = FUN_00e5b648(&local_30,"chips",5,param_1[0xf]);
      if (iVar4 != 0) {
        return iVar4;
      }
      if ((char)local_30 == '\0') {
        iVar4 = FUN_00e5b648(&local_30,"cores",5,param_1[0x10]);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = FUN_00e685bc((int)*(undefined8 *)(param_1 + 4),&local_30,"frequency_mhz",0xd);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = FUN_00e687a8((int)*(undefined8 *)(param_1 + 2),&local_30,"voltage_v",9);
        if (iVar4 != 0) {
          return iVar4;
        }
        if ((char)local_30 == '\0') {
          iVar4 = FUN_00e5b468(&local_30,"hb_serial_number",0x10,param_1 + 6,iVar5,iVar11);
          if (iVar4 != 0) {
            return iVar4;
          }
          if ((char)local_30 == '\0') {
            iVar4 = FUN_00e5b468(&local_30,"hashboard_name",0xe,param_1 + 9,iVar5,iVar11);
            if (iVar4 != 0) {
              return iVar4;
            }
            if ((char)local_30 == '\0') {
              iVar5 = FUN_00e5b468(&local_30,"chip_type",9,param_1 + 0xc,iVar5,iVar11);
              if (iVar5 != 0) {
                return iVar5;
              }
              local_58 = local_30;
              local_54 = local_2c;
              FUN_00e5c7e0(&local_58);
              goto LAB_00e68178;
            }
          }
        }
      }
      local_58 = 10;
      iVar5 = FUN_0157c50c(&local_58,0,0);
      return iVar5;
    }
  }
LAB_00e6840c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
}

