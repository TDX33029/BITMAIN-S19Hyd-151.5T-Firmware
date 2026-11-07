// FUN_010c96f0 @ 010c96f0 size=704 calls_out=5 calls_in=2
// strings: 

void FUN_010c96f0(undefined4 *param_1,byte *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *unaff_r8;
  uint uVar6;
  uint local_7c;
  undefined4 *local_78;
  int *local_74;
  undefined4 *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined2 local_50;
  undefined4 *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar6 = (uint)*param_2;
  if (uVar6 == 0) {
    local_7c = 0;
  }
  else if (uVar6 == 1) {
    local_7c = (uint)param_2[1] << 8;
  }
  else {
    puVar3 = *(undefined4 **)(param_2 + 4);
    unaff_r8 = (int *)thunk_FUN_016d4a50(0x10);
    if (unaff_r8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    (**(code **)*puVar3)(&local_78,puVar3 + 3,puVar3[1],puVar3[2]);
    *unaff_r8 = (int)local_78;
    unaff_r8[1] = (int)local_74;
    unaff_r8[2] = (int)local_70;
    unaff_r8[3] = local_6c;
    local_7c = 0;
  }
  (*(code *)**(undefined4 **)(param_2 + 8))
            (&local_78,param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10)
            );
  local_48 = local_78;
  local_44 = (int)local_74;
  local_40 = (int)local_70;
  local_3c = local_6c;
  (*(code *)**(undefined4 **)(param_2 + 0x18))
            (&local_38,param_2 + 0x24,*(undefined4 *)(param_2 + 0x1c),
             *(undefined4 *)(param_2 + 0x20));
  local_6c = local_44;
  local_68 = local_40;
  local_64 = local_3c;
  local_60 = local_38;
  iStack_5c = local_34;
  iStack_58 = local_30;
  iStack_54 = local_2c;
  local_50 = *(undefined2 *)(param_2 + 0x28);
  local_78 = (undefined4 *)(local_7c | uVar6);
  local_70 = local_48;
  local_74 = unaff_r8;
  if (uVar6 == 0) {
    if (param_3 != 0 && local_40 != 0) {
      FUN_010a6bb0(&local_38,local_44,local_40);
      if ((local_38 == 0) || ((short)local_30 != 0x1bb)) {
        uVar4 = 1;
        local_34 = 0;
        local_38 = 1;
        FUN_010c9a44(param_2,&local_38);
      }
      else {
        uVar4 = 0x101;
        local_34 = 0;
        local_38 = 0x101;
        FUN_010c9a44(param_2,&local_38);
      }
      (*(code *)*local_70)(&local_38,&local_64,local_6c,local_68);
      uVar2 = 0;
      param_1[1] = uVar4;
      param_1[2] = 0;
      param_1[3] = local_38;
      param_1[4] = local_34;
      param_1[5] = local_30;
      param_1[6] = local_2c;
      goto LAB_010c9984;
    }
  }
  else if (local_40 != 0) {
    uVar5 = 1;
    if (uVar6 == 2) {
      piVar1 = (int *)thunk_FUN_016d4a50(0x10);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      (**(code **)*unaff_r8)(&local_38,unaff_r8 + 3,unaff_r8[1],unaff_r8[2]);
      *piVar1 = local_38;
      piVar1[1] = local_34;
      piVar1[2] = local_30;
      uVar5 = 2;
      piVar1[3] = local_2c;
      local_7c = 0;
      unaff_r8 = piVar1;
    }
    (*(code *)*local_70)(&local_38,&local_64,local_6c,local_68);
    param_1[2] = unaff_r8;
    param_1[1] = uVar5 | local_7c;
    param_1[3] = local_38;
    param_1[4] = local_34;
    param_1[5] = local_30;
    param_1[6] = local_2c;
    uVar2 = 0;
    goto LAB_010c9984;
  }
  *(undefined1 *)(param_1 + 7) = 5;
  *(undefined1 *)((int)param_1 + 0x19) = 2;
  param_1[1] = 0;
  uVar2 = 1;
LAB_010c9984:
  *param_1 = uVar2;
  FUN_0145d5e0(&local_78);
  return;
}

