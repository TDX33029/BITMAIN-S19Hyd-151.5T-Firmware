// FUN_006790fc @ 006790fc size=332 calls_out=7 calls_in=2
// strings: 

void FUN_006790fc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char local_50;
  char local_4f;
  byte local_4e;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_28;
  int local_24;
  undefined1 uStack_11;
  
  FUN_00677900(&local_50);
  if (local_50 == '\x01') {
LAB_00679124:
    *param_1 = 1;
    param_1[1] = local_4c;
    return;
  }
  if (local_4f != '\x01') {
    local_48 = 5;
    local_4c = FUN_01966fbc(&local_48,*(undefined4 *)(param_2 + 0x1c),
                            *(undefined4 *)(param_2 + 0x20));
    goto LAB_00679124;
  }
  if (local_4e == 0x2d) {
    piVar3 = &local_38;
    FUN_0157653c(param_2 + 0xc);
    FUN_00678ac4(piVar3,param_2,0);
LAB_00679198:
    if (local_38 == 3 && local_34 == 0) {
      iVar2 = piVar3[2];
      *param_1 = 1;
      param_1[1] = iVar2;
      return;
    }
    FUN_00677ad8(&local_48,piVar3);
    if (local_48 != 1) {
      param_1[2] = local_40;
      param_1[3] = local_3c;
      uVar1 = 0;
      goto LAB_006791e0;
    }
  }
  else {
    if (local_4e - 0x30 < 10) {
      piVar3 = &local_28;
      FUN_00678ac4(piVar3,param_2,1);
      local_38 = local_28;
      local_34 = local_24;
      goto LAB_00679198;
    }
    local_44 = FUN_00678df8(param_2,&uStack_11,&DAT_01c2375c);
  }
  uVar1 = FUN_012c6694(local_44,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  param_1[1] = uVar1;
  uVar1 = 1;
LAB_006791e0:
  *param_1 = uVar1;
  return;
}

