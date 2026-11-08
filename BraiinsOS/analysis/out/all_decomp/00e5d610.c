// FUN_00e5d610 @ 00e5d610 size=2540 calls_out=11 calls_in=1
// strings: target | measured_hashrate | created_on | estimated_power | tuning_duration | inlet_outlet_pcb_temperature

int FUN_00e5d610(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_4c;
  undefined4 *local_48;
  uint local_44;
  undefined4 *local_40;
  
  piVar9 = (int *)*param_1;
  iVar7 = param_1[3];
  iVar4 = piVar9[2];
  iVar6 = *piVar9;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = iVar7 + 1;
  if (iVar6 == iVar4) {
    FUN_00edff4c(piVar9,iVar4,1,1,1);
    iVar4 = piVar9[2];
  }
  *(undefined1 *)(piVar9[1] + iVar4) = 0x5b;
  iVar4 = iVar4 + 1;
  piVar9[2] = iVar4;
  if (param_3 == 0) {
    iVar6 = *piVar9;
    param_1[3] = iVar7;
    if (iVar6 == iVar4) {
      FUN_00edff4c(piVar9,iVar4,1,1,1);
      iVar4 = piVar9[2];
    }
    *(undefined1 *)(piVar9[1] + iVar4) = 0x5d;
    piVar9[2] = iVar4 + 1;
  }
  else {
    iVar4 = param_3 * 0x68 + param_2;
    bVar3 = true;
    do {
      piVar9 = (int *)*param_1;
      if (bVar3) {
        iVar6 = piVar9[2];
        if (*piVar9 == iVar6) {
          FUN_00edff4c(piVar9,iVar6,1,1,1);
          iVar6 = piVar9[2];
        }
        iVar7 = iVar6 + 1;
        *(undefined1 *)(piVar9[1] + iVar6) = 10;
      }
      else {
        iVar6 = piVar9[2];
        if ((uint)(*piVar9 - iVar6) < 2) {
          FUN_00edff4c(piVar9,iVar6,2,1,1);
          iVar6 = piVar9[2];
        }
        iVar7 = iVar6 + 2;
        *(undefined2 *)(piVar9[1] + iVar6) = 0xa2c;
      }
      iVar6 = param_1[3];
      uVar10 = param_1[1];
      uVar8 = param_1[2];
      piVar9[2] = iVar7;
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      else {
        do {
          if ((uint)(*piVar9 - iVar7) < uVar8) {
            FUN_00edff4c(piVar9,iVar7,uVar8,1,1);
            iVar7 = piVar9[2];
          }
          FUN_016dd1aa(piVar9[1] + iVar7,uVar10,uVar8);
          iVar7 = iVar7 + uVar8;
          iVar6 = iVar6 + -1;
          piVar9[2] = iVar7;
        } while (iVar6 != 0);
        iVar6 = param_1[3] + 1;
      }
      piVar9 = (int *)*param_1;
      iVar7 = piVar9[2];
      iVar5 = *piVar9;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[3] = iVar6;
      if (iVar5 == iVar7) {
        FUN_00edff4c(piVar9,iVar7,1,1,1);
        iVar7 = piVar9[2];
      }
      *(undefined1 *)(piVar9[1] + iVar7) = 0x7b;
      piVar9[2] = iVar7 + 1;
      local_4c = CONCAT22(local_4c._2_2_,0x100);
      local_48 = param_1;
      iVar6 = FUN_00e5e024(&local_4c,"target",6,param_2 + 0x18);
      if (iVar6 != 0) {
        return iVar6;
      }
      if ((char)local_4c != '\0') {
        local_44 = 10;
        iVar4 = FUN_0157c50c(&local_44,0,0);
        return iVar4;
      }
      iVar6 = FUN_00e5b230(&local_4c,"measured_hashrate",0x11);
      puVar1 = local_48;
      if (iVar6 != 0) {
        return iVar6;
      }
      if ((char)local_4c == '\x01') {
LAB_00e5df18:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
      }
      piVar9 = (int *)*local_48;
      iVar6 = piVar9[2];
      if ((uint)(*piVar9 - iVar6) < 2) {
        FUN_00edff4c(piVar9,iVar6,2,1,1);
        iVar6 = piVar9[2];
      }
      piVar9[2] = iVar6 + 2;
      *(undefined2 *)(piVar9[1] + iVar6) = 0x203a;
      iVar6 = FUN_00efde8c(param_2,puVar1);
      if (iVar6 != 0) {
        return iVar6;
      }
      *(undefined1 *)(puVar1 + 4) = 1;
      iVar6 = FUN_00e5b230(&local_4c,"created_on",10);
      puVar1 = local_48;
      if (iVar6 != 0) {
        return iVar6;
      }
      if ((char)local_4c == '\x01') goto LAB_00e5df18;
      piVar9 = (int *)*local_48;
      iVar6 = piVar9[2];
      if ((uint)(*piVar9 - iVar6) < 2) {
        FUN_00edff4c(piVar9,iVar6,2,1,1);
        iVar6 = piVar9[2];
      }
      piVar9[2] = iVar6 + 2;
      *(undefined2 *)(piVar9[1] + iVar6) = 0x203a;
      iVar6 = FUN_00e95744(param_2 + 0x30,puVar1);
      if (iVar6 != 0) {
        return iVar6;
      }
      *(undefined1 *)(puVar1 + 4) = 1;
      iVar6 = FUN_00e5b230(&local_4c,"estimated_power",0xf);
      puVar1 = local_48;
      if (iVar6 != 0) {
        return iVar6;
      }
      if ((char)local_4c == '\x01') goto LAB_00e5df18;
      piVar9 = (int *)*local_48;
      iVar6 = piVar9[2];
      if ((uint)(*piVar9 - iVar6) < 2) {
        FUN_00edff4c(piVar9,iVar6,2,1,1);
        iVar6 = piVar9[2];
      }
      piVar9[2] = iVar6 + 2;
      *(undefined2 *)(piVar9[1] + iVar6) = 0x203a;
      FUN_00efe8d4((int)*(undefined8 *)(param_2 + 0x50),*puVar1);
      *(undefined1 *)(puVar1 + 4) = 1;
      iVar6 = FUN_00e5b230(&local_4c,"tuning_duration",0xf);
      puVar1 = local_48;
      if (iVar6 != 0) {
        return iVar6;
      }
      if ((char)local_4c == '\x01') goto LAB_00e5df18;
      piVar9 = (int *)*local_48;
      iVar6 = piVar9[2];
      if ((uint)(*piVar9 - iVar6) < 2) {
        FUN_00edff4c(piVar9,iVar6,2,1,1);
        iVar6 = piVar9[2];
      }
      piVar9[2] = iVar6 + 2;
      *(undefined2 *)(piVar9[1] + iVar6) = 0x203a;
      iVar6 = FUN_00e953fc(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           *(undefined4 *)(param_2 + 0x48),puVar1);
      if (iVar6 != 0) {
        return iVar6;
      }
      *(undefined1 *)(puVar1 + 4) = 1;
      iVar6 = FUN_00e5b230(&local_4c,"inlet_outlet_pcb_temperature",0x1c);
      puVar1 = local_48;
      if (iVar6 != 0) {
        return iVar6;
      }
      if ((char)local_4c == '\x01') goto LAB_00e5df18;
      piVar9 = (int *)*local_48;
      iVar6 = piVar9[2];
      if ((uint)(*piVar9 - iVar6) < 2) {
        FUN_00edff4c(piVar9,iVar6,2,1,1);
        iVar6 = piVar9[2];
      }
      piVar9[2] = iVar6 + 2;
      iVar7 = *(int *)(param_2 + 0x58);
      *(undefined2 *)(piVar9[1] + iVar6) = 0x203a;
      if (iVar7 == 1) {
        piVar9 = (int *)*puVar1;
        uVar10 = *(undefined4 *)(param_2 + 0x5c);
        iVar6 = piVar9[2];
        iVar7 = *piVar9;
        uVar11 = *(undefined4 *)(param_2 + 0x60);
        *(undefined1 *)(puVar1 + 4) = 0;
        puVar1[3] = puVar1[3] + 1;
        if (iVar7 == iVar6) {
          FUN_00edff4c(piVar9,iVar6,1,1,1);
          iVar6 = piVar9[2];
        }
        local_40 = puVar1;
        *(undefined1 *)(piVar9[1] + iVar6) = 0x5b;
        piVar9[2] = iVar6 + 1;
        local_44 = 0x100;
        FUN_00e5e244(uVar10,&local_44);
        FUN_00e5e244(uVar11,&local_44);
        puVar2 = local_40;
        if ((local_44 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_0187bf38);
        }
        if ((local_44 & 0xff00) == 0) goto LAB_00e5db94;
        piVar9 = (int *)*local_40;
        iVar6 = local_40[3] + -1;
        local_40[3] = iVar6;
        if (*(char *)(local_40 + 4) == '\0') {
          iVar7 = piVar9[2];
        }
        else {
          iVar5 = piVar9[2];
          if (*piVar9 == iVar5) {
            FUN_00edff4c(piVar9,iVar5,1,1,1);
            iVar5 = piVar9[2];
          }
          uVar10 = puVar2[1];
          uVar8 = puVar2[2];
          iVar7 = iVar5 + 1;
          *(undefined1 *)(piVar9[1] + iVar5) = 10;
          piVar9[2] = iVar7;
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            if ((uint)(*piVar9 - iVar7) < uVar8) {
              FUN_00edff4c(piVar9,iVar7,uVar8,1,1);
              iVar7 = piVar9[2];
            }
            FUN_016dd1aa(piVar9[1] + iVar7,uVar10,uVar8);
            iVar7 = iVar7 + uVar8;
            piVar9[2] = iVar7;
          }
        }
        if (*piVar9 == iVar7) {
          FUN_00edff4c(piVar9,iVar7,1,1,1);
          iVar7 = piVar9[2];
        }
        *(undefined1 *)(piVar9[1] + iVar7) = 0x5d;
        piVar9[2] = iVar7 + 1;
        *(undefined1 *)(puVar1 + 4) = 1;
      }
      else {
        piVar9 = (int *)*puVar1;
        iVar6 = piVar9[2];
        if ((uint)(*piVar9 - iVar6) < 4) {
          FUN_00edff4c(piVar9,iVar6,4,1,1);
          iVar6 = piVar9[2];
        }
        *(undefined4 *)(piVar9[1] + iVar6) = 0x6c6c756e;
        piVar9[2] = iVar6 + 4;
LAB_00e5db94:
        *(undefined1 *)(puVar1 + 4) = 1;
      }
      if (((local_4c & 0xff00) != 0) && ((local_4c & 1) == 0)) {
        piVar9 = (int *)*puVar1;
        iVar7 = piVar9[2];
        iVar6 = puVar1[3] + -1;
        iVar5 = *piVar9;
        puVar1[3] = iVar6;
        if (iVar5 == iVar7) {
          FUN_00edff4c(piVar9,iVar7,1,1,1);
          iVar7 = piVar9[2];
        }
        uVar10 = puVar1[1];
        iVar5 = iVar7 + 1;
        uVar8 = puVar1[2];
        *(undefined1 *)(piVar9[1] + iVar7) = 10;
        piVar9[2] = iVar5;
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if ((uint)(*piVar9 - iVar5) < uVar8) {
            FUN_00edff4c(piVar9,iVar5,uVar8,1,1);
            iVar5 = piVar9[2];
          }
          FUN_016dd1aa(piVar9[1] + iVar5,uVar10,uVar8);
          iVar5 = iVar5 + uVar8;
          piVar9[2] = iVar5;
        }
        if (*piVar9 == iVar5) {
          FUN_00edff4c(piVar9,iVar5,1,1,1);
          iVar5 = piVar9[2];
        }
        *(undefined1 *)(piVar9[1] + iVar5) = 0x7d;
        piVar9[2] = iVar5 + 1;
      }
      param_2 = param_2 + 0x68;
      bVar3 = false;
      *(undefined1 *)(param_1 + 4) = 1;
    } while (param_2 != iVar4);
    piVar9 = (int *)*param_1;
    iVar6 = piVar9[2];
    iVar4 = param_1[3] + -1;
    iVar7 = *piVar9;
    param_1[3] = iVar4;
    if (iVar7 == iVar6) {
      FUN_00edff4c(piVar9,iVar6,1,1,1);
      iVar6 = piVar9[2];
    }
    iVar7 = iVar6 + 1;
    uVar10 = param_1[1];
    uVar8 = param_1[2];
    *(undefined1 *)(piVar9[1] + iVar6) = 10;
    piVar9[2] = iVar7;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if ((uint)(*piVar9 - iVar7) < uVar8) {
        FUN_00edff4c(piVar9,iVar7,uVar8,1,1);
        iVar7 = piVar9[2];
      }
      FUN_016dd1aa(piVar9[1] + iVar7,uVar10,uVar8);
      iVar7 = iVar7 + uVar8;
      piVar9[2] = iVar7;
    }
    if (*piVar9 == iVar7) {
      FUN_00edff4c(piVar9,iVar7,1,1,1);
      iVar7 = piVar9[2];
    }
    *(undefined1 *)(piVar9[1] + iVar7) = 0x5d;
    piVar9[2] = iVar7 + 1;
  }
  return 0;
}

