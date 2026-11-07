// FUN_0005f7e8 @ 0005f7e8  size=192  callers=1
// program: bmminer


void FUN_0005f7e8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_000658a8(2,"src/mdc.c",0x15,"a_mdc is null or 0");
    return;
  }
  FUN_000658a8(param_2,"src/mdc.c",0x16,"---mdc[%p]---",param_1);
  for (iVar1 = FUN_00065770(*param_1); iVar1 != 0; iVar1 = FUN_000657b8(*param_1,iVar1)) {
    iVar2 = *(int *)(iVar1 + 8);
    FUN_000658a8(param_2,"src/mdc.c",0x1c,"----mdc_kv[%p][%s]-[%s]----",iVar2,iVar2,iVar2 + 0x401);
  }
  return;
}

