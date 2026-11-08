// FUN_01bc05bc @ 01bc05bc size=92 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01bc05bc(int *param_1,ushort *param_2)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  
  puVar2 = param_2 + 2;
  uVar1 = (uint)*param_2;
  param_1[1] = (int)puVar2;
  param_1[3] = uVar1;
  if (uVar1 != 0) {
    puVar2 = (ushort *)&SUB_00000004;
  }
  *param_1 = 1 << (uVar1 & 0xff);
  if (uVar1 != 0) {
    iVar3 = ((int)puVar2 << (uVar1 - 1 & 0xff)) + 4;
  }
  else {
    iVar3 = 8;
  }
  param_1[2] = (int)param_2 + iVar3;
  return 0;
}

