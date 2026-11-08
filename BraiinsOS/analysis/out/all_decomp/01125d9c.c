// FUN_01125d9c @ 01125d9c size=572 calls_out=11 calls_in=2
// strings: 

void FUN_01125d9c(uint *param_1,char *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  char local_58 [4];
  uint local_54;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  
  if (*param_2 != '\x04') {
    uVar4 = FUN_00f36124(param_2,&uStack_25,&DAT_01887518);
    *param_1 = 0x80000000;
    param_1[1] = uVar4;
    FUN_01111ad8(param_2);
    return;
  }
  local_70 = *(int *)(param_2 + 4);
  local_78 = *(int *)(param_2 + 8);
  uVar5 = *(uint *)(param_2 + 0xc);
  uVar4 = 0xaaaa;
  if (uVar5 < 0xaaaa) {
    uVar4 = uVar5;
  }
  iVar7 = 0;
  local_6c = local_78 + uVar5 * 0x18;
  local_74 = local_78;
  if (uVar5 == 0) {
    uVar1 = 8;
    uVar4 = 0;
  }
  else {
    uVar1 = thunk_FUN_016d4a50(uVar4 * 0x18);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar4 * 0x18);
    }
  }
  local_60 = 0;
  local_68 = uVar4;
  local_64 = uVar1;
  do {
    uVar4 = local_60;
    FUN_0111d328(local_58,&local_78);
    iVar6 = local_6c;
    iVar3 = local_74;
    if (local_58[0] == '\x06') {
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      if (local_68 != 0x80000000) {
        local_40 = *param_1;
        uStack_3c = param_1[1];
        uStack_38 = param_1[2];
        if (local_6c != local_74) {
          uVar4 = FUN_00f2c2f0(uVar5,&DAT_0188738c,&DAT_018ab990);
          *param_1 = 0x80000000;
          param_1[1] = uVar4;
          FUN_01111ec4(&local_40);
        }
      }
LAB_01125f34:
      FUN_01127284(iVar3,((uint)(iVar6 - iVar3) >> 3) * -0x55555555);
      if (local_70 != 0) {
        thunk_FUN_016d3fb4(local_78);
      }
      return;
    }
    if (local_58[0] == '\a') {
      *param_1 = 0x80000000;
      param_1[1] = local_54;
      FUN_01127284(uVar1,uVar4);
      if (local_68 != 0) {
        thunk_FUN_016d3fb4(uVar1);
      }
      iVar3 = local_74;
      iVar6 = local_6c;
      goto LAB_01125f34;
    }
    local_40 = CONCAT31(local_40._1_3_,local_58[0]);
    FUN_016dd1aa((uint)&local_40 | 1,(uint)local_58 | 1,0x17);
    if (uVar4 == local_68) {
      FUN_0157eb1c(&local_68);
      uVar1 = local_64;
    }
    puVar2 = (uint *)(uVar1 + iVar7);
    local_60 = uVar4 + 1;
    iVar7 = iVar7 + 0x18;
    *puVar2 = local_40;
    puVar2[1] = uStack_3c;
    puVar2[2] = uStack_38;
    puVar2[3] = uStack_34;
    puVar2[4] = uStack_30;
    puVar2[5] = uStack_2c;
  } while( true );
}

