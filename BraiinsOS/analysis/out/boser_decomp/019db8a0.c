// FUN_019db8a0 @ 019db8a0 size=420 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_019db8a0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint local_98;
  uint local_94;
  uint local_90;
  uint *local_8c;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  iVar4 = 0x20;
  do {
    FUN_019bb288(&local_50,param_2);
    uVar1 = local_50;
    if ((local_50 & 1) == 0) break;
    if (local_48 == 0) {
      local_94 = 2;
      FUN_019efd54(param_1,&local_94);
      break;
    }
    local_70 = local_48;
    *(uint *)((uint)&local_70 | 4) = local_44;
    ((uint *)((uint)&local_70 | 4))[1] = local_40;
    local_64 = local_3c;
    local_60 = local_38;
    uStack_5c = uStack_34;
    uStack_58 = uStack_30;
    uStack_54 = uStack_2c;
    FUN_019a6924(&local_50,&local_70);
    uVar3 = local_50 & 0xff;
    if (uVar3 == 4) {
      local_98 = local_4c;
    }
    else {
      FUN_0069d8a4(uVar3);
    }
    local_48 = local_70;
    local_44 = uStack_6c;
    local_40 = uStack_68;
    local_3c = local_64;
    local_38 = local_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    local_4c = 1;
    local_50 = 1;
    puVar2 = (uint *)thunk_FUN_01be5118(0x28);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x28);
    }
    *puVar2 = local_50;
    puVar2[1] = local_4c;
    puVar2[2] = local_48;
    puVar2[3] = local_44;
    puVar2[4] = local_40;
    puVar2[5] = local_3c;
    puVar2[6] = local_38;
    puVar2[7] = uStack_34;
    puVar2[8] = uStack_30;
    puVar2[9] = uStack_2c;
    local_90 = local_98;
    local_94 = (uint)(uVar3 == 4);
    local_8c = puVar2;
    FUN_019efd54(param_1,&local_94);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar1 & 1;
}

