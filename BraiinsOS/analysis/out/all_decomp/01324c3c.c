// FUN_01324c3c @ 01324c3c size=772 calls_out=10 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_01324c3c(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint local_58;
  undefined4 local_54;
  undefined1 *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_28;
  uint local_24;
  
  iVar5 = 0;
  if (*param_2 == 1) {
    uVar2 = param_2[1];
    iVar5 = 2;
    if (0x7f < uVar2) {
      iVar5 = 3;
    }
    if (0x3fff < uVar2) {
      iVar5 = 4;
      if (0x1fffff < uVar2) {
        iVar5 = 5;
      }
      if ((0xfffffff < uVar2) && (iVar5 = 0xb, uVar2 < 0x80000000)) {
        iVar5 = 6;
      }
    }
  }
  if (param_2[2] == 1) {
    uVar2 = param_2[3];
    iVar3 = 2;
    if (0x7f < uVar2) {
      iVar3 = 3;
    }
    if (0x3fff < uVar2) {
      iVar3 = 4;
      if (0x1fffff < uVar2) {
        iVar3 = 5;
      }
      if ((0xfffffff < uVar2) && (iVar3 = 0xb, uVar2 < 0x80000000)) {
        iVar3 = 6;
      }
    }
    iVar5 = iVar3 + iVar5;
  }
  iVar3 = FUN_01337c54(param_2[4]);
  uVar2 = iVar3 + iVar5;
  param_2[5] = uVar2;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar2);
  }
  if (uVar2 == 0) {
    puVar4 = &DAT_00000001;
    uVar6 = 0;
  }
  else {
    puVar4 = (undefined1 *)thunk_FUN_016d4a50(uVar2);
    uVar6 = uVar2;
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar2);
    }
  }
  local_3c = 0;
  local_58 = 0x80000001;
  local_44 = puVar4;
  local_40 = uVar2;
  if (*param_2 == 1) {
    iVar5 = param_2[1];
    if (uVar2 < 5) {
      local_28 = 8;
      local_24 = local_24 & 0xffffff00;
      FUN_01328914(&local_38,&local_58,&local_28,1);
      if (local_38 != 4) goto LAB_01324ebc;
    }
    else {
      *puVar4 = 8;
      local_3c = 1;
    }
    FUN_0132901c(&local_38,&local_58,iVar5,iVar5 >> 0x1f);
    if (local_38 != 4) goto LAB_01324ebc;
  }
  if (param_2[2] == 1) {
    iVar5 = param_2[3];
    if (local_40 - local_3c < 5) {
      local_28 = 0x10;
      local_24 = local_24 & 0xffffff00;
      FUN_01328914(&local_38,&local_58,&local_28,1);
      if (local_38 != 4) goto LAB_01324ebc;
    }
    else {
      if (local_40 < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_3c,local_40,local_40,&DAT_0188fa90);
      }
      local_44[local_3c] = 0x10;
      local_3c = local_3c + 1;
    }
    FUN_0132901c(&local_38,&local_58,iVar5,iVar5 >> 0x1f);
    if (local_38 != 4) goto LAB_01324ebc;
  }
  FUN_01328b10(&local_38,&local_58,param_2[4]);
  if (local_38 == 4) {
    if (local_58 < 0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
    }
    local_24 = 0;
    local_28 = local_40;
    local_34 = 0;
    local_38 = local_3c;
    if (local_40 != local_3c) {
      FUN_00faf26c(&local_28,&local_38,&DAT_0188fad0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1324f40);
      (*pcVar1)();
    }
    *param_1 = 0;
    param_1[1] = uVar6;
    param_1[2] = puVar4;
    param_1[3] = uVar2;
    return;
  }
LAB_01324ebc:
  *param_1 = 1;
  param_1[1] = local_38;
  param_1[2] = local_34;
  param_1[3] = local_30;
  if (0 < (int)local_58) {
    thunk_FUN_016d3fb4(local_54);
  }
  if (uVar6 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(puVar4);
  return;
}

