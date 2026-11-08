// FUN_00fbbd74 @ 00fbbd74 size=392 calls_out=8 calls_in=0
// strings: 

void FUN_00fbbd74(uint *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_144;
  undefined1 auStack_140 [64];
  uint local_100;
  uint local_fc;
  uint local_f8;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x254)) {
  case 0:
    FUN_01bed4e2(param_2,param_2 + 0x128,0x128);
    *(int *)(param_2 + 0x250) = param_2;
    iVar2 = param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f96c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f96c);
  case 3:
    iVar2 = *(int *)(param_2 + 0x250);
  }
  FUN_019e6a68(&local_100,iVar2 + 0x18,param_3);
  if ((char)local_100 == '\x05') {
    *param_1 = 0x80000001;
    uVar1 = 3;
  }
  else {
    if ((local_100 & 0xff) == 4) {
      local_40 = *(undefined4 *)(param_2 + 0x100);
      *(undefined1 *)(param_2 + 0x124) = 1;
      local_3c = *(undefined4 *)(param_2 + 0x104);
      local_38 = *(undefined4 *)(param_2 + 0x108);
      local_80 = *(undefined4 *)(param_2 + 0xc0);
      uStack_7c = *(undefined4 *)(param_2 + 0xc4);
      uStack_78 = *(undefined4 *)(param_2 + 200);
      uStack_74 = *(undefined4 *)(param_2 + 0xcc);
      uStack_70 = *(undefined4 *)(param_2 + 0xd0);
      local_6c = *(undefined4 *)(param_2 + 0xd4);
      uStack_68 = *(undefined4 *)(param_2 + 0xd8);
      uStack_64 = *(undefined4 *)(param_2 + 0xdc);
      uStack_60 = *(undefined4 *)(param_2 + 0xe0);
      uStack_5c = *(undefined4 *)(param_2 + 0xe4);
      local_58 = *(undefined4 *)(param_2 + 0xe8);
      uStack_54 = *(undefined4 *)(param_2 + 0xec);
      uStack_50 = *(undefined4 *)(param_2 + 0xf0);
      uStack_4c = *(undefined4 *)(param_2 + 0xf4);
      uStack_48 = *(undefined4 *)(param_2 + 0xf8);
      uStack_44 = *(undefined4 *)(param_2 + 0xfc);
      uVar4 = *(undefined4 *)(param_2 + 0x110);
      FUN_01bed4e2(&local_100,param_2 + 0x40,0x80);
      local_30 = uVar4;
      FUN_0189039c(&local_144,&local_100);
      uVar3 = *(uint *)(local_144 + 0x48);
      if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar3,0x40,&DAT_01d2571c);
      }
      FUN_01321fc0(&local_100,&DAT_004a5d58,0x202,auStack_140,uVar3);
      FUN_005f79fc(param_2);
      uVar3 = local_100;
    }
    else {
      uVar3 = 0x80000000;
      FUN_005f79fc(param_2);
      local_f8 = local_fc;
      local_fc = local_100;
    }
    uVar1 = 1;
    *param_1 = uVar3;
    param_1[1] = local_fc;
    param_1[2] = local_f8;
  }
  *(undefined1 *)(param_2 + 0x254) = uVar1;
  return;
}

