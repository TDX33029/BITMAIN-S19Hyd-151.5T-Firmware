// FUN_00f1f178 @ 00f1f178 size=480 calls_out=6 calls_in=1
// strings: /nix/store/eee | tokio_tungstenite | tokio_tungstenite

void FUN_00f1f178(undefined4 *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_1d8 [80];
  char *local_188;
  int local_184;
  undefined1 auStack_180 [188];
  undefined4 local_c4;
  int local_a0;
  char *local_80;
  int local_7c;
  char *local_78;
  undefined4 local_74;
  undefined *local_70;
  undefined1 auStack_6c [72];
  
  puVar4 = auStack_6c + 0x48;
  iVar3 = *param_3;
  if (iVar3 == 5) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (*(char *)(param_2 + 0xba) == '\x01') {
LAB_00f1f1b4:
    puVar2 = (undefined *)0x0;
    puVar4 = (undefined1 *)register0x00000054;
  }
  else {
    if (4 < DAT_01d51b00) {
      local_74 = 0x11;
      local_7c = 0x11;
      local_70 = &DAT_01c06dac;
      local_78 = "tokio_tungstenite";
      local_80 = "tokio_tungstenite";
      FUN_01ac6264("/nix/store/eee",0x187,5,&local_80);
    }
    uVar1 = *param_4;
    FUN_01348e78(*(int *)(param_2 + 0xb0) + 0x14,uVar1);
    FUN_01348e78(*(int *)(param_2 + 0xb4) + 0x14,uVar1);
    FUN_0070a078(&local_80,param_2);
    FUN_0070ec84(&local_188,&local_80);
    if (local_188 == (char *)0x10 && local_184 == 0) {
LAB_00f1f2b8:
      uVar1 = 1;
      goto LAB_00f1f2bc;
    }
    *(undefined1 *)(param_2 + 0xba) = 1;
    FUN_01bed4e2(auStack_1d8,auStack_180,0x50);
    if (((uint)local_188 & 0x1f) == 0xf) goto LAB_00f1f1b4;
    if (local_188 == (char *)0x10) goto LAB_00f1f2b8;
    local_80 = local_188;
    local_7c = local_184;
    FUN_01bed4e2(&local_78,auStack_1d8,0x50);
    local_a0 = FUN_00711128(&local_80);
    puVar2 = &DAT_01c074b8;
  }
  *(undefined **)(puVar4 + -0xa0) = puVar2;
  if (local_a0 == 0) {
    *param_3 = 5;
                    /* WARNING: Could not recover jumptable at 0x00f1f318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_00f1f31c + *(int *)(&LAB_00f1f31c + iVar3 * 4)))
              (param_3[1],2,param_3[1],param_3[4]);
    return;
  }
  param_1[1] = local_a0;
  param_1[2] = local_c4;
  uVar1 = 0;
LAB_00f1f2bc:
  *param_1 = uVar1;
  return;
}

