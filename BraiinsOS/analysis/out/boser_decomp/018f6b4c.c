// FUN_018f6b4c @ 018f6b4c size=464 calls_out=4 calls_in=0
// strings: 

void FUN_018f6b4c(undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 local_98 [4];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48 [5];
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  
  local_80 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
             param_3 >> 0x18;
  local_84 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
             param_4 >> 0x18;
  iVar1 = 0;
  local_88 = 0;
  do {
    *(byte *)((int)local_48 + iVar1 + -0x40) =
         *(byte *)((int)local_48 + iVar1 + -0x40) ^ *(byte *)(param_2 + 0x10 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  puVar4 = (uint *)(local_98 + 1);
  FUN_01bed4e2(puVar4,&local_88,0xc);
  local_98[0] = 1;
  uVar3 = (*(uint **)(param_2 + 0x24))[1];
  if (uVar3 != 0 || uVar3 < (param_8 <= **(uint **)(param_2 + 0x24))) {
    puVar4 = &local_78;
    local_78 = local_88;
    uStack_74 = local_84;
    uStack_70 = local_80;
    local_48[3] = 0;
    local_48[2] = 0;
    local_48[1] = 0;
    local_48[0] = 0;
    iVar1 = FUN_01b37e2c(*(undefined4 *)(param_2 + 0x20),param_7,local_48,&local_6c,0x10,puVar4,0xc,
                         param_7,param_8,0,0,param_5,param_6);
    uStack_30 = local_48[3];
    uStack_34 = local_48[2];
    local_48[4] = local_48[1];
    local_98 = (undefined1  [4])local_48[0];
    if (iVar1 == 1) {
      local_68 = local_78;
      uStack_64 = uStack_74;
      uStack_60 = uStack_70;
      local_5c = local_48[0];
      uStack_58 = local_48[1];
      uStack_54 = local_48[2];
      uStack_50 = local_48[3];
      local_48[0] = local_78;
      local_48[1] = uStack_74;
      local_48[2] = uStack_70;
      local_48[3] = (uint)local_98;
      local_2c = local_6c;
      uStack_94 = local_48[4];
      uStack_90 = uStack_34;
      uStack_8c = uStack_30;
      iVar1 = 0;
      do {
        *(undefined1 *)((int)local_48 + iVar1) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xc);
      if (0x10 < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_6c,0x10,&DAT_01c06728);
      }
      if (local_6c != 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_013070f0(0x10,local_6c,&DAT_01d23d58);
      }
      param_1[1] = local_98;
      param_1[2] = local_48[4];
      param_1[3] = uStack_34;
      param_1[4] = uStack_30;
      uVar2 = 0x80000029;
      goto LAB_018f6cec;
    }
  }
  iVar1 = 0;
  do {
    *(undefined1 *)((int)puVar4 + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  uVar2 = 0x8000001a;
LAB_018f6cec:
  *param_1 = uVar2;
  return;
}

