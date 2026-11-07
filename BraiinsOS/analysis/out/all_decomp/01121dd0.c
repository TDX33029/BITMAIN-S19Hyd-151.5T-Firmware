// FUN_01121dd0 @ 01121dd0 size=876 calls_out=12 calls_in=1
// strings: BUG: response handled as request

void FUN_01121dd0(undefined4 *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  uint *puVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined4 local_ac;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint local_74;
  char *local_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  char *local_5c;
  char *local_58;
  uint local_54;
  char *local_50;
  int local_4c;
  char *local_48;
  undefined4 local_44;
  char local_40 [27];
  undefined1 uStack_25;
  
  if ((*param_2 & 1) != 0) {
    iVar2 = thunk_FUN_016d4a50(0x20);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x20);
    }
    FUN_016dd1aa(iVar2,"BUG: response handled as request",0x20);
    uVar6 = param_2[2];
    *param_1 = 0x80000006;
    param_1[1] = 1;
    param_1[2] = 0x20;
    param_1[3] = iVar2;
    param_1[4] = 0x20;
    if ((char)uVar6 != '\x06') {
      FUN_01120384();
    }
    if (param_2[8] != 0x80000000) {
      if (param_2[8] != 0) {
        thunk_FUN_016d3fb4(param_2[9]);
      }
      if ((param_2[0xb] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(param_2[0xc]);
        return;
      }
    }
    return;
  }
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  local_80 = param_2[10];
  uStack_7c = param_2[0xb];
  if ((char)local_80 != '\x04') {
    FUN_0111fd7c(&local_80,&DAT_0040c69c,&DAT_0188713c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11220d8);
    (*pcVar1)();
  }
  puVar13 = param_2 + 4;
  local_78 = *puVar13;
  uVar8 = param_2[5];
  pcVar9 = (char *)param_2[6];
  uVar11 = param_2[7];
  uStack_68 = param_2[8];
  uStack_64 = param_2[9];
  local_74 = uVar8;
  local_70 = pcVar9;
  local_6c = uVar11;
  if ((char)local_78 != '\x04') {
    uVar5 = FUN_00f36124(puVar13,&uStack_25,&DAT_01887568);
    FUN_01111ad8(puVar13);
    *param_1 = 0x80000003;
    param_1[1] = uVar5;
    return;
  }
  pcVar14 = pcVar9 + uVar11 * 0x18;
  local_58 = pcVar9;
  local_5c = pcVar9;
  local_54 = uVar8;
  local_50 = pcVar14;
  if (uVar11 == 0) {
LAB_01121f20:
    pcVar12 = local_58;
    pcVar3 = (char *)FUN_00f2c2f0(0,&uStack_25,&DAT_01887568);
    pcVar10 = pcVar9;
  }
  else {
    pcVar12 = pcVar9 + 0x18;
    local_58 = pcVar12;
    if (*pcVar9 == '\x06') goto LAB_01121f20;
    pcVar10 = local_40;
    local_40[0] = *pcVar9;
    FUN_016dd1aa((uint)pcVar10 | 1,pcVar9 + 1,0x17);
    FUN_0111e7f4(&local_4c,pcVar10);
    if (local_4c == -0x80000000) {
      pcVar3 = local_48;
    }
    else {
      if (uVar11 == 1) {
LAB_01122028:
        pcVar3 = (char *)FUN_00f2c2f0(1,&uStack_25,&DAT_01887568);
      }
      else {
        pcVar12 = pcVar9 + 0x30;
        local_58 = pcVar12;
        if (pcVar9[0x18] == '\x06') goto LAB_01122028;
        local_ac = local_44;
        local_40[0] = pcVar9[0x18];
        FUN_016dd1aa((uint)pcVar10 | 1,pcVar9 + 0x19,0x17);
        uVar15 = FUN_01126090(local_40);
        pcVar10 = (char *)((ulonglong)uVar15 >> 0x20);
        uVar4 = (int)uVar15 + 1;
        pcVar3 = pcVar10;
        if (uVar4 != 2) {
          if ((uVar4 & 1) != 0) {
            if (uVar11 == 2) {
              pcVar3 = local_48;
              iVar2 = local_4c;
            }
            else {
              pcVar3 = (char *)FUN_00f2c2f0(uVar11,&DAT_0188738c,&DAT_018ab990);
              if (local_4c != 0) {
                thunk_FUN_016d3fb4(local_48);
              }
              iVar2 = -0x80000000;
            }
            goto LAB_01121f3c;
          }
          goto LAB_01122028;
        }
      }
      if (local_4c != 0) {
        thunk_FUN_016d3fb4(local_48);
      }
    }
  }
  iVar2 = -0x80000000;
LAB_01121f3c:
  FUN_01127284(pcVar12,((uint)((int)pcVar14 - (int)pcVar12) >> 3) * -0x55555555);
  if (uVar8 != 0) {
    thunk_FUN_016d3fb4(pcVar9);
  }
  if (iVar2 == -0x80000000) {
    *param_1 = 0x80000003;
    param_1[1] = pcVar3;
    return;
  }
  param_1[3] = iVar2;
  *param_1 = &DAT_8000000c;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[4] = pcVar3;
  param_1[5] = local_ac;
  param_1[6] = pcVar10;
  return;
}

