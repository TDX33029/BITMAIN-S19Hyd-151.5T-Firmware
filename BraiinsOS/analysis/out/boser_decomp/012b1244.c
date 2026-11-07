// FUN_012b1244 @ 012b1244 size=92 calls_out=2 calls_in=2
// strings: 

void FUN_012b1244(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar4 = (undefined4 *)param_2[1];
  uVar6 = *param_2;
  puVar3 = puVar4;
  for (iVar5 = param_2[2] << 3; iVar5 != 0; iVar5 = iVar5 + -8) {
    uVar2 = *puVar3;
    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 2;
    FUN_012b12c0(param_1,uVar2,*puVar1);
  }
  FUN_0134aee0(uVar6,puVar4,4,8);
  return;
}

