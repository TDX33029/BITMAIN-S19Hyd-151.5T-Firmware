// FUN_01006b20 @ 01006b20 size=416 calls_out=6 calls_in=1
// strings: 

void FUN_01006b20(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  char local_48;
  undefined2 local_47;
  char local_45;
  int local_44;
  int *local_40;
  undefined4 local_3c;
  int **local_38;
  int local_34;
  int local_30;
  int *local_2c;
  
  while( true ) {
    FUN_01006ccc(&local_38,param_2);
    if ((char)local_38 != '\x04') {
      *(int ***)param_1 = local_38;
      *(int *)(param_1 + 4) = local_34;
      return;
    }
    if ((char)param_2[7] != '\0') {
      *param_1 = '\x04';
      return;
    }
    piVar3 = (int *)param_2[1];
    param_2[4] = 0;
    local_3c = 0;
    if (*param_2 == 1) {
      piVar3 = (int *)*piVar3;
    }
    local_30 = param_2[2];
    local_34 = param_2[3];
    local_2c = (int *)0x0;
    local_40 = param_2 + 2;
    local_38 = &local_40;
    iVar1 = FUN_017a2458(piVar3,&local_34);
    iVar2 = FUN_01793784();
    piVar3 = local_2c;
    puVar4 = (uint *)*local_38;
    if ((int *)*puVar4 < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0041d994,0x2c,&DAT_01881eb8);
    }
    local_38[1] = local_2c;
    puVar4[2] = (uint)piVar3;
    if (iVar2 == 0) {
      param_2[6] = 0;
      local_44 = iVar1;
    }
    else {
      FUN_016d2468(&local_48,iVar1);
      param_2[6] = 0;
      if (local_48 != '\x04') {
        param_1[3] = local_45;
        *(undefined2 *)(param_1 + 1) = local_47;
        *(int *)(param_1 + 4) = local_44;
        *param_1 = local_48;
        return;
      }
    }
    if ((local_44 != 0) && (local_48 = '\x04', param_2[4] == 0)) break;
    local_48 = '\x04';
    *(bool *)(param_2 + 7) = local_44 == 0;
  }
  FUN_015e79d4(param_1,0x25,&DAT_00564ea0,0x10);
  return;
}

