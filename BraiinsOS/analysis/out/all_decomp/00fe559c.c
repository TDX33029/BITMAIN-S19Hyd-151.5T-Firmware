// FUN_00fe559c @ 00fe559c size=988 calls_out=10 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fe559c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int local_a8;
  undefined4 *local_a4;
  int local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_00fe5f8c(&local_80);
  if ((local_80 & 1) != 0) {
    param_1[1] = local_7c;
    *param_1 = 1;
    param_1[2] = local_78;
    param_1[3] = uStack_74;
    param_1[4] = uStack_70;
    param_1[5] = local_6c;
    return;
  }
  local_98 = local_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  local_8c = local_6c;
  uStack_88 = uStack_68;
  local_c0 = local_78;
  uStack_bc = uStack_74;
  uStack_b8 = uStack_70;
  uStack_b4 = local_6c;
  uStack_b0 = uStack_68;
  FUN_00fe7e50(&local_80,param_2);
  uVar1 = local_7c;
  if (local_80 == 0x12) {
    iVar6 = *(int *)(param_2 + 0x10);
    uVar4 = *(uint *)(param_2 + 0x14);
    if (local_7c != 0) {
      if (local_7c < uVar4) {
        if (*(char *)(iVar6 + local_7c) < -0x40) {
LAB_00fe5678:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar6,uVar4,local_7c,uVar4,&DAT_018819f8);
        }
      }
      else if (local_7c != uVar4) goto LAB_00fe5678;
    }
    if ((uVar4 != local_7c) && (*(char *)(iVar6 + local_7c) == '|')) {
      local_c8 = 0x14;
      puVar2 = (undefined4 *)thunk_FUN_016d4a50();
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      iVar5 = 1;
      *puVar2 = local_c0;
      puVar2[1] = uStack_bc;
      puVar2[2] = uStack_b8;
      puVar2[3] = uStack_b4;
      puVar2[4] = uStack_b0;
      local_a0 = 1;
      local_a8 = 1;
      local_a4 = puVar2;
      do {
        if (uVar1 != 0) {
          if (uVar1 < uVar4) {
            if (*(char *)(iVar6 + uVar1) < -0x40) {
LAB_00fe5964:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(iVar6,uVar4,uVar1,uVar4,&DAT_01881a08);
            }
          }
          else if (uVar1 != uVar4) goto LAB_00fe5964;
        }
        if ((uVar4 == uVar1) || (*(char *)(iVar6 + uVar1) != '|')) {
          param_1[2] = 0x80000005;
          *param_1 = 0;
          param_1[1] = uVar1;
          param_1[3] = local_a8;
          param_1[4] = local_a4;
          param_1[5] = local_a0;
          return;
        }
        FUN_00fe5f8c(&local_80,param_2,uVar1 + 1,param_4);
        uVar1 = local_7c;
        if ((local_80 & 1) != 0) {
          *param_1 = 1;
          param_1[1] = local_7c;
          param_1[2] = local_78;
          param_1[3] = uStack_74;
          param_1[4] = uStack_70;
          param_1[5] = local_6c;
          goto LAB_00fe5908;
        }
        local_98 = local_78;
        uStack_94 = uStack_74;
        uStack_90 = uStack_70;
        local_8c = local_6c;
        uStack_88 = uStack_68;
        local_38 = local_98;
        uStack_34 = uStack_94;
        uStack_30 = uStack_90;
        uStack_2c = local_8c;
        uStack_28 = uStack_88;
        if (iVar5 == local_a8) {
          FUN_01000540(&local_a8);
          puVar2 = local_a4;
        }
        iVar5 = iVar5 + 1;
        puVar3 = (undefined4 *)((int)puVar2 + local_c8);
        *puVar3 = local_38;
        puVar3[1] = uStack_34;
        puVar3[2] = uStack_30;
        puVar3[3] = uStack_2c;
        puVar3[4] = uStack_28;
        local_a0 = iVar5;
        FUN_00fe7e50(&local_80,param_2,uVar1);
        if (local_80 != 0x12) {
          param_1[1] = local_80;
          param_1[2] = local_7c;
          *param_1 = 1;
          param_1[3] = local_78;
          param_1[4] = uStack_74;
          param_1[5] = uStack_70;
LAB_00fe5908:
          iVar5 = iVar5 + 1;
          puVar3 = puVar2;
          while (iVar5 = iVar5 + -1, iVar5 != 0) {
            FUN_00ffd004(puVar3);
            puVar3 = puVar3 + 5;
          }
          if (local_a8 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(puVar2);
          return;
        }
        iVar6 = *(int *)(param_2 + 0x10);
        local_c8 = local_c8 + 0x14;
        uVar4 = *(uint *)(param_2 + 0x14);
        local_80 = 0x12;
        uVar1 = local_7c;
      } while( true );
    }
    if ((*(char *)(param_2 + 0x40) != '\x01') || (*(int *)(param_2 + 0x24) == 0)) {
      param_1[2] = local_c0;
      param_1[3] = uStack_bc;
      param_1[4] = uStack_b8;
      param_1[5] = uStack_b4;
      param_1[6] = uStack_b0;
      *param_1 = 0;
      param_1[1] = local_7c;
      return;
    }
    local_80 = 8;
    iVar6 = thunk_FUN_016d4a50(0x48);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x48);
    }
    FUN_016dd1aa(iVar6,&local_80,0x48);
    param_1[1] = 0x10;
    param_1[2] = iVar6;
  }
  else {
    param_1[1] = local_80;
    param_1[2] = local_7c;
    param_1[3] = local_78;
    param_1[4] = uStack_74;
    param_1[5] = uStack_70;
  }
  *param_1 = 1;
  FUN_00fe5d20(&local_c0);
  return;
}

