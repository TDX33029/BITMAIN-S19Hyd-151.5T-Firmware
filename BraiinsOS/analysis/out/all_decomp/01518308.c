// FUN_01518308 @ 01518308 size=1200 calls_out=6 calls_in=2
// strings: internal error: entered unreachable code: ECH config version mismatchInvalidDnsNameError

void FUN_01518308(undefined4 *param_1,int *param_2,char *param_3,undefined1 param_4,
                 undefined4 param_5,int param_6,undefined1 param_7)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_68;
  undefined4 *local_64;
  int local_60;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: ECH config version mismatchInvalidDnsNameError"
                 ,0x8b,&DAT_018a77a0);
  }
  iVar16 = param_2[0xf];
  iVar19 = param_2[0x10];
  local_64 = (undefined4 *)thunk_FUN_016d4a50(0x80);
  if (local_64 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1);
  }
  uVar11 = 0;
  local_68 = 0x80;
  local_64[1] = 0x686365;
  *local_64 = 0x20736c74;
  local_60 = 8;
  FUN_015173fc(param_2,&local_68);
  iVar4 = local_60;
  puVar3 = local_64;
  iVar2 = local_68;
  iVar15 = param_2[2];
  if (iVar15 < 0) {
LAB_015183b0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar11,iVar15);
  }
  iVar18 = param_2[1];
  if (iVar15 == 0) {
    iVar8 = 1;
    iVar12 = 0;
  }
  else {
    iVar8 = thunk_FUN_016d4a50(iVar15);
    iVar12 = iVar15;
    if (iVar8 == 0) {
      uVar11 = 1;
      goto LAB_015183b0;
    }
  }
  FUN_016dd1aa(iVar8,iVar18,iVar15);
  local_68 = iVar12;
  local_64 = (undefined4 *)iVar8;
  local_60 = iVar15;
  (**(code **)(iVar19 + 0x14))(&local_48,iVar16,puVar3,iVar4,&local_68);
  puVar7 = local_34;
  uVar6 = local_38;
  uVar5 = local_3c;
  uVar11 = local_40;
  iVar4 = local_44;
  if (local_48 == -0x7fffffd7) {
    if (iVar12 != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(puVar3);
    }
    iVar2 = param_2[7];
    iVar15 = param_2[0xc];
    uVar17 = param_2[0xd];
    if (param_2[0xb] == -0x80000000) {
      local_7c = 0x80000000;
      local_80 = iVar15;
    }
    else {
      if (uVar17 == 0) {
        local_80 = 1;
      }
      else {
        local_80 = thunk_FUN_016d4a50(uVar17);
        if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar17);
        }
      }
      FUN_016dd1aa(local_80,iVar15,uVar17);
      local_7c = uVar17;
    }
    iVar15 = param_2[0xe];
    (**(code **)(iVar19 + 0x28))(&local_78,iVar16);
    local_2c = 0;
    local_30 = 0;
    local_34 = (undefined4 *)0x0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    iVar16 = (**(code **)(param_6 + 0x10))(param_5,&local_48,0x20);
    if (iVar16 == 0) {
      param_1[0x1b] = local_48;
      param_1[0x1c] = local_44;
      param_1[0x1d] = local_40;
      param_1[0x1e] = local_3c;
      param_1[0x1f] = local_38;
      param_1[0x20] = local_34;
      param_1[0x21] = local_30;
      param_1[0x22] = local_2c;
      param_1[0xb] = local_80;
      param_1[10] = local_7c;
      param_1[0xc] = uVar17;
      uVar9 = *(undefined4 *)(param_3 + 4);
      uVar10 = *(undefined4 *)(param_3 + 8);
      uVar13 = *(undefined4 *)(param_3 + 0xc);
      uVar14 = *(undefined4 *)(param_3 + 0x10);
      param_1[0xf] = *(undefined4 *)param_3;
      param_1[0x10] = uVar9;
      param_1[0x11] = uVar10;
      param_1[0x12] = uVar13;
      param_1[0x13] = uVar14;
      param_1[8] = 2;
      param_1[6] = uVar5;
      param_1[5] = uVar11;
      param_1[4] = iVar4;
      param_1[0xd] = local_78;
      *(undefined1 *)(param_1 + 3) = param_4;
      *param_1 = 0;
      param_1[1] = 1;
      *(char *)((int)param_1 + 0x8d) = (char)iVar2;
      param_1[0x14] = param_5;
      param_1[0x16] = uVar6;
      param_1[0xe] = local_74;
      param_1[9] = 0;
      param_1[7] = 0;
      param_1[2] = 0;
      *(char *)((int)param_1 + 0x8e) = (char)iVar15;
      *(undefined1 *)(param_1 + 0x23) = param_7;
      param_1[0x15] = param_6;
      param_1[0x17] = puVar7;
      param_1[0x18] = 0;
      return;
    }
    *param_1 = 0x80000000;
    param_1[2] = 0x80000022;
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
    if ((local_7c & 0x7fffffff) == 0) {
      cVar1 = *param_3;
    }
    else {
      thunk_FUN_016d3fb4(local_80);
      cVar1 = *param_3;
    }
    if ((cVar1 == '\0') && ((*(uint *)(param_3 + 4) & 0x7fffffff) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_3 + 8));
    }
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(uVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar6);
      return;
    }
  }
  else {
    param_1[2] = local_48;
    param_1[8] = local_30;
    param_1[9] = local_2c;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    param_1[6] = local_38;
    param_1[7] = local_34;
    *param_1 = 0x80000000;
    if (iVar12 != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(puVar3);
    }
    if ((*param_3 == '\0') && ((*(uint *)(param_3 + 4) & 0x7fffffff) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_3 + 8));
      return;
    }
  }
  return;
}

