// FUN_007b4458 @ 007b4458 size=184 calls_out=3 calls_in=2
// strings: 

void FUN_007b4458(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_007b4e6c(&local_70);
  iVar1 = 0;
  do {
    auStack_60[iVar1 + -0x10] = auStack_60[iVar1 + -0x10] ^ *(byte *)(param_1 + iVar1 + 0x160);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  FUN_007b4e6c(auStack_60,&local_70);
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  FUN_00652498(&local_40,param_1,auStack_60);
  local_70 = local_40;
  uStack_6c = uStack_3c;
  uStack_68 = uStack_38;
  uStack_64 = uStack_34;
  FUN_007b4e6c(&local_40,&local_70);
  *(undefined4 *)(param_1 + 0x160) = local_40;
  *(undefined4 *)(param_1 + 0x164) = uStack_3c;
  *(undefined4 *)(param_1 + 0x168) = uStack_38;
  *(undefined4 *)(param_1 + 0x16c) = uStack_34;
  FUN_01bed4e2(param_3,&local_70,0x10);
  return;
}

