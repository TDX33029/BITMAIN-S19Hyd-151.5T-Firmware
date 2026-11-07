// FUN_016c2f9c @ 016c2f9c size=312 calls_out=1 calls_in=2
// strings: 

void FUN_016c2f9c(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar4 = 0;
  do {
    uVar1 = uVar4;
    if (uVar4 < 0x101) {
      uVar1 = 0x100;
    }
    do {
      uVar5 = uVar4;
      if (uVar1 == uVar5) {
        return;
      }
      puVar3 = (uint *)(param_2 + (uVar5 >> 3 & 0xfffffff0));
      local_48[0] = *puVar3;
      local_48[3] = puVar3[3];
      local_48[1] = puVar3[1];
      uVar4 = uVar5 + 1;
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_48[2] = puVar3[2];
    } while ((*(uint *)((int)local_48 + ((uVar5 & 0x60) >> 3)) >> (uVar5 & 0x1f) & 1) == 0);
    uVar1 = uVar5;
    if (uVar5 < 0xff) {
      do {
        puVar3 = (uint *)(param_2 + (uVar4 >> 3 & 0xfffffff0));
        local_68[0] = *puVar3;
        local_68[1] = puVar3[1];
        local_68[3] = puVar3[3];
        local_4c = 0;
        local_50 = 0;
        local_54 = 0;
        local_58 = 0;
        local_68[2] = puVar3[2];
        if ((*(uint *)((int)local_68 + ((uVar4 & 0x60) >> 3)) >> (uVar4 & 0x1f) & 1) == 0)
        goto LAB_016c30b8;
        uVar2 = uVar4 + 1;
        uVar1 = uVar4;
        uVar4 = uVar2;
      } while (uVar2 != 0x100);
      uVar1 = 0xff;
      uVar4 = 0x100;
LAB_016c30b8:
    }
    FUN_0065fbd8(param_1,uVar5,uVar1);
  } while( true );
}

