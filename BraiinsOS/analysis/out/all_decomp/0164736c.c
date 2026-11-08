// FUN_0164736c @ 0164736c size=296 calls_out=5 calls_in=9
// strings: A Tokio 1.x context was found; but it is being shutdown.

void FUN_0164736c(undefined1 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *local_80;
  undefined4 local_7c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  int *local_1c;
  
  if (*(char *)(param_2 + 0x14) != '\0') {
    FUN_015e79d4(param_1,0x28,"A Tokio 1.x context was found, but it is being shutdown.",0x38);
    return;
  }
  local_40 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_1c = (int *)0x0;
  local_7c = 1;
  local_80 = (int *)&DAT_00000001;
  iVar4 = FUN_016d51b0(&local_1c,0x20,0x60);
  piVar3 = local_1c;
  if ((iVar4 != 0) || (local_1c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0x60);
  }
  FUN_016dd1aa(local_1c,&local_80,0x60);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    local_80 = piVar3 + 8;
    piVar5 = *(int **)(param_2 + 0xc);
    if (piVar5 != local_80) {
      piVar3[8] = 0;
      piVar3[9] = (int)piVar5;
      if (piVar5 != (int *)0x0) {
        *piVar5 = (int)local_80;
      }
      *(int **)(param_2 + 0xc) = local_80;
      if (*(int *)(param_2 + 0x10) == 0) {
        *(int **)(param_2 + 0x10) = local_80;
      }
      *param_1 = 4;
      *(int **)(param_1 + 4) = piVar3;
      return;
    }
    FUN_016583e8((undefined4 *)(param_2 + 0xc),&local_80);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1647494);
  (*pcVar1)();
}

