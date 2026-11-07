// FUN_007b4510 @ 007b4510 size=524 calls_out=10 calls_in=0
// strings: /etc/bos_custom_contract_key | /tmp/bos_applied_contract

undefined4 FUN_007b4510(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_74;
  int *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  
  local_6c = (undefined4 *)0x0;
  local_70 = (int *)&SUB_00000004;
  local_74 = (undefined4 *)0x0;
  iVar1 = FUN_007b47c4(param_2,"/etc/bos_custom_contract_key",0x1c,1);
  piVar3 = (int *)&SUB_00000004;
  if (iVar1 != 0) {
    FUN_007b4428(&local_74);
    local_6c = (undefined4 *)0x1;
    *local_70 = iVar1;
    piVar3 = local_70;
  }
  puVar5 = (undefined4 *)(uint)(iVar1 != 0);
  iVar1 = FUN_007b47c4(param_2,"/tmp/bos_applied_contract",0x19,0);
  if (iVar1 == 0) {
    if (puVar5 == (undefined4 *)0x0) {
      uVar2 = 0;
      goto LAB_007b46cc;
    }
  }
  else {
    if (puVar5 == local_74) {
      FUN_007b4428(&local_74);
      piVar3 = local_70;
    }
    piVar3[(int)puVar5] = iVar1;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    local_6c = puVar5;
  }
  piVar3 = local_70;
  local_64 = (undefined4 *)FUN_01298504((int)puVar5 * 0xc,4);
  if (local_64 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,(int)puVar5 * 0xc);
  }
  puVar6 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  puVar4 = local_64;
  local_68 = puVar5;
  do {
    local_40 = 0;
    local_44 = 1;
    local_48 = 0;
    local_2c = 0;
    local_30 = (undefined4 *)0x60000020;
    local_34 = (undefined4 *)&DAT_01c0a220;
    local_38 = &local_48;
    iVar1 = FUN_00667a08(piVar3,&local_38);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_58,&DAT_01c0a238,&DAT_01d30334);
    }
    piVar3 = piVar3 + 1;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    local_58 = local_48;
    uStack_54 = local_44;
    uStack_50 = local_40;
    *puVar4 = local_48;
    puVar4[1] = local_44;
    puVar4[2] = local_40;
    puVar4 = puVar4 + 3;
  } while (puVar5 != puVar6);
  local_38 = local_68;
  local_34 = local_64;
  local_60 = puVar5;
  local_30 = puVar5;
  FUN_018c9750(&local_48,local_64,puVar5,"\n",1);
  uVar2 = FUN_007b3c00(&local_48);
  FUN_006a41c0(&local_38);
LAB_007b46cc:
  FUN_007b4cac(&local_74);
  return uVar2;
}

