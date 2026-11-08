// FUN_0157cac0 @ 0157cac0 size=304 calls_out=7 calls_in=4
// strings: 

void FUN_0157cac0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  uint *puVar5;
  undefined4 unaff_r5;
  int *piVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_016ec274();
  piVar6 = param_1 + 1;
  switch(*param_1) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 6:
    puVar1 = (undefined4 *)*piVar6;
    break;
  case 1:
    puVar1 = (undefined4 *)*piVar6;
    FUN_0134aee0(*puVar1,puVar1[1],4,0x1c);
    break;
  case 5:
    iVar2 = *piVar6;
    FUN_0157cec4();
    thunk_FUN_01be4678(iVar2);
    return;
  case 7:
    iVar2 = *piVar6;
    FUN_0157cd4c(iVar2);
    thunk_FUN_01be4678(iVar2);
    return;
  case 8:
    iVar2 = *piVar6;
    FUN_0157cd1c(iVar2 + 0x24);
    thunk_FUN_01be4678(iVar2);
    return;
  case 9:
    puVar5 = (uint *)*piVar6;
    uVar4 = 1;
    uVar3 = *puVar5;
    if ((int)uVar3 < 0) {
      uVar4 = uVar3 ^ 0x80000000;
    }
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        FUN_019bb7e0(uVar3,puVar5[1]);
      }
      else {
        FUN_0134aee0(puVar5[1],puVar5[2],4,0x1c,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
      }
    }
    FUN_0157cd1c(puVar5 + 0xb);
    thunk_FUN_01be4678(puVar5);
    return;
  default:
    iVar2 = *piVar6;
    FUN_016bedfc();
    thunk_FUN_01be4678(iVar2);
    return;
  }
  thunk_FUN_01be4678(puVar1);
  return;
}

