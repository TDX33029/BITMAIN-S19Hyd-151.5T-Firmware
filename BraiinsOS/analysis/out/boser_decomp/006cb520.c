// FUN_006cb520 @ 006cb520 size=216 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_006cb520(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *local_24;
  int **local_20;
  code *local_1c;
  
  if ((param_1[2] != 0) && (iVar1 = FUN_006cb520(param_1[2],param_2), iVar1 != 0)) {
    return 1;
  }
  pcVar4 = (char *)*param_2;
  if ((*pcVar4 == '\0') &&
     (iVar1 = (**(code **)(((undefined4 *)param_2[1])[1] + 0xc))(*(undefined4 *)param_2[1],".",1),
     iVar1 != 0)) {
    return 1;
  }
  iVar1 = *param_1;
  *pcVar4 = '\0';
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)param_2[1];
    local_1c = FUN_012fd02c;
    local_20 = (int **)(param_1 + 1);
  }
  else {
    puVar3 = (undefined4 *)param_2[1];
    local_1c = (code *)&LAB_01963050;
    local_20 = &local_24;
    local_24 = param_1;
  }
  uVar2 = FUN_012fa178(*puVar3,puVar3[1],&DAT_00590e5f,&local_20);
  return uVar2;
}

