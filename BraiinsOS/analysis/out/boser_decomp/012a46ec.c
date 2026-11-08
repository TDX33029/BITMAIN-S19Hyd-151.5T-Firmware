// FUN_012a46ec @ 012a46ec size=144 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_012a46ec(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar3 = *(uint *)(param_2 + 0x120);
  if (uVar7 <= uVar3) {
    uVar4 = *(uint *)(param_2 + 0x11c);
    iVar1 = thunk_FUN_01bed842(uVar6,uVar4,uVar7);
    if (iVar1 == 0) goto LAB_012a4770;
  }
  puVar5 = (uint *)(*(int *)(param_2 + 0x24) + 4);
  for (iVar1 = *(int *)(param_2 + 0x28) * 0xc; iVar1 != 0; iVar1 = iVar1 + -0xc) {
    uVar3 = *puVar5;
    if (uVar7 <= uVar3) {
      uVar4 = puVar5[-1];
      iVar2 = thunk_FUN_01bed842(uVar6,uVar4,uVar7);
      if (iVar2 == 0) goto LAB_012a4770;
    }
    puVar5 = puVar5 + 3;
  }
  uVar4 = 0;
LAB_012a4770:
  return CONCAT44(uVar3,uVar4);
}

