// FUN_015625d8 @ 015625d8 size=392 calls_out=7 calls_in=0
// strings: 

undefined8
FUN_015625d8(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\x05') {
    local_50 = *(uint *)(param_2 + 4);
    local_4c = *(uint *)(param_2 + 8);
    iVar4 = *param_1;
    local_38 = *(undefined4 *)(param_2 + 0xc);
    local_60 = 4;
    local_44 = 0;
    if (local_50 == 0) {
      local_38 = 0;
    }
    local_54 = 0;
    local_58 = (uint)(local_50 != 0);
    local_5c = 0;
    local_64 = 0;
    local_48 = local_58;
    iStack_40 = local_50;
    uStack_3c = local_4c;
    while( true ) {
      uVar5 = FUN_01a41998(&local_58);
      iVar1 = (int)uVar5;
      if (iVar1 == 0) break;
      FUN_01552754(&local_34,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc),
                   *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
      if (local_34 != -0x80000000) {
        if (local_34 == -0x7fffffff) {
          if ((char)local_30 != '\0') {
            local_30 = *(undefined4 *)(iVar1 + 4);
            uStack_2c = *(undefined4 *)(iVar1 + 8);
            local_34 = -0x80000000;
            uStack_28 = param_3;
            uVar5 = FUN_01576990(param_1 + 1,(int)((ulonglong)uVar5 >> 0x20),&local_34,param_4,
                                 param_5);
            FUN_014fb9d0(&local_64,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
          }
        }
        else {
          FUN_019bb7e0(local_34,local_30);
        }
      }
    }
    local_50 = local_64;
    local_4c = local_60 + local_5c * 4;
    local_58 = local_60;
    local_54 = local_60;
    puVar2 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    ppuVar3 = &PTR_LAB_01cfbbc4;
    *puVar2 = local_58;
    puVar2[1] = local_54;
    puVar2[2] = local_50;
    puVar2[3] = local_4c;
  }
  else {
    puVar2 = (uint *)&DAT_00000001;
    ppuVar3 = (undefined **)&UNK_01cfc1a4;
  }
  return CONCAT44(ppuVar3,puVar2);
}

