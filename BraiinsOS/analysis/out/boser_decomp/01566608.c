// FUN_01566608 @ 01566608 size=412 calls_out=4 calls_in=0
// strings: 

void FUN_01566608(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_015737d4(&local_a8);
  if ((char)local_6c == '\0') {
    FUN_015737d4(&local_68,param_2 + 0x14,param_3,param_4,param_5,param_6);
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x40);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x40);
    }
    *puVar2 = local_68;
    puVar2[1] = uStack_64;
    puVar2[2] = uStack_60;
    puVar2[3] = uStack_5c;
    puVar2[4] = uStack_58;
    puVar2[5] = local_54;
    puVar2[6] = uStack_50;
    puVar2[7] = uStack_4c;
    puVar2[8] = uStack_48;
    puVar2[9] = uStack_44;
    puVar2[10] = local_40;
    puVar2[0xb] = uStack_3c;
    puVar2[0xc] = uStack_38;
    puVar2[0xd] = uStack_34;
    puVar2[0xe] = uStack_30;
    puVar2[0xf] = uStack_2c;
    iVar3 = 0x3c;
    do {
      if (iVar3 == 0x7c) {
        param_1[1] = 1;
        *param_1 = 0x80000000;
        param_1[2] = puVar2;
        param_1[3] = 1;
        param_1[4] = 0;
        goto LAB_0156677c;
      }
      pcVar1 = (char *)((int)puVar2 + iVar3);
      iVar3 = iVar3 + 0x40;
    } while (*pcVar1 != '\0');
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 1;
    param_1[4] = puVar2;
    param_1[5] = 1;
    param_1[6] = 0;
LAB_0156677c:
    FUN_015012ac(&local_a8);
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x40);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x40);
    }
    *puVar2 = local_a8;
    puVar2[1] = uStack_a4;
    puVar2[2] = uStack_a0;
    puVar2[3] = uStack_9c;
    puVar2[4] = uStack_98;
    puVar2[5] = local_94;
    puVar2[6] = uStack_90;
    puVar2[7] = uStack_8c;
    puVar2[8] = uStack_88;
    puVar2[9] = uStack_84;
    puVar2[10] = local_80;
    puVar2[0xb] = uStack_7c;
    puVar2[0xc] = uStack_78;
    puVar2[0xd] = uStack_74;
    puVar2[0xe] = uStack_70;
    puVar2[0xf] = local_6c;
    iVar3 = 0x3c;
    do {
      if (iVar3 == 0x7c) {
        param_1[1] = 1;
        *param_1 = 0x80000000;
        param_1[2] = puVar2;
        param_1[3] = 1;
        param_1[4] = 0;
        return;
      }
      pcVar1 = (char *)((int)puVar2 + iVar3);
      iVar3 = iVar3 + 0x40;
    } while (*pcVar1 != '\0');
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 1;
    param_1[4] = puVar2;
    param_1[5] = 1;
    param_1[6] = 0;
  }
  return;
}

