// FUN_015558f8 @ 015558f8 size=100 calls_out=1 calls_in=0
// strings: 

void FUN_015558f8(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  (**(code **)(param_2[9] + 0xc))(param_1,param_2[8]);
  iVar2 = param_2[10];
  puVar3 = (undefined4 *)param_2[0xb];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(param_2[1]);
  }
  thunk_FUN_016d3fb4(param_2);
  return;
}

