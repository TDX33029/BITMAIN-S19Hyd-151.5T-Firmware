// FUN_00ecfb6c @ 00ecfb6c size=1016 calls_out=4 calls_in=1
// strings: misc_data

undefined4 FUN_00ecfb6c(char *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    uVar1 = FUN_0157c50c(&local_30,0,0);
    return uVar1;
  }
  puVar9 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar3 = (int *)*puVar9;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_00edff4c(piVar3,iVar2,1,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x2c;
    piVar3[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_30,*puVar9,"misc_data",9);
  if ((char)local_30 == '\x04') {
    piVar3 = (int *)*puVar9;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_00edff4c(piVar3,iVar2,1,1,1);
      iVar2 = piVar3[2];
    }
    puVar4 = (uint *)*param_2;
    local_38 = param_2[3];
    *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
    piVar3[2] = iVar2 + 1;
    piVar3 = (int *)*puVar9;
    uVar7 = *puVar4;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_00edff4c(piVar3,iVar2,1,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x7b;
    iVar2 = iVar2 + 1;
    piVar3[2] = iVar2;
    puVar6 = puVar4;
    if (local_38 == 0) {
      if (*piVar3 == iVar2) {
LAB_00ecfe84:
        FUN_00edff4c(piVar3,iVar2,1,1,1);
        iVar2 = piVar3[2];
      }
LAB_00ecfe58:
      *(undefined1 *)(piVar3[1] + iVar2) = 0x7d;
      piVar3[2] = iVar2 + 1;
      return 0;
    }
    while( true ) {
      puVar6 = puVar6 + 1;
      if ((uVar7 & 0x80808080) != 0x80808080) break;
      uVar7 = *puVar6;
      puVar4 = puVar4 + -0x18;
    }
    uVar8 = uVar7 & 0x80808080 ^ 0x80808080;
    uVar7 = LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                    uVar8 >> 0x18);
    iVar2 = (uVar7 >> 3) * -2 - (uVar7 >> 3);
    uVar12 = puVar4[iVar2 * 2 + -2];
    uVar7 = puVar4[iVar2 * 2 + -1];
    FUN_00e5d350(&local_30,*puVar9,puVar4[iVar2 * 2 + -5],puVar4[iVar2 * 2 + -4]);
    if ((char)local_30 == '\x04') {
      iVar2 = piVar3[2];
      if (*piVar3 == iVar2) {
        FUN_00edff4c(piVar3,iVar2,1,1,1);
        iVar2 = piVar3[2];
      }
      *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
      piVar3[2] = iVar2 + 1;
      FUN_00e5d350(&local_30,*puVar9,uVar12,uVar7);
      if ((char)local_30 == '\x04') {
        uVar8 = uVar8 - 1 & uVar8;
        do {
          local_38 = local_38 + -1;
          if (local_38 == 0) {
            iVar2 = piVar3[2];
            if (*piVar3 != iVar2) goto LAB_00ecfe58;
            goto LAB_00ecfe84;
          }
          puVar5 = puVar6;
          if (uVar8 == 0) {
            do {
              puVar6 = puVar5 + 1;
              uVar7 = *puVar5;
              puVar4 = puVar4 + -0x18;
              puVar5 = puVar6;
            } while ((uVar7 & 0x80808080) == 0x80808080);
            uVar8 = uVar7 & 0x80808080 ^ 0x80808080;
          }
          iVar2 = piVar3[2];
          uVar7 = (uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
          uVar12 = puVar4[uVar7 * -6 + -5];
          uVar10 = puVar4[uVar7 * -6 + -4];
          uVar11 = puVar4[uVar7 * -6 + -2];
          uVar7 = puVar4[uVar7 * -6 + -1];
          if (*piVar3 == iVar2) {
            FUN_00edff4c(piVar3,iVar2,1,1,1);
            iVar2 = piVar3[2];
          }
          *(undefined1 *)(piVar3[1] + iVar2) = 0x2c;
          piVar3[2] = iVar2 + 1;
          FUN_00e5d350(&local_30,*puVar9,uVar12,uVar10);
          if ((char)local_30 != '\x04') break;
          iVar2 = piVar3[2];
          if (*piVar3 == iVar2) {
            FUN_00edff4c(piVar3,iVar2,1,1,1);
            iVar2 = piVar3[2];
          }
          uVar8 = uVar8 - 1 & uVar8;
          *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
          piVar3[2] = iVar2 + 1;
          FUN_00e5d350(&local_30,*puVar9,uVar11,uVar7);
        } while ((char)local_30 == '\x04');
      }
    }
  }
  uVar1 = FUN_0157c4a0(local_30,local_2c);
  return uVar1;
}

