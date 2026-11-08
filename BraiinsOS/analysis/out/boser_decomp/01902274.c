// FUN_01902274 @ 01902274 size=80 calls_out=2 calls_in=29
// strings: 

void FUN_01902274(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1[5];
  puVar3 = (undefined4 *)param_1[6];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(iVar2);
  }
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_0134bd64(*param_1,param_1[1]);
  return;
}

