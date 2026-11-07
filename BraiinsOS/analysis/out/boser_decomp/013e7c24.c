// FUN_013e7c24 @ 013e7c24 size=100 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_013e7c24(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = param_1[2];
  uVar3 = *param_1;
  uVar2 = param_1[1];
  uVar4 = FUN_013cf100(iVar1 * 0xe8);
  FUN_01bed4e2((int)uVar4 + 8,uVar2,iVar1 * 0xe8);
  FUN_013dd8c8(uVar2,0);
  FUN_013e6414(uVar3,uVar2,4,0xe8);
  return uVar4;
}

