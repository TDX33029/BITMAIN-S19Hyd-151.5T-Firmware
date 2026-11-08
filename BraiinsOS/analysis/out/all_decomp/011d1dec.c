// FUN_011d1dec @ 011d1dec size=324 calls_out=4 calls_in=0
// strings: 

void FUN_011d1dec(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
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
  
  FUN_011c9534(&local_a8);
  if ((char)local_6c == '\0') {
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = 0x80000000;
    FUN_011ca6a4(&local_a8);
    return;
  }
  FUN_011c9534(&local_68,param_2 + 0x14,param_3,param_4,param_5,param_6);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x80);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x80);
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
  puVar2[0x10] = local_68;
  puVar2[0x11] = uStack_64;
  puVar2[0x12] = uStack_60;
  puVar2[0x13] = uStack_5c;
  puVar2[0x14] = uStack_58;
  puVar2[0x15] = local_54;
  puVar2[0x16] = uStack_50;
  puVar2[0x17] = uStack_4c;
  puVar2[0x18] = uStack_48;
  puVar2[0x19] = uStack_44;
  puVar2[0x1a] = local_40;
  puVar2[0x1b] = uStack_3c;
  puVar2[0x1c] = uStack_38;
  puVar2[0x1d] = uStack_34;
  puVar2[0x1e] = uStack_30;
  puVar2[0x1f] = uStack_2c;
  cVar1 = *(char *)(puVar2 + 0xf);
  bVar3 = cVar1 == '\x01';
  if (bVar3) {
    cVar1 = *(char *)(puVar2 + 0x1f);
  }
  if (bVar3 && cVar1 == '\x01') {
    param_1[1] = 2;
    *param_1 = 0x80000000;
    param_1[2] = puVar2;
    param_1[3] = 2;
    param_1[4] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = puVar2;
  param_1[5] = 2;
  param_1[6] = 0;
  return;
}

