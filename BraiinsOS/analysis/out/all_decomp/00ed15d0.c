// FUN_00ed15d0 @ 00ed15d0 size=1212 calls_out=6 calls_in=1
// strings: actionsstruct RawDevfeeHealthConfigstruct ApiUsageApiTypesConfigstruct RawDevfeeDiagnosticsConfig

int FUN_00ed15d0(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 != '\0') {
    local_60 = 10;
    iVar1 = FUN_0157c50c(&local_60,0,0);
    return iVar1;
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar6 = (int *)*puVar7;
    iVar1 = piVar6[2];
    if (*piVar6 == iVar1) {
      FUN_00edff4c(piVar6,iVar1,1,1,1);
      iVar1 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar1) = 0x2c;
    piVar6[2] = iVar1 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_60,*puVar7,
               "actionsstruct RawDevfeeHealthConfigstruct ApiUsageApiTypesConfigstruct RawDevfeeDiagnosticsConfig"
               ,7);
  if ((char)local_60 != '\x04') {
    iVar1 = FUN_0157c4a0(local_60,local_5c);
    return iVar1;
  }
  piVar6 = (int *)*puVar7;
  iVar1 = piVar6[2];
  if (*piVar6 == iVar1) {
    FUN_00edff4c(piVar6,iVar1,1,1,1);
    iVar1 = piVar6[2];
  }
  puVar5 = (uint *)*param_2;
  local_64 = param_2[3];
  *(undefined1 *)(piVar6[1] + iVar1) = 0x3a;
  piVar6[2] = iVar1 + 1;
  piVar6 = (int *)*puVar7;
  uVar8 = *puVar5;
  iVar1 = piVar6[2];
  if (*piVar6 == iVar1) {
    FUN_00edff4c(piVar6,iVar1,1,1,1);
    iVar1 = piVar6[2];
  }
  *(undefined1 *)(piVar6[1] + iVar1) = 0x7b;
  iVar1 = iVar1 + 1;
  piVar6[2] = iVar1;
  puVar4 = puVar5;
  if (local_64 == 0) {
    if (*piVar6 == iVar1) {
      FUN_00edff4c(piVar6,iVar1,1,1,1);
      iVar1 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar1) = 0x7d;
    piVar6[2] = iVar1 + 1;
    return 0;
  }
  while( true ) {
    puVar4 = puVar4 + 1;
    if ((uVar8 & 0x80808080) != 0x80808080) break;
    uVar8 = *puVar4;
    puVar5 = puVar5 + -0x11;
  }
  uVar10 = uVar8 & 0x80808080 ^ 0x80808080;
  local_34 = 0;
  uVar8 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                  uVar10 >> 0x18);
  local_38 = 0;
  local_3c = 0;
  uVar9 = *puVar7;
  iVar1 = (uVar8 >> 3) * -0x10 - (uVar8 >> 3);
  FUN_00ed25b8((int)puVar5 + iVar1 + -0x11,&local_60);
  FUN_00e5d350(&local_30,uVar9,&local_60,0x24);
  if ((char)local_30 != '\x04') {
LAB_00ed1980:
    iVar1 = FUN_0157c4a0(local_30,local_2c);
    return iVar1;
  }
  piVar6 = (int *)*puVar7;
  iVar2 = piVar6[2];
  if (*piVar6 == iVar2) {
    FUN_00edff4c(piVar6,iVar2,1,1,1);
    iVar2 = piVar6[2];
  }
  *(undefined1 *)(piVar6[1] + iVar2) = 0x3a;
  piVar6[2] = iVar2 + 1;
  iVar1 = FUN_00ed1a90(*(undefined1 *)((int)puVar5 + iVar1 + -1),puVar7);
  if (iVar1 == 0) {
    uVar10 = uVar10 - 1 & uVar10;
    do {
      local_64 = local_64 + -1;
      if (local_64 == 0) {
        piVar6 = (int *)*puVar7;
        iVar1 = piVar6[2];
        if (*piVar6 == iVar1) {
          FUN_00edff4c(piVar6,iVar1,1,1,1);
          iVar1 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar1) = 0x7d;
        piVar6[2] = iVar1 + 1;
        return 0;
      }
      puVar3 = puVar4;
      if (uVar10 == 0) {
        do {
          puVar4 = puVar3 + 1;
          uVar8 = *puVar3;
          puVar5 = puVar5 + -0x11;
          puVar3 = puVar4;
        } while ((uVar8 & 0x80808080) == 0x80808080);
        uVar10 = uVar8 & 0x80808080 ^ 0x80808080;
      }
      piVar6 = (int *)*puVar7;
      iVar1 = piVar6[2];
      if (*piVar6 == iVar1) {
        FUN_00edff4c(piVar6,iVar1,1,1,1);
        iVar1 = piVar6[2];
      }
      uVar8 = (uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                            (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
      *(undefined1 *)(piVar6[1] + iVar1) = 0x2c;
      piVar6[2] = iVar1 + 1;
      uVar9 = *puVar7;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      FUN_00ed25b8((int)puVar5 + uVar8 * -0x11 + -0x11,&local_60);
      FUN_00e5d350(&local_30,uVar9,&local_60,0x24);
      if ((char)local_30 != '\x04') goto LAB_00ed1980;
      piVar6 = (int *)*puVar7;
      iVar1 = piVar6[2];
      if (*piVar6 == iVar1) {
        FUN_00edff4c(piVar6,iVar1,1,1,1);
        iVar1 = piVar6[2];
      }
      uVar10 = uVar10 - 1 & uVar10;
      *(undefined1 *)(piVar6[1] + iVar1) = 0x3a;
      piVar6[2] = iVar1 + 1;
      iVar1 = FUN_00ed1a90(*(undefined1 *)((int)puVar5 + uVar8 * -0x11 + -1),puVar7);
    } while (iVar1 == 0);
  }
  return iVar1;
}

