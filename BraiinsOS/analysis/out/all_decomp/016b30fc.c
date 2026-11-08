// FUN_016b30fc @ 016b30fc size=1328 calls_out=7 calls_in=3
// strings: 

undefined4 FUN_016b30fc(int *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  
  if ((char)param_1[0xd] == '\0') {
    return 1;
  }
  if ((char)param_1[0xd] == '\x01') {
    uVar5 = param_1[10];
    uVar6 = param_1[0xb];
    iVar8 = param_1[5];
    uVar3 = param_1[6];
    if (uVar6 < uVar5) goto LAB_016b317c;
    if (uVar5 != 0) {
      if (uVar5 < uVar3) {
        if (*(char *)(iVar8 + uVar5) < -0x40) goto LAB_016b317c;
      }
      else if (uVar5 != uVar3) goto LAB_016b317c;
    }
    if (uVar6 != 0) {
      if (uVar6 < uVar3) {
        if (*(char *)(iVar8 + uVar6) < -0x40) {
LAB_016b317c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar8);
        }
      }
      else if (uVar6 != uVar3) goto LAB_016b317c;
    }
    if (uVar6 == uVar5) {
      return 1;
    }
  }
  uVar5 = param_1[8];
  piVar10 = (int *)param_1[5];
  uVar3 = param_1[6];
  if (uVar5 != 0) {
    if (uVar5 < uVar3) {
      if (*(char *)((int)piVar10 + uVar5) < -0x40) {
LAB_016b31c8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(piVar10,uVar3,0,uVar5,&DAT_018af070);
      }
    }
    else if (uVar5 != uVar3) goto LAB_016b31c8;
    if ((uVar5 == 4) && (*piVar10 == 0x656c6966)) {
      return 1;
    }
  }
  uVar6 = param_1[9];
  uVar5 = uVar5 + 3;
  if (uVar6 < uVar5) goto LAB_016b35f0;
  if (uVar5 == 0) {
    if (uVar6 == 0) {
      return 0;
    }
LAB_016b3250:
    if (uVar6 < uVar3) {
      if (*(char *)((int)piVar10 + uVar6) < -0x40) {
LAB_016b35f0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(piVar10,uVar3,uVar5,uVar6,&DAT_018aedb8);
      }
      if (uVar6 == uVar5) {
        return 0;
      }
      if (*(char *)((int)piVar10 + uVar6) < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(piVar10,uVar3,uVar6,uVar3,&DAT_018af080);
      }
    }
    else {
      if (uVar3 != uVar6) goto LAB_016b35f0;
      if (uVar6 == uVar5) {
        return 0;
      }
    }
  }
  else {
    if (uVar5 < uVar3) {
      if (*(char *)((int)piVar10 + uVar5) < -0x40) goto LAB_016b35f0;
    }
    else if (uVar5 != uVar3) goto LAB_016b35f0;
    if (uVar6 != 0) goto LAB_016b3250;
    if (uVar5 == 0) {
      return 0;
    }
  }
  uVar9 = uVar3 - uVar6;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar9);
  }
  if (uVar9 == 0) {
    pbVar1 = &DAT_00000001;
  }
  else {
    pbVar1 = (byte *)thunk_FUN_016d4a50(uVar9);
    if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar9);
    }
  }
  FUN_016dd1aa(pbVar1,(int)piVar10 + uVar6,uVar9);
  if (uVar5 <= uVar3) {
    if (((uVar5 != 0) && (uVar5 < uVar3)) && (*(char *)((int)piVar10 + uVar5) < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00418707,0x30,&DAT_018aed88);
    }
    param_1[6] = uVar5;
    uVar3 = uVar5;
  }
  puVar2 = (uint *)(param_1 + 4);
  iVar8 = param_1[9];
  param_1[9] = uVar3;
  if (uVar9 == 0) {
    if (uVar3 == uVar5) goto LAB_016b3440;
LAB_016b3474:
    uVar6 = *puVar2;
    uVar5 = uVar3;
    if (uVar6 == uVar3) {
      FUN_016bd7fc(puVar2,uVar3,1,1,1);
      uVar6 = param_1[4];
      uVar5 = param_1[6];
    }
    uVar3 = uVar3 + 1;
    iVar4 = param_1[5];
    *(undefined1 *)(iVar4 + uVar5) = 0x40;
    param_1[6] = uVar3;
    uVar7 = uVar3;
    if (uVar6 - uVar3 < uVar9) {
      FUN_016bd7fc(puVar2,uVar3,uVar9,1,1);
      iVar4 = param_1[5];
      uVar7 = param_1[6];
    }
    FUN_016dd1aa(iVar4 + uVar7,pbVar1,uVar9);
  }
  else {
    uVar6 = (uint)*pbVar1;
    if (0x7fffffff < (uint)(int)(char)*pbVar1) {
      if (uVar6 < 0xe0) {
        uVar6 = pbVar1[1] & 0x3f | (uVar6 & 0x1f) << 6;
      }
      else {
        uVar7 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
        }
        else {
          uVar6 = pbVar1[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
        }
      }
    }
    if (uVar3 == uVar5) {
      if (uVar6 == 0x40) {
        if ((uVar9 != 1) && ((char)pbVar1[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar1,uVar9,1,uVar9,&DAT_018aed98);
        }
        uVar6 = uVar9 - 1;
        uVar7 = uVar5;
        if (*puVar2 - uVar5 < uVar6) {
          FUN_016bd7fc(puVar2,uVar5,uVar6,1,1);
          uVar7 = param_1[6];
        }
        iVar8 = iVar8 + 1;
        FUN_016dd1aa(param_1[5] + uVar7,pbVar1 + 1,uVar6);
        uVar3 = uVar5;
        goto LAB_016b34c0;
      }
    }
    else if ((uVar6 != 0x3a) && (uVar6 != 0x40)) goto LAB_016b3474;
LAB_016b3440:
    uVar7 = uVar3;
    if (*puVar2 - uVar3 < uVar9) {
      FUN_016bd7fc(puVar2,uVar3,uVar9,1,1);
      uVar7 = param_1[6];
    }
    FUN_016dd1aa(param_1[5] + uVar7,pbVar1,uVar9);
  }
  uVar6 = uVar9;
LAB_016b34c0:
  param_1[6] = uVar7 + uVar6;
  iVar8 = uVar3 - iVar8;
  iVar4 = 0;
  if (*param_1 != 0) {
    iVar4 = param_1[1];
  }
  if (*param_1 != 0) {
    param_1[1] = iVar8 + iVar4;
  }
  param_1[10] = iVar8 + param_1[10];
  param_1[0xb] = iVar8 + param_1[0xb];
  param_1[0xc] = iVar8 + param_1[0xc];
  if (param_1[2] == 1) {
    param_1[3] = iVar8 + param_1[3];
  }
  if (uVar9 == 0) {
    return 0;
  }
  thunk_FUN_016d3fb4(pbVar1);
  return 0;
}

