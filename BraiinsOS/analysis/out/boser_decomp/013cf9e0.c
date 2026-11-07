// FUN_013cf9e0 @ 013cf9e0 size=212 calls_out=1 calls_in=0
// strings: 

void FUN_013cf9e0(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  
  uVar1 = param_1[1];
  uVar2 = param_1[3];
  uVar3 = param_1[2];
  uVar4 = param_1[5];
  uVar5 = param_1[4];
  uVar6 = param_1[7];
  uVar7 = param_1[6];
  iVar8 = FUN_013e1dc0(param_2,*param_1 << 8 | *param_1 >> 8);
  if ((((iVar8 == 0) && (iVar8 = FUN_013e1dc0(param_2,uVar1 << 8 | uVar1 >> 8), iVar8 == 0)) &&
      (iVar8 = FUN_013e1dc0(param_2,uVar3 << 8 | uVar3 >> 8), iVar8 == 0)) &&
     (((iVar8 = FUN_013e1dc0(param_2,uVar2 << 8 | uVar2 >> 8), iVar8 == 0 &&
       (iVar8 = FUN_013e1dc0(param_2,uVar5 << 8 | uVar5 >> 8), iVar8 == 0)) &&
      ((iVar8 = FUN_013e1dc0(param_2,uVar4 << 8 | uVar4 >> 8), iVar8 == 0 &&
       (iVar8 = FUN_013e1dc0(param_2,uVar7 << 8 | uVar7 >> 8), iVar8 == 0)))))) {
    FUN_013e1dc0(param_2,uVar6 << 8 | uVar6 >> 8);
    return;
  }
  return;
}

