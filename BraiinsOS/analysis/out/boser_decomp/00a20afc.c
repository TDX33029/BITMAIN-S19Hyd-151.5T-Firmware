// FUN_00a20afc @ 00a20afc size=192 calls_out=4 calls_in=47
// strings: 

void FUN_00a20afc(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  
  FUN_01656cb0(&local_34,*param_1 + 0xec);
  if (local_34 == 1) {
    local_24 = local_2c;
    local_28 = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01c0d744,&DAT_01c0d724);
  }
  iVar6 = *(int *)(local_30 + 0x10);
  if (iVar6 == *(int *)(local_30 + 8)) {
    FUN_00a20c10();
  }
  puVar1 = (undefined4 *)(*(int *)(local_30 + 0xc) + iVar6 * 0x3c);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  puVar1[5] = param_2[5];
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  puVar1[8] = uVar4;
  puVar1[9] = uVar5;
  uVar2 = param_2[0xb];
  uVar3 = param_2[0xc];
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xe];
  puVar1[10] = param_2[10];
  puVar1[0xb] = uVar2;
  puVar1[0xc] = uVar3;
  puVar1[0xd] = uVar4;
  puVar1[0xe] = uVar5;
  *(int *)(local_30 + 0x10) = iVar6 + 1;
  FUN_00a97e8c(local_30,local_2c);
  return;
}

