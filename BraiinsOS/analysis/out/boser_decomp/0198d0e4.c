// FUN_0198d0e4 @ 0198d0e4 size=636 calls_out=9 calls_in=1
// strings: 

void FUN_0198d0e4(char *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_78;
  int local_74;
  uint local_70;
  int local_68;
  int local_64;
  undefined1 auStack_58 [4];
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_47;
  char local_45;
  uint local_44;
  int local_40;
  uint local_3c;
  char local_38;
  undefined2 local_37;
  char local_35;
  uint local_34;
  int local_30;
  uint local_2c;
  
  if (*(int *)(param_3 + 0xf0) == 0) {
    local_70 = 0;
    local_74 = 1;
    uVar4 = 0;
  }
  else {
    FUN_006643f0((uint)&local_38 | 4,*(int *)(param_3 + 0xf0),*(undefined4 *)(param_3 + 0xf4));
    local_70 = local_2c;
    iVar1 = local_30;
    local_74 = local_30;
    uVar4 = local_34;
    if (local_34 == 0x80000000) {
      if (local_2c == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_01298504(local_2c,1);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,local_70);
        }
      }
      FUN_01bed4e2(iVar2,iVar1,local_70);
      local_74 = iVar2;
      uVar4 = local_70;
    }
  }
  uVar3 = *(uint *)(param_4 + 0x20);
  local_78 = uVar4;
  if (uVar3 != 0 || *(int *)(param_4 + 0x24) != 0) {
    if (*(ushort *)(param_5 + 0x92) < 5) {
      uVar3 = uVar3 - 1;
      if (uVar3 < *(uint *)(param_5 + 0x74)) {
LAB_0198d1d8:
        FUN_0198c580(&local_68,*(int *)(param_5 + 0x70) + uVar3 * 0x10);
        if (local_68 != 0x2e || local_64 != 0) {
          FUN_0198d46c(&local_38,param_2,*(undefined1 *)(param_3 + 0xd9),
                       *(undefined4 *)(param_3 + 0x104),&local_68);
          if (local_38 != 'R') {
            local_44 = local_34;
            local_40 = local_30;
            local_3c = local_2c;
            local_45 = local_35;
            local_47 = local_37;
            local_48 = local_38;
            goto LAB_0198d314;
          }
          FUN_006643f0((uint)&local_48 | 4,local_34,local_30);
          iVar1 = local_40;
          uVar4 = local_44;
          FUN_006520dc(&local_78,local_40,local_3c);
          if ((uVar4 & 0x7fffffff) != 0) {
            thunk_FUN_01be4678(iVar1);
          }
        }
      }
    }
    else if (uVar3 < *(uint *)(param_5 + 0x74)) goto LAB_0198d1d8;
  }
  FUN_0198c580(&local_38,param_4);
  FUN_0198d46c(&local_48,param_2,*(undefined1 *)(param_3 + 0xd9),*(undefined4 *)(param_3 + 0x104),
               &local_38);
  if (local_48 == 'R') {
    FUN_006643f0((uint)auStack_58 | 4,local_44,local_40);
    FUN_006520dc(&local_78,local_50,local_4c);
    if ((local_54 & 0x7fffffff) != 0) {
      thunk_FUN_01be4678(local_50);
    }
    *(uint *)(param_1 + 4) = local_78;
    *(int *)(param_1 + 8) = local_74;
    *(uint *)(param_1 + 0xc) = local_70;
    *param_1 = 'R';
    return;
  }
  uVar4 = local_78;
LAB_0198d314:
  param_1[3] = local_45;
  *(undefined2 *)(param_1 + 1) = local_47;
  *(uint *)(param_1 + 4) = local_44;
  *(int *)(param_1 + 8) = local_40;
  *(uint *)(param_1 + 0xc) = local_3c;
  *param_1 = local_48;
  if (uVar4 == 0) {
    return;
  }
  thunk_FUN_01be4678(local_74);
  return;
}

