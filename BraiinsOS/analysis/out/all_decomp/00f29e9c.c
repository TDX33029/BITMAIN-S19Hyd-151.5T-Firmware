// FUN_00f29e9c @ 00f29e9c size=292 calls_out=3 calls_in=2
// strings: 

void FUN_00f29e9c(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  
  do {
    if (param_2 == param_3) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    piVar6 = *(int **)(param_2 + 0x2c);
    param_2 = param_2 + 0x30;
  } while ((char)piVar6[0x19] != '\0');
  do {
    iVar3 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar3 + 1;
  if (-1 < iVar3) {
    local_2c = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (local_2c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4);
    }
    iVar3 = 1;
    *local_2c = piVar6;
    local_30 = 4;
    puVar5 = local_2c;
    while( true ) {
      do {
        if (param_2 == param_3) {
          *param_1 = local_30;
          param_1[1] = (int)local_2c;
          param_1[2] = iVar3;
          return;
        }
        piVar6 = *(int **)(param_2 + 0x2c);
        param_2 = param_2 + 0x30;
      } while ((char)piVar6[0x19] != '\0');
      do {
        iVar4 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar4 + 1;
      local_28 = iVar3;
      if (iVar4 < 0) break;
      if (iVar3 == local_30) {
        FUN_00edff4c(&local_30,iVar3,1,4,4);
        puVar5 = local_2c;
      }
      puVar5[iVar3] = piVar6;
      iVar3 = iVar3 + 1;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xf29fbc);
  (*pcVar1)();
}

