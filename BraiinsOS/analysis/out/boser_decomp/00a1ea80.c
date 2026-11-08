// FUN_00a1ea80 @ 00a1ea80 size=372 calls_out=9 calls_in=1
// strings: 

void FUN_00a1ea80(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_120 [72];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0d6d4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0d6d4);
  }
  iVar5 = *(int *)(param_2 + 0x48);
  FUN_01bed4e2(auStack_120,param_2,0x48);
  piVar4 = *(int **)(iVar5 + 8);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xa1ebd0);
    (*pcVar1)();
  }
  FUN_009d4768(&local_70);
  local_30 = 0;
  local_78 = FUN_009cee94(&local_70);
  local_94 = 0;
  local_98 = 0;
  local_74 = &DAT_01c0cc04;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x28);
  }
  *puVar3 = local_98;
  puVar3[1] = local_94;
  puVar3[2] = uStack_90;
  puVar3[3] = uStack_8c;
  puVar3[4] = uStack_88;
  puVar3[5] = local_84;
  puVar3[6] = uStack_80;
  puVar3[7] = uStack_7c;
  puVar3[8] = local_78;
  puVar3[9] = local_74;
  FUN_0160aaa4(&local_70,0);
  local_d8 = local_70;
  uStack_d4 = local_6c;
  uStack_d0 = local_68;
  uStack_cc = uStack_64;
  uStack_c8 = uStack_60;
  local_c4 = local_5c;
  uStack_c0 = uStack_58;
  uStack_bc = uStack_54;
  uStack_b8 = uStack_50;
  uStack_b4 = uStack_4c;
  local_b0 = local_48;
  uStack_ac = uStack_44;
  uStack_a8 = uStack_40;
  uStack_a4 = uStack_3c;
  uStack_a0 = uStack_38;
  uStack_9c = uStack_34;
  FUN_00a1ea50(auStack_120);
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = local_d8;
  param_1[3] = uStack_d4;
  param_1[4] = uStack_d0;
  param_1[5] = uStack_cc;
  param_1[6] = uStack_c8;
  param_1[7] = local_c4;
  param_1[8] = uStack_c0;
  param_1[9] = uStack_bc;
  param_1[10] = uStack_b8;
  param_1[0xb] = uStack_b4;
  param_1[0xc] = local_b0;
  param_1[0xd] = uStack_ac;
  param_1[0xe] = uStack_a8;
  param_1[0xf] = uStack_a4;
  param_1[0x10] = uStack_a0;
  param_1[0x11] = uStack_9c;
  param_1[0x12] = puVar3;
  param_1[0x13] = &DAT_01c1191c;
  param_1[0x14] = 0;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

