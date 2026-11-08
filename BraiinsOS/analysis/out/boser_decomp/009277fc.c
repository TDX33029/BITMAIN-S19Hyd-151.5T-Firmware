// FUN_009277fc @ 009277fc size=224 calls_out=3 calls_in=11
// strings: tracing::span::active

void FUN_009277fc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined2 *local_1c;
  
  if (*(uint *)(param_2 + 8) != 2) {
    if ((*(uint *)(param_2 + 8) & 1) == 0) {
      iVar1 = *(int *)(param_2 + 0xc);
      iVar2 = *(int *)(param_2 + 0x10);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x10);
      iVar1 = *(int *)(param_2 + 0xc) + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(iVar2 + 0x30))(iVar1,param_2);
  }
  if ((DAT_01d51ae9 == '\0') && (iVar1 = *(int *)(param_2 + 0x18), iVar1 != 0)) {
    local_24 = *(undefined4 *)(iVar1 + 0x10);
    local_28 = *(undefined4 *)(iVar1 + 0xc);
    local_20 = &local_28;
    local_1c = &DAT_0132b6a0;
    FUN_006404a8(param_2,"tracing::span::active",0x15,&DAT_00594cdd,&local_20);
  }
  FUN_00927904(param_1,param_2 + 0x20,param_3);
  FUN_0134c39c(param_2);
  return;
}

