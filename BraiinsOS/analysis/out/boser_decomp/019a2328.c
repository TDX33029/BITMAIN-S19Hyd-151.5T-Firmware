// FUN_019a2328 @ 019a2328 size=112 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_019a2328(uint *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_24 = *param_3;
  uStack_20 = param_3[1];
  uStack_1c = param_3[2];
  uVar3 = *param_1;
  puVar2 = (uint *)0x0;
  if (uVar3 != 0x80000000) {
    puVar2 = param_1;
  }
  uVar1 = FUN_019a23dc(param_2,&uStack_24,(char)param_1[3],puVar2,param_2);
  if ((uVar3 & 0x7fffffff) == 0) {
    return uVar1;
  }
  thunk_FUN_01be4678(param_1[1]);
  return uVar1;
}

