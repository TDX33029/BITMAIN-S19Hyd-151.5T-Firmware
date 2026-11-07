// FUN_01302aa0 @ 01302aa0 size=180 calls_out=0 calls_in=46
// strings: 

uint FUN_01302aa0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*param_1 == 0) {
    return (uint)*(byte *)(param_1 + 2);
  }
  uVar2 = 1;
  if ((*(byte *)(param_1 + 2) == 0) &&
     ((((puVar3 = (undefined4 *)param_1[1], *param_1 != 1 ||
        ((*(byte *)((int)param_1 + 9) & 1) == 0)) || ((*(byte *)((int)puVar3 + 10) & 0x80) != 0)) ||
      (iVar1 = (**(code **)(puVar3[1] + 0xc))(*puVar3,",",1), iVar1 == 0)))) {
    uVar2 = (**(code **)(puVar3[1] + 0xc))(*puVar3,&DAT_0053341b,1);
  }
  *(char *)(param_1 + 2) = (char)uVar2;
  return uVar2;
}

