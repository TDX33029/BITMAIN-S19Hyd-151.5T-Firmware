// FUN_01be6c88 @ 01be6c88 size=140 calls_out=3 calls_in=9
// strings: 

/* WARNING: Removing unreachable block (ram,0x01be6cce) */
/* WARNING: Removing unreachable block (ram,0x01be6cd6) */
/* WARNING: Removing unreachable block (ram,0x01be6cda) */

undefined4
FUN_01be6c88(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,uint param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_7 & 0xfff) == 0 && (param_8 & 0xfffff000) == 0) {
    if (param_2 < 0x7fffffff) {
      if (param_4 << 0x1b < 0) {
        FUN_01befe78();
      }
      software_interrupt(0);
      uVar1 = FUN_01be3b5a(param_1,param_2,param_3);
      return uVar1;
    }
    puVar2 = (undefined4 *)FUN_01be3244();
    *puVar2 = 0xc;
  }
  else {
    puVar2 = (undefined4 *)FUN_01be3244();
    *puVar2 = 0x16;
  }
  return 0xffffffff;
}

