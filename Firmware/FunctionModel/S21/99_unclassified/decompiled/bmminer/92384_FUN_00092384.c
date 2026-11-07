// FUN_00092384 @ 00092384  size=172  callers=0
// program: bmminer


undefined4 FUN_00092384(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0008c730(*(undefined4 *)(param_2 + 4),param_1 + 0x1010);
  if (iVar1 == 0) {
    FUN_00095b4c(2,"src/spec.c",0x7b,"zlog_mdc_get_kv key[%s] fail",param_1 + 0x1010);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0009774c(param_3,iVar1 + 0x401,*(undefined4 *)(iVar1 + 0x804));
  }
  return uVar2;
}

