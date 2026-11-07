// FUN_016d69b4 @ 016d69b4 size=140 calls_out=3 calls_in=10
// strings: 

/* WARNING: Removing unreachable block (ram,0x016d69fa) */
/* WARNING: Removing unreachable block (ram,0x016d6a02) */
/* WARNING: Removing unreachable block (ram,0x016d6a06) */

undefined4
FUN_016d69b4(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,uint param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_7 & 0xfff) == 0 && (param_8 & 0xfffff000) == 0) {
    if (param_2 < 0x7fffffff) {
      if (param_4 << 0x1b < 0) {
        FUN_016dfc54();
      }
      software_interrupt(0);
      uVar1 = FUN_016d3496(param_1,param_2,param_3);
      return uVar1;
    }
    puVar2 = (undefined4 *)FUN_016d2bc8();
    *puVar2 = 0xc;
  }
  else {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    *puVar2 = 0x16;
  }
  return 0xffffffff;
}

