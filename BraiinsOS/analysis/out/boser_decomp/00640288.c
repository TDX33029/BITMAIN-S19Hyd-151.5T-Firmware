// FUN_00640288 @ 00640288 size=232 calls_out=3 calls_in=4
// strings: tracing::span::active

void FUN_00640288(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined2 *local_14;
  
  piVar3 = param_1 + 0x8e;
  if (param_1[0x90] != 2) {
    if ((param_1[0x90] & 1U) == 0) {
      iVar1 = param_1[0x91];
      iVar2 = param_1[0x92];
    }
    else {
      iVar2 = param_1[0x92];
      iVar1 = param_1[0x91] + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(iVar2 + 0x30))(iVar1,piVar3);
  }
  if ((DAT_01d51ae9 == '\0') && (iVar1 = param_1[0x94], iVar1 != 0)) {
    local_1c = *(undefined4 *)(iVar1 + 0x10);
    local_20 = *(undefined4 *)(iVar1 + 0xc);
    local_18 = &local_20;
    local_14 = &DAT_0132b6a0;
    FUN_006404a8(piVar3,"tracing::span::active",0x15,&DAT_00594cdd,&local_18);
  }
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_005f61bc(param_1);
  }
  FUN_0134c39c(piVar3);
  return;
}

