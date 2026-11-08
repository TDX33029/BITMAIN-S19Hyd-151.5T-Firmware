// FUN_015388e0 @ 015388e0 size=176 calls_out=1 calls_in=6
// strings: 

void FUN_015388e0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = param_2[-1];
  uVar5 = param_2[2];
  uVar7 = param_2[1];
  uVar1 = uVar4;
  if (uVar5 < uVar4) {
    uVar1 = uVar5;
  }
  uVar1 = FUN_01bed842(uVar7,param_2[-2],uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar5 - uVar4;
  }
  if (0x7fffffff < uVar1) {
    uVar6 = *param_2;
    do {
      puVar3 = param_2;
      param_2 = puVar3 + -3;
      *puVar3 = *param_2;
      puVar3[1] = puVar3[-2];
      puVar3[2] = puVar3[-1];
      if (param_2 == param_1) break;
      uVar4 = puVar3[-4];
      uVar1 = uVar4;
      if (uVar5 < uVar4) {
        uVar1 = uVar5;
      }
      iVar2 = FUN_01bed842(uVar7,puVar3[-5],uVar1);
      if (iVar2 == 0) {
        iVar2 = uVar5 - uVar4;
      }
    } while (iVar2 < 0);
    puVar3[-3] = uVar6;
    puVar3[-2] = uVar7;
    puVar3[-1] = uVar5;
  }
  return;
}

