// FUN_006c6010 @ 006c6010 size=152 calls_out=1 calls_in=4
// strings: 

void FUN_006c6010(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_006c61fc(*param_3,param_2[1],param_2[2],param_2[-2],param_2[-1]);
  if (iVar1 != 0) {
    uVar4 = *param_2;
    uVar3 = param_2[1];
    uVar5 = param_2[2];
    do {
      puVar2 = param_2;
      param_2 = puVar2 + -3;
      *puVar2 = *param_2;
      puVar2[1] = puVar2[-2];
      puVar2[2] = puVar2[-1];
      if (param_2 == param_1) break;
      iVar1 = FUN_006c61fc(*param_3,uVar3,uVar5,puVar2[-5],puVar2[-4]);
    } while (iVar1 != 0);
    puVar2[-3] = uVar4;
    puVar2[-1] = uVar5;
    puVar2[-2] = uVar3;
  }
  return;
}

