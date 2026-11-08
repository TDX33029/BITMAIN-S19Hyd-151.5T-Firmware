// FUN_015615cc @ 015615cc size=360 calls_out=7 calls_in=0
// strings: 

undefined8
FUN_015615cc(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  uint uStack_6c;
  uint uStack_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 == '\x05') {
    local_58 = *(uint *)(param_2 + 4);
    local_54 = *(uint *)(param_2 + 8);
    local_4c = 0;
    uStack_6c = 0;
    uStack_68 = 4;
    local_64 = 0;
    local_5c = 0;
    iVar1 = *param_1;
    local_40 = *(undefined4 *)(param_2 + 0xc);
    if (local_58 == 0) {
      local_40 = 0;
    }
    local_60 = (uint)(local_58 != 0);
    local_50 = local_60;
    iStack_48 = local_58;
    uStack_44 = local_54;
    while( true ) {
      uVar5 = FUN_01a41998(&local_60);
      iVar2 = (int)uVar5;
      if (iVar2 == 0) break;
      FUN_01338048(&local_38,iVar1 + 8,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
      if (local_38 == 0x12) {
        if ((char)local_34 != '\0') {
          local_34 = *(undefined4 *)(iVar2 + 4);
          uStack_30 = *(undefined4 *)(iVar2 + 8);
          local_38 = -0x80000000;
          uStack_2c = param_3;
          uVar5 = FUN_01576990(param_1 + 1,(int)((ulonglong)uVar5 >> 0x20),&local_38,param_4,param_5
                              );
          FUN_014fb9d0(&uStack_6c,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        }
      }
      else {
        FUN_0150174c(&local_38);
      }
    }
    local_58 = uStack_6c;
    local_54 = uStack_68 + local_64 * 4;
    local_60 = uStack_68;
    local_5c = uStack_68;
    puVar3 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    ppuVar4 = &PTR_LAB_01cfbbc4;
    *puVar3 = local_60;
    puVar3[1] = local_5c;
    puVar3[2] = local_58;
    puVar3[3] = local_54;
  }
  else {
    puVar3 = (uint *)&DAT_00000001;
    ppuVar4 = (undefined **)&UNK_01cfc1a4;
  }
  return CONCAT44(ppuVar4,puVar3);
}

