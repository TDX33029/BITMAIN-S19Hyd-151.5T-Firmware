// FUN_0132bb68 @ 0132bb68 size=940 calls_out=9 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0132bb68(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
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
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0132c318(&local_80);
  if ((local_80 & 1) != 0) {
    param_1[2] = local_78;
    param_1[3] = uStack_74;
    param_1[4] = uStack_70;
    param_1[5] = uStack_6c;
    *param_1 = 1;
    param_1[1] = local_7c;
    return;
  }
  local_98 = local_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  uStack_88 = uStack_68;
  local_c0 = local_78;
  uStack_bc = uStack_74;
  uStack_b8 = uStack_70;
  uStack_b4 = uStack_6c;
  uStack_b0 = uStack_68;
  FUN_0132dba0(&local_80,param_2,local_7c);
  uVar6 = local_7c;
  if (local_80 == 0x12) {
    iVar1 = *(int *)(param_2 + 0x10);
    uVar5 = *(uint *)(param_2 + 0x14);
    if (local_7c != 0) {
      if (local_7c < uVar5) {
        if (*(char *)(iVar1 + local_7c) < -0x40) {
LAB_0132bc40:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar1,uVar5,local_7c,uVar5,&DAT_01ce63ac);
        }
      }
      else if (local_7c != uVar5) goto LAB_0132bc40;
    }
    if ((uVar5 != local_7c) && (*(char *)(iVar1 + local_7c) == '|')) {
      local_c8 = 0x14;
      puVar2 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x14);
      }
      iVar4 = 1;
      *puVar2 = local_c0;
      puVar2[1] = uStack_bc;
      puVar2[2] = uStack_b8;
      puVar2[3] = uStack_b4;
      puVar2[4] = uStack_b0;
      local_a0 = 1;
      local_a8 = 1;
      local_a4 = puVar2;
      do {
        if (uVar6 != 0) {
          if (uVar6 < uVar5) {
            if (*(char *)(iVar1 + uVar6) < -0x40) {
LAB_0132bf00:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(iVar1,uVar5,uVar6,uVar5,&DAT_01ce63bc);
            }
          }
          else if (uVar6 != uVar5) goto LAB_0132bf00;
        }
        if ((uVar5 == uVar6) || (*(char *)(iVar1 + uVar6) != '|')) {
          param_1[3] = local_a8;
          param_1[4] = local_a4;
          param_1[5] = local_a0;
          *param_1 = 0;
          param_1[1] = uVar6;
          param_1[2] = &DAT_80000005;
          return;
        }
        FUN_0132c318(&local_80,param_2,uVar6 + 1,param_4);
        uVar6 = local_7c;
        if ((local_80 & 1) != 0) {
          param_1[2] = local_78;
          param_1[3] = uStack_74;
          param_1[4] = uStack_70;
          param_1[5] = uStack_6c;
          *param_1 = 1;
          param_1[1] = local_7c;
          goto LAB_0132bed0;
        }
        local_98 = local_78;
        uStack_94 = uStack_74;
        uStack_90 = uStack_70;
        uStack_8c = uStack_6c;
        uStack_88 = uStack_68;
        local_38 = local_98;
        uStack_34 = uStack_94;
        uStack_30 = uStack_90;
        uStack_2c = uStack_8c;
        uStack_28 = uStack_88;
        if (iVar4 == local_a8) {
          FUN_0161d664(&local_a8);
          puVar2 = local_a4;
        }
        iVar4 = iVar4 + 1;
        puVar3 = (undefined4 *)((int)puVar2 + local_c8);
        *puVar3 = local_38;
        puVar3[1] = uStack_34;
        puVar3[2] = uStack_30;
        puVar3[3] = uStack_2c;
        puVar3[4] = uStack_28;
        local_a0 = iVar4;
        FUN_0132dba0(&local_80,param_2,uVar6);
        if (local_80 != 0x12) {
          param_1[3] = local_78;
          param_1[4] = uStack_74;
          param_1[5] = uStack_70;
          *param_1 = 1;
          param_1[1] = local_80;
          param_1[2] = local_7c;
LAB_0132bed0:
          FUN_0132c2ac(&local_a8);
          return;
        }
        iVar1 = *(int *)(param_2 + 0x10);
        local_c8 = local_c8 + 0x14;
        uVar5 = *(uint *)(param_2 + 0x14);
        uVar6 = local_7c;
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
    iVar1 = thunk_FUN_01be5118(0x48);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x48);
    }
    FUN_01bed4e2(iVar1,&local_80,0x48);
    param_1[1] = 0x10;
    param_1[2] = iVar1;
  }
  else {
    param_1[3] = local_78;
    param_1[4] = uStack_74;
    param_1[5] = uStack_70;
    param_1[1] = local_80;
    param_1[2] = local_7c;
  }
  *param_1 = 1;
  FUN_0132bfa0(&local_c0);
  return;
}

