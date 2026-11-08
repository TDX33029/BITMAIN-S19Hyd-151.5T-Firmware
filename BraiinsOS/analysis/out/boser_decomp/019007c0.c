// FUN_019007c0 @ 019007c0 size=1052 calls_out=10 calls_in=2
// strings: tls ech | internal error: entered unreachable code: ECH config version mismatchInvalidDnsNameError

void FUN_019007c0(undefined4 *param_1,int *param_2,char *param_3,undefined1 param_4,
                 undefined4 param_5,int param_6,undefined1 param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  code *pcVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 local_78;
  int local_74;
  undefined4 uStack_70;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: ECH config version mismatchInvalidDnsNameError"
                 ,0x8b,&DAT_01d24c08);
  }
  iVar18 = param_2[0xf];
  iVar16 = param_2[0x10];
  local_64 = thunk_FUN_01be5118(0x80);
  if (local_64 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  local_60 = 0;
  local_68 = 0x80;
  FUN_01ac6cbc(&local_68,"tls ech",8);
  FUN_018ee864(param_2,&local_68);
  uVar5 = local_60;
  iVar2 = local_64;
  uVar14 = local_68;
  FUN_015e8ad4(&local_68,param_2[1],param_2[2]);
  local_78 = local_68;
  local_74 = local_64;
  uStack_70 = local_60;
  (**(code **)(iVar16 + 0x14))(&local_48,iVar18,iVar2,uVar5,&local_78);
  uVar12 = local_34;
  uVar11 = local_38;
  uVar5 = local_3c;
  iVar9 = local_40;
  iVar7 = local_44;
  if (local_48 == -0x7fffffd7) {
    FUN_0134bd64(local_78,local_74);
    FUN_0134bd64(uVar14,iVar2);
    iVar2 = param_2[7];
    iVar13 = *(int *)(param_3 + 4);
    uVar14 = *(undefined4 *)(param_3 + 8);
    uVar15 = *(undefined4 *)(param_3 + 0x10);
    cVar1 = *param_3;
    uVar19 = *(undefined4 *)(param_3 + 0xc);
    if (param_2[0xb] == -0x80000000) {
      local_48 = param_2[0xb];
      local_44 = param_2[0xc];
      local_40 = param_2[0xd];
    }
    else {
      FUN_006666fc(&local_48,param_2[0xc],param_2[0xd]);
    }
    iVar10 = local_40;
    iVar8 = local_44;
    iVar6 = local_48;
    iVar3 = param_2[0xe];
    (**(code **)(iVar16 + 0x28))(&local_78,iVar18);
    iVar16 = local_74;
    uVar4 = local_78;
    pcVar17 = *(code **)(param_6 + 0x10);
    FUN_01bed93e(&local_48,0,0x20);
    iVar18 = (*pcVar17)(param_5,&local_48,0x20);
    if (iVar18 == 0) {
      param_1[0x1b] = local_48;
      param_1[0x1c] = local_44;
      param_1[0x1d] = local_40;
      param_1[0x1e] = local_3c;
      param_1[0x1f] = local_38;
      param_1[0x20] = local_34;
      param_1[0x21] = local_30;
      param_1[0x22] = local_2c;
      param_1[0x12] = uVar19;
      param_1[0x13] = uVar15;
      *(char *)(param_1 + 0xf) = cVar1;
      param_1[0x10] = iVar13;
      param_1[0x11] = uVar14;
      param_1[8] = 2;
      param_1[10] = iVar6;
      param_1[0xb] = iVar8;
      *(undefined1 *)(param_1 + 3) = param_4;
      cVar1 = param_3[3];
      *(undefined2 *)((int)param_1 + 0x3d) = *(undefined2 *)(param_3 + 1);
      param_1[0xd] = uVar4;
      param_1[4] = iVar7;
      param_1[0x14] = param_5;
      param_1[5] = iVar9;
      param_1[0x15] = param_6;
      param_1[6] = uVar5;
      *(char *)((int)param_1 + 0x3f) = cVar1;
      param_1[0x16] = uVar11;
      param_1[7] = 0;
      param_1[9] = 0;
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      param_1[0x18] = 0;
      param_1[0xc] = iVar10;
      param_1[0xe] = iVar16;
      param_1[0x17] = uVar12;
      *(char *)((int)param_1 + 0x8e) = (char)iVar3;
      *(char *)((int)param_1 + 0x8d) = (char)iVar2;
      *(undefined1 *)(param_1 + 0x23) = param_7;
      return;
    }
    *param_1 = 0x80000000;
    param_1[2] = 0x80000022;
    FUN_0134bd64(iVar7,iVar9);
    if (iVar6 != -0x80000000) {
      FUN_0134bd64(iVar6,iVar8);
    }
    if ((cVar1 == '\0') && (iVar13 != -0x80000000)) {
      FUN_0134bd64(iVar13,uVar14);
    }
    FUN_01443048(uVar11,uVar12);
    iVar16 = 0;
    uVar14 = 1;
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
    FUN_0134bd64(local_78,local_74);
    FUN_0134bd64(uVar14,iVar2);
    if (*param_3 != '\0') {
      return;
    }
    iVar16 = *(int *)(param_3 + 4);
    if (iVar16 == -0x80000000) {
      return;
    }
    uVar14 = *(undefined4 *)(param_3 + 8);
  }
  FUN_0134bd64(iVar16,uVar14);
  return;
}

