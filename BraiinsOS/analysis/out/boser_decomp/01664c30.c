// FUN_01664c30 @ 01664c30 size=392 calls_out=9 calls_in=1
// strings: internal error: entered unreachable code

int * FUN_01664c30(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_18c;
  undefined1 auStack_188 [256];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  code *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((char)param_1[1] != '\0') {
    if ((char)param_1[1] == '\x01') {
      return param_1;
    }
    return (int *)0x0;
  }
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    *param_2 = 0;
    if (iVar1 != 0) {
      *param_1 = iVar1;
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_01664d4c;
    }
  }
  FUN_01664e80(&local_58);
  if (local_58 == (undefined4 *)0x1) {
    local_18c = local_54;
    local_58 = &local_18c;
    local_54 = FUN_01664dd0;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0058b36e,&local_58,&DAT_01d06e98);
  }
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  uStack_78 = uStack_40;
  uStack_74 = uStack_3c;
  local_70 = local_38;
  uStack_6c = uStack_34;
  uStack_68 = uStack_30;
  uStack_64 = uStack_2c;
  uStack_60 = uStack_28;
  uStack_5c = uStack_24;
  FUN_01bed93e(auStack_188,0,0x100);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x150);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x150);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  FUN_01bed4e2(puVar2 + 2,auStack_188,0x130);
  iVar1 = param_1[1];
  puVar2[0x4e] = 0x10000;
  puVar2[0x4f] = 0;
  puVar2[0x50] = 0x10000;
  piVar3 = (int *)*param_1;
  puVar2[0x51] = 0;
  puVar2[0x52] = 0x40;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = (int)puVar2;
  if ((char)iVar1 == '\x01') {
    iVar1 = *piVar3 + -1;
    *piVar3 = iVar1;
    if (iVar1 == 0) {
      FUN_01663bac();
      return param_1;
    }
    return param_1;
  }
  if ((char)iVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2f25c);
  }
LAB_01664d4c:
  FUN_019a2bcc(param_1,&LAB_01663b78);
  return param_1;
}

