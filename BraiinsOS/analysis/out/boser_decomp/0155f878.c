// FUN_0155f878 @ 0155f878 size=332 calls_out=6 calls_in=0
// strings: 

undefined8
FUN_0155f878(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
    local_44 = 0;
    local_5c = 0;
    uStack_64 = 0;
    uStack_60 = 4;
    local_54 = 0;
    iVar2 = *param_1;
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_50 == 0) {
      local_38 = 0;
    }
    local_58 = (uint)(local_50 != 0);
    local_48 = local_58;
    iStack_40 = local_50;
    uStack_3c = local_4c;
    while( true ) {
      uVar8 = FUN_01a41998(&local_58);
      iVar3 = (int)uVar8;
      if (iVar3 == 0) break;
      uVar7 = *(undefined4 *)(iVar3 + 8);
      uVar6 = *(undefined4 *)(iVar3 + 4);
      cVar1 = FUN_0155ff74(iVar2 + 8,uVar6,uVar7);
      if (cVar1 != '\0') {
        local_34 = 0x80000000;
        local_30 = uVar6;
        uStack_2c = uVar7;
        uStack_28 = param_3;
        uVar8 = FUN_01576990(param_1 + 1,(int)((ulonglong)uVar8 >> 0x20),&local_34,param_4,param_5);
        FUN_014fb9d0(&uStack_64,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      }
    }
    local_50 = uStack_64;
    local_4c = uStack_60 + local_5c * 4;
    local_58 = uStack_60;
    local_54 = uStack_60;
    puVar4 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    ppuVar5 = &PTR_LAB_01cfbbc4;
    *puVar4 = local_58;
    puVar4[1] = local_54;
    puVar4[2] = local_50;
    puVar4[3] = local_4c;
  }
  else {
    puVar4 = (uint *)&DAT_00000001;
    ppuVar5 = (undefined **)&UNK_01cfc1a4;
  }
  return CONCAT44(ppuVar5,puVar4);
}

