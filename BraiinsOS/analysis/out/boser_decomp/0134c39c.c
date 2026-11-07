// FUN_0134c39c @ 0134c39c size=188 calls_out=1 calls_in=70
// strings: tracing::span::active

void FUN_0134c39c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined2 *local_14;
  
  if (*(uint *)(param_1 + 8) != 2) {
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0xc) + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(iVar2 + 0x34))(iVar1,param_1);
  }
  if ((DAT_01d51ae9 == '\0') && (iVar1 = *(int *)(param_1 + 0x18), iVar1 != 0)) {
    local_1c = *(undefined4 *)(iVar1 + 0x10);
    local_20 = *(undefined4 *)(iVar1 + 0xc);
    local_18 = &local_20;
    local_14 = &DAT_0132b6a0;
    FUN_006404a8(param_1,"tracing::span::active",0x15,&DAT_0057f37f,&local_18);
  }
  return;
}

