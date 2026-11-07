// FUN_01bcef2c @ 01bcef2c size=360 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01bcef2c(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  local_1c = DAT_01d53560;
  uVar3 = *param_2;
  local_2c = FUN_01bceee4(uVar3 & 0xff | uVar4 << 0x18 | (uVar1 & 0xff) << 8 |
                          (uVar2 & 0xff) << 0x10,
                          uVar4 & 0xff000000 | uVar3 >> 0x18 | (uVar1 >> 0x18) << 8 |
                          (uVar2 >> 0x18) << 0x10,4);
  local_28 = FUN_01bceee4((uVar3 & 0xffff) >> 8 | (uVar4 >> 8) << 0x18 | uVar1 & 0xff00 |
                          (uVar2 & 0xff00) << 8);
  uVar5 = FUN_01bceee4((uVar3 & 0xffffff) >> 0x10 | (uVar4 >> 0x10) << 0x18 | uVar2 & 0xff0000 |
                       uVar1 >> 8 & 0xff00);
  local_24 = (undefined4)uVar5;
  local_20 = FUN_01bceee4((int)((ulonglong)uVar5 >> 0x20),&local_2c);
  FUN_01bced98(param_1);
  FUN_01bced98(param_1 + 4,&local_28);
  FUN_01bced98(param_1 + 8,&local_24,4);
  FUN_01bced98(param_1 + 0xc,&local_20,4);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

