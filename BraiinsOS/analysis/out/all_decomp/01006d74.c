// FUN_01006d74 @ 01006d74 size=648 calls_out=8 calls_in=2
// strings: 

void FUN_01006d74(uint *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_38 [3];
  byte local_2c;
  byte local_2b;
  uint local_2a;
  ushort local_26;
  
  uVar4 = *(uint *)(param_2 + 0x4c);
  if (uVar4 != 0) {
    iVar6 = *(int *)(param_2 + 0x30);
    iVar3 = *(int *)(param_2 + 0x48);
    while (iVar6 != -1) {
      uVar1 = FUN_016e034e(iVar6,iVar3,uVar4);
      if (uVar1 == 0xffffffff) {
        puVar2 = (uint *)FUN_016d2bc8();
        uVar4 = *puVar2;
        *param_1 = 0;
        param_1[1] = uVar4;
        return;
      }
      if (uVar4 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar1,uVar4,&DAT_018af198);
      }
      uVar4 = uVar4 - uVar1;
      *(undefined4 *)(param_2 + 0x4c) = 0;
      if (uVar1 == 0) {
        if (uVar4 == 0) goto LAB_01006e04;
      }
      else {
        if (uVar4 == 0) goto LAB_01006e04;
        FUN_016dd52c(iVar3,iVar3 + uVar1,uVar4);
      }
      *(uint *)(param_2 + 0x4c) = uVar4;
    }
LAB_01006fdc:
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01881ec8);
  }
LAB_01006e04:
  do {
    FUN_01006398(local_38,param_2 + 0x18);
    if ((char)local_38[0] != '\x04') {
      uVar4 = local_38[0] >> 8;
      local_2a = local_38[0] >> 0x10 | local_38[1] << 0x10;
      uVar1 = local_38[1] >> 0x10;
      uVar5 = local_38[0] & 0xff;
joined_r0x01006eb4:
      if (uVar5 != 4) {
        *param_1 = local_2a << 0x10 | (uVar4 & 0xff) << 8 | uVar5;
        param_1[1] = uVar1 << 0x10 | local_2a >> 0x10;
        return;
      }
      break;
    }
    iVar6 = *(int *)(param_2 + 0x20);
    iVar3 = *(int *)(param_2 + 0x24);
    FUN_01007fc4(local_38,param_2 + 0x18,1,0,param_2 + 0x34,4);
    if ((char)local_38[0] == '\x01') {
      FUN_0100719c(&local_2c,local_38[1],local_38[2]);
      uVar5 = (uint)local_2c;
      uVar4 = (uint)local_2b;
      uVar1 = (uint)local_26;
      goto joined_r0x01006eb4;
    }
  } while (iVar6 != *(int *)(param_2 + 0x20) || iVar3 != *(int *)(param_2 + 0x24));
  uVar4 = *(uint *)(param_2 + 0x40);
  if (uVar4 < 8) {
    uVar5 = *(uint *)(param_2 + 0x10);
    uVar1 = *(uint *)(param_2 + 8);
    iVar3 = *(int *)(param_2 + 0x30);
    do {
      local_38[0] = uVar1;
      local_38[1] = uVar5;
      if (iVar3 == -1) goto LAB_01006fdc;
      iVar6 = FUN_016e034e(iVar3,(int)local_38 + uVar4,8 - uVar4);
      if (iVar6 == -1) {
        puVar2 = (uint *)FUN_016d2bc8();
        uVar4 = *puVar2;
        *(undefined1 *)param_1 = 0;
        param_1[1] = uVar4;
        return;
      }
      uVar4 = uVar4 + iVar6;
      *(uint *)(param_2 + 0x40) = uVar4;
    } while (uVar4 < 8);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

