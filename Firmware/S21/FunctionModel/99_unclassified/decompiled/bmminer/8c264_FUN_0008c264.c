// FUN_0008c264 @ 0008c264  size=244  callers=1
// program: bmminer


void FUN_0008c264(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int local_c;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00095b4c(2,"src/mdc.c",0x15,"a_mdc is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/mdc.c",0x16,"---mdc[%p]---",param_1);
    for (local_c = FUN_000958d8(*param_1); local_c != 0; local_c = FUN_00095974(*param_1,local_c)) {
      iVar1 = *(int *)(local_c + 8);
      FUN_00095b4c(param_2,"src/mdc.c",0x1c,"----mdc_kv[%p][%s]-[%s]----",iVar1,iVar1,iVar1 + 0x401)
      ;
    }
  }
  return;
}

