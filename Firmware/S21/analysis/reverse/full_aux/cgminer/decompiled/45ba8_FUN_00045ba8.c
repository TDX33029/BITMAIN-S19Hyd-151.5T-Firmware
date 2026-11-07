// FUN_00045ba8 @ 00045ba8  size=120  callers=3
// program: cgminer


undefined4 FUN_00045ba8(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_34 [32];
  
  if ((((param_4 & 0x200) == 0) && ((param_1 == (uint *)0x0 || (1 < *param_1)))) ||
     (iVar1 = FUN_00046394(auStack_34), iVar1 != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_00045398(param_1,param_4,0,auStack_34,param_2,param_3);
    FUN_00046410(auStack_34);
  }
  return uVar2;
}

