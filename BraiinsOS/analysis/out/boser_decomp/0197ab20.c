// FUN_0197ab20 @ 0197ab20 size=232 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0197ab20(undefined4 *param_1,code *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  (*param_2)(&local_28,param_1);
  iVar1 = 4;
  puVar2 = param_1;
  if ((local_28 != -0x2934a293 || iStack_20 != 0x57a64178) ||
      (iStack_24 != 0x63eb502c || iStack_1c != -0x4674e48f)) {
    (*param_2)(&local_28,param_1);
    if ((local_28 != 0x50f052f7 || iStack_20 != -0x20684cdb) ||
        (iStack_24 != -0x66f64d5b || iStack_1c != -0x4aa34df2)) {
      return 0xc00526a84;
    }
    puVar2 = param_1 + 1;
    iVar1 = 8;
  }
  return CONCAT44(*(undefined4 *)((int)param_1 + iVar1),*puVar2);
}

