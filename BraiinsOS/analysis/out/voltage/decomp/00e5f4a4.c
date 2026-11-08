// function @ 00e5f4a4  size=2440  volt_strings=1
// strings: quality | power_target | calculated_consumption | outlet_temp | ambient_temp | frequency | voltage

int FUN_00e5f4a4(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_46 [17];
  
  piVar10 = (int *)*param_1;
  iVar8 = param_1[3];
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = iVar8 + 1;
  iVar4 = piVar10[2];
  if (*piVar10 == iVar4) {
    FUN_00edff4c(piVar10,iVar4,1,1,1);
    iVar4 = piVar10[2];
  }
  *(undefined1 *)(piVar10[1] + iVar4) = 0x5b;
  iVar4 = iVar4 + 1;
  piVar10[2] = iVar4;
  if (param_3 == 0) {
    iVar11 = *piVar10;
    param_1[3] = iVar8;
    if (iVar11 == iVar4) {
      FUN_00edff4c(piVar10,iVar4,1,1,1);
      iVar4 = piVar10[2];
    }
    *(undefined1 *)(piVar10[1] + iVar4) = 0x5d;
    piVar10[2] = iVar4 + 1;
  }
  else {
    iVar4 = param_2 + param_3 * 0x50;
    bVar3 = true;
    do {
      piVar10 = (int *)*param_1;
      if (bVar3) {
        iVar8 = piVar10[2];
        if (*piVar10 == iVar8) {
          FUN_00edff4c(piVar10,iVar8,1,1,1);
          iVar8 = piVar10[2];
        }
        iVar11 = iVar8 + 1;
        *(undefined1 *)(piVar10[1] + iVar8) = 10;
      }
      else {
        iVar8 = piVar10[2];
        if ((uint)(*piVar10 - iVar8) < 2) {
          FUN_00edff4c(piVar10,iVar8,2,1,1);
          iVar8 = piVar10[2];
        }
        iVar11 = iVar8 + 2;
        *(undefined2 *)(piVar10[1] + iVar8) = 0xa2c;
      }
      iVar8 = param_1[3];
      uVar12 = param_1[1];
      uVar9 = param_1[2];
      piVar10[2] = iVar11;
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      else {
        do {
          if ((uint)(*piVar10 - iVar11) < uVar9) {
            FUN_00edff4c(piVar10,iVar11,uVar9,1,1);
            iVar11 = piVar10[2];
          }
          FUN_016dd1aa(piVar10[1] + iVar11,uVar12,uVar9);
          iVar11 = iVar11 + uVar9;
          iVar8 = iVar8 + -1;
          piVar10[2] = iVar11;
        } while (iVar8 != 0);
        iVar8 = param_1[3] + 1;
      }
      piVar10 = (int *)*param_1;
      iVar11 = piVar10[2];
      iVar5 = *piVar10;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[3] = iVar8;
      if (iVar5 == iVar11) {
        FUN_00edff4c(piVar10,iVar11,1,1,1);
        iVar11 = piVar10[2];
      }
      *(undefined1 *)(piVar10[1] + iVar11) = 0x7b;
      piVar10[2] = iVar11 + 1;
      local_54 = CONCAT22(local_54._2_2_,0x100);
      local_50 = param_1;
      iVar8 = FUN_00e5fe5c(&local_54,"quality",7,*(undefined4 *)(param_2 + 0x40));
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_54 != '\0') {
LAB_00e5fd68:
        local_4c = 10;
        iVar4 = FUN_0157c50c(&local_4c,0,0);
        return iVar4;
      }
      iVar8 = FUN_00e5b230(&local_54,"power_target",0xc);
      puVar2 = local_50;
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_54 == '\x01') goto LAB_00e5fd88;
      piVar10 = (int *)*local_50;
      iVar8 = piVar10[2];
      if ((uint)(*piVar10 - iVar8) < 2) {
        FUN_00edff4c(piVar10,iVar8,2,1,1);
        iVar8 = piVar10[2];
      }
      piVar10[2] = iVar8 + 2;
      *(undefined2 *)(piVar10[1] + iVar8) = 0x203a;
      FUN_00efe8d4((int)*(undefined8 *)(param_2 + 0x28),*puVar2);
      *(undefined1 *)(puVar2 + 4) = 1;
      iVar8 = FUN_00e5b230(&local_54,"calculated_consumption",0x16);
      puVar2 = local_50;
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_54 == '\x01') goto LAB_00e5fd88;
      piVar10 = (int *)*local_50;
      iVar8 = piVar10[2];
      if ((uint)(*piVar10 - iVar8) < 2) {
        FUN_00edff4c(piVar10,iVar8,2,1,1);
        iVar8 = piVar10[2];
      }
      piVar10[2] = iVar8 + 2;
      *(undefined2 *)(piVar10[1] + iVar8) = 0x203a;
      FUN_00efe8d4((int)*(undefined8 *)(param_2 + 0x30),*puVar2);
      *(undefined1 *)(puVar2 + 4) = 1;
      iVar8 = FUN_00e5fe5c(&local_54,&DAT_0056a9e0,8,*(undefined4 *)(param_2 + 0x44));
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = FUN_00e600d4(*(undefined4 *)(param_2 + 0x1c),&local_54,"outlet_temp",0xb,
                           *(undefined4 *)(param_2 + 0x18));
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = FUN_00e600d4(*(undefined4 *)(param_2 + 0x24),&local_54,"ambient_temp",0xc,
                           *(undefined4 *)(param_2 + 0x20));
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_54 != '\0') goto LAB_00e5fd68;
      iVar8 = FUN_00e5b230(&local_54,&DAT_0056aaa8,8);
      puVar2 = local_50;
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_54 == '\x01') goto LAB_00e5fd88;
      piVar10 = (int *)*local_50;
      iVar8 = piVar10[2];
      if ((uint)(*piVar10 - iVar8) < 2) {
        FUN_00edff4c(piVar10,iVar8,2,1,1);
        iVar8 = piVar10[2];
      }
      piVar10[2] = iVar8 + 2;
      *(undefined2 *)(piVar10[1] + iVar8) = 0x203a;
      iVar8 = FUN_00efde8c(param_2,puVar2);
      if (iVar8 != 0) {
        return iVar8;
      }
      *(undefined1 *)(puVar2 + 4) = 1;
      iVar8 = FUN_00e5b230(&local_54,"frequency",9);
      puVar2 = local_50;
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_54 == '\x01') goto LAB_00e5fd88;
      piVar10 = (int *)*local_50;
      iVar8 = piVar10[2];
      if ((uint)(*piVar10 - iVar8) < 2) {
        FUN_00edff4c(piVar10,iVar8,2,1,1);
        iVar8 = piVar10[2];
      }
      piVar10[2] = iVar8 + 2;
      *(undefined2 *)(piVar10[1] + iVar8) = 0x203a;
      iVar8 = 10;
      piVar10 = (int *)*puVar2;
      uVar9 = *(uint *)(param_2 + 0x48);
      if (uVar9 < 10000) {
        if (uVar9 < 100) goto LAB_00e5f960;
LAB_00e5f998:
        iVar11 = iVar8 + -2;
        uVar6 = (uint)((short)((uVar9 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_46 + iVar8 + -8) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar6 * 0xff9c + uVar9 & 0xffff) * 2);
        if (9 < uVar6) goto LAB_00e5f96c;
LAB_00e5f9cc:
        iVar8 = iVar11 + -1;
        *(byte *)((int)local_46 + iVar11 + -7) = (byte)uVar6 | 0x30;
      }
      else {
        iVar11 = 0;
        uVar6 = uVar9;
        do {
          iVar8 = iVar11;
          uVar9 = uVar6 / 10000;
          uVar7 = uVar9 * 0xd8f0 + uVar6;
          uVar1 = (uint)((short)((uVar7 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_46 + iVar8) = *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
          *(undefined2 *)((int)local_46 + iVar8 + 2) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar1 * 0xff9c + uVar7 & 0xffff) * 2);
          bVar3 = 99999999 < uVar6;
          iVar11 = iVar8 + -4;
          uVar6 = uVar9;
        } while (bVar3);
        iVar8 = iVar8 + 6;
        if (99 < uVar9) goto LAB_00e5f998;
LAB_00e5f960:
        iVar11 = iVar8;
        uVar6 = uVar9;
        if (uVar9 < 10) goto LAB_00e5f9cc;
LAB_00e5f96c:
        iVar8 = iVar11 + -2;
        *(undefined2 *)((int)local_46 + iVar11 + -8) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
      }
      uVar9 = 10 - iVar8;
      iVar11 = piVar10[2];
      if ((uint)(*piVar10 - iVar11) < uVar9) {
        FUN_00edff4c(piVar10,iVar11,uVar9,1,1);
        iVar11 = piVar10[2];
      }
      FUN_016dd1aa(piVar10[1] + iVar11,(int)local_46 + iVar8 + -6,uVar9);
      piVar10[2] = iVar11 + uVar9;
      *(undefined1 *)(puVar2 + 4) = 1;
      iVar8 = FUN_00e5b230(&local_54,"voltage",7);
      puVar2 = local_50;
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((char)local_54 == '\x01') {
LAB_00e5fd88:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
      }
      piVar10 = (int *)*local_50;
      iVar8 = piVar10[2];
      if ((uint)(*piVar10 - iVar8) < 2) {
        FUN_00edff4c(piVar10,iVar8,2,1,1);
        iVar8 = piVar10[2];
      }
      piVar10[2] = iVar8 + 2;
      *(undefined2 *)(piVar10[1] + iVar8) = 0x203a;
      FUN_00efe9e0((int)*(undefined8 *)(param_2 + 0x38),*puVar2);
      *(undefined1 *)(puVar2 + 4) = 1;
      if (((local_54 & 0xff00) != 0) && ((local_54 & 1) == 0)) {
        piVar10 = (int *)*puVar2;
        iVar11 = piVar10[2];
        iVar8 = puVar2[3] + -1;
        iVar5 = *piVar10;
        puVar2[3] = iVar8;
        if (iVar5 == iVar11) {
          FUN_00edff4c(piVar10,iVar11,1,1,1);
          iVar11 = piVar10[2];
        }
        uVar9 = puVar2[2];
        iVar5 = iVar11 + 1;
        uVar12 = puVar2[1];
        *(undefined1 *)(piVar10[1] + iVar11) = 10;
        piVar10[2] = iVar5;
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          if ((uint)(*piVar10 - iVar5) < uVar9) {
            FUN_00edff4c(piVar10,iVar5,uVar9,1,1);
            iVar5 = piVar10[2];
          }
          FUN_016dd1aa(piVar10[1] + iVar5,uVar12,uVar9);
          iVar5 = iVar5 + uVar9;
          piVar10[2] = iVar5;
        }
        if (*piVar10 == iVar5) {
          FUN_00edff4c(piVar10,iVar5,1,1,1);
          iVar5 = piVar10[2];
        }
        *(undefined1 *)(piVar10[1] + iVar5) = 0x7d;
        piVar10[2] = iVar5 + 1;
      }
      param_2 = param_2 + 0x50;
      bVar3 = false;
      *(undefined1 *)(param_1 + 4) = 1;
    } while (param_2 != iVar4);
    piVar10 = (int *)*param_1;
    iVar8 = piVar10[2];
    iVar4 = param_1[3] + -1;
    iVar11 = *piVar10;
    param_1[3] = iVar4;
    if (iVar11 == iVar8) {
      FUN_00edff4c(piVar10,iVar8,1,1,1);
      iVar8 = piVar10[2];
    }
    iVar11 = iVar8 + 1;
    uVar12 = param_1[1];
    uVar9 = param_1[2];
    *(undefined1 *)(piVar10[1] + iVar8) = 10;
    piVar10[2] = iVar11;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if ((uint)(*piVar10 - iVar11) < uVar9) {
        FUN_00edff4c(piVar10,iVar11,uVar9,1,1);
        iVar11 = piVar10[2];
      }
      FUN_016dd1aa(piVar10[1] + iVar11,uVar12,uVar9);
      iVar11 = iVar11 + uVar9;
      piVar10[2] = iVar11;
    }
    if (*piVar10 == iVar11) {
      FUN_00edff4c(piVar10,iVar11,1,1,1);
      iVar11 = piVar10[2];
    }
    *(undefined1 *)(piVar10[1] + iVar11) = 0x5d;
    piVar10[2] = iVar11 + 1;
  }
  return 0;
}

