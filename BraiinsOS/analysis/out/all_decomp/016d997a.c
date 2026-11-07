// FUN_016d997a @ 016d997a size=132 calls_out=1 calls_in=12
// strings: 

void FUN_016d997a(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  software_interrupt(0);
  uVar1 = param_2;
  if ((param_1 == -0x16 || param_1 == -0x5d) && (uVar1 = 0x80800, (param_2 & 0x80800) != 0)) {
    uVar1 = param_2 & 0xfff7f7ff;
    software_interrupt(0);
    if (-1 < param_1) {
      if ((param_2 & 0x80000) != 0) {
        uVar1 = 2;
        param_3 = 1;
        uVar2 = 0x119;
        software_interrupt(0);
      }
      if ((param_2 & 0x800) != 0) {
        uVar1 = 4;
        param_3 = 0x800;
        uVar2 = 0x119;
        software_interrupt(0);
      }
    }
  }
  FUN_016d3496(param_1,uVar1,param_3,uVar2);
  return;
}

