// FUN_019bb174 @ 019bb174 size=116 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_019bb174(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_24 = *param_3;
  uStack_20 = param_3[1];
  uStack_1c = param_3[2];
  iVar3 = *param_1;
  piVar2 = (int *)0x0;
  if (iVar3 != -0x80000000) {
    piVar2 = param_1;
  }
  uVar1 = FUN_019a23dc(param_2,&uStack_24,(char)param_1[3],piVar2,param_2);
  if (iVar3 == -0x80000000) {
    FUN_0197acb4(param_1 + 1);
  }
  else if (iVar3 != 0) {
    thunk_FUN_01be4678(param_1[1]);
  }
  return uVar1;
}

