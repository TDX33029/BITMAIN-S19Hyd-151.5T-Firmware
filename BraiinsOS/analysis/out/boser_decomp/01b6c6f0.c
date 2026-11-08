// FUN_01b6c6f0 @ 01b6c6f0 size=548 calls_out=8 calls_in=1
// strings: 

undefined8 FUN_01b6c6f0(undefined4 param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  
  puVar1 = (uint *)FUN_01b6c23c();
  if ((DAT_01d532f0 & 1) == 0) {
    uVar5 = FUN_01b6c2dc(param_2);
    uVar2 = FUN_01b6c2dc(param_2 + 4);
    uVar3 = FUN_01b6c2dc(param_2 + 8);
    uVar4 = FUN_01b6c2dc(param_2 + 0xc);
    *puVar1 = uVar5 & 0x3ffffff;
    uVar6 = ((uVar3 & 0x3fff) << 0xc | uVar2 >> 0x14) & 0xffffc0ff;
    uVar2 = ((uVar2 & 0xfffff) << 6 | uVar5 >> 0x1a) & 0xffffff03;
    uVar3 = ((uVar4 & 0xff) << 0x12 | uVar3 >> 0xe) & 0xfff03fff;
    uVar5 = (uVar4 & 0xfffffff) >> 8;
    puVar1[2] = uVar6;
    puVar1[6] = uVar6 * 5;
    puVar1[1] = uVar2;
    puVar1[3] = uVar3;
    puVar1[4] = uVar5;
    puVar1[5] = uVar2 * 5;
    puVar1[8] = uVar5 * 5;
    puVar1[7] = uVar3 * 5;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0x12] = 0;
    uVar8 = FUN_01b6c2a0(puVar1 + 0x13,param_2 + 0x10);
    return uVar8;
  }
  puVar1 = (uint *)FUN_01b6cc24();
  uVar5 = FUN_01b6ccc4(param_2);
  puVar7 = puVar1 + 0x24;
  *puVar1 = uVar5 & 0x3ffffff;
  puVar1[1] = uVar5 & 0x3ffffff;
  uVar5 = FUN_01b6ccc4(param_2 + 3);
  uVar5 = uVar5 >> 2 & 0x3ffff03;
  puVar1[2] = uVar5;
  puVar1[3] = uVar5;
  uVar5 = FUN_01b6ccc4(param_2 + 6);
  uVar5 = uVar5 >> 4 & 0x3ffc0ff;
  puVar1[4] = uVar5;
  puVar1[5] = uVar5;
  uVar5 = FUN_01b6ccc4(param_2 + 9);
  uVar5 = uVar5 >> 6 & 0x3f03fff;
  puVar1[6] = uVar5;
  puVar1[7] = uVar5;
  uVar5 = FUN_01b6ccc4(param_2 + 0xc);
  uVar5 = (uVar5 & 0xfffffff) >> 8;
  puVar1[8] = uVar5;
  puVar1[9] = uVar5;
  FUN_01bed93e(puVar1 + 0xc,0,0x28);
  FUN_01b717d8(puVar7,puVar1,puVar1,&DAT_00561850);
  FUN_01b717d8(puVar1 + 0x30,puVar7,puVar7,&DAT_00561850);
  FUN_01b6cc88(puVar1 + 0x65,param_2 + 0x10);
  puVar1[100] = 0;
  return 0;
}

