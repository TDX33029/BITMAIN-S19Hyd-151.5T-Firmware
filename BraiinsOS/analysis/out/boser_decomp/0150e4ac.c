// FUN_0150e4ac @ 0150e4ac size=296 calls_out=5 calls_in=0
// strings: 

undefined8
FUN_0150e4ac(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uStack_64;
  uint uStack_60;
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
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\x05') {
    local_50 = *(uint *)(param_2 + 4);
    local_4c = *(uint *)(param_2 + 8);
    uStack_64 = 0;
    uStack_60 = 4;
    local_38 = *(undefined4 *)(param_2 + 0xc);
    local_44 = 0;
    if (local_50 == 0) {
      local_38 = 0;
    }
    local_54 = 0;
    local_58 = (uint)(local_50 != 0);
    local_5c = 0;
    local_48 = local_58;
    iStack_40 = local_50;
    uStack_3c = local_4c;
    while( true ) {
      uVar4 = FUN_01a41998(&local_58);
      iVar1 = (int)uVar4;
      if (iVar1 == 0) break;
      uStack_2c = *(undefined4 *)(iVar1 + 8);
      local_30 = *(undefined4 *)(iVar1 + 4);
      local_34 = 0x80000000;
      uStack_28 = param_3;
      uVar4 = FUN_01576990(param_1,(int)((ulonglong)uVar4 >> 0x20),&local_34,param_4,param_5);
      FUN_014fb9d0(&uStack_64,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    }
    local_50 = uStack_64;
    local_4c = uStack_60 + local_5c * 4;
    local_58 = uStack_60;
    local_54 = uStack_60;
    puVar2 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar3 = &UNK_01cfa84c;
    *puVar2 = local_58;
    puVar2[1] = local_54;
    puVar2[2] = local_50;
    puVar2[3] = local_4c;
  }
  else {
    puVar2 = (uint *)&DAT_00000001;
    puVar3 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar3,puVar2);
}

