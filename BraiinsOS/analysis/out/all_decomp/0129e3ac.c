// FUN_0129e3ac @ 0129e3ac size=812 calls_out=10 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_0129e3ac(undefined4 *param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_68;
  undefined4 local_64;
  undefined1 *local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  iVar7 = 0;
  if ((*param_2 & 1) != 0) {
    uVar2 = param_2[2];
    uVar5 = param_2[3];
    iVar7 = 2;
    param_3 = uVar5 - (0x7f >= uVar2);
    if (uVar5 != 0 || uVar5 < (0x7f < uVar2)) {
      iVar7 = 3;
      param_3 = uVar5 - (0x3fff >= uVar2);
      if (uVar5 != 0 || uVar5 < (0x3fff < uVar2)) {
        iVar7 = 4;
        param_3 = uVar5 - (0x1fffff >= uVar2);
        if ((uVar5 != 0 || uVar5 < (0x1fffff < uVar2)) &&
           (iVar7 = 5, uVar5 != 0 || uVar5 < (0xfffffff < uVar2))) {
          iVar7 = 6;
          if (7 < uVar5) {
            iVar7 = 7;
          }
          if (0x3ff < uVar5) {
            iVar7 = 8;
            if (0x1ffff < uVar5) {
              iVar7 = 9;
            }
            if ((0xffffff < uVar5) && (iVar7 = 0xb, uVar5 < 0x80000000)) {
              iVar7 = 10;
            }
          }
        }
      }
    }
  }
  uVar2 = param_2[4];
  if ((uVar2 & 1) != 0) {
    iVar7 = iVar7 + 9;
  }
  iVar3 = FUN_01337c54(param_2[8],uVar2,param_3);
  uVar2 = iVar7 + iVar3;
  param_2[9] = uVar2;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar2);
  }
  if (uVar2 == 0) {
    puVar4 = &DAT_00000001;
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined1 *)thunk_FUN_016d4a50(uVar2);
    uVar5 = uVar2;
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar2);
    }
  }
  local_4c = 0;
  local_68 = 0x80000001;
  local_54 = puVar4;
  local_50 = uVar2;
  if ((*param_2 & 1) != 0) {
    uVar6 = param_2[2];
    uVar8 = param_2[3];
    if (uVar2 < 5) {
      local_38 = CONCAT35(local_38._5_3_,8);
      FUN_01328914(&local_48,&local_68,&local_38,1);
      if (local_48 != 4) goto LAB_0129e628;
    }
    else {
      *puVar4 = 8;
      local_4c = 1;
    }
    FUN_0132901c(&local_48,&local_68,uVar6,uVar8);
    if (local_48 != 4) goto LAB_0129e628;
  }
  if ((param_2[4] & 1) != 0) {
    uVar9 = *(ulonglong *)(param_2 + 6);
    if (local_50 - local_4c < 5) {
      local_38 = CONCAT35(local_38._5_3_,0x11);
      FUN_01328914(&local_48,&local_68,&local_38,1);
      if (local_48 != 4) goto LAB_0129e628;
    }
    else {
      if (local_50 < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_4c,local_50,local_50,&DAT_0188fa90);
      }
      local_54[local_4c] = 0x11;
      local_4c = local_4c + 1;
    }
    local_38 = uVar9;
    FUN_01328914(&local_48,&local_68,&local_38,8);
    if (local_48 != 4) goto LAB_0129e628;
  }
  FUN_01328b10(&local_48,&local_68,param_2[8]);
  if (local_48 == 4) {
    if (local_68 < 0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
    }
    local_38 = (ulonglong)local_50;
    local_44 = 0;
    local_48 = local_4c;
    if (local_50 != local_4c) {
      FUN_00faf26c(&local_38,&local_48,&DAT_0188fad0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x129e6d8);
      (*pcVar1)();
    }
    *param_1 = 0;
    param_1[1] = uVar5;
    param_1[2] = puVar4;
    param_1[3] = uVar2;
    return;
  }
LAB_0129e628:
  *param_1 = 1;
  param_1[1] = local_48;
  param_1[2] = local_44;
  param_1[3] = local_40;
  if (0 < (int)local_68) {
    thunk_FUN_016d3fb4(local_64);
  }
  if (uVar5 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(puVar4);
  return;
}

