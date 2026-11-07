// FUN_00081b4c @ 00081b4c  size=468  callers=1
// program: bmminer


undefined4 FUN_00081b4c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined1 uVar3;
  int3 iVar4;
  undefined4 local_20;
  uint local_1c;
  
  if (param_2 < 0x2dc6c1) {
    FUN_000835dc(0,param_1,0,0x28,&local_1c);
    iVar4 = FUN_000983e0(25000000,param_2 << 3);
    uVar1 = local_1c;
    local_1c._0_3_ = (uint3)local_1c & 0xfe00ff | (iVar4 - 1U & 0xff) << 8;
    local_1c = CONCAT13((char)(uVar1 >> 0x18),(uint3)local_1c) & 0xa3ffffff;
  }
  else {
    FUN_000835dc(0,param_1,0,0x60,&local_20);
    uVar3 = local_20._3_1_;
    uVar2 = (ushort)local_20;
    local_20 = CONCAT22(0x60,uVar2 & 0xc088 | 0x111);
    local_20 = CONCAT13(uVar3,(undefined3)local_20) & 0xd0ffffff | 0x50000000;
    FUN_00081200(param_1,1,0,0x60,local_20);
    usleep(10000);
    FUN_00081200(param_1,1,0,0x60,local_20);
    usleep(10000);
    FUN_000835dc(0,param_1,0,0x28,&local_1c);
    iVar4 = FUN_000983e0(400000000,param_2 << 3);
    uVar1 = local_1c;
    local_1c._0_3_ = (uint3)local_1c & 0xfe00ff | (iVar4 - 1U & 0xff) << 8;
    local_1c = CONCAT13((char)(uVar1 >> 0x18),(uint3)local_1c) & 0xe7ffffff;
    uVar1 = local_1c >> 0x10 & 0xfc0f;
    local_1c = CONCAT13((char)(uVar1 >> 8),(int3)CONCAT22((short)uVar1,(undefined2)local_1c)) |
               0x84500000;
  }
  FUN_00081200(param_1,1,0,0x28,local_1c);
  usleep(10000);
  usleep(50000);
  FUN_0006ce70(param_1,param_2);
  return 0;
}

