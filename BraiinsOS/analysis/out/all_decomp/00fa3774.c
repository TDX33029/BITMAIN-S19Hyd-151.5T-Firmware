// FUN_00fa3774 @ 00fa3774 size=332 calls_out=1 calls_in=1
// strings: 

bool FUN_00fa3774(char *param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*param_1 == *param_2) {
    bVar2 = true;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    case '\0':
      goto switchD_00fa3794_caseD_0;
    case '\x01':
      return param_1[1] == param_2[1];
    default:
      if (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) {
        iVar3 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
        return iVar3 == 0;
      }
      return false;
    case '\x03':
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar3 == *(int *)(param_2 + 0xc)) {
        if (iVar3 == 0) {
          return true;
        }
        puVar5 = (undefined4 *)(*(int *)(param_2 + 8) + 4);
        puVar4 = (undefined4 *)(*(int *)(param_1 + 8) + 4);
        while ((puVar4[1] == puVar5[1] && (iVar1 = thunk_FUN_016dd50a(*puVar4,*puVar5), iVar1 == 0))
              ) {
          puVar4 = puVar4 + 3;
          puVar5 = puVar5 + 3;
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            return true;
          }
        }
      }
      break;
    case '\x05':
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar3 == *(int *)(param_2 + 0xc)) {
        if (iVar3 == 0) {
          return true;
        }
        puVar5 = (undefined4 *)(*(int *)(param_2 + 8) + 4);
        puVar4 = (undefined4 *)(*(int *)(param_1 + 8) + 4);
        while ((puVar4[1] == puVar5[1] && (iVar1 = thunk_FUN_016dd50a(*puVar4,*puVar5), iVar1 == 0))
              ) {
          puVar4 = puVar4 + 3;
          puVar5 = puVar5 + 3;
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            return true;
          }
        }
      }
      break;
    case '\x06':
      return *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
    }
  }
  bVar2 = false;
switchD_00fa3794_caseD_0:
  return bVar2;
}

